#include <array>
#include <boost/range/detail/any_iterator.hpp>
#include <boost/algorithm/string.hpp>
#include <iomanip>

#include "display.h"
#include "global.h"
#include "helpers.h"
#include "menu_impl.h"
#include "playlist.h"
#include "search_engine.h"
#include "settings.h"
#include "status.h"
#include "statusbar.h"
#include "helpers/song_iterator_maker.h"
#include "utility/comparators.h"
#include "title.h"
#include "screen_switcher.h"
#include "screen_type.h"

using Global::MainHeight;
using Global::MainStartY;

bool done = false;

namespace ph = std::placeholders;

SearchEngine *mySearcher;

namespace {

std::string SEItemToString(const SEItem &ei);
bool SEItemEntryMatcher(const Regex::Regex &rx, const NC::Menu<SEItem>::Item &item, bool filter);

template <bool Const>
struct SongExtractor
{
	typedef SongExtractor type;

	typedef typename NC::Menu<SEItem>::Item MenuItem;
	typedef typename std::conditional<Const, const MenuItem, MenuItem>::type Item;
	typedef typename std::conditional<Const, const MPD::Song, MPD::Song>::type Song;

	Song *operator()(Item &item) const
	{
		Song *ptr = nullptr;
		if (!item.isSeparator() && item.value().isSong())
			ptr = &item.value().song();
		return ptr;
	}
};

}

SongIterator SearchEngineWindow::currentS()
{
	return makeSongIterator_<SEItem>(current(), SongExtractor<false>());
}

ConstSongIterator SearchEngineWindow::currentS() const
{
	return makeConstSongIterator_<SEItem>(current(), SongExtractor<true>());
}

SongIterator SearchEngineWindow::beginS()
{
	return makeSongIterator_<SEItem>(begin(), SongExtractor<false>());
}

ConstSongIterator SearchEngineWindow::beginS() const
{
	return makeConstSongIterator_<SEItem>(begin(), SongExtractor<true>());
}

SongIterator SearchEngineWindow::endS()
{
	return makeSongIterator_<SEItem>(end(), SongExtractor<false>());
}

ConstSongIterator SearchEngineWindow::endS() const
{
	return makeConstSongIterator_<SEItem>(end(), SongExtractor<true>());
}

std::vector<MPD::Song> SearchEngineWindow::getSelectedSongs()
{
	std::vector<MPD::Song> result;
	for (auto &item : *this)
	{
		if (item.isSelected())
		{
			assert(item.value().isSong());
			result.push_back(item.value().song());
		}
	}
	// If no item is selected, add the current one if it's a song.
	if (result.empty() && !empty() && current()->value().isSong())
		result.push_back(current()->value().song());
	return result;
}

/**********************************************************************/

const char *SearchEngine::ConstraintsNames[] =
{
	"Quick Search",
};
size_t SearchEngine::StaticOptions = 4;
size_t SearchEngine::ResetButton = 0;
size_t SearchEngine::SearchButton = 0;

SearchEngine::SearchEngine()
: Screen(NC::Menu<SEItem>(0, MainStartY, COLS, MainHeight, "", Config.main_color, NC::Border()))
{
	w.setHighlightColor(Config.main_highlight_color);
	w.cyclicScrolling(Config.use_cyclic_scrolling);
	w.centeredCursor(Config.centered_cursor);
	w.setItemDisplayer(std::bind(Display::SEItems, ph::_1, std::cref(w)));
	w.setSelectedPrefix(Config.selected_item_prefix);
	w.setSelectedSuffix(Config.selected_item_suffix);
}

void SearchEngine::resize()
{
	size_t x_offset, width;
	getWindowResizeParams(x_offset, width);
	w.resize(width, MainHeight);
	w.moveTo(x_offset, MainStartY);
	switch (Config.search_engine_display_mode)
	{
		case DisplayMode::Columns:
			if (Config.titles_visibility)
			{
				w.setTitle(Display::Columns(w.getWidth()));
				break;
			}
		case DisplayMode::Classic:
			w.setTitle("");
	}
	hasToBeResized = 0;
}

std::wstring titlea = L"Quick Search";

void SearchEngine::PromtSearch()
{
	itsConstraints[0].clear();
	
	Statusbar::ScopedLock slock;
	Statusbar::put() << NC::Format::Bold << "Quick Search" << NC::Format::NoBold << ": ";
	itsConstraints[0] = Global::wFooter->prompt(itsConstraints[0]);
}

void SearchEngine::QuerySearch()
{
	Search();
	
	titlea = std::wstring(L"Search results for '") + std::wstring(itsConstraints[0].begin(), itsConstraints[0].end()) + L"' (" + std::to_wstring(w.size()) + L")";
	drawHeader();
	
	if (w.size() == 0)
	{
		Statusbar::printf(2, "No results for '" + itsConstraints[0] + "'");
	}
}

void SearchEngine::switchTo()
{
	m_previous_screen = Global::myScreen;
	
	PromtSearch();
	
	if (!itsConstraints[0].empty())
	{
		w.clear();
		QuerySearch();
		
		if (w.size() == 1)
		{
			addSongToPlaylist(w.current()->value().song(), true);
		}
		else if (w.size() > 1)
		{
			SwitchTo::execute(this);
		
			drawHeader();
		
			w.reset();
			
			markSongsInPlaylist(w);
		}	
	}
}

std::wstring SearchEngine::title()
{
	return titlea;
}

void SearchEngine::mouseButtonPressed(MEVENT me)
{
	
}

/***********************************************************************/

bool SearchEngine::allowsSearching()
{
	return w.rbegin()->value().isSong();
}

void SearchEngine::setSearchConstraint(const std::string &constraint)
{
	m_search_predicate = Regex::ItemFilter<SEItem>(
		Regex::make(constraint, Config.regex_type),
		std::bind(SEItemEntryMatcher, ph::_1, ph::_2, false)
	);
}

void SearchEngine::clearConstraint()
{
	m_search_predicate.clear();
}

bool SearchEngine::find(SearchDirection direction, bool wrap, bool skip_current)
{
	return search(w, m_search_predicate, direction, wrap, skip_current);
}

/***********************************************************************/

bool SearchEngine::actionRunnable()
{
	return true;
}

void SearchEngine::runAction()
{
	addSongToPlaylist(w.current()->value().song(), true);
	m_previous_screen->switchTo();
}

/***********************************************************************/

bool SearchEngine::itemAvailable()
{
	return !w.empty() && w.current()->value().isSong();
}

bool SearchEngine::addItemToPlaylist(bool play)
{
	return addSongToPlaylist(w.current()->value().song(), play);
}

std::vector<MPD::Song> SearchEngine::getSelectedSongs()
{
	return w.getSelectedSongs();
}



void SearchEngine::refresh()
{
	
}

void SearchEngine::reset()
{
	PromtSearch();
	
	if (!itsConstraints[0].empty())
	{
		w.clear();
		w.reset();
		
		QuerySearch();
		markSongsInPlaylist(w);
		
		if (w.size() == 1)
		{
			addSongToPlaylist(w.current()->value().song(), true);
			m_previous_screen->switchTo();
		}
	}
}

void __attribute__((optimize("O3"))) SearchEngine::Search()
{
	if (itsConstraints[0].empty())
		return;
	
	//Mpd.StartSearch(false);
	//if (!itsConstraints[0].empty())
		//Mpd.AddSearchAny(itsConstraints[0]);
	//for (MPD::SongIterator s = Mpd.CommitSearchSongs(), end; s != end; ++s)
		//w.addItem(std::move(*s));
	//return;
	
	std::vector<std::string> strs;
	boost::split(strs, itsConstraints[0], boost::is_any_of(" "));
	
	Regex::Regex rx[strs.size()];
	for (size_t i = 0; i < strs.size(); ++i)
	{
		try
		{
			rx[i] = Regex::make(strs[i], Config.regex_type);
		}
		catch (boost::bad_expression &) { }
	}

	typedef boost::range_detail::any_iterator<
		const MPD::Song,
		boost::single_pass_traversal_tag,
		const MPD::Song &,
		std::ptrdiff_t
	> input_song_iterator;
	input_song_iterator s, end;

	s = input_song_iterator(getDatabaseIterator(Mpd));
	end = input_song_iterator(MPD::SongIterator());

	

	LocaleStringComparison cmp(std::locale(), Config.ignore_leading_the);
	for (; s != end; ++s)
	{
		bool any_found[strs.size()], found = true;

		for (size_t i = 0; i < strs.size(); ++i)
		{
			if (!rx[i].empty())
				any_found[i] =
				   (Regex::search(s->getArtist(), rx[i])
				|| Regex::search(s->getAlbumArtist(), rx[i])
				|| Regex::search(s->getTitle(), rx[i])
				|| Regex::search(s->getAlbum(), rx[i])
				|| Regex::search(s->getName(), rx[i])
				|| Regex::search(s->getComposer(), rx[i])
				|| Regex::search(s->getPerformer(), rx[i])
				|| Regex::search(s->getGenre(), rx[i])
				|| Regex::search(s->getDate(), rx[i])
				|| Regex::search(s->getComment(), rx[i]));
		}
		
		for (size_t i = 0; i < strs.size(); ++i)
		{
			if (!any_found[i])
				found = false;
		}
		
		if (found)
			w.addItem(*s);
	}
		
		
}

namespace {

std::string SEItemToString(const SEItem &ei)
{
	std::string result;
	if (ei.isSong())
	{
		switch (Config.search_engine_display_mode)
		{
			case DisplayMode::Classic:
				result = Format::stringify<char>(Config.song_list_format, &ei.song());
				break;
			case DisplayMode::Columns:
				result = Format::stringify<char>(Config.song_columns_mode_format, &ei.song());
				break;
		}
	}
	else
		result = ei.buffer().str();
	return result;
}

bool SEItemEntryMatcher(const Regex::Regex &rx, const NC::Menu<SEItem>::Item &item, bool filter)
{
	if (item.isSeparator() || !item.value().isSong())
		return filter;
	return Regex::search(SEItemToString(item.value()), rx);
}

}
