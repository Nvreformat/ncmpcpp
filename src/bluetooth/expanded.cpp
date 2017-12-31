# 1 "bluetooth.cpp"
# 1 "<built-in>"
# 1 "<command-line>"
# 1 "/usr/include/stdc-predef.h" 1 3 4
# 1 "<command-line>" 2
# 1 "bluetooth.cpp"
# 1 "/usr/include/c++/6/string" 1 3
# 36 "/usr/include/c++/6/string" 3
       
# 37 "/usr/include/c++/6/string" 3

# 1 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++config.h" 1 3
# 199 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++config.h" 3

# 199 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++config.h" 3
namespace std
{
  typedef unsigned int size_t;
  typedef int ptrdiff_t;


  typedef decltype(nullptr) nullptr_t;

}
# 221 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++config.h" 3
namespace std
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
namespace __gnu_cxx
{
  inline namespace __cxx11 __attribute__((__abi_tag__ ("cxx11"))) { }
}
# 507 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++config.h" 3
# 1 "/usr/include/arm-linux-gnueabihf/c++/6/bits/os_defines.h" 1 3
# 39 "/usr/include/arm-linux-gnueabihf/c++/6/bits/os_defines.h" 3
# 1 "/usr/include/features.h" 1 3 4
# 364 "/usr/include/features.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/sys/cdefs.h" 1 3 4
# 415 "/usr/include/arm-linux-gnueabihf/sys/cdefs.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/wordsize.h" 1 3 4
# 416 "/usr/include/arm-linux-gnueabihf/sys/cdefs.h" 2 3 4
# 365 "/usr/include/features.h" 2 3 4
# 388 "/usr/include/features.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/gnu/stubs.h" 1 3 4
# 10 "/usr/include/arm-linux-gnueabihf/gnu/stubs.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/gnu/stubs-hard.h" 1 3 4
# 11 "/usr/include/arm-linux-gnueabihf/gnu/stubs.h" 2 3 4
# 389 "/usr/include/features.h" 2 3 4
# 40 "/usr/include/arm-linux-gnueabihf/c++/6/bits/os_defines.h" 2 3
# 508 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++config.h" 2 3


# 1 "/usr/include/arm-linux-gnueabihf/c++/6/bits/cpu_defines.h" 1 3
# 511 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++config.h" 2 3
# 39 "/usr/include/c++/6/string" 2 3
# 1 "/usr/include/c++/6/bits/stringfwd.h" 1 3
# 37 "/usr/include/c++/6/bits/stringfwd.h" 3
       
# 38 "/usr/include/c++/6/bits/stringfwd.h" 3


# 1 "/usr/include/c++/6/bits/memoryfwd.h" 1 3
# 46 "/usr/include/c++/6/bits/memoryfwd.h" 3
       
# 47 "/usr/include/c++/6/bits/memoryfwd.h" 3



namespace std __attribute__ ((__visibility__ ("default")))
{

# 63 "/usr/include/c++/6/bits/memoryfwd.h" 3
  template<typename>
    class allocator;

  template<>
    class allocator<void>;


  template<typename, typename>
    struct uses_allocator;




}
# 41 "/usr/include/c++/6/bits/stringfwd.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{








  template<class _CharT>
    struct char_traits;

  template<> struct char_traits<char>;


  template<> struct char_traits<wchar_t>;




  template<> struct char_traits<char16_t>;
  template<> struct char_traits<char32_t>;


namespace __cxx11 {

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
           typename _Alloc = allocator<_CharT> >
    class basic_string;


  typedef basic_string<char> string;



  typedef basic_string<wchar_t> wstring;





  typedef basic_string<char16_t> u16string;


  typedef basic_string<char32_t> u32string;


}




}
# 40 "/usr/include/c++/6/string" 2 3
# 1 "/usr/include/c++/6/bits/char_traits.h" 1 3
# 37 "/usr/include/c++/6/bits/char_traits.h" 3
       
# 38 "/usr/include/c++/6/bits/char_traits.h" 3

# 1 "/usr/include/c++/6/bits/stl_algobase.h" 1 3
# 60 "/usr/include/c++/6/bits/stl_algobase.h" 3
# 1 "/usr/include/c++/6/bits/functexcept.h" 1 3
# 40 "/usr/include/c++/6/bits/functexcept.h" 3
# 1 "/usr/include/c++/6/bits/exception_defines.h" 1 3
# 41 "/usr/include/c++/6/bits/functexcept.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{



  void
  __throw_bad_exception(void) __attribute__((__noreturn__));


  void
  __throw_bad_alloc(void) __attribute__((__noreturn__));


  void
  __throw_bad_cast(void) __attribute__((__noreturn__));

  void
  __throw_bad_typeid(void) __attribute__((__noreturn__));


  void
  __throw_logic_error(const char*) __attribute__((__noreturn__));

  void
  __throw_domain_error(const char*) __attribute__((__noreturn__));

  void
  __throw_invalid_argument(const char*) __attribute__((__noreturn__));

  void
  __throw_length_error(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range(const char*) __attribute__((__noreturn__));

  void
  __throw_out_of_range_fmt(const char*, ...) __attribute__((__noreturn__))
    __attribute__((__format__(__gnu_printf__, 1, 2)));

  void
  __throw_runtime_error(const char*) __attribute__((__noreturn__));

  void
  __throw_range_error(const char*) __attribute__((__noreturn__));

  void
  __throw_overflow_error(const char*) __attribute__((__noreturn__));

  void
  __throw_underflow_error(const char*) __attribute__((__noreturn__));


  void
  __throw_ios_failure(const char*) __attribute__((__noreturn__));

  void
  __throw_system_error(int) __attribute__((__noreturn__));

  void
  __throw_future_error(int) __attribute__((__noreturn__));


  void
  __throw_bad_function_call() __attribute__((__noreturn__));


}
# 61 "/usr/include/c++/6/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/6/bits/cpp_type_traits.h" 1 3
# 35 "/usr/include/c++/6/bits/cpp_type_traits.h" 3
       
# 36 "/usr/include/c++/6/bits/cpp_type_traits.h" 3
# 67 "/usr/include/c++/6/bits/cpp_type_traits.h" 3
extern "C++" {

namespace std __attribute__ ((__visibility__ ("default")))
{


  struct __true_type { };
  struct __false_type { };

  template<bool>
    struct __truth_type
    { typedef __false_type __type; };

  template<>
    struct __truth_type<true>
    { typedef __true_type __type; };



  template<class _Sp, class _Tp>
    struct __traitor
    {
      enum { __value = bool(_Sp::__value) || bool(_Tp::__value) };
      typedef typename __truth_type<__value>::__type __type;
    };


  template<typename, typename>
    struct __are_same
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __are_same<_Tp, _Tp>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_void
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_void<void>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_integer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };





  template<>
    struct __is_integer<bool>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };



  template<>
    struct __is_integer<char16_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<char32_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_integer<short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned short>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned int>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_integer<unsigned long long>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };
# 278 "/usr/include/c++/6/bits/cpp_type_traits.h" 3
  template<typename _Tp>
    struct __is_floating
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };


  template<>
    struct __is_floating<float>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_floating<long double>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_pointer
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<typename _Tp>
    struct __is_pointer<_Tp*>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_arithmetic
    : public __traitor<__is_integer<_Tp>, __is_floating<_Tp> >
    { };




  template<typename _Tp>
    struct __is_scalar
    : public __traitor<__is_arithmetic<_Tp>, __is_pointer<_Tp> >
    { };




  template<typename _Tp>
    struct __is_char
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_char<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<>
    struct __is_char<wchar_t>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };


  template<typename _Tp>
    struct __is_byte
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };

  template<>
    struct __is_byte<char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<signed char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<>
    struct __is_byte<unsigned char>
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };




  template<typename _Tp>
    struct __is_move_iterator
    {
      enum { __value = 0 };
      typedef __false_type __type;
    };



  template<typename _Iterator>
    inline _Iterator
    __miter_base(_Iterator __it)
    { return __it; }


}
}
# 62 "/usr/include/c++/6/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/6/ext/type_traits.h" 1 3
# 32 "/usr/include/c++/6/ext/type_traits.h" 3
       
# 33 "/usr/include/c++/6/ext/type_traits.h" 3




extern "C++" {

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{



  template<bool, typename>
    struct __enable_if
    { };

  template<typename _Tp>
    struct __enable_if<true, _Tp>
    { typedef _Tp __type; };



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct __conditional_type
    { typedef _Iftrue __type; };

  template<typename _Iftrue, typename _Iffalse>
    struct __conditional_type<false, _Iftrue, _Iffalse>
    { typedef _Iffalse __type; };



  template<typename _Tp>
    struct __add_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __add_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __add_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __add_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __add_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __add_unsigned<long long>
    { typedef unsigned long long __type; };


  template<>
    struct __add_unsigned<bool>;

  template<>
    struct __add_unsigned<wchar_t>;



  template<typename _Tp>
    struct __remove_unsigned
    {
    private:
      typedef __enable_if<std::__is_integer<_Tp>::__value, _Tp> __if_type;

    public:
      typedef typename __if_type::__type __type;
    };

  template<>
    struct __remove_unsigned<char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __remove_unsigned<unsigned short>
    { typedef short __type; };

  template<>
    struct __remove_unsigned<unsigned int>
    { typedef int __type; };

  template<>
    struct __remove_unsigned<unsigned long>
    { typedef long __type; };

  template<>
    struct __remove_unsigned<unsigned long long>
    { typedef long long __type; };


  template<>
    struct __remove_unsigned<bool>;

  template<>
    struct __remove_unsigned<wchar_t>;



  template<typename _Type>
    inline bool
    __is_null_pointer(_Type* __ptr)
    { return __ptr == 0; }

  template<typename _Type>
    inline bool
    __is_null_pointer(_Type)
    { return false; }


  inline bool
  __is_null_pointer(std::nullptr_t)
  { return true; }



  template<typename _Tp, bool = std::__is_integer<_Tp>::__value>
    struct __promote
    { typedef double __type; };




  template<typename _Tp>
    struct __promote<_Tp, false>
    { };

  template<>
    struct __promote<long double>
    { typedef long double __type; };

  template<>
    struct __promote<double>
    { typedef double __type; };

  template<>
    struct __promote<float>
    { typedef float __type; };

  template<typename _Tp, typename _Up,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type>
    struct __promote_2
    {
      typedef __typeof__(_Tp2() + _Up2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type>
    struct __promote_3
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2()) __type;
    };

  template<typename _Tp, typename _Up, typename _Vp, typename _Wp,
           typename _Tp2 = typename __promote<_Tp>::__type,
           typename _Up2 = typename __promote<_Up>::__type,
           typename _Vp2 = typename __promote<_Vp>::__type,
           typename _Wp2 = typename __promote<_Wp>::__type>
    struct __promote_4
    {
      typedef __typeof__(_Tp2() + _Up2() + _Vp2() + _Wp2()) __type;
    };


}
}
# 63 "/usr/include/c++/6/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/6/ext/numeric_traits.h" 1 3
# 32 "/usr/include/c++/6/ext/numeric_traits.h" 3
       
# 33 "/usr/include/c++/6/ext/numeric_traits.h" 3




namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

# 54 "/usr/include/c++/6/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_integer
    {

      static const _Value __min = (((_Value)(-1) < 0) ? (_Value)1 << (sizeof(_Value) * 8 - ((_Value)(-1) < 0)) : (_Value)0);
      static const _Value __max = (((_Value)(-1) < 0) ? (((((_Value)1 << ((sizeof(_Value) * 8 - ((_Value)(-1) < 0)) - 1)) - 1) << 1) + 1) : ~(_Value)0);



      static const bool __is_signed = ((_Value)(-1) < 0);
      static const int __digits = (sizeof(_Value) * 8 - ((_Value)(-1) < 0));
    };

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__min;

  template<typename _Value>
    const _Value __numeric_traits_integer<_Value>::__max;

  template<typename _Value>
    const bool __numeric_traits_integer<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_integer<_Value>::__digits;
# 99 "/usr/include/c++/6/ext/numeric_traits.h" 3
  template<typename _Value>
    struct __numeric_traits_floating
    {

      static const int __max_digits10 = (2 + (std::__are_same<_Value, float>::__value ? 24 : std::__are_same<_Value, double>::__value ? 53 : 53) * 643L / 2136);


      static const bool __is_signed = true;
      static const int __digits10 = (std::__are_same<_Value, float>::__value ? 6 : std::__are_same<_Value, double>::__value ? 15 : 15);
      static const int __max_exponent10 = (std::__are_same<_Value, float>::__value ? 38 : std::__are_same<_Value, double>::__value ? 308 : 308);
    };

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_digits10;

  template<typename _Value>
    const bool __numeric_traits_floating<_Value>::__is_signed;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__digits10;

  template<typename _Value>
    const int __numeric_traits_floating<_Value>::__max_exponent10;

  template<typename _Value>
    struct __numeric_traits
    : public __conditional_type<std::__is_integer<_Value>::__value,
    __numeric_traits_integer<_Value>,
    __numeric_traits_floating<_Value> >::__type
    { };


}
# 64 "/usr/include/c++/6/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/6/bits/stl_pair.h" 1 3
# 59 "/usr/include/c++/6/bits/stl_pair.h" 3
# 1 "/usr/include/c++/6/bits/move.h" 1 3
# 34 "/usr/include/c++/6/bits/move.h" 3
# 1 "/usr/include/c++/6/bits/concept_check.h" 1 3
# 33 "/usr/include/c++/6/bits/concept_check.h" 3
       
# 34 "/usr/include/c++/6/bits/concept_check.h" 3
# 35 "/usr/include/c++/6/bits/move.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{







  template<typename _Tp>
    inline _Tp*
    __addressof(_Tp& __r) noexcept
    {
      return reinterpret_cast<_Tp*>
 (&const_cast<char&>(reinterpret_cast<const volatile char&>(__r)));
    }


}


# 1 "/usr/include/c++/6/type_traits" 1 3
# 32 "/usr/include/c++/6/type_traits" 3
       
# 33 "/usr/include/c++/6/type_traits" 3
# 42 "/usr/include/c++/6/type_traits" 3
namespace std
{
  typedef short unsigned int uint_least16_t;
  typedef unsigned int uint_least32_t;
}





namespace std __attribute__ ((__visibility__ ("default")))
{

# 68 "/usr/include/c++/6/type_traits" 3
  template<typename _Tp, _Tp __v>
    struct integral_constant
    {
      static constexpr _Tp value = __v;
      typedef _Tp value_type;
      typedef integral_constant<_Tp, __v> type;
      constexpr operator value_type() const { return value; }




      constexpr value_type operator()() const { return value; }

    };

  template<typename _Tp, _Tp __v>
    constexpr _Tp integral_constant<_Tp, __v>::value;


  typedef integral_constant<bool, true> true_type;


  typedef integral_constant<bool, false> false_type;

  template<bool __v>
    using __bool_constant = integral_constant<bool, __v>;
# 103 "/usr/include/c++/6/type_traits" 3
  template<bool, typename, typename>
    struct conditional;

  template<typename...>
    struct __or_;

  template<>
    struct __or_<>
    : public false_type
    { };

  template<typename _B1>
    struct __or_<_B1>
    : public _B1
    { };

  template<typename _B1, typename _B2>
    struct __or_<_B1, _B2>
    : public conditional<_B1::value, _B1, _B2>::type
    { };

  template<typename _B1, typename _B2, typename _B3, typename... _Bn>
    struct __or_<_B1, _B2, _B3, _Bn...>
    : public conditional<_B1::value, _B1, __or_<_B2, _B3, _Bn...>>::type
    { };

  template<typename...>
    struct __and_;

  template<>
    struct __and_<>
    : public true_type
    { };

  template<typename _B1>
    struct __and_<_B1>
    : public _B1
    { };

  template<typename _B1, typename _B2>
    struct __and_<_B1, _B2>
    : public conditional<_B1::value, _B2, _B1>::type
    { };

  template<typename _B1, typename _B2, typename _B3, typename... _Bn>
    struct __and_<_B1, _B2, _B3, _Bn...>
    : public conditional<_B1::value, __and_<_B2, _B3, _Bn...>, _B1>::type
    { };

  template<typename _Pp>
    struct __not_
    : public integral_constant<bool, !_Pp::value>
    { };

  struct __nonesuch {
    __nonesuch() = delete;
    ~__nonesuch() = delete;
    __nonesuch(__nonesuch const&) = delete;
    void operator=(__nonesuch const&) = delete;
  };
# 189 "/usr/include/c++/6/type_traits" 3
  template<typename _Tp>
    struct __success_type
    { typedef _Tp type; };

  struct __failure_type
  { };



  template<typename>
    struct remove_cv;

  template<typename>
    struct __is_void_helper
    : public false_type { };

  template<>
    struct __is_void_helper<void>
    : public true_type { };


  template<typename _Tp>
    struct is_void
    : public __is_void_helper<typename remove_cv<_Tp>::type>::type
    { };

  template<typename>
    struct __is_integral_helper
    : public false_type { };

  template<>
    struct __is_integral_helper<bool>
    : public true_type { };

  template<>
    struct __is_integral_helper<char>
    : public true_type { };

  template<>
    struct __is_integral_helper<signed char>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned char>
    : public true_type { };


  template<>
    struct __is_integral_helper<wchar_t>
    : public true_type { };


  template<>
    struct __is_integral_helper<char16_t>
    : public true_type { };

  template<>
    struct __is_integral_helper<char32_t>
    : public true_type { };

  template<>
    struct __is_integral_helper<short>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned short>
    : public true_type { };

  template<>
    struct __is_integral_helper<int>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned int>
    : public true_type { };

  template<>
    struct __is_integral_helper<long>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned long>
    : public true_type { };

  template<>
    struct __is_integral_helper<long long>
    : public true_type { };

  template<>
    struct __is_integral_helper<unsigned long long>
    : public true_type { };
# 321 "/usr/include/c++/6/type_traits" 3
  template<typename _Tp>
    struct is_integral
    : public __is_integral_helper<typename remove_cv<_Tp>::type>::type
    { };

  template<typename>
    struct __is_floating_point_helper
    : public false_type { };

  template<>
    struct __is_floating_point_helper<float>
    : public true_type { };

  template<>
    struct __is_floating_point_helper<double>
    : public true_type { };

  template<>
    struct __is_floating_point_helper<long double>
    : public true_type { };
# 349 "/usr/include/c++/6/type_traits" 3
  template<typename _Tp>
    struct is_floating_point
    : public __is_floating_point_helper<typename remove_cv<_Tp>::type>::type
    { };


  template<typename>
    struct is_array
    : public false_type { };

  template<typename _Tp, std::size_t _Size>
    struct is_array<_Tp[_Size]>
    : public true_type { };

  template<typename _Tp>
    struct is_array<_Tp[]>
    : public true_type { };

  template<typename>
    struct __is_pointer_helper
    : public false_type { };

  template<typename _Tp>
    struct __is_pointer_helper<_Tp*>
    : public true_type { };


  template<typename _Tp>
    struct is_pointer
    : public __is_pointer_helper<typename remove_cv<_Tp>::type>::type
    { };


  template<typename>
    struct is_lvalue_reference
    : public false_type { };

  template<typename _Tp>
    struct is_lvalue_reference<_Tp&>
    : public true_type { };


  template<typename>
    struct is_rvalue_reference
    : public false_type { };

  template<typename _Tp>
    struct is_rvalue_reference<_Tp&&>
    : public true_type { };

  template<typename>
    struct is_function;

  template<typename>
    struct __is_member_object_pointer_helper
    : public false_type { };

  template<typename _Tp, typename _Cp>
    struct __is_member_object_pointer_helper<_Tp _Cp::*>
    : public integral_constant<bool, !is_function<_Tp>::value> { };


  template<typename _Tp>
    struct is_member_object_pointer
    : public __is_member_object_pointer_helper<
    typename remove_cv<_Tp>::type>::type
    { };

  template<typename>
    struct __is_member_function_pointer_helper
    : public false_type { };

  template<typename _Tp, typename _Cp>
    struct __is_member_function_pointer_helper<_Tp _Cp::*>
    : public integral_constant<bool, is_function<_Tp>::value> { };


  template<typename _Tp>
    struct is_member_function_pointer
    : public __is_member_function_pointer_helper<
    typename remove_cv<_Tp>::type>::type
    { };


  template<typename _Tp>
    struct is_enum
    : public integral_constant<bool, __is_enum(_Tp)>
    { };


  template<typename _Tp>
    struct is_union
    : public integral_constant<bool, __is_union(_Tp)>
    { };


  template<typename _Tp>
    struct is_class
    : public integral_constant<bool, __is_class(_Tp)>
    { };


  template<typename>
    struct is_function
    : public false_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...)>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......)>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) volatile>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) volatile &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) volatile &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) volatile>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) volatile &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) volatile &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const volatile>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const volatile &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes...) const volatile &&>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const volatile>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const volatile &>
    : public true_type { };

  template<typename _Res, typename... _ArgTypes>
    struct is_function<_Res(_ArgTypes......) const volatile &&>
    : public true_type { };



  template<typename>
    struct __is_null_pointer_helper
    : public false_type { };

  template<>
    struct __is_null_pointer_helper<std::nullptr_t>
    : public true_type { };


  template<typename _Tp>
    struct is_null_pointer
    : public __is_null_pointer_helper<typename remove_cv<_Tp>::type>::type
    { };


  template<typename _Tp>
    struct __is_nullptr_t
    : public is_null_pointer<_Tp>
    { };




  template<typename _Tp>
    struct is_reference
    : public __or_<is_lvalue_reference<_Tp>,
                   is_rvalue_reference<_Tp>>::type
    { };


  template<typename _Tp>
    struct is_arithmetic
    : public __or_<is_integral<_Tp>, is_floating_point<_Tp>>::type
    { };


  template<typename _Tp>
    struct is_fundamental
    : public __or_<is_arithmetic<_Tp>, is_void<_Tp>,
     is_null_pointer<_Tp>>::type
    { };


  template<typename _Tp>
    struct is_object
    : public __not_<__or_<is_function<_Tp>, is_reference<_Tp>,
                          is_void<_Tp>>>::type
    { };

  template<typename>
    struct is_member_pointer;


  template<typename _Tp>
    struct is_scalar
    : public __or_<is_arithmetic<_Tp>, is_enum<_Tp>, is_pointer<_Tp>,
                   is_member_pointer<_Tp>, is_null_pointer<_Tp>>::type
    { };


  template<typename _Tp>
    struct is_compound
    : public integral_constant<bool, !is_fundamental<_Tp>::value> { };

  template<typename _Tp>
    struct __is_member_pointer_helper
    : public false_type { };

  template<typename _Tp, typename _Cp>
    struct __is_member_pointer_helper<_Tp _Cp::*>
    : public true_type { };


  template<typename _Tp>
    struct is_member_pointer
    : public __is_member_pointer_helper<typename remove_cv<_Tp>::type>::type
    { };



  template<typename _Tp>
    struct __is_referenceable
    : public __or_<is_object<_Tp>, is_reference<_Tp>>::type
    { };

  template<typename _Res, typename... _Args>
    struct __is_referenceable<_Res(_Args...)>
    : public true_type
    { };

  template<typename _Res, typename... _Args>
    struct __is_referenceable<_Res(_Args......)>
    : public true_type
    { };




  template<typename>
    struct is_const
    : public false_type { };

  template<typename _Tp>
    struct is_const<_Tp const>
    : public true_type { };


  template<typename>
    struct is_volatile
    : public false_type { };

  template<typename _Tp>
    struct is_volatile<_Tp volatile>
    : public true_type { };


  template<typename _Tp>
    struct is_trivial
    : public integral_constant<bool, __is_trivial(_Tp)>
    { };


  template<typename _Tp>
    struct is_trivially_copyable
    : public integral_constant<bool, __is_trivially_copyable(_Tp)>
    { };


  template<typename _Tp>
    struct is_standard_layout
    : public integral_constant<bool, __is_standard_layout(_Tp)>
    { };



  template<typename _Tp>
    struct is_pod
    : public integral_constant<bool, __is_pod(_Tp)>
    { };


  template<typename _Tp>
    struct is_literal_type
    : public integral_constant<bool, __is_literal_type(_Tp)>
    { };


  template<typename _Tp>
    struct is_empty
    : public integral_constant<bool, __is_empty(_Tp)>
    { };


  template<typename _Tp>
    struct is_polymorphic
    : public integral_constant<bool, __is_polymorphic(_Tp)>
    { };




  template<typename _Tp>
    struct is_final
    : public integral_constant<bool, __is_final(_Tp)>
    { };



  template<typename _Tp>
    struct is_abstract
    : public integral_constant<bool, __is_abstract(_Tp)>
    { };

  template<typename _Tp,
    bool = is_arithmetic<_Tp>::value>
    struct __is_signed_helper
    : public false_type { };

  template<typename _Tp>
    struct __is_signed_helper<_Tp, true>
    : public integral_constant<bool, _Tp(-1) < _Tp(0)>
    { };


  template<typename _Tp>
    struct is_signed
    : public __is_signed_helper<_Tp>::type
    { };


  template<typename _Tp>
    struct is_unsigned
    : public __and_<is_arithmetic<_Tp>, __not_<is_signed<_Tp>>>
    { };




  template<typename>
    struct add_rvalue_reference;





  template<typename _Tp>
    typename add_rvalue_reference<_Tp>::type declval() noexcept;

  template<typename, unsigned = 0>
    struct extent;

  template<typename>
    struct remove_all_extents;

  template<typename _Tp>
    struct __is_array_known_bounds
    : public integral_constant<bool, (extent<_Tp>::value > 0)>
    { };

  template<typename _Tp>
    struct __is_array_unknown_bounds
    : public __and_<is_array<_Tp>, __not_<extent<_Tp>>>
    { };






  struct __do_is_destructible_impl
  {
    template<typename _Tp, typename = decltype(declval<_Tp&>().~_Tp())>
      static true_type __test(int);

    template<typename>
      static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_destructible_impl
    : public __do_is_destructible_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp,
           bool = __or_<is_void<_Tp>,
                        __is_array_unknown_bounds<_Tp>,
                        is_function<_Tp>>::value,
           bool = __or_<is_reference<_Tp>, is_scalar<_Tp>>::value>
    struct __is_destructible_safe;

  template<typename _Tp>
    struct __is_destructible_safe<_Tp, false, false>
    : public __is_destructible_impl<typename
               remove_all_extents<_Tp>::type>::type
    { };

  template<typename _Tp>
    struct __is_destructible_safe<_Tp, true, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_destructible_safe<_Tp, false, true>
    : public true_type { };


  template<typename _Tp>
    struct is_destructible
    : public __is_destructible_safe<_Tp>::type
    { };





  struct __do_is_nt_destructible_impl
  {
    template<typename _Tp>
      static integral_constant<bool, noexcept(declval<_Tp&>().~_Tp())>
        __test(int);

    template<typename>
      static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_nt_destructible_impl
    : public __do_is_nt_destructible_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp,
           bool = __or_<is_void<_Tp>,
                        __is_array_unknown_bounds<_Tp>,
                        is_function<_Tp>>::value,
           bool = __or_<is_reference<_Tp>, is_scalar<_Tp>>::value>
    struct __is_nt_destructible_safe;

  template<typename _Tp>
    struct __is_nt_destructible_safe<_Tp, false, false>
    : public __is_nt_destructible_impl<typename
               remove_all_extents<_Tp>::type>::type
    { };

  template<typename _Tp>
    struct __is_nt_destructible_safe<_Tp, true, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nt_destructible_safe<_Tp, false, true>
    : public true_type { };


  template<typename _Tp>
    struct is_nothrow_destructible
    : public __is_nt_destructible_safe<_Tp>::type
    { };

  struct __do_is_default_constructible_impl
  {
    template<typename _Tp, typename = decltype(_Tp())>
      static true_type __test(int);

    template<typename>
      static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_default_constructible_impl
    : public __do_is_default_constructible_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp>
    struct __is_default_constructible_atom
    : public __and_<__not_<is_void<_Tp>>,
                    __is_default_constructible_impl<_Tp>>
    { };

  template<typename _Tp, bool = is_array<_Tp>::value>
    struct __is_default_constructible_safe;






  template<typename _Tp>
    struct __is_default_constructible_safe<_Tp, true>
    : public __and_<__is_array_known_bounds<_Tp>,
      __is_default_constructible_atom<typename
                      remove_all_extents<_Tp>::type>>
    { };

  template<typename _Tp>
    struct __is_default_constructible_safe<_Tp, false>
    : public __is_default_constructible_atom<_Tp>::type
    { };


  template<typename _Tp>
    struct is_default_constructible
    : public __is_default_constructible_safe<_Tp>::type
    { };
# 933 "/usr/include/c++/6/type_traits" 3
  struct __do_is_static_castable_impl
  {
    template<typename _From, typename _To, typename
             = decltype(static_cast<_To>(declval<_From>()))>
      static true_type __test(int);

    template<typename, typename>
      static false_type __test(...);
  };

  template<typename _From, typename _To>
    struct __is_static_castable_impl
    : public __do_is_static_castable_impl
    {
      typedef decltype(__test<_From, _To>(0)) type;
    };

  template<typename _From, typename _To>
    struct __is_static_castable_safe
    : public __is_static_castable_impl<_From, _To>::type
    { };


  template<typename _From, typename _To>
    struct __is_static_castable
    : public integral_constant<bool, (__is_static_castable_safe<
          _From, _To>::value)>
    { };






  struct __do_is_direct_constructible_impl
  {
    template<typename _Tp, typename _Arg, typename
      = decltype(::new _Tp(declval<_Arg>()))>
      static true_type __test(int);

    template<typename, typename>
      static false_type __test(...);
  };

  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible_impl
    : public __do_is_direct_constructible_impl
    {
      typedef decltype(__test<_Tp, _Arg>(0)) type;
    };

  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible_new_safe
    : public __and_<is_destructible<_Tp>,
                    __is_direct_constructible_impl<_Tp, _Arg>>
    { };

  template<typename, typename>
    struct is_same;

  template<typename, typename>
    struct is_base_of;

  template<typename>
    struct remove_reference;

  template<typename _From, typename _To, bool
           = __not_<__or_<is_void<_From>,
                          is_function<_From>>>::value>
    struct __is_base_to_derived_ref;

  template<typename _Tp, typename... _Args>
    struct is_constructible;



  template<typename _From, typename _To>
    struct __is_base_to_derived_ref<_From, _To, true>
    {
      typedef typename remove_cv<typename remove_reference<_From
        >::type>::type __src_t;
      typedef typename remove_cv<typename remove_reference<_To
        >::type>::type __dst_t;
      typedef __and_<__not_<is_same<__src_t, __dst_t>>,
       is_base_of<__src_t, __dst_t>,
       __not_<is_constructible<__dst_t, _From>>> type;
      static constexpr bool value = type::value;
    };

  template<typename _From, typename _To>
    struct __is_base_to_derived_ref<_From, _To, false>
    : public false_type
    { };

  template<typename _From, typename _To, bool
           = __and_<is_lvalue_reference<_From>,
                    is_rvalue_reference<_To>>::value>
    struct __is_lvalue_to_rvalue_ref;



  template<typename _From, typename _To>
    struct __is_lvalue_to_rvalue_ref<_From, _To, true>
    {
      typedef typename remove_cv<typename remove_reference<
        _From>::type>::type __src_t;
      typedef typename remove_cv<typename remove_reference<
        _To>::type>::type __dst_t;
      typedef __and_<__not_<is_function<__src_t>>,
        __or_<is_same<__src_t, __dst_t>,
      is_base_of<__dst_t, __src_t>>> type;
      static constexpr bool value = type::value;
    };

  template<typename _From, typename _To>
    struct __is_lvalue_to_rvalue_ref<_From, _To, false>
    : public false_type
    { };







  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible_ref_cast
    : public __and_<__is_static_castable<_Arg, _Tp>,
                    __not_<__or_<__is_base_to_derived_ref<_Arg, _Tp>,
                                 __is_lvalue_to_rvalue_ref<_Arg, _Tp>
                   >>>
    { };

  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible_new
    : public conditional<is_reference<_Tp>::value,
    __is_direct_constructible_ref_cast<_Tp, _Arg>,
    __is_direct_constructible_new_safe<_Tp, _Arg>
    >::type
    { };

  template<typename _Tp, typename _Arg>
    struct __is_direct_constructible
    : public __is_direct_constructible_new<_Tp, _Arg>::type
    { };






  struct __do_is_nary_constructible_impl
  {
    template<typename _Tp, typename... _Args, typename
             = decltype(_Tp(declval<_Args>()...))>
      static true_type __test(int);

    template<typename, typename...>
      static false_type __test(...);
  };

  template<typename _Tp, typename... _Args>
    struct __is_nary_constructible_impl
    : public __do_is_nary_constructible_impl
    {
      typedef decltype(__test<_Tp, _Args...>(0)) type;
    };

  template<typename _Tp, typename... _Args>
    struct __is_nary_constructible
    : public __is_nary_constructible_impl<_Tp, _Args...>::type
    {
      static_assert(sizeof...(_Args) > 1,
                    "Only useful for > 1 arguments");
    };

  template<typename _Tp, typename... _Args>
    struct __is_constructible_impl
    : public __is_nary_constructible<_Tp, _Args...>
    { };

  template<typename _Tp, typename _Arg>
    struct __is_constructible_impl<_Tp, _Arg>
    : public __is_direct_constructible<_Tp, _Arg>
    { };

  template<typename _Tp>
    struct __is_constructible_impl<_Tp>
    : public is_default_constructible<_Tp>
    { };


  template<typename _Tp, typename... _Args>
    struct is_constructible
    : public __is_constructible_impl<_Tp, _Args...>::type
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_copy_constructible_impl;

  template<typename _Tp>
    struct __is_copy_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_copy_constructible_impl<_Tp, true>
    : public is_constructible<_Tp, const _Tp&>
    { };


  template<typename _Tp>
    struct is_copy_constructible
    : public __is_copy_constructible_impl<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_move_constructible_impl;

  template<typename _Tp>
    struct __is_move_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_move_constructible_impl<_Tp, true>
    : public is_constructible<_Tp, _Tp&&>
    { };


  template<typename _Tp>
    struct is_move_constructible
    : public __is_move_constructible_impl<_Tp>
    { };

  template<typename _Tp>
    struct __is_nt_default_constructible_atom
    : public integral_constant<bool, noexcept(_Tp())>
    { };

  template<typename _Tp, bool = is_array<_Tp>::value>
    struct __is_nt_default_constructible_impl;

  template<typename _Tp>
    struct __is_nt_default_constructible_impl<_Tp, true>
    : public __and_<__is_array_known_bounds<_Tp>,
      __is_nt_default_constructible_atom<typename
                      remove_all_extents<_Tp>::type>>
    { };

  template<typename _Tp>
    struct __is_nt_default_constructible_impl<_Tp, false>
    : public __is_nt_default_constructible_atom<_Tp>
    { };


  template<typename _Tp>
    struct is_nothrow_default_constructible
    : public __and_<is_default_constructible<_Tp>,
                    __is_nt_default_constructible_impl<_Tp>>
    { };

  template<typename _Tp, typename... _Args>
    struct __is_nt_constructible_impl
    : public integral_constant<bool, noexcept(_Tp(declval<_Args>()...))>
    { };

  template<typename _Tp, typename _Arg>
    struct __is_nt_constructible_impl<_Tp, _Arg>
    : public integral_constant<bool,
                               noexcept(static_cast<_Tp>(declval<_Arg>()))>
    { };

  template<typename _Tp>
    struct __is_nt_constructible_impl<_Tp>
    : public is_nothrow_default_constructible<_Tp>
    { };


  template<typename _Tp, typename... _Args>
    struct is_nothrow_constructible
    : public __and_<is_constructible<_Tp, _Args...>,
      __is_nt_constructible_impl<_Tp, _Args...>>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nothrow_copy_constructible_impl;

  template<typename _Tp>
    struct __is_nothrow_copy_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nothrow_copy_constructible_impl<_Tp, true>
    : public is_nothrow_constructible<_Tp, const _Tp&>
    { };


  template<typename _Tp>
    struct is_nothrow_copy_constructible
    : public __is_nothrow_copy_constructible_impl<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nothrow_move_constructible_impl;

  template<typename _Tp>
    struct __is_nothrow_move_constructible_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nothrow_move_constructible_impl<_Tp, true>
    : public is_nothrow_constructible<_Tp, _Tp&&>
    { };


  template<typename _Tp>
    struct is_nothrow_move_constructible
    : public __is_nothrow_move_constructible_impl<_Tp>
    { };

  template<typename _Tp, typename _Up>
    class __is_assignable_helper
    {
      template<typename _Tp1, typename _Up1,
        typename = decltype(declval<_Tp1>() = declval<_Up1>())>
 static true_type
 __test(int);

      template<typename, typename>
 static false_type
 __test(...);

    public:
      typedef decltype(__test<_Tp, _Up>(0)) type;
    };


  template<typename _Tp, typename _Up>
    struct is_assignable
      : public __is_assignable_helper<_Tp, _Up>::type
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_copy_assignable_impl;

  template<typename _Tp>
    struct __is_copy_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_copy_assignable_impl<_Tp, true>
    : public is_assignable<_Tp&, const _Tp&>
    { };


  template<typename _Tp>
    struct is_copy_assignable
    : public __is_copy_assignable_impl<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_move_assignable_impl;

  template<typename _Tp>
    struct __is_move_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_move_assignable_impl<_Tp, true>
    : public is_assignable<_Tp&, _Tp&&>
    { };


  template<typename _Tp>
    struct is_move_assignable
    : public __is_move_assignable_impl<_Tp>
    { };

  template<typename _Tp, typename _Up>
    struct __is_nt_assignable_impl
    : public integral_constant<bool, noexcept(declval<_Tp>() = declval<_Up>())>
    { };


  template<typename _Tp, typename _Up>
    struct is_nothrow_assignable
    : public __and_<is_assignable<_Tp, _Up>,
      __is_nt_assignable_impl<_Tp, _Up>>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nt_copy_assignable_impl;

  template<typename _Tp>
    struct __is_nt_copy_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nt_copy_assignable_impl<_Tp, true>
    : public is_nothrow_assignable<_Tp&, const _Tp&>
    { };


  template<typename _Tp>
    struct is_nothrow_copy_assignable
    : public __is_nt_copy_assignable_impl<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __is_nt_move_assignable_impl;

  template<typename _Tp>
    struct __is_nt_move_assignable_impl<_Tp, false>
    : public false_type { };

  template<typename _Tp>
    struct __is_nt_move_assignable_impl<_Tp, true>
    : public is_nothrow_assignable<_Tp&, _Tp&&>
    { };


  template<typename _Tp>
    struct is_nothrow_move_assignable
    : public __is_nt_move_assignable_impl<_Tp>
    { };


  template<typename _Tp, typename... _Args>
    struct is_trivially_constructible
    : public __and_<is_constructible<_Tp, _Args...>, integral_constant<bool,
   __is_trivially_constructible(_Tp, _Args...)>>
    { };


  template<typename _Tp>
    struct is_trivially_default_constructible
    : public is_trivially_constructible<_Tp>::type
    { };

  struct __do_is_implicitly_default_constructible_impl
  {
    template <typename _Tp>
    static void __helper(const _Tp&);

    template <typename _Tp>
    static true_type __test(const _Tp&,
                            decltype(__helper<const _Tp&>({}))* = 0);

    static false_type __test(...);
  };

  template<typename _Tp>
    struct __is_implicitly_default_constructible_impl
      : public __do_is_implicitly_default_constructible_impl
  {
    typedef decltype(__test(declval<_Tp>())) type;
  };

  template<typename _Tp>
    struct __is_implicitly_default_constructible_safe
      : public __is_implicitly_default_constructible_impl<_Tp>::type
  { };

  template <typename _Tp>
    struct __is_implicitly_default_constructible
      : public __and_<is_default_constructible<_Tp>,
                      __is_implicitly_default_constructible_safe<_Tp>>
  { };


  template<typename _Tp>
    struct is_trivially_copy_constructible
    : public __and_<is_copy_constructible<_Tp>,
      integral_constant<bool,
   __is_trivially_constructible(_Tp, const _Tp&)>>
    { };


  template<typename _Tp>
    struct is_trivially_move_constructible
    : public __and_<is_move_constructible<_Tp>,
      integral_constant<bool,
   __is_trivially_constructible(_Tp, _Tp&&)>>
    { };


  template<typename _Tp, typename _Up>
    struct is_trivially_assignable
    : public __and_<is_assignable<_Tp, _Up>,
      integral_constant<bool,
   __is_trivially_assignable(_Tp, _Up)>>
    { };


  template<typename _Tp>
    struct is_trivially_copy_assignable
    : public __and_<is_copy_assignable<_Tp>,
      integral_constant<bool,
   __is_trivially_assignable(_Tp&, const _Tp&)>>
    { };


  template<typename _Tp>
    struct is_trivially_move_assignable
    : public __and_<is_move_assignable<_Tp>,
      integral_constant<bool,
   __is_trivially_assignable(_Tp&, _Tp&&)>>
    { };


  template<typename _Tp>
    struct is_trivially_destructible
    : public __and_<is_destructible<_Tp>, integral_constant<bool,
         __has_trivial_destructor(_Tp)>>
    { };


  template<typename _Tp>
    struct has_trivial_default_constructor
    : public integral_constant<bool, __has_trivial_constructor(_Tp)>
    { } __attribute__ ((__deprecated__));


  template<typename _Tp>
    struct has_trivial_copy_constructor
    : public integral_constant<bool, __has_trivial_copy(_Tp)>
    { } __attribute__ ((__deprecated__));


  template<typename _Tp>
    struct has_trivial_copy_assign
    : public integral_constant<bool, __has_trivial_assign(_Tp)>
    { } __attribute__ ((__deprecated__));


  template<typename _Tp>
    struct has_virtual_destructor
    : public integral_constant<bool, __has_virtual_destructor(_Tp)>
    { };





  template<typename _Tp>
    struct alignment_of
    : public integral_constant<std::size_t, __alignof__(_Tp)> { };


  template<typename>
    struct rank
    : public integral_constant<std::size_t, 0> { };

  template<typename _Tp, std::size_t _Size>
    struct rank<_Tp[_Size]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };

  template<typename _Tp>
    struct rank<_Tp[]>
    : public integral_constant<std::size_t, 1 + rank<_Tp>::value> { };


  template<typename, unsigned _Uint>
    struct extent
    : public integral_constant<std::size_t, 0> { };

  template<typename _Tp, unsigned _Uint, std::size_t _Size>
    struct extent<_Tp[_Size], _Uint>
    : public integral_constant<std::size_t,
          _Uint == 0 ? _Size : extent<_Tp,
          _Uint - 1>::value>
    { };

  template<typename _Tp, unsigned _Uint>
    struct extent<_Tp[], _Uint>
    : public integral_constant<std::size_t,
          _Uint == 0 ? 0 : extent<_Tp,
             _Uint - 1>::value>
    { };





  template<typename, typename>
    struct is_same
    : public false_type { };

  template<typename _Tp>
    struct is_same<_Tp, _Tp>
    : public true_type { };


  template<typename _Base, typename _Derived>
    struct is_base_of
    : public integral_constant<bool, __is_base_of(_Base, _Derived)>
    { };

  template<typename _From, typename _To,
           bool = __or_<is_void<_From>, is_function<_To>,
                        is_array<_To>>::value>
    struct __is_convertible_helper
    { typedef typename is_void<_To>::type type; };

  template<typename _From, typename _To>
    class __is_convertible_helper<_From, _To, false>
    {
       template<typename _To1>
 static void __test_aux(_To1);

      template<typename _From1, typename _To1,
        typename = decltype(__test_aux<_To1>(std::declval<_From1>()))>
 static true_type
 __test(int);

      template<typename, typename>
 static false_type
 __test(...);

    public:
      typedef decltype(__test<_From, _To>(0)) type;
    };



  template<typename _From, typename _To>
    struct is_convertible
    : public __is_convertible_helper<_From, _To>::type
    { };





  template<typename _Tp>
    struct remove_const
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_const<_Tp const>
    { typedef _Tp type; };


  template<typename _Tp>
    struct remove_volatile
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_volatile<_Tp volatile>
    { typedef _Tp type; };


  template<typename _Tp>
    struct remove_cv
    {
      typedef typename
      remove_const<typename remove_volatile<_Tp>::type>::type type;
    };


  template<typename _Tp>
    struct add_const
    { typedef _Tp const type; };


  template<typename _Tp>
    struct add_volatile
    { typedef _Tp volatile type; };


  template<typename _Tp>
    struct add_cv
    {
      typedef typename
      add_const<typename add_volatile<_Tp>::type>::type type;
    };






  template<typename _Tp>
    using remove_const_t = typename remove_const<_Tp>::type;


  template<typename _Tp>
    using remove_volatile_t = typename remove_volatile<_Tp>::type;


  template<typename _Tp>
    using remove_cv_t = typename remove_cv<_Tp>::type;


  template<typename _Tp>
    using add_const_t = typename add_const<_Tp>::type;


  template<typename _Tp>
    using add_volatile_t = typename add_volatile<_Tp>::type;


  template<typename _Tp>
    using add_cv_t = typename add_cv<_Tp>::type;





  template<typename _Tp>
    struct remove_reference
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_reference<_Tp&>
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_reference<_Tp&&>
    { typedef _Tp type; };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __add_lvalue_reference_helper
    { typedef _Tp type; };

  template<typename _Tp>
    struct __add_lvalue_reference_helper<_Tp, true>
    { typedef _Tp& type; };


  template<typename _Tp>
    struct add_lvalue_reference
    : public __add_lvalue_reference_helper<_Tp>
    { };

  template<typename _Tp, bool = __is_referenceable<_Tp>::value>
    struct __add_rvalue_reference_helper
    { typedef _Tp type; };

  template<typename _Tp>
    struct __add_rvalue_reference_helper<_Tp, true>
    { typedef _Tp&& type; };


  template<typename _Tp>
    struct add_rvalue_reference
    : public __add_rvalue_reference_helper<_Tp>
    { };



  template<typename _Tp>
    using remove_reference_t = typename remove_reference<_Tp>::type;


  template<typename _Tp>
    using add_lvalue_reference_t = typename add_lvalue_reference<_Tp>::type;


  template<typename _Tp>
    using add_rvalue_reference_t = typename add_rvalue_reference<_Tp>::type;





  template<typename _Unqualified, bool _IsConst, bool _IsVol>
    struct __cv_selector;

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, false>
    { typedef _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, false, true>
    { typedef volatile _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, false>
    { typedef const _Unqualified __type; };

  template<typename _Unqualified>
    struct __cv_selector<_Unqualified, true, true>
    { typedef const volatile _Unqualified __type; };

  template<typename _Qualified, typename _Unqualified,
    bool _IsConst = is_const<_Qualified>::value,
    bool _IsVol = is_volatile<_Qualified>::value>
    class __match_cv_qualifiers
    {
      typedef __cv_selector<_Unqualified, _IsConst, _IsVol> __match;

    public:
      typedef typename __match::__type __type;
    };


  template<typename _Tp>
    struct __make_unsigned
    { typedef _Tp __type; };

  template<>
    struct __make_unsigned<char>
    { typedef unsigned char __type; };

  template<>
    struct __make_unsigned<signed char>
    { typedef unsigned char __type; };

  template<>
    struct __make_unsigned<short>
    { typedef unsigned short __type; };

  template<>
    struct __make_unsigned<int>
    { typedef unsigned int __type; };

  template<>
    struct __make_unsigned<long>
    { typedef unsigned long __type; };

  template<>
    struct __make_unsigned<long long>
    { typedef unsigned long long __type; };
# 1785 "/usr/include/c++/6/type_traits" 3
  template<typename _Tp,
    bool _IsInt = is_integral<_Tp>::value,
    bool _IsEnum = is_enum<_Tp>::value>
    class __make_unsigned_selector;

  template<typename _Tp>
    class __make_unsigned_selector<_Tp, true, false>
    {
      typedef __make_unsigned<typename remove_cv<_Tp>::type> __unsignedt;
      typedef typename __unsignedt::__type __unsigned_type;
      typedef __match_cv_qualifiers<_Tp, __unsigned_type> __cv_unsigned;

    public:
      typedef typename __cv_unsigned::__type __type;
    };

  template<typename _Tp>
    class __make_unsigned_selector<_Tp, false, true>
    {

      typedef unsigned char __smallest;
      static const bool __b0 = sizeof(_Tp) <= sizeof(__smallest);
      static const bool __b1 = sizeof(_Tp) <= sizeof(unsigned short);
      static const bool __b2 = sizeof(_Tp) <= sizeof(unsigned int);
      static const bool __b3 = sizeof(_Tp) <= sizeof(unsigned long);
      typedef conditional<__b3, unsigned long, unsigned long long> __cond3;
      typedef typename __cond3::type __cond3_type;
      typedef conditional<__b2, unsigned int, __cond3_type> __cond2;
      typedef typename __cond2::type __cond2_type;
      typedef conditional<__b1, unsigned short, __cond2_type> __cond1;
      typedef typename __cond1::type __cond1_type;

      typedef typename conditional<__b0, __smallest, __cond1_type>::type
 __unsigned_type;
      typedef __match_cv_qualifiers<_Tp, __unsigned_type> __cv_unsigned;

    public:
      typedef typename __cv_unsigned::__type __type;
    };





  template<typename _Tp>
    struct make_unsigned
    { typedef typename __make_unsigned_selector<_Tp>::__type type; };


  template<>
    struct make_unsigned<bool>;



  template<typename _Tp>
    struct __make_signed
    { typedef _Tp __type; };

  template<>
    struct __make_signed<char>
    { typedef signed char __type; };

  template<>
    struct __make_signed<unsigned char>
    { typedef signed char __type; };

  template<>
    struct __make_signed<unsigned short>
    { typedef signed short __type; };

  template<>
    struct __make_signed<unsigned int>
    { typedef signed int __type; };

  template<>
    struct __make_signed<unsigned long>
    { typedef signed long __type; };

  template<>
    struct __make_signed<unsigned long long>
    { typedef signed long long __type; };


  template<>
    struct __make_signed<wchar_t> : __make_signed<unsigned int>
    { };



  template<>
    struct __make_signed<char16_t> : __make_signed<uint_least16_t>
    { };
  template<>
    struct __make_signed<char32_t> : __make_signed<uint_least32_t>
    { };
# 1904 "/usr/include/c++/6/type_traits" 3
  template<typename _Tp,
    bool _IsInt = is_integral<_Tp>::value,
    bool _IsEnum = is_enum<_Tp>::value>
    class __make_signed_selector;

  template<typename _Tp>
    class __make_signed_selector<_Tp, true, false>
    {
      typedef __make_signed<typename remove_cv<_Tp>::type> __signedt;
      typedef typename __signedt::__type __signed_type;
      typedef __match_cv_qualifiers<_Tp, __signed_type> __cv_signed;

    public:
      typedef typename __cv_signed::__type __type;
    };

  template<typename _Tp>
    class __make_signed_selector<_Tp, false, true>
    {
      typedef typename __make_unsigned_selector<_Tp>::__type __unsigned_type;

    public:
      typedef typename __make_signed_selector<__unsigned_type>::__type __type;
    };





  template<typename _Tp>
    struct make_signed
    { typedef typename __make_signed_selector<_Tp>::__type type; };


  template<>
    struct make_signed<bool>;



  template<typename _Tp>
    using make_signed_t = typename make_signed<_Tp>::type;


  template<typename _Tp>
    using make_unsigned_t = typename make_unsigned<_Tp>::type;





  template<typename _Tp>
    struct remove_extent
    { typedef _Tp type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_extent<_Tp[_Size]>
    { typedef _Tp type; };

  template<typename _Tp>
    struct remove_extent<_Tp[]>
    { typedef _Tp type; };


  template<typename _Tp>
    struct remove_all_extents
    { typedef _Tp type; };

  template<typename _Tp, std::size_t _Size>
    struct remove_all_extents<_Tp[_Size]>
    { typedef typename remove_all_extents<_Tp>::type type; };

  template<typename _Tp>
    struct remove_all_extents<_Tp[]>
    { typedef typename remove_all_extents<_Tp>::type type; };



  template<typename _Tp>
    using remove_extent_t = typename remove_extent<_Tp>::type;


  template<typename _Tp>
    using remove_all_extents_t = typename remove_all_extents<_Tp>::type;




  template<typename _Tp, typename>
    struct __remove_pointer_helper
    { typedef _Tp type; };

  template<typename _Tp, typename _Up>
    struct __remove_pointer_helper<_Tp, _Up*>
    { typedef _Up type; };


  template<typename _Tp>
    struct remove_pointer
    : public __remove_pointer_helper<_Tp, typename remove_cv<_Tp>::type>
    { };


  template<typename _Tp, bool = __or_<__is_referenceable<_Tp>,
          is_void<_Tp>>::value>
    struct __add_pointer_helper
    { typedef _Tp type; };

  template<typename _Tp>
    struct __add_pointer_helper<_Tp, true>
    { typedef typename remove_reference<_Tp>::type* type; };

  template<typename _Tp>
    struct add_pointer
    : public __add_pointer_helper<_Tp>
    { };



  template<typename _Tp>
    using remove_pointer_t = typename remove_pointer<_Tp>::type;


  template<typename _Tp>
    using add_pointer_t = typename add_pointer<_Tp>::type;


  template<std::size_t _Len>
    struct __aligned_storage_msa
    {
      union __type
      {
 unsigned char __data[_Len];
 struct __attribute__((__aligned__)) { } __align;
      };
    };
# 2050 "/usr/include/c++/6/type_traits" 3
  template<std::size_t _Len, std::size_t _Align =
    __alignof__(typename __aligned_storage_msa<_Len>::__type)>
    struct aligned_storage
    {
      union type
      {
 unsigned char __data[_Len];
 struct __attribute__((__aligned__((_Align)))) { } __align;
      };
    };

  template <typename... _Types>
    struct __strictest_alignment
    {
      static const size_t _S_alignment = 0;
      static const size_t _S_size = 0;
    };

  template <typename _Tp, typename... _Types>
    struct __strictest_alignment<_Tp, _Types...>
    {
      static const size_t _S_alignment =
        alignof(_Tp) > __strictest_alignment<_Types...>::_S_alignment
 ? alignof(_Tp) : __strictest_alignment<_Types...>::_S_alignment;
      static const size_t _S_size =
        sizeof(_Tp) > __strictest_alignment<_Types...>::_S_size
 ? sizeof(_Tp) : __strictest_alignment<_Types...>::_S_size;
    };
# 2089 "/usr/include/c++/6/type_traits" 3
  template <size_t _Len, typename... _Types>
    struct aligned_union
    {
    private:
      static_assert(sizeof...(_Types) != 0, "At least one type is required");

      using __strictest = __strictest_alignment<_Types...>;
      static const size_t _S_len = _Len > __strictest::_S_size
 ? _Len : __strictest::_S_size;
    public:

      static const size_t alignment_value = __strictest::_S_alignment;

      typedef typename aligned_storage<_S_len, alignment_value>::type type;
    };

  template <size_t _Len, typename... _Types>
    const size_t aligned_union<_Len, _Types...>::alignment_value;



  template<typename _Up,
    bool _IsArray = is_array<_Up>::value,
    bool _IsFunction = is_function<_Up>::value>
    struct __decay_selector;


  template<typename _Up>
    struct __decay_selector<_Up, false, false>
    { typedef typename remove_cv<_Up>::type __type; };

  template<typename _Up>
    struct __decay_selector<_Up, true, false>
    { typedef typename remove_extent<_Up>::type* __type; };

  template<typename _Up>
    struct __decay_selector<_Up, false, true>
    { typedef typename add_pointer<_Up>::type __type; };


  template<typename _Tp>
    class decay
    {
      typedef typename remove_reference<_Tp>::type __remove_type;

    public:
      typedef typename __decay_selector<__remove_type>::__type type;
    };

  template<typename _Tp>
    class reference_wrapper;


  template<typename _Tp>
    struct __strip_reference_wrapper
    {
      typedef _Tp __type;
    };

  template<typename _Tp>
    struct __strip_reference_wrapper<reference_wrapper<_Tp> >
    {
      typedef _Tp& __type;
    };

  template<typename _Tp>
    struct __decay_and_strip
    {
      typedef typename __strip_reference_wrapper<
 typename decay<_Tp>::type>::__type __type;
    };




  template<bool, typename _Tp = void>
    struct enable_if
    { };


  template<typename _Tp>
    struct enable_if<true, _Tp>
    { typedef _Tp type; };

  template<typename... _Cond>
    using _Require = typename enable_if<__and_<_Cond...>::value>::type;



  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    struct conditional
    { typedef _Iftrue type; };


  template<typename _Iftrue, typename _Iffalse>
    struct conditional<false, _Iftrue, _Iffalse>
    { typedef _Iffalse type; };


  template<typename... _Tp>
    struct common_type;



  struct __do_common_type_impl
  {
    template<typename _Tp, typename _Up>
      static __success_type<typename decay<decltype
       (true ? std::declval<_Tp>()
        : std::declval<_Up>())>::type> _S_test(int);

    template<typename, typename>
      static __failure_type _S_test(...);
  };

  template<typename _Tp, typename _Up>
    struct __common_type_impl
    : private __do_common_type_impl
    {
      typedef decltype(_S_test<_Tp, _Up>(0)) type;
    };

  struct __do_member_type_wrapper
  {
    template<typename _Tp>
      static __success_type<typename _Tp::type> _S_test(int);

    template<typename>
      static __failure_type _S_test(...);
  };

  template<typename _Tp>
    struct __member_type_wrapper
    : private __do_member_type_wrapper
    {
      typedef decltype(_S_test<_Tp>(0)) type;
    };

  template<typename _CTp, typename... _Args>
    struct __expanded_common_type_wrapper
    {
      typedef common_type<typename _CTp::type, _Args...> type;
    };

  template<typename... _Args>
    struct __expanded_common_type_wrapper<__failure_type, _Args...>
    { typedef __failure_type type; };

  template<typename _Tp>
    struct common_type<_Tp>
    { typedef typename decay<_Tp>::type type; };

  template<typename _Tp, typename _Up>
    struct common_type<_Tp, _Up>
    : public __common_type_impl<_Tp, _Up>::type
    { };

  template<typename _Tp, typename _Up, typename... _Vp>
    struct common_type<_Tp, _Up, _Vp...>
    : public __expanded_common_type_wrapper<typename __member_type_wrapper<
               common_type<_Tp, _Up>>::type, _Vp...>::type
    { };


  template<typename _Tp>
    struct underlying_type
    {
      typedef __underlying_type(_Tp) type;
    };

  template<typename _Tp>
    struct __declval_protector
    {
      static const bool __stop = false;
      static typename add_rvalue_reference<_Tp>::type __delegate();
    };

  template<typename _Tp>
    inline typename add_rvalue_reference<_Tp>::type
    declval() noexcept
    {
      static_assert(__declval_protector<_Tp>::__stop,
      "declval() must not be used!");
      return __declval_protector<_Tp>::__delegate();
    }


  template<typename _Signature>
    class result_of;





  struct __invoke_memfun_ref { };
  struct __invoke_memfun_deref { };
  struct __invoke_memobj_ref { };
  struct __invoke_memobj_deref { };
  struct __invoke_other { };


  template<typename _Tp, typename _Tag>
    struct __result_of_success : __success_type<_Tp>
    { using __invoke_type = _Tag; };


  struct __result_of_memfun_ref_impl
  {
    template<typename _Fp, typename _Tp1, typename... _Args>
      static __result_of_success<decltype(
      (std::declval<_Tp1>().*std::declval<_Fp>())(std::declval<_Args>()...)
      ), __invoke_memfun_ref> _S_test(int);

    template<typename...>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_memfun_ref
    : private __result_of_memfun_ref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg, _Args...>(0)) type;
    };


  struct __result_of_memfun_deref_impl
  {
    template<typename _Fp, typename _Tp1, typename... _Args>
      static __result_of_success<decltype(
      ((*std::declval<_Tp1>()).*std::declval<_Fp>())(std::declval<_Args>()...)
      ), __invoke_memfun_deref> _S_test(int);

    template<typename...>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_memfun_deref
    : private __result_of_memfun_deref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg, _Args...>(0)) type;
    };


  struct __result_of_memobj_ref_impl
  {
    template<typename _Fp, typename _Tp1>
      static __result_of_success<decltype(
      std::declval<_Tp1>().*std::declval<_Fp>()
      ), __invoke_memobj_ref> _S_test(int);

    template<typename, typename>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_memobj_ref
    : private __result_of_memobj_ref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg>(0)) type;
    };


  struct __result_of_memobj_deref_impl
  {
    template<typename _Fp, typename _Tp1>
      static __result_of_success<decltype(
      (*std::declval<_Tp1>()).*std::declval<_Fp>()
      ), __invoke_memobj_deref> _S_test(int);

    template<typename, typename>
      static __failure_type _S_test(...);
  };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_memobj_deref
    : private __result_of_memobj_deref_impl
    {
      typedef decltype(_S_test<_MemPtr, _Arg>(0)) type;
    };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_memobj;

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, _Arg>
    {
      typedef typename remove_cv<typename remove_reference<
        _Arg>::type>::type _Argval;
      typedef _Res _Class::* _MemPtr;
      typedef typename conditional<__or_<is_same<_Argval, _Class>,
        is_base_of<_Class, _Argval>>::value,
        __result_of_memobj_ref<_MemPtr, _Arg>,
        __result_of_memobj_deref<_MemPtr, _Arg>
      >::type::type type;
    };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_memfun;

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, _Arg, _Args...>
    {
      typedef typename remove_cv<typename remove_reference<
        _Arg>::type>::type _Argval;
      typedef _Res _Class::* _MemPtr;
      typedef typename conditional<__or_<is_same<_Argval, _Class>,
        is_base_of<_Class, _Argval>>::value,
        __result_of_memfun_ref<_MemPtr, _Arg, _Args...>,
        __result_of_memfun_deref<_MemPtr, _Arg, _Args...>
      >::type::type type;
    };





  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, reference_wrapper<_Arg>>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, reference_wrapper<_Arg>&>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, const reference_wrapper<_Arg>&>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, reference_wrapper<_Arg>&&>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg>
    struct __result_of_memobj<_Res _Class::*, const reference_wrapper<_Arg>&&>
    : __result_of_memobj_ref<_Res _Class::*, _Arg&>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, reference_wrapper<_Arg>, _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, reference_wrapper<_Arg>&,
         _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, const reference_wrapper<_Arg>&,
         _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, reference_wrapper<_Arg>&&,
         _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<typename _Res, typename _Class, typename _Arg, typename... _Args>
    struct __result_of_memfun<_Res _Class::*, const reference_wrapper<_Arg>&&,
         _Args...>
    : __result_of_memfun_ref<_Res _Class::*, _Arg&, _Args...>
    { };

  template<bool, bool, typename _Functor, typename... _ArgTypes>
    struct __result_of_impl
    {
      typedef __failure_type type;
    };

  template<typename _MemPtr, typename _Arg>
    struct __result_of_impl<true, false, _MemPtr, _Arg>
    : public __result_of_memobj<typename decay<_MemPtr>::type, _Arg>
    { };

  template<typename _MemPtr, typename _Arg, typename... _Args>
    struct __result_of_impl<false, true, _MemPtr, _Arg, _Args...>
    : public __result_of_memfun<typename decay<_MemPtr>::type, _Arg, _Args...>
    { };


  struct __result_of_other_impl
  {
    template<typename _Fn, typename... _Args>
      static __result_of_success<decltype(
      std::declval<_Fn>()(std::declval<_Args>()...)
      ), __invoke_other> _S_test(int);

    template<typename...>
      static __failure_type _S_test(...);
  };

  template<typename _Functor, typename... _ArgTypes>
    struct __result_of_impl<false, false, _Functor, _ArgTypes...>
    : private __result_of_other_impl
    {
      typedef decltype(_S_test<_Functor, _ArgTypes...>(0)) type;
    };

  template<typename _Functor, typename... _ArgTypes>
    struct result_of<_Functor(_ArgTypes...)>
    : public __result_of_impl<
        is_member_object_pointer<
          typename remove_reference<_Functor>::type
        >::value,
        is_member_function_pointer<
          typename remove_reference<_Functor>::type
        >::value,
     _Functor, _ArgTypes...
      >::type
    { };



  template<size_t _Len, size_t _Align =
     __alignof__(typename __aligned_storage_msa<_Len>::__type)>
    using aligned_storage_t = typename aligned_storage<_Len, _Align>::type;

  template <size_t _Len, typename... _Types>
    using aligned_union_t = typename aligned_union<_Len, _Types...>::type;


  template<typename _Tp>
    using decay_t = typename decay<_Tp>::type;


  template<bool _Cond, typename _Tp = void>
    using enable_if_t = typename enable_if<_Cond, _Tp>::type;


  template<bool _Cond, typename _Iftrue, typename _Iffalse>
    using conditional_t = typename conditional<_Cond, _Iftrue, _Iffalse>::type;


  template<typename... _Tp>
    using common_type_t = typename common_type<_Tp...>::type;


  template<typename _Tp>
    using underlying_type_t = typename underlying_type<_Tp>::type;


  template<typename _Tp>
    using result_of_t = typename result_of<_Tp>::type;


  template<typename...> using __void_t = void;




  template<typename...> using void_t = void;



  template<typename _Default, typename _AlwaysVoid,
    template<typename...> class _Op, typename... _Args>
    struct __detector
    {
      using value_t = false_type;
      using type = _Default;
    };


  template<typename _Default, template<typename...> class _Op,
     typename... _Args>
    struct __detector<_Default, __void_t<_Op<_Args...>>, _Op, _Args...>
    {
      using value_t = true_type;
      using type = _Op<_Args...>;
    };


  template<typename _Default, template<typename...> class _Op,
    typename... _Args>
    using __detected_or = __detector<_Default, void, _Op, _Args...>;


  template<typename _Default, template<typename...> class _Op,
    typename... _Args>
    using __detected_or_t
      = typename __detected_or<_Default, _Op, _Args...>::type;
# 2595 "/usr/include/c++/6/type_traits" 3
  template <typename _Tp>
    struct __is_swappable;

  template <typename _Tp>
    struct __is_nothrow_swappable;

  template<typename _Tp>
    inline
    typename enable_if<__and_<is_move_constructible<_Tp>,
         is_move_assignable<_Tp>>::value>::type
    swap(_Tp&, _Tp&)
    noexcept(__and_<is_nothrow_move_constructible<_Tp>,
             is_nothrow_move_assignable<_Tp>>::value);

  template<typename _Tp, size_t _Nm>
    inline
    typename enable_if<__is_swappable<_Tp>::value>::type
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    noexcept(__is_nothrow_swappable<_Tp>::value);

  namespace __swappable_details {
    using std::swap;

    struct __do_is_swappable_impl
    {
      template<typename _Tp, typename
               = decltype(swap(std::declval<_Tp&>(), std::declval<_Tp&>()))>
        static true_type __test(int);

      template<typename>
        static false_type __test(...);
    };

    struct __do_is_nothrow_swappable_impl
    {
      template<typename _Tp>
        static __bool_constant<
          noexcept(swap(std::declval<_Tp&>(), std::declval<_Tp&>()))
        > __test(int);

      template<typename>
        static false_type __test(...);
    };

  }

  template<typename _Tp>
    struct __is_swappable_impl
    : public __swappable_details::__do_is_swappable_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp>
    struct __is_nothrow_swappable_impl
    : public __swappable_details::__do_is_nothrow_swappable_impl
    {
      typedef decltype(__test<_Tp>(0)) type;
    };

  template<typename _Tp>
    struct __is_swappable
    : public __is_swappable_impl<_Tp>::type
    { };

  template<typename _Tp>
    struct __is_nothrow_swappable
    : public __is_nothrow_swappable_impl<_Tp>::type
    { };


}
# 58 "/usr/include/c++/6/bits/move.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{

# 74 "/usr/include/c++/6/bits/move.h" 3
  template<typename _Tp>
    constexpr _Tp&&
    forward(typename std::remove_reference<_Tp>::type& __t) noexcept
    { return static_cast<_Tp&&>(__t); }







  template<typename _Tp>
    constexpr _Tp&&
    forward(typename std::remove_reference<_Tp>::type&& __t) noexcept
    {
      static_assert(!std::is_lvalue_reference<_Tp>::value, "template argument"
      " substituting _Tp is an lvalue reference type");
      return static_cast<_Tp&&>(__t);
    }






  template<typename _Tp>
    constexpr typename std::remove_reference<_Tp>::type&&
    move(_Tp&& __t) noexcept
    { return static_cast<typename std::remove_reference<_Tp>::type&&>(__t); }


  template<typename _Tp>
    struct __move_if_noexcept_cond
    : public __and_<__not_<is_nothrow_move_constructible<_Tp>>,
                    is_copy_constructible<_Tp>>::type { };
# 118 "/usr/include/c++/6/bits/move.h" 3
  template<typename _Tp>
    constexpr typename
    conditional<__move_if_noexcept_cond<_Tp>::value, const _Tp&, _Tp&&>::type
    move_if_noexcept(_Tp& __x) noexcept
    { return std::move(__x); }
# 133 "/usr/include/c++/6/bits/move.h" 3
  template<typename _Tp>
    inline _Tp*
    addressof(_Tp& __r) noexcept
    { return std::__addressof(__r); }


  template <typename _Tp, typename _Up = _Tp>
    inline _Tp
    __exchange(_Tp& __obj, _Up&& __new_val)
    {
      _Tp __old_val = std::move(__obj);
      __obj = std::forward<_Up>(__new_val);
      return __old_val;
    }



}
# 159 "/usr/include/c++/6/bits/move.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 174 "/usr/include/c++/6/bits/move.h" 3
  template<typename _Tp>
    inline

    typename enable_if<__and_<is_move_constructible<_Tp>,
         is_move_assignable<_Tp>>::value>::type
    swap(_Tp& __a, _Tp& __b)
    noexcept(__and_<is_nothrow_move_constructible<_Tp>,
             is_nothrow_move_assignable<_Tp>>::value)




    {

     

      _Tp __tmp = std::move(__a);
      __a = std::move(__b);
      __b = std::move(__tmp);
    }




  template<typename _Tp, size_t _Nm>
    inline

    typename enable_if<__is_swappable<_Tp>::value>::type
    swap(_Tp (&__a)[_Nm], _Tp (&__b)[_Nm])
    noexcept(__is_nothrow_swappable<_Tp>::value)




    {
      for (size_t __n = 0; __n < _Nm; ++__n)
 swap(__a[__n], __b[__n]);
    }



}
# 60 "/usr/include/c++/6/bits/stl_pair.h" 2 3





namespace std __attribute__ ((__visibility__ ("default")))
{

# 76 "/usr/include/c++/6/bits/stl_pair.h" 3
  struct piecewise_construct_t { explicit piecewise_construct_t() = default; };


  constexpr piecewise_construct_t piecewise_construct = piecewise_construct_t();


  template<typename...>
    class tuple;

  template<std::size_t...>
    struct _Index_tuple;






  template <bool, typename _T1, typename _T2>
    struct _PCC
    {
      template <typename _U1, typename _U2>
      static constexpr bool _ConstructiblePair()
      {
 return __and_<is_constructible<_T1, const _U1&>,
        is_constructible<_T2, const _U2&>>::value;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _ImplicitlyConvertiblePair()
      {
 return __and_<is_convertible<const _U1&, _T1>,
        is_convertible<const _U2&, _T2>>::value;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _MoveConstructiblePair()
      {
 return __and_<is_constructible<_T1, _U1&&>,
        is_constructible<_T2, _U2&&>>::value;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _ImplicitlyMoveConvertiblePair()
      {
 return __and_<is_convertible<_U1&&, _T1>,
        is_convertible<_U2&&, _T2>>::value;
      }

      template <bool __implicit, typename _U1, typename _U2>
      static constexpr bool _CopyMovePair()
      {
 using __do_converts = __and_<is_convertible<const _U1&, _T1>,
      is_convertible<_U2&&, _T2>>;
 using __converts = typename conditional<__implicit,
           __do_converts,
           __not_<__do_converts>>::type;
 return __and_<is_constructible<_T1, const _U1&>,
        is_constructible<_T2, _U2&&>,
        __converts
        >::value;
      }

      template <bool __implicit, typename _U1, typename _U2>
      static constexpr bool _MoveCopyPair()
      {
 using __do_converts = __and_<is_convertible<_U1&&, _T1>,
      is_convertible<const _U2&, _T2>>;
 using __converts = typename conditional<__implicit,
           __do_converts,
           __not_<__do_converts>>::type;
 return __and_<is_constructible<_T1, _U1&&>,
        is_constructible<_T2, const _U2&&>,
        __converts
        >::value;
      }
  };

  template <typename _T1, typename _T2>
    struct _PCC<false, _T1, _T2>
    {
      template <typename _U1, typename _U2>
      static constexpr bool _ConstructiblePair()
      {
 return false;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _ImplicitlyConvertiblePair()
      {
 return false;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _MoveConstructiblePair()
      {
 return false;
      }

      template <typename _U1, typename _U2>
      static constexpr bool _ImplicitlyMoveConvertiblePair()
      {
 return false;
      }
  };

  struct __wrap_nonesuch : std::__nonesuch {
    explicit __wrap_nonesuch(const __nonesuch&) = delete;
  };
# 193 "/usr/include/c++/6/bits/stl_pair.h" 3
  template<typename _T1, typename _T2>
    struct pair
    {
      typedef _T1 first_type;
      typedef _T2 second_type;

      _T1 first;
      _T2 second;






      template <typename _U1 = _T1,
                typename _U2 = _T2,
                typename enable_if<__and_<
                                     __is_implicitly_default_constructible<_U1>,
                                     __is_implicitly_default_constructible<_U2>>
                                   ::value, bool>::type = true>

      constexpr pair()
      : first(), second() { }


      template <typename _U1 = _T1,
                typename _U2 = _T2,
                typename enable_if<__and_<
                       is_default_constructible<_U1>,
                       is_default_constructible<_U2>,
                       __not_<
                         __and_<__is_implicitly_default_constructible<_U1>,
                                __is_implicitly_default_constructible<_U2>>>>
                                   ::value, bool>::type = false>
      explicit constexpr pair()
      : first(), second() { }
# 237 "/usr/include/c++/6/bits/stl_pair.h" 3
      using _PCCP = _PCC<true, _T1, _T2>;

      template<typename _U1 = _T1, typename _U2=_T2, typename
        enable_if<_PCCP::template
      _ConstructiblePair<_U1, _U2>()
                  && _PCCP::template
      _ImplicitlyConvertiblePair<_U1, _U2>(),
                         bool>::type=true>
      constexpr pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }

       template<typename _U1 = _T1, typename _U2=_T2, typename
  enable_if<_PCCP::template
       _ConstructiblePair<_U1, _U2>()
                   && !_PCCP::template
       _ImplicitlyConvertiblePair<_U1, _U2>(),
                         bool>::type=false>
      explicit constexpr pair(const _T1& __a, const _T2& __b)
      : first(__a), second(__b) { }
# 265 "/usr/include/c++/6/bits/stl_pair.h" 3
      template <typename _U1, typename _U2>
        using _PCCFP = _PCC<!is_same<_T1, _U1>::value
       || !is_same<_T2, _U2>::value,
       _T1, _T2>;

      template<typename _U1, typename _U2, typename
        enable_if<_PCCFP<_U1, _U2>::template
      _ConstructiblePair<_U1, _U2>()
                  && _PCCFP<_U1, _U2>::template
      _ImplicitlyConvertiblePair<_U1, _U2>(),
     bool>::type=true>
        constexpr pair(const pair<_U1, _U2>& __p)
        : first(__p.first), second(__p.second) { }

      template<typename _U1, typename _U2, typename
        enable_if<_PCCFP<_U1, _U2>::template
      _ConstructiblePair<_U1, _U2>()
    && !_PCCFP<_U1, _U2>::template
      _ImplicitlyConvertiblePair<_U1, _U2>(),
                         bool>::type=false>
 explicit constexpr pair(const pair<_U1, _U2>& __p)
 : first(__p.first), second(__p.second) { }

      constexpr pair(const pair&) = default;
      constexpr pair(pair&&) = default;


      template<typename _U1, typename
        enable_if<_PCCP::template
      _MoveCopyPair<true, _U1, _T2>(),
                         bool>::type=true>
       constexpr pair(_U1&& __x, const _T2& __y)
       : first(std::forward<_U1>(__x)), second(__y) { }

      template<typename _U1, typename
        enable_if<_PCCP::template
      _MoveCopyPair<false, _U1, _T2>(),
                         bool>::type=false>
       explicit constexpr pair(_U1&& __x, const _T2& __y)
       : first(std::forward<_U1>(__x)), second(__y) { }

      template<typename _U2, typename
        enable_if<_PCCP::template
      _CopyMovePair<true, _T1, _U2>(),
                         bool>::type=true>
       constexpr pair(const _T1& __x, _U2&& __y)
       : first(__x), second(std::forward<_U2>(__y)) { }

      template<typename _U2, typename
        enable_if<_PCCP::template
      _CopyMovePair<false, _T1, _U2>(),
                         bool>::type=false>
       explicit pair(const _T1& __x, _U2&& __y)
       : first(__x), second(std::forward<_U2>(__y)) { }

      template<typename _U1, typename _U2, typename
        enable_if<_PCCP::template
      _MoveConstructiblePair<_U1, _U2>()
     && _PCCP::template
      _ImplicitlyMoveConvertiblePair<_U1, _U2>(),
                         bool>::type=true>
 constexpr pair(_U1&& __x, _U2&& __y)
 : first(std::forward<_U1>(__x)), second(std::forward<_U2>(__y)) { }

      template<typename _U1, typename _U2, typename
        enable_if<_PCCP::template
      _MoveConstructiblePair<_U1, _U2>()
     && !_PCCP::template
      _ImplicitlyMoveConvertiblePair<_U1, _U2>(),
                         bool>::type=false>
 explicit constexpr pair(_U1&& __x, _U2&& __y)
 : first(std::forward<_U1>(__x)), second(std::forward<_U2>(__y)) { }


      template<typename _U1, typename _U2, typename
        enable_if<_PCCFP<_U1, _U2>::template
      _MoveConstructiblePair<_U1, _U2>()
     && _PCCFP<_U1, _U2>::template
      _ImplicitlyMoveConvertiblePair<_U1, _U2>(),
                         bool>::type=true>
 constexpr pair(pair<_U1, _U2>&& __p)
 : first(std::forward<_U1>(__p.first)),
   second(std::forward<_U2>(__p.second)) { }

      template<typename _U1, typename _U2, typename
        enable_if<_PCCFP<_U1, _U2>::template
      _MoveConstructiblePair<_U1, _U2>()
     && !_PCCFP<_U1, _U2>::template
      _ImplicitlyMoveConvertiblePair<_U1, _U2>(),
                         bool>::type=false>
 explicit constexpr pair(pair<_U1, _U2>&& __p)
 : first(std::forward<_U1>(__p.first)),
   second(std::forward<_U2>(__p.second)) { }

      template<typename... _Args1, typename... _Args2>
        pair(piecewise_construct_t, tuple<_Args1...>, tuple<_Args2...>);

      pair&
      operator=(typename conditional<
  __and_<is_copy_assignable<_T1>,
         is_copy_assignable<_T2>>::value,
  const pair&, const __wrap_nonesuch&>::type __p)
      {
 first = __p.first;
 second = __p.second;
 return *this;
      }

      pair&
      operator=(typename conditional<
  __not_<__and_<is_copy_assignable<_T1>,
                is_copy_assignable<_T2>>>::value,
  const pair&, const __wrap_nonesuch&>::type __p) = delete;

      pair&
      operator=(typename conditional<
  __and_<is_move_assignable<_T1>,
         is_move_assignable<_T2>>::value,
  pair&&, __wrap_nonesuch&&>::type __p)
      noexcept(__and_<is_nothrow_move_assignable<_T1>,
               is_nothrow_move_assignable<_T2>>::value)
      {
 first = std::forward<first_type>(__p.first);
 second = std::forward<second_type>(__p.second);
 return *this;
      }

      template<typename _U1, typename _U2>
      typename enable_if<__and_<is_assignable<_T1&, const _U1&>,
    is_assignable<_T2&, const _U2&>>::value,
    pair&>::type
 operator=(const pair<_U1, _U2>& __p)
 {
   first = __p.first;
   second = __p.second;
   return *this;
 }

      template<typename _U1, typename _U2>
      typename enable_if<__and_<is_assignable<_T1&, _U1&&>,
    is_assignable<_T2&, _U2&&>>::value,
    pair&>::type
 operator=(pair<_U1, _U2>&& __p)
 {
   first = std::forward<_U1>(__p.first);
   second = std::forward<_U2>(__p.second);
   return *this;
 }

      void
      swap(pair& __p)
      noexcept(__is_nothrow_swappable<_T1>::value
               && __is_nothrow_swappable<_T2>::value)
      {
 using std::swap;
 swap(first, __p.first);
 swap(second, __p.second);
      }

    private:
      template<typename... _Args1, std::size_t... _Indexes1,
               typename... _Args2, std::size_t... _Indexes2>
        pair(tuple<_Args1...>&, tuple<_Args2...>&,
             _Index_tuple<_Indexes1...>, _Index_tuple<_Indexes2...>);

    };


  template<typename _T1, typename _T2>
    inline constexpr bool
    operator==(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first == __y.first && __x.second == __y.second; }


  template<typename _T1, typename _T2>
    inline constexpr bool
    operator<(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __x.first < __y.first
      || (!(__y.first < __x.first) && __x.second < __y.second); }


  template<typename _T1, typename _T2>
    inline constexpr bool
    operator!=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x == __y); }


  template<typename _T1, typename _T2>
    inline constexpr bool
    operator>(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return __y < __x; }


  template<typename _T1, typename _T2>
    inline constexpr bool
    operator<=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__y < __x); }


  template<typename _T1, typename _T2>
    inline constexpr bool
    operator>=(const pair<_T1, _T2>& __x, const pair<_T1, _T2>& __y)
    { return !(__x < __y); }





  template<typename _T1, typename _T2>
    inline void
    swap(pair<_T1, _T2>& __x, pair<_T1, _T2>& __y)
    noexcept(noexcept(__x.swap(__y)))
    { __x.swap(__y); }
# 494 "/usr/include/c++/6/bits/stl_pair.h" 3
  template<typename _T1, typename _T2>
    constexpr pair<typename __decay_and_strip<_T1>::__type,
                   typename __decay_and_strip<_T2>::__type>
    make_pair(_T1&& __x, _T2&& __y)
    {
      typedef typename __decay_and_strip<_T1>::__type __ds_type1;
      typedef typename __decay_and_strip<_T2>::__type __ds_type2;
      typedef pair<__ds_type1, __ds_type2> __pair_type;
      return __pair_type(std::forward<_T1>(__x), std::forward<_T2>(__y));
    }
# 513 "/usr/include/c++/6/bits/stl_pair.h" 3

}
# 65 "/usr/include/c++/6/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/6/bits/stl_iterator_base_types.h" 1 3
# 62 "/usr/include/c++/6/bits/stl_iterator_base_types.h" 3
       
# 63 "/usr/include/c++/6/bits/stl_iterator_base_types.h" 3







namespace std __attribute__ ((__visibility__ ("default")))
{

# 89 "/usr/include/c++/6/bits/stl_iterator_base_types.h" 3
  struct input_iterator_tag { };


  struct output_iterator_tag { };


  struct forward_iterator_tag : public input_iterator_tag { };



  struct bidirectional_iterator_tag : public forward_iterator_tag { };



  struct random_access_iterator_tag : public bidirectional_iterator_tag { };
# 116 "/usr/include/c++/6/bits/stl_iterator_base_types.h" 3
  template<typename _Category, typename _Tp, typename _Distance = ptrdiff_t,
           typename _Pointer = _Tp*, typename _Reference = _Tp&>
    struct iterator
    {

      typedef _Category iterator_category;

      typedef _Tp value_type;

      typedef _Distance difference_type;

      typedef _Pointer pointer;

      typedef _Reference reference;
    };
# 143 "/usr/include/c++/6/bits/stl_iterator_base_types.h" 3
  template<typename _Iterator, typename = __void_t<>>
    struct __iterator_traits { };

  template<typename _Iterator>
    struct __iterator_traits<_Iterator,
        __void_t<typename _Iterator::iterator_category,
          typename _Iterator::value_type,
          typename _Iterator::difference_type,
          typename _Iterator::pointer,
          typename _Iterator::reference>>
    {
      typedef typename _Iterator::iterator_category iterator_category;
      typedef typename _Iterator::value_type value_type;
      typedef typename _Iterator::difference_type difference_type;
      typedef typename _Iterator::pointer pointer;
      typedef typename _Iterator::reference reference;
    };

  template<typename _Iterator>
    struct iterator_traits
    : public __iterator_traits<_Iterator> { };
# 177 "/usr/include/c++/6/bits/stl_iterator_base_types.h" 3
  template<typename _Tp>
    struct iterator_traits<_Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef _Tp& reference;
    };


  template<typename _Tp>
    struct iterator_traits<const _Tp*>
    {
      typedef random_access_iterator_tag iterator_category;
      typedef _Tp value_type;
      typedef ptrdiff_t difference_type;
      typedef const _Tp* pointer;
      typedef const _Tp& reference;
    };





  template<typename _Iter>
    inline typename iterator_traits<_Iter>::iterator_category
    __iterator_category(const _Iter&)
    { return typename iterator_traits<_Iter>::iterator_category(); }
# 230 "/usr/include/c++/6/bits/stl_iterator_base_types.h" 3
  template<typename _InIter>
    using _RequireInputIter = typename
      enable_if<is_convertible<typename
  iterator_traits<_InIter>::iterator_category,
          input_iterator_tag>::value>::type;



}
# 66 "/usr/include/c++/6/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/6/bits/stl_iterator_base_funcs.h" 1 3
# 62 "/usr/include/c++/6/bits/stl_iterator_base_funcs.h" 3
       
# 63 "/usr/include/c++/6/bits/stl_iterator_base_funcs.h" 3


# 1 "/usr/include/c++/6/debug/assertions.h" 1 3
# 66 "/usr/include/c++/6/bits/stl_iterator_base_funcs.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{


  template <typename> struct _List_iterator;
  template <typename> struct _List_const_iterator;




  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    __distance(_InputIterator __first, _InputIterator __last,
               input_iterator_tag)
    {

     

      typename iterator_traits<_InputIterator>::difference_type __n = 0;
      while (__first != __last)
 {
   ++__first;
   ++__n;
 }
      return __n;
    }

  template<typename _RandomAccessIterator>
    inline typename iterator_traits<_RandomAccessIterator>::difference_type
    __distance(_RandomAccessIterator __first, _RandomAccessIterator __last,
               random_access_iterator_tag)
    {

     

      return __last - __first;
    }



  template<typename _Tp>
    ptrdiff_t
    __distance(std::_List_iterator<_Tp>,
        std::_List_iterator<_Tp>,
        input_iterator_tag);

  template<typename _Tp>
    ptrdiff_t
    __distance(std::_List_const_iterator<_Tp>,
        std::_List_const_iterator<_Tp>,
        input_iterator_tag);
# 133 "/usr/include/c++/6/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator>
    inline typename iterator_traits<_InputIterator>::difference_type
    distance(_InputIterator __first, _InputIterator __last)
    {

      return std::__distance(__first, __last,
        std::__iterator_category(__first));
    }

  template<typename _InputIterator, typename _Distance>
    inline void
    __advance(_InputIterator& __i, _Distance __n, input_iterator_tag)
    {

     
      ;
      while (__n--)
 ++__i;
    }

  template<typename _BidirectionalIterator, typename _Distance>
    inline void
    __advance(_BidirectionalIterator& __i, _Distance __n,
       bidirectional_iterator_tag)
    {

     

      if (__n > 0)
        while (__n--)
   ++__i;
      else
        while (__n++)
   --__i;
    }

  template<typename _RandomAccessIterator, typename _Distance>
    inline void
    __advance(_RandomAccessIterator& __i, _Distance __n,
              random_access_iterator_tag)
    {

     

      __i += __n;
    }
# 192 "/usr/include/c++/6/bits/stl_iterator_base_funcs.h" 3
  template<typename _InputIterator, typename _Distance>
    inline void
    advance(_InputIterator& __i, _Distance __n)
    {

      typename iterator_traits<_InputIterator>::difference_type __d = __n;
      std::__advance(__i, __d, std::__iterator_category(__i));
    }



  template<typename _ForwardIterator>
    inline _ForwardIterator
    next(_ForwardIterator __x, typename
  iterator_traits<_ForwardIterator>::difference_type __n = 1)
    {

     

      std::advance(__x, __n);
      return __x;
    }

  template<typename _BidirectionalIterator>
    inline _BidirectionalIterator
    prev(_BidirectionalIterator __x, typename
  iterator_traits<_BidirectionalIterator>::difference_type __n = 1)
    {

     

      std::advance(__x, -__n);
      return __x;
    }




}
# 67 "/usr/include/c++/6/bits/stl_algobase.h" 2 3
# 1 "/usr/include/c++/6/bits/stl_iterator.h" 1 3
# 66 "/usr/include/c++/6/bits/stl_iterator.h" 3
# 1 "/usr/include/c++/6/bits/ptr_traits.h" 1 3
# 37 "/usr/include/c++/6/bits/ptr_traits.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


  class __undefined;


  template<typename _Tp>
    struct __get_first_arg
    { using type = __undefined; };

  template<template<typename, typename...> class _Template, typename _Tp,
           typename... _Types>
    struct __get_first_arg<_Template<_Tp, _Types...>>
    { using type = _Tp; };

  template<typename _Tp>
    using __get_first_arg_t = typename __get_first_arg<_Tp>::type;


  template<typename _Tp, typename _Up>
    struct __replace_first_arg
    { };

  template<template<typename, typename...> class _Template, typename _Up,
           typename _Tp, typename... _Types>
    struct __replace_first_arg<_Template<_Tp, _Types...>, _Up>
    { using type = _Template<_Up, _Types...>; };

  template<typename _Tp, typename _Up>
    using __replace_first_arg_t = typename __replace_first_arg<_Tp, _Up>::type;

  template<typename _Tp>
    using __make_not_void
      = typename conditional<is_void<_Tp>::value, __undefined, _Tp>::type;





  template<typename _Ptr>
    struct pointer_traits
    {
    private:
      template<typename _Tp>
 using __element_type = typename _Tp::element_type;

      template<typename _Tp>
 using __difference_type = typename _Tp::difference_type;

      template<typename _Tp, typename _Up, typename = void>
 struct __rebind : __replace_first_arg<_Tp, _Up> { };

      template<typename _Tp, typename _Up>
 struct __rebind<_Tp, _Up, __void_t<typename _Tp::template rebind<_Up>>>
 { using type = typename _Tp::template rebind<_Up>; };

    public:

      using pointer = _Ptr;


      using element_type
 = __detected_or_t<__get_first_arg_t<_Ptr>, __element_type, _Ptr>;


      using difference_type
 = __detected_or_t<ptrdiff_t, __difference_type, _Ptr>;


      template<typename _Up>
        using rebind = typename __rebind<_Ptr, _Up>::type;

      static _Ptr
      pointer_to(__make_not_void<element_type>& __e)
      { return _Ptr::pointer_to(__e); }

      static_assert(!is_same<element_type, __undefined>::value,
   "pointer type defines element_type or is like SomePointer<T, Args>");
    };





  template<typename _Tp>
    struct pointer_traits<_Tp*>
    {

      typedef _Tp* pointer;

      typedef _Tp element_type;

      typedef ptrdiff_t difference_type;

      template<typename _Up>
        using rebind = _Up*;






      static pointer
      pointer_to(__make_not_void<element_type>& __r) noexcept
      { return std::addressof(__r); }
    };


  template<typename _Ptr, typename _Tp>
    using __ptr_rebind = typename pointer_traits<_Ptr>::template rebind<_Tp>;


}
# 67 "/usr/include/c++/6/bits/stl_iterator.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{

# 96 "/usr/include/c++/6/bits/stl_iterator.h" 3
  template<typename _Iterator>
    class reverse_iterator
    : public iterator<typename iterator_traits<_Iterator>::iterator_category,
        typename iterator_traits<_Iterator>::value_type,
        typename iterator_traits<_Iterator>::difference_type,
        typename iterator_traits<_Iterator>::pointer,
                      typename iterator_traits<_Iterator>::reference>
    {
    protected:
      _Iterator current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::pointer pointer;
      typedef typename __traits_type::reference reference;







      reverse_iterator() : current() { }




      explicit
      reverse_iterator(iterator_type __x) : current(__x) { }




      reverse_iterator(const reverse_iterator& __x)
      : current(__x.current) { }





      template<typename _Iter>
        reverse_iterator(const reverse_iterator<_Iter>& __x)
 : current(__x.base()) { }




      iterator_type
      base() const
      { return current; }
# 160 "/usr/include/c++/6/bits/stl_iterator.h" 3
      reference
      operator*() const
      {
 _Iterator __tmp = current;
 return *--__tmp;
      }






      pointer
      operator->() const
      { return &(operator*()); }






      reverse_iterator&
      operator++()
      {
 --current;
 return *this;
      }






      reverse_iterator
      operator++(int)
      {
 reverse_iterator __tmp = *this;
 --current;
 return __tmp;
      }






      reverse_iterator&
      operator--()
      {
 ++current;
 return *this;
      }






      reverse_iterator
      operator--(int)
      {
 reverse_iterator __tmp = *this;
 ++current;
 return __tmp;
      }






      reverse_iterator
      operator+(difference_type __n) const
      { return reverse_iterator(current - __n); }







      reverse_iterator&
      operator+=(difference_type __n)
      {
 current -= __n;
 return *this;
      }






      reverse_iterator
      operator-(difference_type __n) const
      { return reverse_iterator(current + __n); }







      reverse_iterator&
      operator-=(difference_type __n)
      {
 current += __n;
 return *this;
      }






      reference
      operator[](difference_type __n) const
      { return *(*this + __n); }
    };
# 290 "/usr/include/c++/6/bits/stl_iterator.h" 3
  template<typename _Iterator>
    inline bool
    operator==(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y.base() < __x.base(); }

  template<typename _Iterator>
    inline bool
    operator!=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator>(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator<=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator>=(const reverse_iterator<_Iterator>& __x,
        const reverse_iterator<_Iterator>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>





    inline auto
    operator-(const reverse_iterator<_Iterator>& __x,
       const reverse_iterator<_Iterator>& __y)
    -> decltype(__x.base() - __y.base())

    { return __y.base() - __x.base(); }

  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    operator+(typename reverse_iterator<_Iterator>::difference_type __n,
       const reverse_iterator<_Iterator>& __x)
    { return reverse_iterator<_Iterator>(__x.base() - __n); }



  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y.base() < __x.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const reverse_iterator<_IteratorL>& __x,
        const reverse_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _IteratorL, typename _IteratorR>


    inline auto
    operator-(const reverse_iterator<_IteratorL>& __x,
       const reverse_iterator<_IteratorR>& __y)
    -> decltype(__y.base() - __x.base())





    { return __y.base() - __x.base(); }




  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    __make_reverse_iterator(_Iterator __i)
    { return reverse_iterator<_Iterator>(__i); }







  template<typename _Iterator>
    inline reverse_iterator<_Iterator>
    make_reverse_iterator(_Iterator __i)
    { return reverse_iterator<_Iterator>(__i); }




  template<typename _Iterator>
    auto
    __niter_base(reverse_iterator<_Iterator> __it)
    -> decltype(__make_reverse_iterator(__niter_base(__it.base())))
    { return __make_reverse_iterator(__niter_base(__it.base())); }

  template<typename _Iterator>
    struct __is_move_iterator<reverse_iterator<_Iterator> >
      : __is_move_iterator<_Iterator>
    { };

  template<typename _Iterator>
    auto
    __miter_base(reverse_iterator<_Iterator> __it)
    -> decltype(__make_reverse_iterator(__miter_base(__it.base())))
    { return __make_reverse_iterator(__miter_base(__it.base())); }
# 448 "/usr/include/c++/6/bits/stl_iterator.h" 3
  template<typename _Container>
    class back_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit
      back_insert_iterator(_Container& __x)
      : container(std::__addressof(__x)) { }
# 483 "/usr/include/c++/6/bits/stl_iterator.h" 3
      back_insert_iterator&
      operator=(const typename _Container::value_type& __value)
      {
 container->push_back(__value);
 return *this;
      }

      back_insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 container->push_back(std::move(__value));
 return *this;
      }



      back_insert_iterator&
      operator*()
      { return *this; }


      back_insert_iterator&
      operator++()
      { return *this; }


      back_insert_iterator
      operator++(int)
      { return *this; }
    };
# 525 "/usr/include/c++/6/bits/stl_iterator.h" 3
  template<typename _Container>
    inline back_insert_iterator<_Container>
    back_inserter(_Container& __x)
    { return back_insert_iterator<_Container>(__x); }
# 540 "/usr/include/c++/6/bits/stl_iterator.h" 3
  template<typename _Container>
    class front_insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;

    public:

      typedef _Container container_type;


      explicit front_insert_iterator(_Container& __x)
      : container(std::__addressof(__x)) { }
# 574 "/usr/include/c++/6/bits/stl_iterator.h" 3
      front_insert_iterator&
      operator=(const typename _Container::value_type& __value)
      {
 container->push_front(__value);
 return *this;
      }

      front_insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 container->push_front(std::move(__value));
 return *this;
      }



      front_insert_iterator&
      operator*()
      { return *this; }


      front_insert_iterator&
      operator++()
      { return *this; }


      front_insert_iterator
      operator++(int)
      { return *this; }
    };
# 616 "/usr/include/c++/6/bits/stl_iterator.h" 3
  template<typename _Container>
    inline front_insert_iterator<_Container>
    front_inserter(_Container& __x)
    { return front_insert_iterator<_Container>(__x); }
# 635 "/usr/include/c++/6/bits/stl_iterator.h" 3
  template<typename _Container>
    class insert_iterator
    : public iterator<output_iterator_tag, void, void, void, void>
    {
    protected:
      _Container* container;
      typename _Container::iterator iter;

    public:

      typedef _Container container_type;





      insert_iterator(_Container& __x, typename _Container::iterator __i)
      : container(std::__addressof(__x)), iter(__i) {}
# 686 "/usr/include/c++/6/bits/stl_iterator.h" 3
      insert_iterator&
      operator=(const typename _Container::value_type& __value)
      {
 iter = container->insert(iter, __value);
 ++iter;
 return *this;
      }

      insert_iterator&
      operator=(typename _Container::value_type&& __value)
      {
 iter = container->insert(iter, std::move(__value));
 ++iter;
 return *this;
      }



      insert_iterator&
      operator*()
      { return *this; }


      insert_iterator&
      operator++()
      { return *this; }


      insert_iterator&
      operator++(int)
      { return *this; }
    };
# 730 "/usr/include/c++/6/bits/stl_iterator.h" 3
  template<typename _Container, typename _Iterator>
    inline insert_iterator<_Container>
    inserter(_Container& __x, _Iterator __i)
    {
      return insert_iterator<_Container>(__x,
      typename _Container::iterator(__i));
    }




}

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

# 754 "/usr/include/c++/6/bits/stl_iterator.h" 3
  using std::iterator_traits;
  using std::iterator;
  template<typename _Iterator, typename _Container>
    class __normal_iterator
    {
    protected:
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;
      typedef typename __traits_type::reference reference;
      typedef typename __traits_type::pointer pointer;

      constexpr __normal_iterator() noexcept
      : _M_current(_Iterator()) { }

      explicit
      __normal_iterator(const _Iterator& __i) noexcept
      : _M_current(__i) { }


      template<typename _Iter>
        __normal_iterator(const __normal_iterator<_Iter,
     typename __enable_if<
              (std::__are_same<_Iter, typename _Container::pointer>::__value),
        _Container>::__type>& __i) noexcept
        : _M_current(__i.base()) { }


      reference
      operator*() const noexcept
      { return *_M_current; }

      pointer
      operator->() const noexcept
      { return _M_current; }

      __normal_iterator&
      operator++() noexcept
      {
 ++_M_current;
 return *this;
      }

      __normal_iterator
      operator++(int) noexcept
      { return __normal_iterator(_M_current++); }


      __normal_iterator&
      operator--() noexcept
      {
 --_M_current;
 return *this;
      }

      __normal_iterator
      operator--(int) noexcept
      { return __normal_iterator(_M_current--); }


      reference
      operator[](difference_type __n) const noexcept
      { return _M_current[__n]; }

      __normal_iterator&
      operator+=(difference_type __n) noexcept
      { _M_current += __n; return *this; }

      __normal_iterator
      operator+(difference_type __n) const noexcept
      { return __normal_iterator(_M_current + __n); }

      __normal_iterator&
      operator-=(difference_type __n) noexcept
      { _M_current -= __n; return *this; }

      __normal_iterator
      operator-(difference_type __n) const noexcept
      { return __normal_iterator(_M_current - __n); }

      const _Iterator&
      base() const noexcept
      { return _M_current; }
    };
# 854 "/usr/include/c++/6/bits/stl_iterator.h" 3
  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator==(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() == __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator==(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() == __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() != __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator!=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() != __rhs.base(); }


  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() < __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() < __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() > __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() > __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() <= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator<=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() <= __rhs.base(); }

  template<typename _IteratorL, typename _IteratorR, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_IteratorL, _Container>& __lhs,
        const __normal_iterator<_IteratorR, _Container>& __rhs)
    noexcept
    { return __lhs.base() >= __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline bool
    operator>=(const __normal_iterator<_Iterator, _Container>& __lhs,
        const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() >= __rhs.base(); }





  template<typename _IteratorL, typename _IteratorR, typename _Container>


    inline auto
    operator-(const __normal_iterator<_IteratorL, _Container>& __lhs,
       const __normal_iterator<_IteratorR, _Container>& __rhs) noexcept
    -> decltype(__lhs.base() - __rhs.base())





    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline typename __normal_iterator<_Iterator, _Container>::difference_type
    operator-(const __normal_iterator<_Iterator, _Container>& __lhs,
       const __normal_iterator<_Iterator, _Container>& __rhs)
    noexcept
    { return __lhs.base() - __rhs.base(); }

  template<typename _Iterator, typename _Container>
    inline __normal_iterator<_Iterator, _Container>
    operator+(typename __normal_iterator<_Iterator, _Container>::difference_type
       __n, const __normal_iterator<_Iterator, _Container>& __i)
    noexcept
    { return __normal_iterator<_Iterator, _Container>(__i.base() + __n); }


}

namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _Iterator, typename _Container>
    _Iterator
    __niter_base(__gnu_cxx::__normal_iterator<_Iterator, _Container> __it)
    { return __it.base(); }


}



namespace std __attribute__ ((__visibility__ ("default")))
{

# 1006 "/usr/include/c++/6/bits/stl_iterator.h" 3
  template<typename _Iterator>
    class move_iterator
    {
    protected:
      _Iterator _M_current;

      typedef iterator_traits<_Iterator> __traits_type;
      typedef typename __traits_type::reference __base_ref;

    public:
      typedef _Iterator iterator_type;
      typedef typename __traits_type::iterator_category iterator_category;
      typedef typename __traits_type::value_type value_type;
      typedef typename __traits_type::difference_type difference_type;

      typedef _Iterator pointer;


      typedef typename conditional<is_reference<__base_ref>::value,
    typename remove_reference<__base_ref>::type&&,
    __base_ref>::type reference;

      move_iterator()
      : _M_current() { }

      explicit
      move_iterator(iterator_type __i)
      : _M_current(__i) { }

      template<typename _Iter>
 move_iterator(const move_iterator<_Iter>& __i)
 : _M_current(__i.base()) { }

      iterator_type
      base() const
      { return _M_current; }

      reference
      operator*() const
      { return static_cast<reference>(*_M_current); }

      pointer
      operator->() const
      { return _M_current; }

      move_iterator&
      operator++()
      {
 ++_M_current;
 return *this;
      }

      move_iterator
      operator++(int)
      {
 move_iterator __tmp = *this;
 ++_M_current;
 return __tmp;
      }

      move_iterator&
      operator--()
      {
 --_M_current;
 return *this;
      }

      move_iterator
      operator--(int)
      {
 move_iterator __tmp = *this;
 --_M_current;
 return __tmp;
      }

      move_iterator
      operator+(difference_type __n) const
      { return move_iterator(_M_current + __n); }

      move_iterator&
      operator+=(difference_type __n)
      {
 _M_current += __n;
 return *this;
      }

      move_iterator
      operator-(difference_type __n) const
      { return move_iterator(_M_current - __n); }

      move_iterator&
      operator-=(difference_type __n)
      {
 _M_current -= __n;
 return *this;
      }

      reference
      operator[](difference_type __n) const
      { return std::move(_M_current[__n]); }
    };




  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator==(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return __x.base() == __y.base(); }

  template<typename _Iterator>
    inline bool
    operator==(const move_iterator<_Iterator>& __x,
        const move_iterator<_Iterator>& __y)
    { return __x.base() == __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator!=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__x == __y); }

  template<typename _Iterator>
    inline bool
    operator!=(const move_iterator<_Iterator>& __x,
        const move_iterator<_Iterator>& __y)
    { return !(__x == __y); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    { return __x.base() < __y.base(); }

  template<typename _Iterator>
    inline bool
    operator<(const move_iterator<_Iterator>& __x,
       const move_iterator<_Iterator>& __y)
    { return __x.base() < __y.base(); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator<=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__y < __x); }

  template<typename _Iterator>
    inline bool
    operator<=(const move_iterator<_Iterator>& __x,
        const move_iterator<_Iterator>& __y)
    { return !(__y < __x); }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    { return __y < __x; }

  template<typename _Iterator>
    inline bool
    operator>(const move_iterator<_Iterator>& __x,
       const move_iterator<_Iterator>& __y)
    { return __y < __x; }

  template<typename _IteratorL, typename _IteratorR>
    inline bool
    operator>=(const move_iterator<_IteratorL>& __x,
        const move_iterator<_IteratorR>& __y)
    { return !(__x < __y); }

  template<typename _Iterator>
    inline bool
    operator>=(const move_iterator<_Iterator>& __x,
        const move_iterator<_Iterator>& __y)
    { return !(__x < __y); }


  template<typename _IteratorL, typename _IteratorR>
    inline auto
    operator-(const move_iterator<_IteratorL>& __x,
       const move_iterator<_IteratorR>& __y)
    -> decltype(__x.base() - __y.base())
    { return __x.base() - __y.base(); }

  template<typename _Iterator>
    inline auto
    operator-(const move_iterator<_Iterator>& __x,
       const move_iterator<_Iterator>& __y)
    -> decltype(__x.base() - __y.base())
    { return __x.base() - __y.base(); }

  template<typename _Iterator>
    inline move_iterator<_Iterator>
    operator+(typename move_iterator<_Iterator>::difference_type __n,
       const move_iterator<_Iterator>& __x)
    { return __x + __n; }

  template<typename _Iterator>
    inline move_iterator<_Iterator>
    make_move_iterator(_Iterator __i)
    { return move_iterator<_Iterator>(__i); }

  template<typename _Iterator, typename _ReturnType
    = typename conditional<__move_if_noexcept_cond
      <typename iterator_traits<_Iterator>::value_type>::value,
                _Iterator, move_iterator<_Iterator>>::type>
    inline _ReturnType
    __make_move_if_noexcept_iterator(_Iterator __i)
    { return _ReturnType(__i); }



  template<typename _Tp, typename _ReturnType
    = typename conditional<__move_if_noexcept_cond<_Tp>::value,
      const _Tp*, move_iterator<_Tp*>>::type>
    inline _ReturnType
    __make_move_if_noexcept_iterator(_Tp* __i)
    { return _ReturnType(__i); }



  template<typename _Iterator>
    auto
    __niter_base(move_iterator<_Iterator> __it)
    -> decltype(make_move_iterator(__niter_base(__it.base())))
    { return make_move_iterator(__niter_base(__it.base())); }

  template<typename _Iterator>
    struct __is_move_iterator<move_iterator<_Iterator> >
    {
      enum { __value = 1 };
      typedef __true_type __type;
    };

  template<typename _Iterator>
    auto
    __miter_base(move_iterator<_Iterator> __it)
    -> decltype(__miter_base(__it.base()))
    { return __miter_base(__it.base()); }


}
# 68 "/usr/include/c++/6/bits/stl_algobase.h" 2 3

# 1 "/usr/include/c++/6/debug/debug.h" 1 3
# 48 "/usr/include/c++/6/debug/debug.h" 3
namespace std
{
  namespace __debug { }
}




namespace __gnu_debug
{
  using namespace std::__debug;
}
# 70 "/usr/include/c++/6/bits/stl_algobase.h" 2 3

# 1 "/usr/include/c++/6/bits/predefined_ops.h" 1 3
# 33 "/usr/include/c++/6/bits/predefined_ops.h" 3
namespace __gnu_cxx
{
namespace __ops
{
  struct _Iter_less_iter
  {
    template<typename _Iterator1, typename _Iterator2>
      constexpr
      bool
      operator()(_Iterator1 __it1, _Iterator2 __it2) const
      { return *__it1 < *__it2; }
  };

  constexpr
  inline _Iter_less_iter
  __iter_less_iter()
  { return _Iter_less_iter(); }

  struct _Iter_less_val
  {
    template<typename _Iterator, typename _Value>
      bool
      operator()(_Iterator __it, _Value& __val) const
      { return *__it < __val; }
  };

  inline _Iter_less_val
  __iter_less_val()
  { return _Iter_less_val(); }

  inline _Iter_less_val
  __iter_comp_val(_Iter_less_iter)
  { return _Iter_less_val(); }

  struct _Val_less_iter
  {
    template<typename _Value, typename _Iterator>
      bool
      operator()(_Value& __val, _Iterator __it) const
      { return __val < *__it; }
  };

  inline _Val_less_iter
  __val_less_iter()
  { return _Val_less_iter(); }

  inline _Val_less_iter
  __val_comp_iter(_Iter_less_iter)
  { return _Val_less_iter(); }

  struct _Iter_equal_to_iter
  {
    template<typename _Iterator1, typename _Iterator2>
      bool
      operator()(_Iterator1 __it1, _Iterator2 __it2) const
      { return *__it1 == *__it2; }
  };

  inline _Iter_equal_to_iter
  __iter_equal_to_iter()
  { return _Iter_equal_to_iter(); }

  struct _Iter_equal_to_val
  {
    template<typename _Iterator, typename _Value>
      bool
      operator()(_Iterator __it, _Value& __val) const
      { return *__it == __val; }
  };

  inline _Iter_equal_to_val
  __iter_equal_to_val()
  { return _Iter_equal_to_val(); }

  inline _Iter_equal_to_val
  __iter_comp_val(_Iter_equal_to_iter)
  { return _Iter_equal_to_val(); }

  template<typename _Compare>
    struct _Iter_comp_iter
    {
      _Compare _M_comp;

      explicit constexpr
      _Iter_comp_iter(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Iterator1, typename _Iterator2>
        constexpr
        bool
        operator()(_Iterator1 __it1, _Iterator2 __it2)
        { return bool(_M_comp(*__it1, *__it2)); }
    };

  template<typename _Compare>
    constexpr
    inline _Iter_comp_iter<_Compare>
    __iter_comp_iter(_Compare __comp)
    { return _Iter_comp_iter<_Compare>(__comp); }

  template<typename _Compare>
    struct _Iter_comp_val
    {
      _Compare _M_comp;

      explicit
      _Iter_comp_val(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Iterator, typename _Value>
 bool
 operator()(_Iterator __it, _Value& __val)
 { return bool(_M_comp(*__it, __val)); }
    };

  template<typename _Compare>
   inline _Iter_comp_val<_Compare>
    __iter_comp_val(_Compare __comp)
    { return _Iter_comp_val<_Compare>(__comp); }

  template<typename _Compare>
    inline _Iter_comp_val<_Compare>
    __iter_comp_val(_Iter_comp_iter<_Compare> __comp)
    { return _Iter_comp_val<_Compare>(__comp._M_comp); }

  template<typename _Compare>
    struct _Val_comp_iter
    {
      _Compare _M_comp;

      explicit
      _Val_comp_iter(_Compare __comp)
 : _M_comp(__comp)
      { }

      template<typename _Value, typename _Iterator>
 bool
 operator()(_Value& __val, _Iterator __it)
 { return bool(_M_comp(__val, *__it)); }
    };

  template<typename _Compare>
    inline _Val_comp_iter<_Compare>
    __val_comp_iter(_Compare __comp)
    { return _Val_comp_iter<_Compare>(__comp); }

  template<typename _Compare>
    inline _Val_comp_iter<_Compare>
    __val_comp_iter(_Iter_comp_iter<_Compare> __comp)
    { return _Val_comp_iter<_Compare>(__comp._M_comp); }

  template<typename _Value>
    struct _Iter_equals_val
    {
      _Value& _M_value;

      explicit
      _Iter_equals_val(_Value& __value)
 : _M_value(__value)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return *__it == _M_value; }
    };

  template<typename _Value>
    inline _Iter_equals_val<_Value>
    __iter_equals_val(_Value& __val)
    { return _Iter_equals_val<_Value>(__val); }

  template<typename _Iterator1>
    struct _Iter_equals_iter
    {
      _Iterator1 _M_it1;

      explicit
      _Iter_equals_iter(_Iterator1 __it1)
 : _M_it1(__it1)
      { }

      template<typename _Iterator2>
 bool
 operator()(_Iterator2 __it2)
 { return *__it2 == *_M_it1; }
    };

  template<typename _Iterator>
    inline _Iter_equals_iter<_Iterator>
    __iter_comp_iter(_Iter_equal_to_iter, _Iterator __it)
    { return _Iter_equals_iter<_Iterator>(__it); }

  template<typename _Predicate>
    struct _Iter_pred
    {
      _Predicate _M_pred;

      explicit
      _Iter_pred(_Predicate __pred)
 : _M_pred(__pred)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return bool(_M_pred(*__it)); }
    };

  template<typename _Predicate>
    inline _Iter_pred<_Predicate>
    __pred_iter(_Predicate __pred)
    { return _Iter_pred<_Predicate>(__pred); }

  template<typename _Compare, typename _Value>
    struct _Iter_comp_to_val
    {
      _Compare _M_comp;
      _Value& _M_value;

      _Iter_comp_to_val(_Compare __comp, _Value& __value)
 : _M_comp(__comp), _M_value(__value)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return bool(_M_comp(*__it, _M_value)); }
    };

  template<typename _Compare, typename _Value>
    _Iter_comp_to_val<_Compare, _Value>
    __iter_comp_val(_Compare __comp, _Value &__val)
    { return _Iter_comp_to_val<_Compare, _Value>(__comp, __val); }

  template<typename _Compare, typename _Iterator1>
    struct _Iter_comp_to_iter
    {
      _Compare _M_comp;
      _Iterator1 _M_it1;

      _Iter_comp_to_iter(_Compare __comp, _Iterator1 __it1)
 : _M_comp(__comp), _M_it1(__it1)
      { }

      template<typename _Iterator2>
 bool
 operator()(_Iterator2 __it2)
 { return bool(_M_comp(*__it2, *_M_it1)); }
    };

  template<typename _Compare, typename _Iterator>
    inline _Iter_comp_to_iter<_Compare, _Iterator>
    __iter_comp_iter(_Iter_comp_iter<_Compare> __comp, _Iterator __it)
    { return _Iter_comp_to_iter<_Compare, _Iterator>(__comp._M_comp, __it); }

  template<typename _Predicate>
    struct _Iter_negate
    {
      _Predicate _M_pred;

      explicit
      _Iter_negate(_Predicate __pred)
 : _M_pred(__pred)
      { }

      template<typename _Iterator>
 bool
 operator()(_Iterator __it)
 { return !bool(_M_pred(*__it)); }
    };

  template<typename _Predicate>
    inline _Iter_negate<_Predicate>
    __negate(_Iter_pred<_Predicate> __pred)
    { return _Iter_negate<_Predicate>(__pred._M_pred); }

}
}
# 72 "/usr/include/c++/6/bits/stl_algobase.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{

# 118 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    inline void
    iter_swap(_ForwardIterator1 __a, _ForwardIterator2 __b)
    {

     

     
# 148 "/usr/include/c++/6/bits/stl_algobase.h" 3
      swap(*__a, *__b);

    }
# 164 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _ForwardIterator1, typename _ForwardIterator2>
    _ForwardIterator2
    swap_ranges(_ForwardIterator1 __first1, _ForwardIterator1 __last1,
  _ForwardIterator2 __first2)
    {

     

     

      ;

      for (; __first1 != __last1; ++__first1, (void)++__first2)
 std::iter_swap(__first1, __first2);
      return __first2;
    }
# 192 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _Tp>
    constexpr
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b)
    {

     

      if (__b < __a)
 return __b;
      return __a;
    }
# 216 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _Tp>
    constexpr
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b)
    {

     

      if (__a < __b)
 return __b;
      return __a;
    }
# 240 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    constexpr
    inline const _Tp&
    min(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__b, __a))
 return __b;
      return __a;
    }
# 262 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _Tp, typename _Compare>
    constexpr
    inline const _Tp&
    max(const _Tp& __a, const _Tp& __b, _Compare __comp)
    {

      if (__comp(__a, __b))
 return __b;
      return __a;
    }



  template<typename _Iterator>
    inline _Iterator
    __niter_base(_Iterator __it)
    { return __it; }







  template<bool, bool, typename>
    struct __copy_move
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, (void)++__first)
     *__result = *__first;
   return __result;
 }
    };


  template<typename _Category>
    struct __copy_move<true, false, _Category>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   for (; __first != __last; ++__result, (void)++__first)
     *__result = std::move(*__first);
   return __result;
 }
    };


  template<>
    struct __copy_move<false, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = *__first;
       ++__first;
       ++__result;
     }
   return __result;
 }
    };


  template<>
    struct __copy_move<true, false, random_access_iterator_tag>
    {
      template<typename _II, typename _OI>
        static _OI
        __copy_m(_II __first, _II __last, _OI __result)
        {
   typedef typename iterator_traits<_II>::difference_type _Distance;
   for(_Distance __n = __last - __first; __n > 0; --__n)
     {
       *__result = std::move(*__first);
       ++__first;
       ++__result;
     }
   return __result;
 }
    };


  template<bool _IsMove>
    struct __copy_move<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_m(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {

   using __assignable = conditional<_IsMove,
        is_move_assignable<_Tp>,
        is_copy_assignable<_Tp>>;

   static_assert( __assignable::type::value, "type is not assignable" );

   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result, __first, sizeof(_Tp) * _Num);
   return __result + _Num;
 }
    };

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a(_II __first, _II __last, _OI __result)
    {
      typedef typename iterator_traits<_II>::value_type _ValueTypeI;
      typedef typename iterator_traits<_OI>::value_type _ValueTypeO;
      typedef typename iterator_traits<_II>::iterator_category _Category;
      const bool __simple = (__is_trivial(_ValueTypeI)
                      && __is_pointer<_II>::__value
                      && __is_pointer<_OI>::__value
        && __are_same<_ValueTypeI, _ValueTypeO>::__value);

      return std::__copy_move<_IsMove, __simple,
                       _Category>::__copy_m(__first, __last, __result);
    }



  template<typename _CharT>
    struct char_traits;

  template<typename _CharT, typename _Traits>
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits>
    class ostreambuf_iterator;

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(_CharT*, _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
      ostreambuf_iterator<_CharT, char_traits<_CharT> > >::__type
    __copy_move_a2(const _CharT*, const _CharT*,
     ostreambuf_iterator<_CharT, char_traits<_CharT> >);

  template<bool _IsMove, typename _CharT>
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value,
        _CharT*>::__type
    __copy_move_a2(istreambuf_iterator<_CharT, char_traits<_CharT> >,
     istreambuf_iterator<_CharT, char_traits<_CharT> >, _CharT*);

  template<bool _IsMove, typename _II, typename _OI>
    inline _OI
    __copy_move_a2(_II __first, _II __last, _OI __result)
    {
      return _OI(std::__copy_move_a<_IsMove>(std::__niter_base(__first),
          std::__niter_base(__last),
          std::__niter_base(__result)));
    }
# 444 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    copy(_II __first, _II __last, _OI __result)
    {

     
     

      ;

      return (std::__copy_move_a2<__is_move_iterator<_II>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 477 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _II, typename _OI>
    inline _OI
    move(_II __first, _II __last, _OI __result)
    {

     
     

      ;

      return std::__copy_move_a2<true>(std::__miter_base(__first),
           std::__miter_base(__last), __result);
    }






  template<bool, bool, typename>
    struct __copy_move_backward
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = *--__last;
   return __result;
 }
    };


  template<typename _Category>
    struct __copy_move_backward<true, false, _Category>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   while (__first != __last)
     *--__result = std::move(*--__last);
   return __result;
 }
    };


  template<>
    struct __copy_move_backward<false, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = *--__last;
   return __result;
 }
    };


  template<>
    struct __copy_move_backward<true, false, random_access_iterator_tag>
    {
      template<typename _BI1, typename _BI2>
        static _BI2
        __copy_move_b(_BI1 __first, _BI1 __last, _BI2 __result)
        {
   typename iterator_traits<_BI1>::difference_type __n;
   for (__n = __last - __first; __n > 0; --__n)
     *--__result = std::move(*--__last);
   return __result;
 }
    };


  template<bool _IsMove>
    struct __copy_move_backward<_IsMove, true, random_access_iterator_tag>
    {
      template<typename _Tp>
        static _Tp*
        __copy_move_b(const _Tp* __first, const _Tp* __last, _Tp* __result)
        {

   using __assignable = conditional<_IsMove,
        is_move_assignable<_Tp>,
        is_copy_assignable<_Tp>>;

   static_assert( __assignable::type::value, "type is not assignable" );

   const ptrdiff_t _Num = __last - __first;
   if (_Num)
     __builtin_memmove(__result - _Num, __first, sizeof(_Tp) * _Num);
   return __result - _Num;
 }
    };

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      typedef typename iterator_traits<_BI1>::value_type _ValueType1;
      typedef typename iterator_traits<_BI2>::value_type _ValueType2;
      typedef typename iterator_traits<_BI1>::iterator_category _Category;
      const bool __simple = (__is_trivial(_ValueType1)
                      && __is_pointer<_BI1>::__value
                      && __is_pointer<_BI2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__copy_move_backward<_IsMove, __simple,
                                _Category>::__copy_move_b(__first,
         __last,
         __result);
    }

  template<bool _IsMove, typename _BI1, typename _BI2>
    inline _BI2
    __copy_move_backward_a2(_BI1 __first, _BI1 __last, _BI2 __result)
    {
      return _BI2(std::__copy_move_backward_a<_IsMove>
    (std::__niter_base(__first), std::__niter_base(__last),
     std::__niter_base(__result)));
    }
# 620 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    copy_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {

     
     
     


      ;

      return (std::__copy_move_backward_a2<__is_move_iterator<_BI1>::__value>
       (std::__miter_base(__first), std::__miter_base(__last),
        __result));
    }
# 656 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _BI1, typename _BI2>
    inline _BI2
    move_backward(_BI1 __first, _BI1 __last, _BI2 __result)
    {

     
     
     


      ;

      return std::__copy_move_backward_a2<true>(std::__miter_base(__first),
      std::__miter_base(__last),
      __result);
    }






  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
       const _Tp& __value)
    {
      for (; __first != __last; ++__first)
 *__first = __value;
    }

  template<typename _ForwardIterator, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, void>::__type
    __fill_a(_ForwardIterator __first, _ForwardIterator __last,
      const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (; __first != __last; ++__first)
 *__first = __tmp;
    }


  template<typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, void>::__type
    __fill_a(_Tp* __first, _Tp* __last, const _Tp& __c)
    {
      const _Tp __tmp = __c;
      if (const size_t __len = __last - __first)
 __builtin_memset(__first, static_cast<unsigned char>(__tmp), __len);
    }
# 722 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline void
    fill(_ForwardIterator __first, _ForwardIterator __last, const _Tp& __value)
    {

     

      ;

      std::__fill_a(std::__niter_base(__first), std::__niter_base(__last),
      __value);
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<!__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, ++__first)
 *__first = __value;
      return __first;
    }

  template<typename _OutputIterator, typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_scalar<_Tp>::__value, _OutputIterator>::__type
    __fill_n_a(_OutputIterator __first, _Size __n, const _Tp& __value)
    {
      const _Tp __tmp = __value;
      for (__decltype(__n + 0) __niter = __n;
    __niter > 0; --__niter, ++__first)
 *__first = __tmp;
      return __first;
    }

  template<typename _Size, typename _Tp>
    inline typename
    __gnu_cxx::__enable_if<__is_byte<_Tp>::__value, _Tp*>::__type
    __fill_n_a(_Tp* __first, _Size __n, const _Tp& __c)
    {
      std::__fill_a(__first, __first + __n, __c);
      return __first + __n;
    }
# 782 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _OI, typename _Size, typename _Tp>
    inline _OI
    fill_n(_OI __first, _Size __n, const _Tp& __value)
    {

     

      return _OI(std::__fill_n_a(std::__niter_base(__first), __n, __value));
    }

  template<bool _BoolType>
    struct __equal
    {
      template<typename _II1, typename _II2>
        static bool
        equal(_II1 __first1, _II1 __last1, _II2 __first2)
        {
   for (; __first1 != __last1; ++__first1, (void)++__first2)
     if (!(*__first1 == *__first2))
       return false;
   return true;
 }
    };

  template<>
    struct __equal<true>
    {
      template<typename _Tp>
        static bool
        equal(const _Tp* __first1, const _Tp* __last1, const _Tp* __first2)
        {
   if (const size_t __len = (__last1 - __first1))
     return !__builtin_memcmp(__first1, __first2, sizeof(_Tp) * __len);
   return true;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __equal_aux(_II1 __first1, _II1 __last1, _II2 __first2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple = ((__is_integer<_ValueType1>::__value
         || __is_pointer<_ValueType1>::__value)
                      && __is_pointer<_II1>::__value
                      && __is_pointer<_II2>::__value
        && __are_same<_ValueType1, _ValueType2>::__value);

      return std::__equal<__simple>::equal(__first1, __last1, __first2);
    }

  template<typename, typename>
    struct __lc_rai
    {
      template<typename _II1, typename _II2>
        static _II1
        __newlast1(_II1, _II1 __last1, _II2, _II2)
        { return __last1; }

      template<typename _II>
        static bool
        __cnd2(_II __first, _II __last)
        { return __first != __last; }
    };

  template<>
    struct __lc_rai<random_access_iterator_tag, random_access_iterator_tag>
    {
      template<typename _RAI1, typename _RAI2>
        static _RAI1
        __newlast1(_RAI1 __first1, _RAI1 __last1,
     _RAI2 __first2, _RAI2 __last2)
        {
   const typename iterator_traits<_RAI1>::difference_type
     __diff1 = __last1 - __first1;
   const typename iterator_traits<_RAI2>::difference_type
     __diff2 = __last2 - __first2;
   return __diff2 < __diff1 ? __first1 + __diff2 : __last1;
 }

      template<typename _RAI>
        static bool
        __cnd2(_RAI, _RAI)
        { return true; }
    };

  template<typename _II1, typename _II2, typename _Compare>
    bool
    __lexicographical_compare_impl(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2,
       _Compare __comp)
    {
      typedef typename iterator_traits<_II1>::iterator_category _Category1;
      typedef typename iterator_traits<_II2>::iterator_category _Category2;
      typedef std::__lc_rai<_Category1, _Category2> __rai_type;

      __last1 = __rai_type::__newlast1(__first1, __last1, __first2, __last2);
      for (; __first1 != __last1 && __rai_type::__cnd2(__first2, __last2);
    ++__first1, (void)++__first2)
 {
   if (__comp(__first1, __first2))
     return true;
   if (__comp(__first2, __first1))
     return false;
 }
      return __first1 == __last1 && __first2 != __last2;
    }

  template<bool _BoolType>
    struct __lexicographical_compare
    {
      template<typename _II1, typename _II2>
        static bool __lc(_II1, _II1, _II2, _II2);
    };

  template<bool _BoolType>
    template<typename _II1, typename _II2>
      bool
      __lexicographical_compare<_BoolType>::
      __lc(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
      {
 return std::__lexicographical_compare_impl(__first1, __last1,
         __first2, __last2,
     __gnu_cxx::__ops::__iter_less_iter());
      }

  template<>
    struct __lexicographical_compare<true>
    {
      template<typename _Tp, typename _Up>
        static bool
        __lc(const _Tp* __first1, const _Tp* __last1,
      const _Up* __first2, const _Up* __last2)
 {
   const size_t __len1 = __last1 - __first1;
   const size_t __len2 = __last2 - __first2;
   if (const size_t __len = std::min(__len1, __len2))
     if (int __result = __builtin_memcmp(__first1, __first2, __len))
       return __result < 0;
   return __len1 < __len2;
 }
    };

  template<typename _II1, typename _II2>
    inline bool
    __lexicographical_compare_aux(_II1 __first1, _II1 __last1,
      _II2 __first2, _II2 __last2)
    {
      typedef typename iterator_traits<_II1>::value_type _ValueType1;
      typedef typename iterator_traits<_II2>::value_type _ValueType2;
      const bool __simple =
 (__is_byte<_ValueType1>::__value && __is_byte<_ValueType2>::__value
  && !__gnu_cxx::__numeric_traits<_ValueType1>::__is_signed
  && !__gnu_cxx::__numeric_traits<_ValueType2>::__is_signed
  && __is_pointer<_II1>::__value
  && __is_pointer<_II2>::__value);

      return std::__lexicographical_compare<__simple>::__lc(__first1, __last1,
           __first2, __last2);
    }

  template<typename _ForwardIterator, typename _Tp, typename _Compare>
    _ForwardIterator
    __lower_bound(_ForwardIterator __first, _ForwardIterator __last,
    const _Tp& __val, _Compare __comp)
    {
      typedef typename iterator_traits<_ForwardIterator>::difference_type
 _DistanceType;

      _DistanceType __len = std::distance(__first, __last);

      while (__len > 0)
 {
   _DistanceType __half = __len >> 1;
   _ForwardIterator __middle = __first;
   std::advance(__middle, __half);
   if (__comp(__middle, __val))
     {
       __first = __middle;
       ++__first;
       __len = __len - __half - 1;
     }
   else
     __len = __half;
 }
      return __first;
    }
# 982 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _ForwardIterator, typename _Tp>
    inline _ForwardIterator
    lower_bound(_ForwardIterator __first, _ForwardIterator __last,
  const _Tp& __val)
    {

     
     

      ;

      return std::__lower_bound(__first, __last, __val,
    __gnu_cxx::__ops::__iter_less_val());
    }



  inline constexpr int
  __lg(int __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline constexpr unsigned
  __lg(unsigned __n)
  { return sizeof(int) * 8 - 1 - __builtin_clz(__n); }

  inline constexpr long
  __lg(long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline constexpr unsigned long
  __lg(unsigned long __n)
  { return sizeof(long) * 8 - 1 - __builtin_clzl(__n); }

  inline constexpr long long
  __lg(long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }

  inline constexpr unsigned long long
  __lg(unsigned long long __n)
  { return sizeof(long long) * 8 - 1 - __builtin_clzll(__n); }




# 1039 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2)
    {

     
     
     


      ;

      return std::__equal_aux(std::__niter_base(__first1),
         std::__niter_base(__last1),
         std::__niter_base(__first2));
    }
# 1071 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      for (; __first1 != __last1; ++__first1, (void)++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return true;
    }
# 1104 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    equal(_II1 __first1, _II1 __last1, _II2 __first2, _II2 __last2)
    {

     
     
     


      ;
      ;

      using _RATag = random_access_iterator_tag;
      using _Cat1 = typename iterator_traits<_II1>::iterator_category;
      using _Cat2 = typename iterator_traits<_II2>::iterator_category;
      using _RAIters = __and_<is_same<_Cat1, _RATag>, is_same<_Cat2, _RATag>>;
      if (_RAIters())
 {
   auto __d1 = std::distance(__first1, __last1);
   auto __d2 = std::distance(__first2, __last2);
   if (__d1 != __d2)
     return false;
   return std::equal(__first1, __last1, __first2);
 }

      for (; __first1 != __last1 && __first2 != __last2;
   ++__first1, (void)++__first2)
 if (!(*__first1 == *__first2))
   return false;
      return __first1 == __last1 && __first2 == __last2;
    }
# 1153 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _IIter1, typename _IIter2, typename _BinaryPredicate>
    inline bool
    equal(_IIter1 __first1, _IIter1 __last1,
   _IIter2 __first2, _IIter2 __last2, _BinaryPredicate __binary_pred)
    {

     
     
      ;
      ;

      using _RATag = random_access_iterator_tag;
      using _Cat1 = typename iterator_traits<_IIter1>::iterator_category;
      using _Cat2 = typename iterator_traits<_IIter2>::iterator_category;
      using _RAIters = __and_<is_same<_Cat1, _RATag>, is_same<_Cat2, _RATag>>;
      if (_RAIters())
 {
   auto __d1 = std::distance(__first1, __last1);
   auto __d2 = std::distance(__first2, __last2);
   if (__d1 != __d2)
     return false;
   return std::equal(__first1, __last1, __first2,
           __binary_pred);
 }

      for (; __first1 != __last1 && __first2 != __last2;
   ++__first1, (void)++__first2)
 if (!bool(__binary_pred(*__first1, *__first2)))
   return false;
      return __first1 == __last1 && __first2 == __last2;
    }
# 1201 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2)
    {





     
     
     
     
      ;
      ;

      return std::__lexicographical_compare_aux(std::__niter_base(__first1),
      std::__niter_base(__last1),
      std::__niter_base(__first2),
      std::__niter_base(__last2));
    }
# 1237 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _II1, typename _II2, typename _Compare>
    inline bool
    lexicographical_compare(_II1 __first1, _II1 __last1,
       _II2 __first2, _II2 __last2, _Compare __comp)
    {

     
     
      ;
      ;

      return std::__lexicographical_compare_impl
 (__first1, __last1, __first2, __last2,
  __gnu_cxx::__ops::__iter_comp_iter(__comp));
    }

  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    __mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {
      while (__first1 != __last1 && __binary_pred(__first1, __first2))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1280 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2)
    {

     
     
     


      ;

      return std::__mismatch(__first1, __last1, __first2,
        __gnu_cxx::__ops::__iter_equal_to_iter());
    }
# 1313 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _BinaryPredicate __binary_pred)
    {

     
     
      ;

      return std::__mismatch(__first1, __last1, __first2,
 __gnu_cxx::__ops::__iter_comp_iter(__binary_pred));
    }



  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    pair<_InputIterator1, _InputIterator2>
    __mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
        _InputIterator2 __first2, _InputIterator2 __last2,
        _BinaryPredicate __binary_pred)
    {
      while (__first1 != __last1 && __first2 != __last2
      && __binary_pred(__first1, __first2))
        {
   ++__first1;
   ++__first2;
        }
      return pair<_InputIterator1, _InputIterator2>(__first1, __first2);
    }
# 1360 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _InputIterator2 __last2)
    {

     
     
     


      ;
      ;

      return std::__mismatch(__first1, __last1, __first2, __last2,
        __gnu_cxx::__ops::__iter_equal_to_iter());
    }
# 1395 "/usr/include/c++/6/bits/stl_algobase.h" 3
  template<typename _InputIterator1, typename _InputIterator2,
    typename _BinaryPredicate>
    inline pair<_InputIterator1, _InputIterator2>
    mismatch(_InputIterator1 __first1, _InputIterator1 __last1,
      _InputIterator2 __first2, _InputIterator2 __last2,
      _BinaryPredicate __binary_pred)
    {

     
     
      ;
      ;

      return std::__mismatch(__first1, __last1, __first2, __last2,
        __gnu_cxx::__ops::__iter_comp_iter(__binary_pred));
    }



}
# 40 "/usr/include/c++/6/bits/char_traits.h" 2 3
# 1 "/usr/include/c++/6/bits/postypes.h" 1 3
# 38 "/usr/include/c++/6/bits/postypes.h" 3
       
# 39 "/usr/include/c++/6/bits/postypes.h" 3

# 1 "/usr/include/c++/6/cwchar" 1 3
# 39 "/usr/include/c++/6/cwchar" 3
       
# 40 "/usr/include/c++/6/cwchar" 3




# 1 "/usr/include/wchar.h" 1 3 4
# 36 "/usr/include/wchar.h" 3 4
# 1 "/usr/include/stdio.h" 1 3 4
# 44 "/usr/include/stdio.h" 3 4
struct _IO_FILE;



typedef struct _IO_FILE FILE;





# 64 "/usr/include/stdio.h" 3 4
typedef struct _IO_FILE __FILE;
# 37 "/usr/include/wchar.h" 2 3 4


# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stdarg.h" 1 3 4
# 40 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stdarg.h" 3 4
typedef __builtin_va_list __gnuc_va_list;
# 40 "/usr/include/wchar.h" 2 3 4

# 1 "/usr/include/arm-linux-gnueabihf/bits/wchar.h" 1 3 4
# 42 "/usr/include/wchar.h" 2 3 4
# 51 "/usr/include/wchar.h" 3 4
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 216 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 3 4
typedef unsigned int size_t;
# 357 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 3 4
typedef unsigned int wint_t;
# 52 "/usr/include/wchar.h" 2 3 4
# 82 "/usr/include/wchar.h" 3 4
typedef struct
{
  int __count;
  union
  {

    unsigned int __wch;



    char __wchb[4];
  } __value;
} __mbstate_t;
# 104 "/usr/include/wchar.h" 3 4


typedef __mbstate_t mbstate_t;






# 132 "/usr/include/wchar.h" 3 4
extern "C" {




struct tm;









extern wchar_t *wcscpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern wchar_t *wcsncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern wchar_t *wcscat (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern wchar_t *wcsncat (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int wcscmp (const wchar_t *__s1, const wchar_t *__s2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));

extern int wcsncmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));




extern int wcscasecmp (const wchar_t *__s1, const wchar_t *__s2) throw ();


extern int wcsncasecmp (const wchar_t *__s1, const wchar_t *__s2,
   size_t __n) throw ();



# 1 "/usr/include/xlocale.h" 1 3 4
# 27 "/usr/include/xlocale.h" 3 4
typedef struct __locale_struct
{

  struct __locale_data *__locales[13];


  const unsigned short int *__ctype_b;
  const int *__ctype_tolower;
  const int *__ctype_toupper;


  const char *__names[13];
} *__locale_t;


typedef __locale_t locale_t;
# 184 "/usr/include/wchar.h" 2 3 4

extern int wcscasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
    __locale_t __loc) throw ();

extern int wcsncasecmp_l (const wchar_t *__s1, const wchar_t *__s2,
     size_t __n, __locale_t __loc) throw ();





extern int wcscoll (const wchar_t *__s1, const wchar_t *__s2) throw ();



extern size_t wcsxfrm (wchar_t *__restrict __s1,
         const wchar_t *__restrict __s2, size_t __n) throw ();








extern int wcscoll_l (const wchar_t *__s1, const wchar_t *__s2,
        __locale_t __loc) throw ();




extern size_t wcsxfrm_l (wchar_t *__s1, const wchar_t *__s2,
    size_t __n, __locale_t __loc) throw ();


extern wchar_t *wcsdup (const wchar_t *__s) throw () __attribute__ ((__malloc__));





extern "C++" wchar_t *wcschr (wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcschr") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcschr (const wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcschr") __attribute__ ((__pure__));






extern "C++" wchar_t *wcsrchr (wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcsrchr") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcsrchr (const wchar_t *__wcs, wchar_t __wc)
     throw () __asm ("wcsrchr") __attribute__ ((__pure__));









extern wchar_t *wcschrnul (const wchar_t *__s, wchar_t __wc)
     throw () __attribute__ ((__pure__));





extern size_t wcscspn (const wchar_t *__wcs, const wchar_t *__reject)
     throw () __attribute__ ((__pure__));


extern size_t wcsspn (const wchar_t *__wcs, const wchar_t *__accept)
     throw () __attribute__ ((__pure__));


extern "C++" wchar_t *wcspbrk (wchar_t *__wcs, const wchar_t *__accept)
     throw () __asm ("wcspbrk") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcspbrk (const wchar_t *__wcs,
         const wchar_t *__accept)
     throw () __asm ("wcspbrk") __attribute__ ((__pure__));






extern "C++" wchar_t *wcsstr (wchar_t *__haystack, const wchar_t *__needle)
     throw () __asm ("wcsstr") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcsstr (const wchar_t *__haystack,
        const wchar_t *__needle)
     throw () __asm ("wcsstr") __attribute__ ((__pure__));






extern wchar_t *wcstok (wchar_t *__restrict __s,
   const wchar_t *__restrict __delim,
   wchar_t **__restrict __ptr) throw ();


extern size_t wcslen (const wchar_t *__s) throw () __attribute__ ((__pure__));





extern "C++" wchar_t *wcswcs (wchar_t *__haystack, const wchar_t *__needle)
     throw () __asm ("wcswcs") __attribute__ ((__pure__));
extern "C++" const wchar_t *wcswcs (const wchar_t *__haystack,
        const wchar_t *__needle)
     throw () __asm ("wcswcs") __attribute__ ((__pure__));
# 309 "/usr/include/wchar.h" 3 4
extern size_t wcsnlen (const wchar_t *__s, size_t __maxlen)
     throw () __attribute__ ((__pure__));






extern "C++" wchar_t *wmemchr (wchar_t *__s, wchar_t __c, size_t __n)
     throw () __asm ("wmemchr") __attribute__ ((__pure__));
extern "C++" const wchar_t *wmemchr (const wchar_t *__s, wchar_t __c,
         size_t __n)
     throw () __asm ("wmemchr") __attribute__ ((__pure__));






extern int wmemcmp (const wchar_t *__s1, const wchar_t *__s2, size_t __n)
     throw () __attribute__ ((__pure__));


extern wchar_t *wmemcpy (wchar_t *__restrict __s1,
    const wchar_t *__restrict __s2, size_t __n) throw ();



extern wchar_t *wmemmove (wchar_t *__s1, const wchar_t *__s2, size_t __n)
     throw ();


extern wchar_t *wmemset (wchar_t *__s, wchar_t __c, size_t __n) throw ();





extern wchar_t *wmempcpy (wchar_t *__restrict __s1,
     const wchar_t *__restrict __s2, size_t __n)
     throw ();






extern wint_t btowc (int __c) throw ();



extern int wctob (wint_t __c) throw ();



extern int mbsinit (const mbstate_t *__ps) throw () __attribute__ ((__pure__));



extern size_t mbrtowc (wchar_t *__restrict __pwc,
         const char *__restrict __s, size_t __n,
         mbstate_t *__restrict __p) throw ();


extern size_t wcrtomb (char *__restrict __s, wchar_t __wc,
         mbstate_t *__restrict __ps) throw ();


extern size_t __mbrlen (const char *__restrict __s, size_t __n,
   mbstate_t *__restrict __ps) throw ();
extern size_t mbrlen (const char *__restrict __s, size_t __n,
        mbstate_t *__restrict __ps) throw ();

# 408 "/usr/include/wchar.h" 3 4



extern size_t mbsrtowcs (wchar_t *__restrict __dst,
    const char **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) throw ();



extern size_t wcsrtombs (char *__restrict __dst,
    const wchar_t **__restrict __src, size_t __len,
    mbstate_t *__restrict __ps) throw ();






extern size_t mbsnrtowcs (wchar_t *__restrict __dst,
     const char **__restrict __src, size_t __nmc,
     size_t __len, mbstate_t *__restrict __ps) throw ();



extern size_t wcsnrtombs (char *__restrict __dst,
     const wchar_t **__restrict __src,
     size_t __nwc, size_t __len,
     mbstate_t *__restrict __ps) throw ();






extern int wcwidth (wchar_t __c) throw ();



extern int wcswidth (const wchar_t *__s, size_t __n) throw ();






extern double wcstod (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr) throw ();





extern float wcstof (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) throw ();
extern long double wcstold (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr) throw ();







extern long int wcstol (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, int __base) throw ();



extern unsigned long int wcstoul (const wchar_t *__restrict __nptr,
      wchar_t **__restrict __endptr, int __base)
     throw ();






__extension__
extern long long int wcstoll (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, int __base)
     throw ();



__extension__
extern unsigned long long int wcstoull (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr,
     int __base) throw ();






__extension__
extern long long int wcstoq (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr, int __base)
     throw ();



__extension__
extern unsigned long long int wcstouq (const wchar_t *__restrict __nptr,
           wchar_t **__restrict __endptr,
           int __base) throw ();
# 533 "/usr/include/wchar.h" 3 4
extern long int wcstol_l (const wchar_t *__restrict __nptr,
     wchar_t **__restrict __endptr, int __base,
     __locale_t __loc) throw ();

extern unsigned long int wcstoul_l (const wchar_t *__restrict __nptr,
        wchar_t **__restrict __endptr,
        int __base, __locale_t __loc) throw ();

__extension__
extern long long int wcstoll_l (const wchar_t *__restrict __nptr,
    wchar_t **__restrict __endptr,
    int __base, __locale_t __loc) throw ();

__extension__
extern unsigned long long int wcstoull_l (const wchar_t *__restrict __nptr,
       wchar_t **__restrict __endptr,
       int __base, __locale_t __loc)
     throw ();

extern double wcstod_l (const wchar_t *__restrict __nptr,
   wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern float wcstof_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr, __locale_t __loc)
     throw ();

extern long double wcstold_l (const wchar_t *__restrict __nptr,
         wchar_t **__restrict __endptr,
         __locale_t __loc) throw ();






extern wchar_t *wcpcpy (wchar_t *__restrict __dest,
   const wchar_t *__restrict __src) throw ();



extern wchar_t *wcpncpy (wchar_t *__restrict __dest,
    const wchar_t *__restrict __src, size_t __n)
     throw ();






extern __FILE *open_wmemstream (wchar_t **__bufloc, size_t *__sizeloc) throw ();






extern int fwide (__FILE *__fp, int __mode) throw ();






extern int fwprintf (__FILE *__restrict __stream,
       const wchar_t *__restrict __format, ...)
                                                           ;




extern int wprintf (const wchar_t *__restrict __format, ...)
                                                           ;

extern int swprintf (wchar_t *__restrict __s, size_t __n,
       const wchar_t *__restrict __format, ...)
     throw () ;





extern int vfwprintf (__FILE *__restrict __s,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
                                                           ;




extern int vwprintf (const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                           ;


extern int vswprintf (wchar_t *__restrict __s, size_t __n,
        const wchar_t *__restrict __format,
        __gnuc_va_list __arg)
     throw () ;






extern int fwscanf (__FILE *__restrict __stream,
      const wchar_t *__restrict __format, ...)
                                                          ;




extern int wscanf (const wchar_t *__restrict __format, ...)
                                                          ;

extern int swscanf (const wchar_t *__restrict __s,
      const wchar_t *__restrict __format, ...)
     throw () ;
# 683 "/usr/include/wchar.h" 3 4









extern int vfwscanf (__FILE *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
                                                          ;




extern int vwscanf (const wchar_t *__restrict __format,
      __gnuc_va_list __arg)
                                                          ;

extern int vswscanf (const wchar_t *__restrict __s,
       const wchar_t *__restrict __format,
       __gnuc_va_list __arg)
     throw () ;
# 739 "/usr/include/wchar.h" 3 4









extern wint_t fgetwc (__FILE *__stream);
extern wint_t getwc (__FILE *__stream);





extern wint_t getwchar (void);






extern wint_t fputwc (wchar_t __wc, __FILE *__stream);
extern wint_t putwc (wchar_t __wc, __FILE *__stream);





extern wint_t putwchar (wchar_t __wc);







extern wchar_t *fgetws (wchar_t *__restrict __ws, int __n,
   __FILE *__restrict __stream);





extern int fputws (const wchar_t *__restrict __ws,
     __FILE *__restrict __stream);






extern wint_t ungetwc (wint_t __wc, __FILE *__stream);

# 804 "/usr/include/wchar.h" 3 4
extern wint_t getwc_unlocked (__FILE *__stream);
extern wint_t getwchar_unlocked (void);







extern wint_t fgetwc_unlocked (__FILE *__stream);







extern wint_t fputwc_unlocked (wchar_t __wc, __FILE *__stream);
# 830 "/usr/include/wchar.h" 3 4
extern wint_t putwc_unlocked (wchar_t __wc, __FILE *__stream);
extern wint_t putwchar_unlocked (wchar_t __wc);
# 840 "/usr/include/wchar.h" 3 4
extern wchar_t *fgetws_unlocked (wchar_t *__restrict __ws, int __n,
     __FILE *__restrict __stream);







extern int fputws_unlocked (const wchar_t *__restrict __ws,
       __FILE *__restrict __stream);







extern size_t wcsftime (wchar_t *__restrict __s, size_t __maxsize,
   const wchar_t *__restrict __format,
   const struct tm *__restrict __tp) throw ();







extern size_t wcsftime_l (wchar_t *__restrict __s, size_t __maxsize,
     const wchar_t *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) throw ();
# 894 "/usr/include/wchar.h" 3 4
}
# 45 "/usr/include/c++/6/cwchar" 2 3
# 62 "/usr/include/c++/6/cwchar" 3
namespace std
{
  using ::mbstate_t;
}
# 135 "/usr/include/c++/6/cwchar" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


  using ::wint_t;

  using ::btowc;
  using ::fgetwc;
  using ::fgetws;
  using ::fputwc;
  using ::fputws;
  using ::fwide;
  using ::fwprintf;
  using ::fwscanf;
  using ::getwc;
  using ::getwchar;
  using ::mbrlen;
  using ::mbrtowc;
  using ::mbsinit;
  using ::mbsrtowcs;
  using ::putwc;
  using ::putwchar;

  using ::swprintf;

  using ::swscanf;
  using ::ungetwc;
  using ::vfwprintf;

  using ::vfwscanf;


  using ::vswprintf;


  using ::vswscanf;

  using ::vwprintf;

  using ::vwscanf;

  using ::wcrtomb;
  using ::wcscat;
  using ::wcscmp;
  using ::wcscoll;
  using ::wcscpy;
  using ::wcscspn;
  using ::wcsftime;
  using ::wcslen;
  using ::wcsncat;
  using ::wcsncmp;
  using ::wcsncpy;
  using ::wcsrtombs;
  using ::wcsspn;
  using ::wcstod;

  using ::wcstof;

  using ::wcstok;
  using ::wcstol;
  using ::wcstoul;
  using ::wcsxfrm;
  using ::wctob;
  using ::wmemcmp;
  using ::wmemcpy;
  using ::wmemmove;
  using ::wmemset;
  using ::wprintf;
  using ::wscanf;
  using ::wcschr;
  using ::wcspbrk;
  using ::wcsrchr;
  using ::wcsstr;
  using ::wmemchr;
# 232 "/usr/include/c++/6/cwchar" 3

}







namespace __gnu_cxx
{





  using ::wcstold;
# 257 "/usr/include/c++/6/cwchar" 3
  using ::wcstoll;
  using ::wcstoull;

}

namespace std
{
  using ::__gnu_cxx::wcstold;
  using ::__gnu_cxx::wcstoll;
  using ::__gnu_cxx::wcstoull;
}
# 277 "/usr/include/c++/6/cwchar" 3
namespace std
{

  using std::wcstof;


  using std::vfwscanf;


  using std::vswscanf;


  using std::vwscanf;



  using std::wcstold;
  using std::wcstoll;
  using std::wcstoull;

}
# 41 "/usr/include/c++/6/bits/postypes.h" 2 3
# 68 "/usr/include/c++/6/bits/postypes.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 90 "/usr/include/c++/6/bits/postypes.h" 3
  typedef long long streamoff;







  typedef ptrdiff_t streamsize;
# 111 "/usr/include/c++/6/bits/postypes.h" 3
  template<typename _StateT>
    class fpos
    {
    private:
      streamoff _M_off;
      _StateT _M_state;

    public:




      fpos()
      : _M_off(0), _M_state() { }
# 133 "/usr/include/c++/6/bits/postypes.h" 3
      fpos(streamoff __off)
      : _M_off(__off), _M_state() { }


      operator streamoff() const { return _M_off; }


      void
      state(_StateT __st)
      { _M_state = __st; }


      _StateT
      state() const
      { return _M_state; }





      fpos&
      operator+=(streamoff __off)
      {
 _M_off += __off;
 return *this;
      }





      fpos&
      operator-=(streamoff __off)
      {
 _M_off -= __off;
 return *this;
      }







      fpos
      operator+(streamoff __off) const
      {
 fpos __pos(*this);
 __pos += __off;
 return __pos;
      }







      fpos
      operator-(streamoff __off) const
      {
 fpos __pos(*this);
 __pos -= __off;
 return __pos;
      }






      streamoff
      operator-(const fpos& __other) const
      { return _M_off - __other._M_off; }
    };






  template<typename _StateT>
    inline bool
    operator==(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) == streamoff(__rhs); }

  template<typename _StateT>
    inline bool
    operator!=(const fpos<_StateT>& __lhs, const fpos<_StateT>& __rhs)
    { return streamoff(__lhs) != streamoff(__rhs); }





  typedef fpos<mbstate_t> streampos;

  typedef fpos<mbstate_t> wstreampos;



  typedef fpos<mbstate_t> u16streampos;

  typedef fpos<mbstate_t> u32streampos;



}
# 41 "/usr/include/c++/6/bits/char_traits.h" 2 3
# 1 "/usr/include/c++/6/cwchar" 1 3
# 39 "/usr/include/c++/6/cwchar" 3
       
# 40 "/usr/include/c++/6/cwchar" 3




# 1 "/usr/include/wchar.h" 1 3 4
# 45 "/usr/include/c++/6/cwchar" 2 3
# 42 "/usr/include/c++/6/bits/char_traits.h" 2 3

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{

# 57 "/usr/include/c++/6/bits/char_traits.h" 3
  template<typename _CharT>
    struct _Char_types
    {
      typedef unsigned long int_type;
      typedef std::streampos pos_type;
      typedef std::streamoff off_type;
      typedef std::mbstate_t state_type;
    };
# 82 "/usr/include/c++/6/bits/char_traits.h" 3
  template<typename _CharT>
    struct char_traits
    {
      typedef _CharT char_type;
      typedef typename _Char_types<_CharT>::int_type int_type;
      typedef typename _Char_types<_CharT>::pos_type pos_type;
      typedef typename _Char_types<_CharT>::off_type off_type;
      typedef typename _Char_types<_CharT>::state_type state_type;

      static void
      assign(char_type& __c1, const char_type& __c2)
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2)
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2)
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, std::size_t __n);

      static std::size_t
      length(const char_type* __s);

      static const char_type*
      find(const char_type* __s, std::size_t __n, const char_type& __a);

      static char_type*
      move(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      copy(char_type* __s1, const char_type* __s2, std::size_t __n);

      static char_type*
      assign(char_type* __s, std::size_t __n, char_type __a);

      static constexpr char_type
      to_char_type(const int_type& __c)
      { return static_cast<char_type>(__c); }

      static constexpr int_type
      to_int_type(const char_type& __c)
      { return static_cast<int_type>(__c); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2)
      { return __c1 == __c2; }

      static constexpr int_type
      eof()
      { return static_cast<int_type>(-1); }

      static constexpr int_type
      not_eof(const int_type& __c)
      { return !eq_int_type(__c, eof()) ? __c : to_int_type(char_type()); }
    };

  template<typename _CharT>
    int
    char_traits<_CharT>::
    compare(const char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
 if (lt(__s1[__i], __s2[__i]))
   return -1;
 else if (lt(__s2[__i], __s1[__i]))
   return 1;
      return 0;
    }

  template<typename _CharT>
    std::size_t
    char_traits<_CharT>::
    length(const char_type* __p)
    {
      std::size_t __i = 0;
      while (!eq(__p[__i], char_type()))
        ++__i;
      return __i;
    }

  template<typename _CharT>
    const typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    find(const char_type* __s, std::size_t __n, const char_type& __a)
    {
      for (std::size_t __i = 0; __i < __n; ++__i)
        if (eq(__s[__i], __a))
          return __s + __i;
      return 0;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    move(char_type* __s1, const char_type* __s2, std::size_t __n)
    {
      return static_cast<_CharT*>(__builtin_memmove(__s1, __s2,
          __n * sizeof(char_type)));
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    copy(char_type* __s1, const char_type* __s2, std::size_t __n)
    {

      std::copy(__s2, __s2 + __n, __s1);
      return __s1;
    }

  template<typename _CharT>
    typename char_traits<_CharT>::char_type*
    char_traits<_CharT>::
    assign(char_type* __s, std::size_t __n, char_type __a)
    {

      std::fill_n(__s, __n, __a);
      return __s;
    }


}

namespace std __attribute__ ((__visibility__ ("default")))
{

# 226 "/usr/include/c++/6/bits/char_traits.h" 3
  template<class _CharT>
    struct char_traits : public __gnu_cxx::char_traits<_CharT>
    { };



  template<>
    struct char_traits<char>
    {
      typedef char char_type;
      typedef int int_type;
      typedef streampos pos_type;
      typedef streamoff off_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2) noexcept
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2) noexcept
      {

 return (static_cast<unsigned char>(__c1)
  < static_cast<unsigned char>(__c2));
      }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return 0;
 return __builtin_memcmp(__s1, __s2, __n);
      }

      static size_t
      length(const char_type* __s)
      { return __builtin_strlen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 if (__n == 0)
   return 0;
 return static_cast<const char_type*>(__builtin_memchr(__s, __a, __n));
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return static_cast<char_type*>(__builtin_memmove(__s1, __s2, __n));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return static_cast<char_type*>(__builtin_memcpy(__s1, __s2, __n));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 if (__n == 0)
   return __s;
 return static_cast<char_type*>(__builtin_memset(__s, __a, __n));
      }

      static constexpr char_type
      to_char_type(const int_type& __c) noexcept
      { return static_cast<char_type>(__c); }



      static constexpr int_type
      to_int_type(const char_type& __c) noexcept
      { return static_cast<int_type>(static_cast<unsigned char>(__c)); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr int_type
      eof() noexcept
      { return static_cast<int_type>(-1); }

      static constexpr int_type
      not_eof(const int_type& __c) noexcept
      { return (__c == eof()) ? 0 : __c; }
  };




  template<>
    struct char_traits<wchar_t>
    {
      typedef wchar_t char_type;
      typedef wint_t int_type;
      typedef streamoff off_type;
      typedef wstreampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2) noexcept
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return 0;
 return wmemcmp(__s1, __s2, __n);
      }

      static size_t
      length(const char_type* __s)
      { return wcslen(__s); }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 if (__n == 0)
   return 0;
 return wmemchr(__s, __a, __n);
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return wmemmove(__s1, __s2, __n);
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return wmemcpy(__s1, __s2, __n);
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 if (__n == 0)
   return __s;
 return wmemset(__s, __a, __n);
      }

      static constexpr char_type
      to_char_type(const int_type& __c) noexcept
      { return char_type(__c); }

      static constexpr int_type
      to_int_type(const char_type& __c) noexcept
      { return int_type(__c); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr int_type
      eof() noexcept
      { return static_cast<int_type>((0xffffffffu)); }

      static constexpr int_type
      not_eof(const int_type& __c) noexcept
      { return eq_int_type(__c, eof()) ? 0 : __c; }
  };



}




# 1 "/usr/include/c++/6/cstdint" 1 3
# 32 "/usr/include/c++/6/cstdint" 3
       
# 33 "/usr/include/c++/6/cstdint" 3
# 41 "/usr/include/c++/6/cstdint" 3
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stdint.h" 1 3 4
# 9 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stdint.h" 3 4
# 1 "/usr/include/stdint.h" 1 3 4
# 27 "/usr/include/stdint.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/wordsize.h" 1 3 4
# 28 "/usr/include/stdint.h" 2 3 4
# 36 "/usr/include/stdint.h" 3 4
typedef signed char int8_t;
typedef short int int16_t;
typedef int int32_t;



__extension__
typedef long long int int64_t;




typedef unsigned char uint8_t;
typedef unsigned short int uint16_t;

typedef unsigned int uint32_t;





__extension__
typedef unsigned long long int uint64_t;






typedef signed char int_least8_t;
typedef short int int_least16_t;
typedef int int_least32_t;



__extension__
typedef long long int int_least64_t;



typedef unsigned char uint_least8_t;
typedef unsigned short int uint_least16_t;
typedef unsigned int uint_least32_t;



__extension__
typedef unsigned long long int uint_least64_t;






typedef signed char int_fast8_t;





typedef int int_fast16_t;
typedef int int_fast32_t;
__extension__
typedef long long int int_fast64_t;



typedef unsigned char uint_fast8_t;





typedef unsigned int uint_fast16_t;
typedef unsigned int uint_fast32_t;
__extension__
typedef unsigned long long int uint_fast64_t;
# 125 "/usr/include/stdint.h" 3 4
typedef int intptr_t;


typedef unsigned int uintptr_t;
# 137 "/usr/include/stdint.h" 3 4
__extension__
typedef long long int intmax_t;
__extension__
typedef unsigned long long int uintmax_t;
# 10 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stdint.h" 2 3 4
# 42 "/usr/include/c++/6/cstdint" 2 3




namespace std
{
  using ::int8_t;
  using ::int16_t;
  using ::int32_t;
  using ::int64_t;

  using ::int_fast8_t;
  using ::int_fast16_t;
  using ::int_fast32_t;
  using ::int_fast64_t;

  using ::int_least8_t;
  using ::int_least16_t;
  using ::int_least32_t;
  using ::int_least64_t;

  using ::intmax_t;
  using ::intptr_t;

  using ::uint8_t;
  using ::uint16_t;
  using ::uint32_t;
  using ::uint64_t;

  using ::uint_fast8_t;
  using ::uint_fast16_t;
  using ::uint_fast32_t;
  using ::uint_fast64_t;

  using ::uint_least8_t;
  using ::uint_least16_t;
  using ::uint_least32_t;
  using ::uint_least64_t;

  using ::uintmax_t;
  using ::uintptr_t;
}
# 421 "/usr/include/c++/6/bits/char_traits.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{


  template<>
    struct char_traits<char16_t>
    {
      typedef char16_t char_type;
      typedef uint_least16_t int_type;
      typedef streamoff off_type;
      typedef u16streampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2) noexcept
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (lt(__s1[__i], __s2[__i]))
     return -1;
   else if (lt(__s2[__i], __s1[__i]))
     return 1;
 return 0;
      }

      static size_t
      length(const char_type* __s)
      {
 size_t __i = 0;
 while (!eq(__s[__i], char_type()))
   ++__i;
 return __i;
      }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (eq(__s[__i], __a))
     return __s + __i;
 return 0;
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return (static_cast<char_type*>
  (__builtin_memmove(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return (static_cast<char_type*>
  (__builtin_memcpy(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   assign(__s[__i], __a);
 return __s;
      }

      static constexpr char_type
      to_char_type(const int_type& __c) noexcept
      { return char_type(__c); }

      static constexpr int_type
      to_int_type(const char_type& __c) noexcept
      { return int_type(__c); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr int_type
      eof() noexcept
      { return static_cast<int_type>(-1); }

      static constexpr int_type
      not_eof(const int_type& __c) noexcept
      { return eq_int_type(__c, eof()) ? 0 : __c; }
    };

  template<>
    struct char_traits<char32_t>
    {
      typedef char32_t char_type;
      typedef uint_least32_t int_type;
      typedef streamoff off_type;
      typedef u32streampos pos_type;
      typedef mbstate_t state_type;

      static void
      assign(char_type& __c1, const char_type& __c2) noexcept
      { __c1 = __c2; }

      static constexpr bool
      eq(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr bool
      lt(const char_type& __c1, const char_type& __c2) noexcept
      { return __c1 < __c2; }

      static int
      compare(const char_type* __s1, const char_type* __s2, size_t __n)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (lt(__s1[__i], __s2[__i]))
     return -1;
   else if (lt(__s2[__i], __s1[__i]))
     return 1;
 return 0;
      }

      static size_t
      length(const char_type* __s)
      {
 size_t __i = 0;
 while (!eq(__s[__i], char_type()))
   ++__i;
 return __i;
      }

      static const char_type*
      find(const char_type* __s, size_t __n, const char_type& __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   if (eq(__s[__i], __a))
     return __s + __i;
 return 0;
      }

      static char_type*
      move(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return (static_cast<char_type*>
  (__builtin_memmove(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      copy(char_type* __s1, const char_type* __s2, size_t __n)
      {
 if (__n == 0)
   return __s1;
 return (static_cast<char_type*>
  (__builtin_memcpy(__s1, __s2, __n * sizeof(char_type))));
      }

      static char_type*
      assign(char_type* __s, size_t __n, char_type __a)
      {
 for (size_t __i = 0; __i < __n; ++__i)
   assign(__s[__i], __a);
 return __s;
      }

      static constexpr char_type
      to_char_type(const int_type& __c) noexcept
      { return char_type(__c); }

      static constexpr int_type
      to_int_type(const char_type& __c) noexcept
      { return int_type(__c); }

      static constexpr bool
      eq_int_type(const int_type& __c1, const int_type& __c2) noexcept
      { return __c1 == __c2; }

      static constexpr int_type
      eof() noexcept
      { return static_cast<int_type>(-1); }

      static constexpr int_type
      not_eof(const int_type& __c) noexcept
      { return eq_int_type(__c, eof()) ? 0 : __c; }
    };


}
# 41 "/usr/include/c++/6/string" 2 3
# 1 "/usr/include/c++/6/bits/allocator.h" 1 3
# 46 "/usr/include/c++/6/bits/allocator.h" 3
# 1 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++allocator.h" 1 3
# 33 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++allocator.h" 3
# 1 "/usr/include/c++/6/ext/new_allocator.h" 1 3
# 33 "/usr/include/c++/6/ext/new_allocator.h" 3
# 1 "/usr/include/c++/6/new" 1 3
# 37 "/usr/include/c++/6/new" 3
       
# 38 "/usr/include/c++/6/new" 3


# 1 "/usr/include/c++/6/exception" 1 3
# 33 "/usr/include/c++/6/exception" 3
       
# 34 "/usr/include/c++/6/exception" 3

#pragma GCC visibility push(default)



# 1 "/usr/include/c++/6/bits/atomic_lockfree_defines.h" 1 3
# 33 "/usr/include/c++/6/bits/atomic_lockfree_defines.h" 3
       
# 34 "/usr/include/c++/6/bits/atomic_lockfree_defines.h" 3
# 40 "/usr/include/c++/6/exception" 2 3


extern "C++" {

namespace std
{
# 62 "/usr/include/c++/6/exception" 3
  class exception
  {
  public:
    exception() noexcept { }
    virtual ~exception() noexcept;



    virtual const char*
    what() const noexcept;
  };



  class bad_exception : public exception
  {
  public:
    bad_exception() noexcept { }



    virtual ~bad_exception() noexcept;


    virtual const char*
    what() const noexcept;
  };


  typedef void (*terminate_handler) ();


  typedef void (*unexpected_handler) ();


  terminate_handler set_terminate(terminate_handler) noexcept;



  terminate_handler get_terminate() noexcept;




  void terminate() noexcept __attribute__ ((__noreturn__));


  unexpected_handler set_unexpected(unexpected_handler) noexcept;



  unexpected_handler get_unexpected() noexcept;




  void unexpected() __attribute__ ((__noreturn__));
# 131 "/usr/include/c++/6/exception" 3
  bool uncaught_exception() noexcept __attribute__ ((__pure__));




  int uncaught_exceptions() noexcept __attribute__ ((__pure__));



}

namespace __gnu_cxx
{

# 162 "/usr/include/c++/6/exception" 3
  void __verbose_terminate_handler();


}

}

#pragma GCC visibility pop


# 1 "/usr/include/c++/6/bits/exception_ptr.h" 1 3
# 34 "/usr/include/c++/6/bits/exception_ptr.h" 3
#pragma GCC visibility push(default)
# 45 "/usr/include/c++/6/bits/exception_ptr.h" 3
extern "C++" {

namespace std
{
  class type_info;





  namespace __exception_ptr
  {
    class exception_ptr;
  }

  using __exception_ptr::exception_ptr;





  exception_ptr current_exception() noexcept;


  void rethrow_exception(exception_ptr) __attribute__ ((__noreturn__));

  namespace __exception_ptr
  {
    using std::rethrow_exception;





    class exception_ptr
    {
      void* _M_exception_object;

      explicit exception_ptr(void* __e) noexcept;

      void _M_addref() noexcept;
      void _M_release() noexcept;

      void *_M_get() const noexcept __attribute__ ((__pure__));

      friend exception_ptr std::current_exception() noexcept;
      friend void std::rethrow_exception(exception_ptr);

    public:
      exception_ptr() noexcept;

      exception_ptr(const exception_ptr&) noexcept;


      exception_ptr(nullptr_t) noexcept
      : _M_exception_object(0)
      { }

      exception_ptr(exception_ptr&& __o) noexcept
      : _M_exception_object(__o._M_exception_object)
      { __o._M_exception_object = 0; }
# 115 "/usr/include/c++/6/bits/exception_ptr.h" 3
      exception_ptr&
      operator=(const exception_ptr&) noexcept;


      exception_ptr&
      operator=(exception_ptr&& __o) noexcept
      {
        exception_ptr(static_cast<exception_ptr&&>(__o)).swap(*this);
        return *this;
      }


      ~exception_ptr() noexcept;

      void
      swap(exception_ptr&) noexcept;
# 142 "/usr/include/c++/6/bits/exception_ptr.h" 3
      explicit operator bool() const
      { return _M_exception_object; }


      friend bool
      operator==(const exception_ptr&, const exception_ptr&)
 noexcept __attribute__ ((__pure__));

      const class std::type_info*
      __cxa_exception_type() const noexcept
 __attribute__ ((__pure__));
    };

    bool
    operator==(const exception_ptr&, const exception_ptr&)
      noexcept __attribute__ ((__pure__));

    bool
    operator!=(const exception_ptr&, const exception_ptr&)
      noexcept __attribute__ ((__pure__));

    inline void
    swap(exception_ptr& __lhs, exception_ptr& __rhs)
    { __lhs.swap(__rhs); }

  }



  template<typename _Ex>
    exception_ptr
    make_exception_ptr(_Ex __ex) noexcept
    {

      try
 {
   throw __ex;
 }
      catch(...)
 {
   return current_exception();
 }



    }





  template<typename _Ex>
    exception_ptr
    copy_exception(_Ex __ex) noexcept __attribute__ ((__deprecated__));

  template<typename _Ex>
    exception_ptr
    copy_exception(_Ex __ex) noexcept
    { return std::make_exception_ptr<_Ex>(__ex); }


}

}

#pragma GCC visibility pop
# 173 "/usr/include/c++/6/exception" 2 3
# 1 "/usr/include/c++/6/bits/nested_exception.h" 1 3
# 33 "/usr/include/c++/6/bits/nested_exception.h" 3
#pragma GCC visibility push(default)
# 48 "/usr/include/c++/6/bits/nested_exception.h" 3
extern "C++" {

namespace std
{






  class nested_exception
  {
    exception_ptr _M_ptr;

  public:
    nested_exception() noexcept : _M_ptr(current_exception()) { }

    nested_exception(const nested_exception&) noexcept = default;

    nested_exception& operator=(const nested_exception&) noexcept = default;

    virtual ~nested_exception() noexcept;

    [[noreturn]]
    void
    rethrow_nested() const
    {
      if (_M_ptr)
 rethrow_exception(_M_ptr);
      std::terminate();
    }

    exception_ptr
    nested_ptr() const noexcept
    { return _M_ptr; }
  };

  template<typename _Except>
    struct _Nested_exception : public _Except, public nested_exception
    {
      explicit _Nested_exception(const _Except& __ex)
      : _Except(__ex)
      { }

      explicit _Nested_exception(_Except&& __ex)
      : _Except(static_cast<_Except&&>(__ex))
      { }
    };




  template<typename _Tp>
    inline void
    __throw_with_nested_impl(_Tp&& __t, true_type)
    {
      using _Up = typename remove_reference<_Tp>::type;
      throw _Nested_exception<_Up>{std::forward<_Tp>(__t)};
    }

  template<typename _Tp>
    inline void
    __throw_with_nested_impl(_Tp&& __t, false_type)
    { throw std::forward<_Tp>(__t); }



  template<typename _Tp>
    [[noreturn]]
    inline void
    throw_with_nested(_Tp&& __t)
    {
      using _Up = typename decay<_Tp>::type;
      using _CopyConstructible
 = __and_<is_copy_constructible<_Up>, is_move_constructible<_Up>>;
      static_assert(_CopyConstructible::value,
   "throw_with_nested argument must be CopyConstructible");
      using __nest = __and_<is_class<_Up>, __bool_constant<!__is_final(_Up)>,
       __not_<is_base_of<nested_exception, _Up>>>;
      std::__throw_with_nested_impl(std::forward<_Tp>(__t), __nest{});
    }


  template<typename _Tp>
    using __rethrow_if_nested_cond = typename enable_if<
      __and_<is_polymorphic<_Tp>,
      __or_<__not_<is_base_of<nested_exception, _Tp>>,
     is_convertible<_Tp*, nested_exception*>>>::value
    >::type;


  template<typename _Ex>
    inline __rethrow_if_nested_cond<_Ex>
    __rethrow_if_nested_impl(const _Ex* __ptr)
    {
      if (auto __ne_ptr = dynamic_cast<const nested_exception*>(__ptr))
 __ne_ptr->rethrow_nested();
    }


  inline void
  __rethrow_if_nested_impl(const void*)
  { }


  template<typename _Ex>
    inline void
    rethrow_if_nested(const _Ex& __ex)
    { std::__rethrow_if_nested_impl(std::__addressof(__ex)); }


}

}



#pragma GCC visibility pop
# 174 "/usr/include/c++/6/exception" 2 3
# 41 "/usr/include/c++/6/new" 2 3

#pragma GCC visibility push(default)

extern "C++" {

namespace std
{






  class bad_alloc : public exception
  {
  public:
    bad_alloc() throw() { }



    virtual ~bad_alloc() throw();


    virtual const char* what() const throw();
  };


  class bad_array_new_length : public bad_alloc
  {
  public:
    bad_array_new_length() throw() { };



    virtual ~bad_array_new_length() throw();


    virtual const char* what() const throw();
  };


  struct nothrow_t
  {

    explicit nothrow_t() = default;

  };

  extern const nothrow_t nothrow;



  typedef void (*new_handler)();



  new_handler set_new_handler(new_handler) throw();



  new_handler get_new_handler() noexcept;

}
# 116 "/usr/include/c++/6/new" 3
void* operator new(std::size_t)
  __attribute__((__externally_visible__));
void* operator new[](std::size_t)
  __attribute__((__externally_visible__));
void operator delete(void*) noexcept
  __attribute__((__externally_visible__));
void operator delete[](void*) noexcept
  __attribute__((__externally_visible__));

void operator delete(void*, std::size_t) noexcept
  __attribute__((__externally_visible__));
void operator delete[](void*, std::size_t) noexcept
  __attribute__((__externally_visible__));

void* operator new(std::size_t, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void* operator new[](std::size_t, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void operator delete(void*, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void operator delete[](void*, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));

void operator delete(void*, std::size_t, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));
void operator delete[](void*, std::size_t, const std::nothrow_t&) noexcept
  __attribute__((__externally_visible__));



inline void* operator new(std::size_t, void* __p) noexcept
{ return __p; }
inline void* operator new[](std::size_t, void* __p) noexcept
{ return __p; }


inline void operator delete (void*, void*) noexcept { }
inline void operator delete[](void*, void*) noexcept { }

}

#pragma GCC visibility pop
# 34 "/usr/include/c++/6/ext/new_allocator.h" 2 3






namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{


  using std::size_t;
  using std::ptrdiff_t;
# 57 "/usr/include/c++/6/ext/new_allocator.h" 3
  template<typename _Tp>
    class new_allocator
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef new_allocator<_Tp1> other; };




      typedef std::true_type propagate_on_container_move_assignment;


      new_allocator() noexcept { }

      new_allocator(const new_allocator&) noexcept { }

      template<typename _Tp1>
        new_allocator(const new_allocator<_Tp1>&) noexcept { }

      ~new_allocator() noexcept { }

      pointer
      address(reference __x) const noexcept
      { return std::__addressof(__x); }

      const_pointer
      address(const_reference __x) const noexcept
      { return std::__addressof(__x); }



      pointer
      allocate(size_type __n, const void* = 0)
      {
 if (__n > this->max_size())
   std::__throw_bad_alloc();

 return static_cast<_Tp*>(::operator new(__n * sizeof(_Tp)));
      }


      void
      deallocate(pointer __p, size_type)
      { ::operator delete(__p); }

      size_type
      max_size() const noexcept
      { return size_t(-1) / sizeof(_Tp); }


      template<typename _Up, typename... _Args>
        void
        construct(_Up* __p, _Args&&... __args)
 { ::new((void *)__p) _Up(std::forward<_Args>(__args)...); }

      template<typename _Up>
        void
        destroy(_Up* __p) { __p->~_Up(); }
# 135 "/usr/include/c++/6/ext/new_allocator.h" 3
    };

  template<typename _Tp>
    inline bool
    operator==(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return true; }

  template<typename _Tp>
    inline bool
    operator!=(const new_allocator<_Tp>&, const new_allocator<_Tp>&)
    { return false; }


}
# 34 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++allocator.h" 2 3


namespace std
{
# 47 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++allocator.h" 3
  template<typename _Tp>
    using __allocator_base = __gnu_cxx::new_allocator<_Tp>;
}
# 47 "/usr/include/c++/6/bits/allocator.h" 2 3
# 57 "/usr/include/c++/6/bits/allocator.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{








  template<>
    class allocator<void>
    {
    public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef void* pointer;
      typedef const void* const_pointer;
      typedef void value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };




      typedef true_type propagate_on_container_move_assignment;

      typedef true_type is_always_equal;

      template<typename _Up, typename... _Args>
 void
 construct(_Up* __p, _Args&&... __args)
 { ::new((void *)__p) _Up(std::forward<_Args>(__args)...); }

      template<typename _Up>
 void
 destroy(_Up* __p) { __p->~_Up(); }

    };
# 107 "/usr/include/c++/6/bits/allocator.h" 3
  template<typename _Tp>
    class allocator: public __allocator_base<_Tp>
    {
   public:
      typedef size_t size_type;
      typedef ptrdiff_t difference_type;
      typedef _Tp* pointer;
      typedef const _Tp* const_pointer;
      typedef _Tp& reference;
      typedef const _Tp& const_reference;
      typedef _Tp value_type;

      template<typename _Tp1>
        struct rebind
        { typedef allocator<_Tp1> other; };




      typedef true_type propagate_on_container_move_assignment;

      typedef true_type is_always_equal;


      allocator() throw() { }

      allocator(const allocator& __a) throw()
      : __allocator_base<_Tp>(__a) { }

      template<typename _Tp1>
        allocator(const allocator<_Tp1>&) throw() { }

      ~allocator() throw() { }


    };

  template<typename _T1, typename _T2>
    inline bool
    operator==(const allocator<_T1>&, const allocator<_T2>&)
    noexcept
    { return true; }

  template<typename _Tp>
    inline bool
    operator==(const allocator<_Tp>&, const allocator<_Tp>&)
    noexcept
    { return true; }

  template<typename _T1, typename _T2>
    inline bool
    operator!=(const allocator<_T1>&, const allocator<_T2>&)
    noexcept
    { return false; }

  template<typename _Tp>
    inline bool
    operator!=(const allocator<_Tp>&, const allocator<_Tp>&)
    noexcept
    { return false; }






  extern template class allocator<char>;
  extern template class allocator<wchar_t>;






  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_swap
    { static void _S_do_it(_Alloc&, _Alloc&) noexcept { } };

  template<typename _Alloc>
    struct __alloc_swap<_Alloc, false>
    {
      static void
      _S_do_it(_Alloc& __one, _Alloc& __two) noexcept
      {

 if (__one != __two)
   swap(__one, __two);
      }
    };


  template<typename _Alloc, bool = __is_empty(_Alloc)>
    struct __alloc_neq
    {
      static bool
      _S_do_it(const _Alloc&, const _Alloc&)
      { return false; }
    };

  template<typename _Alloc>
    struct __alloc_neq<_Alloc, false>
    {
      static bool
      _S_do_it(const _Alloc& __one, const _Alloc& __two)
      { return __one != __two; }
    };


  template<typename _Tp, bool
    = __or_<is_copy_constructible<typename _Tp::value_type>,
            is_nothrow_move_constructible<typename _Tp::value_type>>::value>
    struct __shrink_to_fit_aux
    { static bool _S_do_it(_Tp&) noexcept { return false; } };

  template<typename _Tp>
    struct __shrink_to_fit_aux<_Tp, true>
    {
      static bool
      _S_do_it(_Tp& __c) noexcept
      {

 try
   {
     _Tp(__make_move_if_noexcept_iterator(__c.begin()),
  __make_move_if_noexcept_iterator(__c.end()),
  __c.get_allocator()).swap(__c);
     return true;
   }
 catch(...)
   { return false; }



      }
    };



}
# 42 "/usr/include/c++/6/string" 2 3

# 1 "/usr/include/c++/6/bits/localefwd.h" 1 3
# 37 "/usr/include/c++/6/bits/localefwd.h" 3
       
# 38 "/usr/include/c++/6/bits/localefwd.h" 3


# 1 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++locale.h" 1 3
# 39 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++locale.h" 3
       
# 40 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++locale.h" 3

# 1 "/usr/include/c++/6/clocale" 1 3
# 39 "/usr/include/c++/6/clocale" 3
       
# 40 "/usr/include/c++/6/clocale" 3


# 1 "/usr/include/locale.h" 1 3 4
# 28 "/usr/include/locale.h" 3 4
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 29 "/usr/include/locale.h" 2 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/locale.h" 1 3 4
# 30 "/usr/include/locale.h" 2 3 4

extern "C" {
# 50 "/usr/include/locale.h" 3 4



struct lconv
{


  char *decimal_point;
  char *thousands_sep;





  char *grouping;





  char *int_curr_symbol;
  char *currency_symbol;
  char *mon_decimal_point;
  char *mon_thousands_sep;
  char *mon_grouping;
  char *positive_sign;
  char *negative_sign;
  char int_frac_digits;
  char frac_digits;

  char p_cs_precedes;

  char p_sep_by_space;

  char n_cs_precedes;

  char n_sep_by_space;






  char p_sign_posn;
  char n_sign_posn;


  char int_p_cs_precedes;

  char int_p_sep_by_space;

  char int_n_cs_precedes;

  char int_n_sep_by_space;






  char int_p_sign_posn;
  char int_n_sign_posn;
# 120 "/usr/include/locale.h" 3 4
};



extern char *setlocale (int __category, const char *__locale) throw ();


extern struct lconv *localeconv (void) throw ();


# 151 "/usr/include/locale.h" 3 4
extern __locale_t newlocale (int __category_mask, const char *__locale,
        __locale_t __base) throw ();
# 186 "/usr/include/locale.h" 3 4
extern __locale_t duplocale (__locale_t __dataset) throw ();



extern void freelocale (__locale_t __dataset) throw ();






extern __locale_t uselocale (__locale_t __dataset) throw ();







}
# 43 "/usr/include/c++/6/clocale" 2 3
# 51 "/usr/include/c++/6/clocale" 3
namespace std
{
  using ::lconv;
  using ::setlocale;
  using ::localeconv;
}
# 42 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++locale.h" 2 3






namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{


  extern "C" __typeof(uselocale) __uselocale;


}


namespace std __attribute__ ((__visibility__ ("default")))
{


  typedef __locale_t __c_locale;





  inline int
  __convert_from_v(const __c_locale& __cloc __attribute__ ((__unused__)),
     char* __out,
     const int __size __attribute__ ((__unused__)),
     const char* __fmt, ...)
  {

    __c_locale __old = __gnu_cxx::__uselocale(__cloc);
# 88 "/usr/include/arm-linux-gnueabihf/c++/6/bits/c++locale.h" 3
    __builtin_va_list __args;
    __builtin_va_start(__args, __fmt);


    const int __ret = __builtin_vsnprintf(__out, __size, __fmt, __args);




    __builtin_va_end(__args);


    __gnu_cxx::__uselocale(__old);







    return __ret;
  }


}
# 41 "/usr/include/c++/6/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/6/iosfwd" 1 3
# 36 "/usr/include/c++/6/iosfwd" 3
       
# 37 "/usr/include/c++/6/iosfwd" 3





namespace std __attribute__ ((__visibility__ ("default")))
{

# 74 "/usr/include/c++/6/iosfwd" 3
  class ios_base;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ios;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_streambuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_istream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ostream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_iostream;


namespace __cxx11 {

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
     typename _Alloc = allocator<_CharT> >
    class basic_stringbuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_istringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_ostringstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT>,
    typename _Alloc = allocator<_CharT> >
    class basic_stringstream;

}

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_filebuf;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ifstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_ofstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class basic_fstream;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class istreambuf_iterator;

  template<typename _CharT, typename _Traits = char_traits<_CharT> >
    class ostreambuf_iterator;



  typedef basic_ios<char> ios;


  typedef basic_streambuf<char> streambuf;


  typedef basic_istream<char> istream;


  typedef basic_ostream<char> ostream;


  typedef basic_iostream<char> iostream;


  typedef basic_stringbuf<char> stringbuf;


  typedef basic_istringstream<char> istringstream;


  typedef basic_ostringstream<char> ostringstream;


  typedef basic_stringstream<char> stringstream;


  typedef basic_filebuf<char> filebuf;


  typedef basic_ifstream<char> ifstream;


  typedef basic_ofstream<char> ofstream;


  typedef basic_fstream<char> fstream;



  typedef basic_ios<wchar_t> wios;


  typedef basic_streambuf<wchar_t> wstreambuf;


  typedef basic_istream<wchar_t> wistream;


  typedef basic_ostream<wchar_t> wostream;


  typedef basic_iostream<wchar_t> wiostream;


  typedef basic_stringbuf<wchar_t> wstringbuf;


  typedef basic_istringstream<wchar_t> wistringstream;


  typedef basic_ostringstream<wchar_t> wostringstream;


  typedef basic_stringstream<wchar_t> wstringstream;


  typedef basic_filebuf<wchar_t> wfilebuf;


  typedef basic_ifstream<wchar_t> wifstream;


  typedef basic_ofstream<wchar_t> wofstream;


  typedef basic_fstream<wchar_t> wfstream;




}
# 42 "/usr/include/c++/6/bits/localefwd.h" 2 3
# 1 "/usr/include/c++/6/cctype" 1 3
# 39 "/usr/include/c++/6/cctype" 3
       
# 40 "/usr/include/c++/6/cctype" 3


# 1 "/usr/include/ctype.h" 1 3 4
# 26 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/types.h" 1 3 4
# 27 "/usr/include/arm-linux-gnueabihf/bits/types.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/wordsize.h" 1 3 4
# 28 "/usr/include/arm-linux-gnueabihf/bits/types.h" 2 3 4


typedef unsigned char __u_char;
typedef unsigned short int __u_short;
typedef unsigned int __u_int;
typedef unsigned long int __u_long;


typedef signed char __int8_t;
typedef unsigned char __uint8_t;
typedef signed short int __int16_t;
typedef unsigned short int __uint16_t;
typedef signed int __int32_t;
typedef unsigned int __uint32_t;




__extension__ typedef signed long long int __int64_t;
__extension__ typedef unsigned long long int __uint64_t;







__extension__ typedef long long int __quad_t;
__extension__ typedef unsigned long long int __u_quad_t;
# 121 "/usr/include/arm-linux-gnueabihf/bits/types.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/typesizes.h" 1 3 4
# 122 "/usr/include/arm-linux-gnueabihf/bits/types.h" 2 3 4


__extension__ typedef __u_quad_t __dev_t;
__extension__ typedef unsigned int __uid_t;
__extension__ typedef unsigned int __gid_t;
__extension__ typedef unsigned long int __ino_t;
__extension__ typedef __u_quad_t __ino64_t;
__extension__ typedef unsigned int __mode_t;
__extension__ typedef unsigned int __nlink_t;
__extension__ typedef long int __off_t;
__extension__ typedef __quad_t __off64_t;
__extension__ typedef int __pid_t;
__extension__ typedef struct { int __val[2]; } __fsid_t;
__extension__ typedef long int __clock_t;
__extension__ typedef unsigned long int __rlim_t;
__extension__ typedef __u_quad_t __rlim64_t;
__extension__ typedef unsigned int __id_t;
__extension__ typedef long int __time_t;
__extension__ typedef unsigned int __useconds_t;
__extension__ typedef long int __suseconds_t;

__extension__ typedef int __daddr_t;
__extension__ typedef int __key_t;


__extension__ typedef int __clockid_t;


__extension__ typedef void * __timer_t;


__extension__ typedef long int __blksize_t;




__extension__ typedef long int __blkcnt_t;
__extension__ typedef __quad_t __blkcnt64_t;


__extension__ typedef unsigned long int __fsblkcnt_t;
__extension__ typedef __u_quad_t __fsblkcnt64_t;


__extension__ typedef unsigned long int __fsfilcnt_t;
__extension__ typedef __u_quad_t __fsfilcnt64_t;


__extension__ typedef int __fsword_t;

__extension__ typedef int __ssize_t;


__extension__ typedef long int __syscall_slong_t;

__extension__ typedef unsigned long int __syscall_ulong_t;



typedef __off64_t __loff_t;
typedef __quad_t *__qaddr_t;
typedef char *__caddr_t;


__extension__ typedef int __intptr_t;


__extension__ typedef unsigned int __socklen_t;
# 27 "/usr/include/ctype.h" 2 3 4

extern "C" {
# 39 "/usr/include/ctype.h" 3 4
# 1 "/usr/include/endian.h" 1 3 4
# 36 "/usr/include/endian.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/endian.h" 1 3 4
# 37 "/usr/include/endian.h" 2 3 4
# 60 "/usr/include/endian.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/byteswap.h" 1 3 4
# 34 "/usr/include/arm-linux-gnueabihf/bits/byteswap.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/byteswap-16.h" 1 3 4
# 35 "/usr/include/arm-linux-gnueabihf/bits/byteswap.h" 2 3 4
# 43 "/usr/include/arm-linux-gnueabihf/bits/byteswap.h" 3 4
static __inline unsigned int
__bswap_32 (unsigned int __bsx)
{
  return __builtin_bswap32 (__bsx);
}
# 74 "/usr/include/arm-linux-gnueabihf/bits/byteswap.h" 3 4
static __inline __uint64_t
__bswap_64 (__uint64_t __bsx)
{
  return __builtin_bswap64 (__bsx);
}
# 61 "/usr/include/endian.h" 2 3 4
# 40 "/usr/include/ctype.h" 2 3 4






enum
{
  _ISupper = ((0) < 8 ? ((1 << (0)) << 8) : ((1 << (0)) >> 8)),
  _ISlower = ((1) < 8 ? ((1 << (1)) << 8) : ((1 << (1)) >> 8)),
  _ISalpha = ((2) < 8 ? ((1 << (2)) << 8) : ((1 << (2)) >> 8)),
  _ISdigit = ((3) < 8 ? ((1 << (3)) << 8) : ((1 << (3)) >> 8)),
  _ISxdigit = ((4) < 8 ? ((1 << (4)) << 8) : ((1 << (4)) >> 8)),
  _ISspace = ((5) < 8 ? ((1 << (5)) << 8) : ((1 << (5)) >> 8)),
  _ISprint = ((6) < 8 ? ((1 << (6)) << 8) : ((1 << (6)) >> 8)),
  _ISgraph = ((7) < 8 ? ((1 << (7)) << 8) : ((1 << (7)) >> 8)),
  _ISblank = ((8) < 8 ? ((1 << (8)) << 8) : ((1 << (8)) >> 8)),
  _IScntrl = ((9) < 8 ? ((1 << (9)) << 8) : ((1 << (9)) >> 8)),
  _ISpunct = ((10) < 8 ? ((1 << (10)) << 8) : ((1 << (10)) >> 8)),
  _ISalnum = ((11) < 8 ? ((1 << (11)) << 8) : ((1 << (11)) >> 8))
};
# 79 "/usr/include/ctype.h" 3 4
extern const unsigned short int **__ctype_b_loc (void)
     throw () __attribute__ ((__const__));
extern const __int32_t **__ctype_tolower_loc (void)
     throw () __attribute__ ((__const__));
extern const __int32_t **__ctype_toupper_loc (void)
     throw () __attribute__ ((__const__));
# 104 "/usr/include/ctype.h" 3 4






extern int isalnum (int) throw ();
extern int isalpha (int) throw ();
extern int iscntrl (int) throw ();
extern int isdigit (int) throw ();
extern int islower (int) throw ();
extern int isgraph (int) throw ();
extern int isprint (int) throw ();
extern int ispunct (int) throw ();
extern int isspace (int) throw ();
extern int isupper (int) throw ();
extern int isxdigit (int) throw ();



extern int tolower (int __c) throw ();


extern int toupper (int __c) throw ();








extern int isblank (int) throw ();






extern int isctype (int __c, int __mask) throw ();






extern int isascii (int __c) throw ();



extern int toascii (int __c) throw ();



extern int _toupper (int) throw ();
extern int _tolower (int) throw ();
# 271 "/usr/include/ctype.h" 3 4
extern int isalnum_l (int, __locale_t) throw ();
extern int isalpha_l (int, __locale_t) throw ();
extern int iscntrl_l (int, __locale_t) throw ();
extern int isdigit_l (int, __locale_t) throw ();
extern int islower_l (int, __locale_t) throw ();
extern int isgraph_l (int, __locale_t) throw ();
extern int isprint_l (int, __locale_t) throw ();
extern int ispunct_l (int, __locale_t) throw ();
extern int isspace_l (int, __locale_t) throw ();
extern int isupper_l (int, __locale_t) throw ();
extern int isxdigit_l (int, __locale_t) throw ();

extern int isblank_l (int, __locale_t) throw ();



extern int __tolower_l (int __c, __locale_t __l) throw ();
extern int tolower_l (int __c, __locale_t __l) throw ();


extern int __toupper_l (int __c, __locale_t __l) throw ();
extern int toupper_l (int __c, __locale_t __l) throw ();
# 347 "/usr/include/ctype.h" 3 4
}
# 43 "/usr/include/c++/6/cctype" 2 3
# 62 "/usr/include/c++/6/cctype" 3
namespace std
{
  using ::isalnum;
  using ::isalpha;
  using ::iscntrl;
  using ::isdigit;
  using ::isgraph;
  using ::islower;
  using ::isprint;
  using ::ispunct;
  using ::isspace;
  using ::isupper;
  using ::isxdigit;
  using ::tolower;
  using ::toupper;
}







namespace std
{
  using ::isblank;
}
# 43 "/usr/include/c++/6/bits/localefwd.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{

# 55 "/usr/include/c++/6/bits/localefwd.h" 3
  class locale;

  template<typename _Facet>
    bool
    has_facet(const locale&) throw();

  template<typename _Facet>
    const _Facet&
    use_facet(const locale&);


  template<typename _CharT>
    bool
    isspace(_CharT, const locale&);

  template<typename _CharT>
    bool
    isprint(_CharT, const locale&);

  template<typename _CharT>
    bool
    iscntrl(_CharT, const locale&);

  template<typename _CharT>
    bool
    isupper(_CharT, const locale&);

  template<typename _CharT>
    bool
    islower(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalpha(_CharT, const locale&);

  template<typename _CharT>
    bool
    isdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    ispunct(_CharT, const locale&);

  template<typename _CharT>
    bool
    isxdigit(_CharT, const locale&);

  template<typename _CharT>
    bool
    isalnum(_CharT, const locale&);

  template<typename _CharT>
    bool
    isgraph(_CharT, const locale&);


  template<typename _CharT>
    bool
    isblank(_CharT, const locale&);


  template<typename _CharT>
    _CharT
    toupper(_CharT, const locale&);

  template<typename _CharT>
    _CharT
    tolower(_CharT, const locale&);


  class ctype_base;
  template<typename _CharT>
    class ctype;
  template<> class ctype<char>;

  template<> class ctype<wchar_t>;

  template<typename _CharT>
    class ctype_byname;


  class codecvt_base;
  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt;
  template<> class codecvt<char, char, mbstate_t>;

  template<> class codecvt<wchar_t, char, mbstate_t>;

  template<typename _InternT, typename _ExternT, typename _StateT>
    class codecvt_byname;



  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class num_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class num_put;

namespace __cxx11 {
  template<typename _CharT> class numpunct;
  template<typename _CharT> class numpunct_byname;
}

namespace __cxx11 {

  template<typename _CharT>
    class collate;
  template<typename _CharT>
    class collate_byname;
}


  class time_base;
namespace __cxx11 {
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get;
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class time_get_byname;
}
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class time_put_byname;


  class money_base;
namespace __cxx11 {
  template<typename _CharT, typename _InIter = istreambuf_iterator<_CharT> >
    class money_get;
  template<typename _CharT, typename _OutIter = ostreambuf_iterator<_CharT> >
    class money_put;
}
namespace __cxx11 {
  template<typename _CharT, bool _Intl = false>
    class moneypunct;
  template<typename _CharT, bool _Intl = false>
    class moneypunct_byname;
}


  class messages_base;
namespace __cxx11 {
  template<typename _CharT>
    class messages;
  template<typename _CharT>
    class messages_byname;
}


}
# 44 "/usr/include/c++/6/string" 2 3
# 1 "/usr/include/c++/6/bits/ostream_insert.h" 1 3
# 33 "/usr/include/c++/6/bits/ostream_insert.h" 3
       
# 34 "/usr/include/c++/6/bits/ostream_insert.h" 3


# 1 "/usr/include/c++/6/bits/cxxabi_forced.h" 1 3
# 34 "/usr/include/c++/6/bits/cxxabi_forced.h" 3
       
# 35 "/usr/include/c++/6/bits/cxxabi_forced.h" 3

#pragma GCC visibility push(default)


namespace __cxxabiv1
{







  class __forced_unwind
  {
    virtual ~__forced_unwind() throw();


    virtual void __pure_dummy() = 0;
  };
}


#pragma GCC visibility pop
# 37 "/usr/include/c++/6/bits/ostream_insert.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{


  template<typename _CharT, typename _Traits>
    inline void
    __ostream_write(basic_ostream<_CharT, _Traits>& __out,
      const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const streamsize __put = __out.rdbuf()->sputn(__s, __n);
      if (__put != __n)
 __out.setstate(__ios_base::badbit);
    }

  template<typename _CharT, typename _Traits>
    inline void
    __ostream_fill(basic_ostream<_CharT, _Traits>& __out, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      const _CharT __c = __out.fill();
      for (; __n > 0; --__n)
 {
   const typename _Traits::int_type __put = __out.rdbuf()->sputc(__c);
   if (_Traits::eq_int_type(__put, _Traits::eof()))
     {
       __out.setstate(__ios_base::badbit);
       break;
     }
 }
    }

  template<typename _CharT, typename _Traits>
    basic_ostream<_CharT, _Traits>&
    __ostream_insert(basic_ostream<_CharT, _Traits>& __out,
       const _CharT* __s, streamsize __n)
    {
      typedef basic_ostream<_CharT, _Traits> __ostream_type;
      typedef typename __ostream_type::ios_base __ios_base;

      typename __ostream_type::sentry __cerb(__out);
      if (__cerb)
 {
   try
     {
       const streamsize __w = __out.width();
       if (__w > __n)
  {
    const bool __left = ((__out.flags()
     & __ios_base::adjustfield)
           == __ios_base::left);
    if (!__left)
      __ostream_fill(__out, __w - __n);
    if (__out.good())
      __ostream_write(__out, __s, __n);
    if (__left && __out.good())
      __ostream_fill(__out, __w - __n);
  }
       else
  __ostream_write(__out, __s, __n);
       __out.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __out._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     { __out._M_setstate(__ios_base::badbit); }
 }
      return __out;
    }




  extern template ostream& __ostream_insert(ostream&, const char*, streamsize);


  extern template wostream& __ostream_insert(wostream&, const wchar_t*,
          streamsize);




}
# 45 "/usr/include/c++/6/string" 2 3



# 1 "/usr/include/c++/6/bits/stl_function.h" 1 3
# 63 "/usr/include/c++/6/bits/stl_function.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{

# 104 "/usr/include/c++/6/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    struct unary_function
    {

      typedef _Arg argument_type;


      typedef _Result result_type;
    };




  template<typename _Arg1, typename _Arg2, typename _Result>
    struct binary_function
    {

      typedef _Arg1 first_argument_type;


      typedef _Arg2 second_argument_type;


      typedef _Result result_type;
    };
# 144 "/usr/include/c++/6/bits/stl_function.h" 3
  struct __is_transparent;

  template<typename _Tp = void>
    struct plus;

  template<typename _Tp = void>
    struct minus;

  template<typename _Tp = void>
    struct multiplies;

  template<typename _Tp = void>
    struct divides;

  template<typename _Tp = void>
    struct modulus;

  template<typename _Tp = void>
    struct negate;



  template<typename _Tp>
    struct plus : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x + __y; }
    };


  template<typename _Tp>
    struct minus : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x - __y; }
    };


  template<typename _Tp>
    struct multiplies : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x * __y; }
    };


  template<typename _Tp>
    struct divides : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x / __y; }
    };


  template<typename _Tp>
    struct modulus : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x % __y; }
    };


  template<typename _Tp>
    struct negate : public unary_function<_Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x) const
      { return -__x; }
    };





  template<>
    struct plus<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) + std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) + std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) + std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct minus<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) - std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) - std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) - std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct multiplies<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) * std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) * std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) * std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct divides<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) / std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) / std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) / std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct modulus<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) % std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) % std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) % std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct negate<void>
    {
      template <typename _Tp>
 constexpr
 auto
 operator()(_Tp&& __t) const
 noexcept(noexcept(-std::forward<_Tp>(__t)))
 -> decltype(-std::forward<_Tp>(__t))
 { return -std::forward<_Tp>(__t); }

      typedef __is_transparent is_transparent;
    };
# 330 "/usr/include/c++/6/bits/stl_function.h" 3
  template<typename _Tp = void>
    struct equal_to;

  template<typename _Tp = void>
    struct not_equal_to;

  template<typename _Tp = void>
    struct greater;

  template<typename _Tp = void>
    struct less;

  template<typename _Tp = void>
    struct greater_equal;

  template<typename _Tp = void>
    struct less_equal;



  template<typename _Tp>
    struct equal_to : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x == __y; }
    };


  template<typename _Tp>
    struct not_equal_to : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x != __y; }
    };


  template<typename _Tp>
    struct greater : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x > __y; }
    };


  template<typename _Tp>
    struct less : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x < __y; }
    };


  template<typename _Tp>
    struct greater_equal : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x >= __y; }
    };


  template<typename _Tp>
    struct less_equal : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x <= __y; }
    };



  template<>
    struct equal_to<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) == std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) == std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) == std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct not_equal_to<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) != std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) != std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) != std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct greater<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) > std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) > std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) > std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct less<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) < std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) < std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) < std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct greater_equal<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) >= std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) >= std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) >= std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct less_equal<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) <= std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) <= std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) <= std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };
# 512 "/usr/include/c++/6/bits/stl_function.h" 3
  template<typename _Tp = void>
    struct logical_and;

  template<typename _Tp = void>
    struct logical_or;

  template<typename _Tp = void>
    struct logical_not;



  template<typename _Tp>
    struct logical_and : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x && __y; }
    };


  template<typename _Tp>
    struct logical_or : public binary_function<_Tp, _Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x || __y; }
    };


  template<typename _Tp>
    struct logical_not : public unary_function<_Tp, bool>
    {
      constexpr
      bool
      operator()(const _Tp& __x) const
      { return !__x; }
    };



  template<>
    struct logical_and<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) && std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) && std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) && std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct logical_or<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) || std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) || std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) || std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };


  template<>
    struct logical_not<void>
    {
      template <typename _Tp>
 constexpr
 auto
 operator()(_Tp&& __t) const
 noexcept(noexcept(!std::forward<_Tp>(__t)))
 -> decltype(!std::forward<_Tp>(__t))
 { return !std::forward<_Tp>(__t); }

      typedef __is_transparent is_transparent;
    };




  template<typename _Tp = void>
    struct bit_and;

  template<typename _Tp = void>
    struct bit_or;

  template<typename _Tp = void>
    struct bit_xor;

  template<typename _Tp = void>
    struct bit_not;




  template<typename _Tp>
    struct bit_and : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x & __y; }
    };

  template<typename _Tp>
    struct bit_or : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x | __y; }
    };

  template<typename _Tp>
    struct bit_xor : public binary_function<_Tp, _Tp, _Tp>
    {
      constexpr
      _Tp
      operator()(const _Tp& __x, const _Tp& __y) const
      { return __x ^ __y; }
    };

  template<typename _Tp>
    struct bit_not : public unary_function<_Tp, _Tp>
    {
    constexpr
      _Tp
      operator()(const _Tp& __x) const
      { return ~__x; }
    };


  template <>
    struct bit_and<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) & std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) & std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) & std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  template <>
    struct bit_or<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) | std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) | std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) | std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  template <>
    struct bit_xor<void>
    {
      template <typename _Tp, typename _Up>
 constexpr
 auto
 operator()(_Tp&& __t, _Up&& __u) const
 noexcept(noexcept(std::forward<_Tp>(__t) ^ std::forward<_Up>(__u)))
 -> decltype(std::forward<_Tp>(__t) ^ std::forward<_Up>(__u))
 { return std::forward<_Tp>(__t) ^ std::forward<_Up>(__u); }

      typedef __is_transparent is_transparent;
    };

  template <>
    struct bit_not<void>
    {
      template <typename _Tp>
 constexpr
 auto
 operator()(_Tp&& __t) const
 noexcept(noexcept(~std::forward<_Tp>(__t)))
 -> decltype(~std::forward<_Tp>(__t))
 { return ~std::forward<_Tp>(__t); }

      typedef __is_transparent is_transparent;
    };
# 740 "/usr/include/c++/6/bits/stl_function.h" 3
  template<typename _Predicate>
    class unary_negate
    : public unary_function<typename _Predicate::argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      constexpr
      explicit
      unary_negate(const _Predicate& __x) : _M_pred(__x) { }

      constexpr
      bool
      operator()(const typename _Predicate::argument_type& __x) const
      { return !_M_pred(__x); }
    };


  template<typename _Predicate>
    constexpr
    inline unary_negate<_Predicate>
    not1(const _Predicate& __pred)
    { return unary_negate<_Predicate>(__pred); }


  template<typename _Predicate>
    class binary_negate
    : public binary_function<typename _Predicate::first_argument_type,
        typename _Predicate::second_argument_type, bool>
    {
    protected:
      _Predicate _M_pred;

    public:
      constexpr
      explicit
      binary_negate(const _Predicate& __x) : _M_pred(__x) { }

      constexpr
      bool
      operator()(const typename _Predicate::first_argument_type& __x,
   const typename _Predicate::second_argument_type& __y) const
      { return !_M_pred(__x, __y); }
    };


  template<typename _Predicate>
    constexpr
    inline binary_negate<_Predicate>
    not2(const _Predicate& __pred)
    { return binary_negate<_Predicate>(__pred); }
# 817 "/usr/include/c++/6/bits/stl_function.h" 3
  template<typename _Arg, typename _Result>
    class pointer_to_unary_function : public unary_function<_Arg, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg);

    public:
      pointer_to_unary_function() { }

      explicit
      pointer_to_unary_function(_Result (*__x)(_Arg))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg __x) const
      { return _M_ptr(__x); }
    };


  template<typename _Arg, typename _Result>
    inline pointer_to_unary_function<_Arg, _Result>
    ptr_fun(_Result (*__x)(_Arg))
    { return pointer_to_unary_function<_Arg, _Result>(__x); }


  template<typename _Arg1, typename _Arg2, typename _Result>
    class pointer_to_binary_function
    : public binary_function<_Arg1, _Arg2, _Result>
    {
    protected:
      _Result (*_M_ptr)(_Arg1, _Arg2);

    public:
      pointer_to_binary_function() { }

      explicit
      pointer_to_binary_function(_Result (*__x)(_Arg1, _Arg2))
      : _M_ptr(__x) { }

      _Result
      operator()(_Arg1 __x, _Arg2 __y) const
      { return _M_ptr(__x, __y); }
    };


  template<typename _Arg1, typename _Arg2, typename _Result>
    inline pointer_to_binary_function<_Arg1, _Arg2, _Result>
    ptr_fun(_Result (*__x)(_Arg1, _Arg2))
    { return pointer_to_binary_function<_Arg1, _Arg2, _Result>(__x); }


  template<typename _Tp>
    struct _Identity
    : public unary_function<_Tp,_Tp>
    {
      _Tp&
      operator()(_Tp& __x) const
      { return __x; }

      const _Tp&
      operator()(const _Tp& __x) const
      { return __x; }
    };

  template<typename _Pair>
    struct _Select1st
    : public unary_function<_Pair, typename _Pair::first_type>
    {
      typename _Pair::first_type&
      operator()(_Pair& __x) const
      { return __x.first; }

      const typename _Pair::first_type&
      operator()(const _Pair& __x) const
      { return __x.first; }


      template<typename _Pair2>
        typename _Pair2::first_type&
        operator()(_Pair2& __x) const
        { return __x.first; }

      template<typename _Pair2>
        const typename _Pair2::first_type&
        operator()(const _Pair2& __x) const
        { return __x.first; }

    };

  template<typename _Pair>
    struct _Select2nd
    : public unary_function<_Pair, typename _Pair::second_type>
    {
      typename _Pair::second_type&
      operator()(_Pair& __x) const
      { return __x.second; }

      const typename _Pair::second_type&
      operator()(const _Pair& __x) const
      { return __x.second; }
    };
# 937 "/usr/include/c++/6/bits/stl_function.h" 3
  template<typename _Ret, typename _Tp>
    class mem_fun_t : public unary_function<_Tp*, _Ret>
    {
    public:
      explicit
      mem_fun_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
    };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_t : public unary_function<const _Tp*, _Ret>
    {
    public:
      explicit
      const_mem_fun_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p) const
      { return (__p->*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp>
    class mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      mem_fun_ref_t(_Ret (_Tp::*__pf)())
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)();
  };



  template<typename _Ret, typename _Tp>
    class const_mem_fun_ref_t : public unary_function<_Tp, _Ret>
    {
    public:
      explicit
      const_mem_fun_ref_t(_Ret (_Tp::*__pf)() const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r) const
      { return (__r.*_M_f)(); }

    private:
      _Ret (_Tp::*_M_f)() const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_t : public binary_function<_Tp*, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_t : public binary_function<const _Tp*, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp* __p, _Arg __x) const
      { return (__p->*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg))
      : _M_f(__pf) { }

      _Ret
      operator()(_Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg);
    };



  template<typename _Ret, typename _Tp, typename _Arg>
    class const_mem_fun1_ref_t : public binary_function<_Tp, _Arg, _Ret>
    {
    public:
      explicit
      const_mem_fun1_ref_t(_Ret (_Tp::*__pf)(_Arg) const)
      : _M_f(__pf) { }

      _Ret
      operator()(const _Tp& __r, _Arg __x) const
      { return (__r.*_M_f)(__x); }

    private:
      _Ret (_Tp::*_M_f)(_Arg) const;
    };



  template<typename _Ret, typename _Tp>
    inline mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)())
    { return mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_t<_Ret, _Tp>
    mem_fun(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)())
    { return mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp>
    inline const_mem_fun_ref_t<_Ret, _Tp>
    mem_fun_ref(_Ret (_Tp::*__f)() const)
    { return const_mem_fun_ref_t<_Ret, _Tp>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_t<_Ret, _Tp, _Arg>
    mem_fun(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg))
    { return mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }

  template<typename _Ret, typename _Tp, typename _Arg>
    inline const_mem_fun1_ref_t<_Ret, _Tp, _Arg>
    mem_fun_ref(_Ret (_Tp::*__f)(_Arg) const)
    { return const_mem_fun1_ref_t<_Ret, _Tp, _Arg>(__f); }




}


# 1 "/usr/include/c++/6/backward/binders.h" 1 3
# 60 "/usr/include/c++/6/backward/binders.h" 3
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"

namespace std __attribute__ ((__visibility__ ("default")))
{

# 107 "/usr/include/c++/6/backward/binders.h" 3
  template<typename _Operation>
    class binder1st
    : public unary_function<typename _Operation::second_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::first_argument_type value;

    public:
      binder1st(const _Operation& __x,
  const typename _Operation::first_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }



      typename _Operation::result_type
      operator()(typename _Operation::second_argument_type& __x) const
      { return op(value, __x); }
    } __attribute__ ((__deprecated__));


  template<typename _Operation, typename _Tp>
    inline binder1st<_Operation>
    bind1st(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::first_argument_type _Arg1_type;
      return binder1st<_Operation>(__fn, _Arg1_type(__x));
    }


  template<typename _Operation>
    class binder2nd
    : public unary_function<typename _Operation::first_argument_type,
       typename _Operation::result_type>
    {
    protected:
      _Operation op;
      typename _Operation::second_argument_type value;

    public:
      binder2nd(const _Operation& __x,
  const typename _Operation::second_argument_type& __y)
      : op(__x), value(__y) { }

      typename _Operation::result_type
      operator()(const typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }



      typename _Operation::result_type
      operator()(typename _Operation::first_argument_type& __x) const
      { return op(__x, value); }
    } __attribute__ ((__deprecated__));


  template<typename _Operation, typename _Tp>
    inline binder2nd<_Operation>
    bind2nd(const _Operation& __fn, const _Tp& __x)
    {
      typedef typename _Operation::second_argument_type _Arg2_type;
      return binder2nd<_Operation>(__fn, _Arg2_type(__x));
    }



}

#pragma GCC diagnostic pop
# 1128 "/usr/include/c++/6/bits/stl_function.h" 2 3
# 49 "/usr/include/c++/6/string" 2 3


# 1 "/usr/include/c++/6/bits/range_access.h" 1 3
# 33 "/usr/include/c++/6/bits/range_access.h" 3
       
# 34 "/usr/include/c++/6/bits/range_access.h" 3


# 1 "/usr/include/c++/6/initializer_list" 1 3
# 33 "/usr/include/c++/6/initializer_list" 3
       
# 34 "/usr/include/c++/6/initializer_list" 3





#pragma GCC visibility push(default)



namespace std
{

  template<class _E>
    class initializer_list
    {
    public:
      typedef _E value_type;
      typedef const _E& reference;
      typedef const _E& const_reference;
      typedef size_t size_type;
      typedef const _E* iterator;
      typedef const _E* const_iterator;

    private:
      iterator _M_array;
      size_type _M_len;


      constexpr initializer_list(const_iterator __a, size_type __l)
      : _M_array(__a), _M_len(__l) { }

    public:
      constexpr initializer_list() noexcept
      : _M_array(0), _M_len(0) { }


      constexpr size_type
      size() const noexcept { return _M_len; }


      constexpr const_iterator
      begin() const noexcept { return _M_array; }


      constexpr const_iterator
      end() const noexcept { return begin() + size(); }
    };






  template<class _Tp>
    constexpr const _Tp*
    begin(initializer_list<_Tp> __ils) noexcept
    { return __ils.begin(); }






  template<class _Tp>
    constexpr const _Tp*
    end(initializer_list<_Tp> __ils) noexcept
    { return __ils.end(); }
}

#pragma GCC visibility pop
# 37 "/usr/include/c++/6/bits/range_access.h" 2 3
namespace std __attribute__ ((__visibility__ ("default")))
{







  template<typename _Container>
    inline auto
    begin(_Container& __cont) -> decltype(__cont.begin())
    { return __cont.begin(); }






  template<typename _Container>
    inline auto
    begin(const _Container& __cont) -> decltype(__cont.begin())
    { return __cont.begin(); }






  template<typename _Container>
    inline auto
    end(_Container& __cont) -> decltype(__cont.end())
    { return __cont.end(); }






  template<typename _Container>
    inline auto
    end(const _Container& __cont) -> decltype(__cont.end())
    { return __cont.end(); }





  template<typename _Tp, size_t _Nm>
    inline constexpr _Tp*
    begin(_Tp (&__arr)[_Nm])
    { return __arr; }






  template<typename _Tp, size_t _Nm>
    inline constexpr _Tp*
    end(_Tp (&__arr)[_Nm])
    { return __arr + _Nm; }



  template<typename _Tp> class valarray;

  template<typename _Tp> _Tp* begin(valarray<_Tp>&);
  template<typename _Tp> const _Tp* begin(const valarray<_Tp>&);
  template<typename _Tp> _Tp* end(valarray<_Tp>&);
  template<typename _Tp> const _Tp* end(const valarray<_Tp>&);






  template<typename _Container>
    inline constexpr auto
    cbegin(const _Container& __cont) noexcept(noexcept(std::begin(__cont)))
      -> decltype(std::begin(__cont))
    { return std::begin(__cont); }






  template<typename _Container>
    inline constexpr auto
    cend(const _Container& __cont) noexcept(noexcept(std::end(__cont)))
      -> decltype(std::end(__cont))
    { return std::end(__cont); }






  template<typename _Container>
    inline auto
    rbegin(_Container& __cont) -> decltype(__cont.rbegin())
    { return __cont.rbegin(); }






  template<typename _Container>
    inline auto
    rbegin(const _Container& __cont) -> decltype(__cont.rbegin())
    { return __cont.rbegin(); }






  template<typename _Container>
    inline auto
    rend(_Container& __cont) -> decltype(__cont.rend())
    { return __cont.rend(); }






  template<typename _Container>
    inline auto
    rend(const _Container& __cont) -> decltype(__cont.rend())
    { return __cont.rend(); }






  template<typename _Tp, size_t _Nm>
    inline reverse_iterator<_Tp*>
    rbegin(_Tp (&__arr)[_Nm])
    { return reverse_iterator<_Tp*>(__arr + _Nm); }






  template<typename _Tp, size_t _Nm>
    inline reverse_iterator<_Tp*>
    rend(_Tp (&__arr)[_Nm])
    { return reverse_iterator<_Tp*>(__arr); }






  template<typename _Tp>
    inline reverse_iterator<const _Tp*>
    rbegin(initializer_list<_Tp> __il)
    { return reverse_iterator<const _Tp*>(__il.end()); }






  template<typename _Tp>
    inline reverse_iterator<const _Tp*>
    rend(initializer_list<_Tp> __il)
    { return reverse_iterator<const _Tp*>(__il.begin()); }






  template<typename _Container>
    inline auto
    crbegin(const _Container& __cont) -> decltype(std::rbegin(__cont))
    { return std::rbegin(__cont); }






  template<typename _Container>
    inline auto
    crend(const _Container& __cont) -> decltype(std::rend(__cont))
    { return std::rend(__cont); }
# 319 "/usr/include/c++/6/bits/range_access.h" 3

}
# 52 "/usr/include/c++/6/string" 2 3
# 1 "/usr/include/c++/6/bits/basic_string.h" 1 3
# 37 "/usr/include/c++/6/bits/basic_string.h" 3
       
# 38 "/usr/include/c++/6/bits/basic_string.h" 3

# 1 "/usr/include/c++/6/ext/atomicity.h" 1 3
# 32 "/usr/include/c++/6/ext/atomicity.h" 3
       
# 33 "/usr/include/c++/6/ext/atomicity.h" 3


# 1 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr.h" 1 3
# 30 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr.h" 3
#pragma GCC visibility push(default)
# 148 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr.h" 3
# 1 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr-default.h" 1 3
# 35 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr-default.h" 3
# 1 "/usr/include/pthread.h" 1 3 4
# 23 "/usr/include/pthread.h" 3 4
# 1 "/usr/include/sched.h" 1 3 4
# 28 "/usr/include/sched.h" 3 4
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 29 "/usr/include/sched.h" 2 3 4





# 1 "/usr/include/time.h" 1 3 4
# 73 "/usr/include/time.h" 3 4


typedef __time_t time_t;



# 120 "/usr/include/time.h" 3 4
struct timespec
  {
    __time_t tv_sec;
    __syscall_slong_t tv_nsec;
  };
# 35 "/usr/include/sched.h" 2 3 4


typedef __pid_t pid_t;





# 1 "/usr/include/arm-linux-gnueabihf/bits/sched.h" 1 3 4
# 73 "/usr/include/arm-linux-gnueabihf/bits/sched.h" 3 4
struct sched_param
  {
    int __sched_priority;
  };

extern "C" {



extern int clone (int (*__fn) (void *__arg), void *__child_stack,
    int __flags, void *__arg, ...) throw ();


extern int unshare (int __flags) throw ();


extern int sched_getcpu (void) throw ();


extern int setns (int __fd, int __nstype) throw ();



}







struct __sched_param
  {
    int __sched_priority;
  };
# 119 "/usr/include/arm-linux-gnueabihf/bits/sched.h" 3 4
typedef unsigned long int __cpu_mask;






typedef struct
{
  __cpu_mask __bits[1024 / (8 * sizeof (__cpu_mask))];
} cpu_set_t;
# 202 "/usr/include/arm-linux-gnueabihf/bits/sched.h" 3 4
extern "C" {

extern int __sched_cpucount (size_t __setsize, const cpu_set_t *__setp)
  throw ();
extern cpu_set_t *__sched_cpualloc (size_t __count) throw () ;
extern void __sched_cpufree (cpu_set_t *__set) throw ();

}
# 44 "/usr/include/sched.h" 2 3 4




extern "C" {


extern int sched_setparam (__pid_t __pid, const struct sched_param *__param)
     throw ();


extern int sched_getparam (__pid_t __pid, struct sched_param *__param) throw ();


extern int sched_setscheduler (__pid_t __pid, int __policy,
          const struct sched_param *__param) throw ();


extern int sched_getscheduler (__pid_t __pid) throw ();


extern int sched_yield (void) throw ();


extern int sched_get_priority_max (int __algorithm) throw ();


extern int sched_get_priority_min (int __algorithm) throw ();


extern int sched_rr_get_interval (__pid_t __pid, struct timespec *__t) throw ();
# 118 "/usr/include/sched.h" 3 4
extern int sched_setaffinity (__pid_t __pid, size_t __cpusetsize,
         const cpu_set_t *__cpuset) throw ();


extern int sched_getaffinity (__pid_t __pid, size_t __cpusetsize,
         cpu_set_t *__cpuset) throw ();


}
# 24 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/time.h" 1 3 4
# 29 "/usr/include/time.h" 3 4
extern "C" {







# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 38 "/usr/include/time.h" 2 3 4



# 1 "/usr/include/arm-linux-gnueabihf/bits/time.h" 1 3 4
# 30 "/usr/include/arm-linux-gnueabihf/bits/time.h" 3 4
struct timeval
  {
    __time_t tv_sec;
    __suseconds_t tv_usec;
  };
# 88 "/usr/include/arm-linux-gnueabihf/bits/time.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/timex.h" 1 3 4
# 25 "/usr/include/arm-linux-gnueabihf/bits/timex.h" 3 4
struct timex
{
  unsigned int modes;
  __syscall_slong_t offset;
  __syscall_slong_t freq;
  __syscall_slong_t maxerror;
  __syscall_slong_t esterror;
  int status;
  __syscall_slong_t constant;
  __syscall_slong_t precision;
  __syscall_slong_t tolerance;
  struct timeval time;
  __syscall_slong_t tick;
  __syscall_slong_t ppsfreq;
  __syscall_slong_t jitter;
  int shift;
  __syscall_slong_t stabil;
  __syscall_slong_t jitcnt;
  __syscall_slong_t calcnt;
  __syscall_slong_t errcnt;
  __syscall_slong_t stbcnt;

  int tai;


  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32; int :32;
  int :32; int :32; int :32;
};
# 89 "/usr/include/arm-linux-gnueabihf/bits/time.h" 2 3 4

extern "C" {


extern int clock_adjtime (__clockid_t __clock_id, struct timex *__utx) throw ();

}
# 42 "/usr/include/time.h" 2 3 4
# 57 "/usr/include/time.h" 3 4


typedef __clock_t clock_t;



# 91 "/usr/include/time.h" 3 4
typedef __clockid_t clockid_t;
# 103 "/usr/include/time.h" 3 4
typedef __timer_t timer_t;
# 131 "/usr/include/time.h" 3 4


struct tm
{
  int tm_sec;
  int tm_min;
  int tm_hour;
  int tm_mday;
  int tm_mon;
  int tm_year;
  int tm_wday;
  int tm_yday;
  int tm_isdst;


  long int tm_gmtoff;
  const char *tm_zone;




};








struct itimerspec
  {
    struct timespec it_interval;
    struct timespec it_value;
  };


struct sigevent;
# 186 "/usr/include/time.h" 3 4



extern clock_t clock (void) throw ();


extern time_t time (time_t *__timer) throw ();


extern double difftime (time_t __time1, time_t __time0)
     throw () __attribute__ ((__const__));


extern time_t mktime (struct tm *__tp) throw ();





extern size_t strftime (char *__restrict __s, size_t __maxsize,
   const char *__restrict __format,
   const struct tm *__restrict __tp) throw ();





extern char *strptime (const char *__restrict __s,
         const char *__restrict __fmt, struct tm *__tp)
     throw ();







extern size_t strftime_l (char *__restrict __s, size_t __maxsize,
     const char *__restrict __format,
     const struct tm *__restrict __tp,
     __locale_t __loc) throw ();



extern char *strptime_l (const char *__restrict __s,
    const char *__restrict __fmt, struct tm *__tp,
    __locale_t __loc) throw ();






extern struct tm *gmtime (const time_t *__timer) throw ();



extern struct tm *localtime (const time_t *__timer) throw ();





extern struct tm *gmtime_r (const time_t *__restrict __timer,
       struct tm *__restrict __tp) throw ();



extern struct tm *localtime_r (const time_t *__restrict __timer,
          struct tm *__restrict __tp) throw ();





extern char *asctime (const struct tm *__tp) throw ();


extern char *ctime (const time_t *__timer) throw ();







extern char *asctime_r (const struct tm *__restrict __tp,
   char *__restrict __buf) throw ();


extern char *ctime_r (const time_t *__restrict __timer,
        char *__restrict __buf) throw ();




extern char *__tzname[2];
extern int __daylight;
extern long int __timezone;




extern char *tzname[2];



extern void tzset (void) throw ();



extern int daylight;
extern long int timezone;





extern int stime (const time_t *__when) throw ();
# 319 "/usr/include/time.h" 3 4
extern time_t timegm (struct tm *__tp) throw ();


extern time_t timelocal (struct tm *__tp) throw ();


extern int dysize (int __year) throw () __attribute__ ((__const__));
# 334 "/usr/include/time.h" 3 4
extern int nanosleep (const struct timespec *__requested_time,
        struct timespec *__remaining);



extern int clock_getres (clockid_t __clock_id, struct timespec *__res) throw ();


extern int clock_gettime (clockid_t __clock_id, struct timespec *__tp) throw ();


extern int clock_settime (clockid_t __clock_id, const struct timespec *__tp)
     throw ();






extern int clock_nanosleep (clockid_t __clock_id, int __flags,
       const struct timespec *__req,
       struct timespec *__rem);


extern int clock_getcpuclockid (pid_t __pid, clockid_t *__clock_id) throw ();




extern int timer_create (clockid_t __clock_id,
    struct sigevent *__restrict __evp,
    timer_t *__restrict __timerid) throw ();


extern int timer_delete (timer_t __timerid) throw ();


extern int timer_settime (timer_t __timerid, int __flags,
     const struct itimerspec *__restrict __value,
     struct itimerspec *__restrict __ovalue) throw ();


extern int timer_gettime (timer_t __timerid, struct itimerspec *__value)
     throw ();


extern int timer_getoverrun (timer_t __timerid) throw ();





extern int timespec_get (struct timespec *__ts, int __base)
     throw () __attribute__ ((__nonnull__ (1)));
# 403 "/usr/include/time.h" 3 4
extern int getdate_err;
# 412 "/usr/include/time.h" 3 4
extern struct tm *getdate (const char *__string);
# 426 "/usr/include/time.h" 3 4
extern int getdate_r (const char *__restrict __string,
        struct tm *__restrict __resbufp);


}
# 25 "/usr/include/pthread.h" 2 3 4

# 1 "/usr/include/arm-linux-gnueabihf/bits/pthreadtypes.h" 1 3 4
# 37 "/usr/include/arm-linux-gnueabihf/bits/pthreadtypes.h" 3 4
typedef unsigned long int pthread_t;


union pthread_attr_t
{
  char __size[36];
  long int __align;
};

typedef union pthread_attr_t pthread_attr_t;




typedef struct __pthread_internal_slist
{
  struct __pthread_internal_slist *__next;
} __pthread_slist_t;




typedef union
{
  struct __pthread_mutex_s
  {
    int __lock;
    unsigned int __count;
    int __owner;


    int __kind;
    unsigned int __nusers;
    __extension__ union
    {
      int __spins;
      __pthread_slist_t __list;
    };
  } __data;
  char __size[24];
  long int __align;
} pthread_mutex_t;




typedef union
{
  char __size[4];
  long int __align;
} pthread_mutexattr_t;




typedef union
{
  struct
  {
    int __lock;
    unsigned int __futex;
    __extension__ unsigned long long int __total_seq;
    __extension__ unsigned long long int __wakeup_seq;
    __extension__ unsigned long long int __woken_seq;
    void *__mutex;
    unsigned int __nwaiters;
    unsigned int __broadcast_seq;
  } __data;
  char __size[48];
  __extension__ long long int __align;
} pthread_cond_t;

typedef union
{
  char __size[4];
  long int __align;
} pthread_condattr_t;



typedef unsigned int pthread_key_t;



typedef int pthread_once_t;





typedef union
{
  struct
  {
    int __lock;
    unsigned int __nr_readers;
    unsigned int __readers_wakeup;
    unsigned int __writer_wakeup;
    unsigned int __nr_readers_queued;
    unsigned int __nr_writers_queued;
# 147 "/usr/include/arm-linux-gnueabihf/bits/pthreadtypes.h" 3 4
    unsigned char __flags;
    unsigned char __shared;
    unsigned char __pad1;
    unsigned char __pad2;

    int __writer;
  } __data;
  char __size[32];
  long int __align;
} pthread_rwlock_t;



typedef union
{
  char __size[8];
  long int __align;
} pthread_rwlockattr_t;





typedef volatile int pthread_spinlock_t;




typedef union
{
  char __size[20];
  long int __align;
} pthread_barrier_t;

typedef union
{
  char __size[4];
  int __align;
} pthread_barrierattr_t;
# 27 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/setjmp.h" 1 3 4
# 33 "/usr/include/arm-linux-gnueabihf/bits/setjmp.h" 3 4
typedef int __jmp_buf[64] __attribute__((__aligned__ (8)));
# 28 "/usr/include/pthread.h" 2 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/wordsize.h" 1 3 4
# 29 "/usr/include/pthread.h" 2 3 4



enum
{
  PTHREAD_CREATE_JOINABLE,

  PTHREAD_CREATE_DETACHED

};



enum
{
  PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_ADAPTIVE_NP

  ,
  PTHREAD_MUTEX_NORMAL = PTHREAD_MUTEX_TIMED_NP,
  PTHREAD_MUTEX_RECURSIVE = PTHREAD_MUTEX_RECURSIVE_NP,
  PTHREAD_MUTEX_ERRORCHECK = PTHREAD_MUTEX_ERRORCHECK_NP,
  PTHREAD_MUTEX_DEFAULT = PTHREAD_MUTEX_NORMAL



  , PTHREAD_MUTEX_FAST_NP = PTHREAD_MUTEX_TIMED_NP

};




enum
{
  PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_STALLED_NP = PTHREAD_MUTEX_STALLED,
  PTHREAD_MUTEX_ROBUST,
  PTHREAD_MUTEX_ROBUST_NP = PTHREAD_MUTEX_ROBUST
};





enum
{
  PTHREAD_PRIO_NONE,
  PTHREAD_PRIO_INHERIT,
  PTHREAD_PRIO_PROTECT
};
# 114 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_RWLOCK_PREFER_READER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NP,
  PTHREAD_RWLOCK_PREFER_WRITER_NONRECURSIVE_NP,
  PTHREAD_RWLOCK_DEFAULT_NP = PTHREAD_RWLOCK_PREFER_READER_NP
};
# 155 "/usr/include/pthread.h" 3 4
enum
{
  PTHREAD_INHERIT_SCHED,

  PTHREAD_EXPLICIT_SCHED

};



enum
{
  PTHREAD_SCOPE_SYSTEM,

  PTHREAD_SCOPE_PROCESS

};



enum
{
  PTHREAD_PROCESS_PRIVATE,

  PTHREAD_PROCESS_SHARED

};
# 190 "/usr/include/pthread.h" 3 4
struct _pthread_cleanup_buffer
{
  void (*__routine) (void *);
  void *__arg;
  int __canceltype;
  struct _pthread_cleanup_buffer *__prev;
};


enum
{
  PTHREAD_CANCEL_ENABLE,

  PTHREAD_CANCEL_DISABLE

};
enum
{
  PTHREAD_CANCEL_DEFERRED,

  PTHREAD_CANCEL_ASYNCHRONOUS

};
# 228 "/usr/include/pthread.h" 3 4
extern "C" {




extern int pthread_create (pthread_t *__restrict __newthread,
      const pthread_attr_t *__restrict __attr,
      void *(*__start_routine) (void *),
      void *__restrict __arg) throw () __attribute__ ((__nonnull__ (1, 3)));





extern void pthread_exit (void *__retval) __attribute__ ((__noreturn__));







extern int pthread_join (pthread_t __th, void **__thread_return);




extern int pthread_tryjoin_np (pthread_t __th, void **__thread_return) throw ();







extern int pthread_timedjoin_np (pthread_t __th, void **__thread_return,
     const struct timespec *__abstime);






extern int pthread_detach (pthread_t __th) throw ();



extern pthread_t pthread_self (void) throw () __attribute__ ((__const__));


extern int pthread_equal (pthread_t __thread1, pthread_t __thread2)
  throw () __attribute__ ((__const__));







extern int pthread_attr_init (pthread_attr_t *__attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_destroy (pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getdetachstate (const pthread_attr_t *__attr,
     int *__detachstate)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setdetachstate (pthread_attr_t *__attr,
     int __detachstate)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getguardsize (const pthread_attr_t *__attr,
          size_t *__guardsize)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setguardsize (pthread_attr_t *__attr,
          size_t __guardsize)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getschedparam (const pthread_attr_t *__restrict __attr,
           struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedparam (pthread_attr_t *__restrict __attr,
           const struct sched_param *__restrict
           __param) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_getschedpolicy (const pthread_attr_t *__restrict
     __attr, int *__restrict __policy)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setschedpolicy (pthread_attr_t *__attr, int __policy)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getinheritsched (const pthread_attr_t *__restrict
      __attr, int *__restrict __inherit)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setinheritsched (pthread_attr_t *__attr,
      int __inherit)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getscope (const pthread_attr_t *__restrict __attr,
      int *__restrict __scope)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_attr_setscope (pthread_attr_t *__attr, int __scope)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_attr_getstackaddr (const pthread_attr_t *__restrict
          __attr, void **__restrict __stackaddr)
     throw () __attribute__ ((__nonnull__ (1, 2))) __attribute__ ((__deprecated__));





extern int pthread_attr_setstackaddr (pthread_attr_t *__attr,
          void *__stackaddr)
     throw () __attribute__ ((__nonnull__ (1))) __attribute__ ((__deprecated__));


extern int pthread_attr_getstacksize (const pthread_attr_t *__restrict
          __attr, size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_attr_setstacksize (pthread_attr_t *__attr,
          size_t __stacksize)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_attr_getstack (const pthread_attr_t *__restrict __attr,
      void **__restrict __stackaddr,
      size_t *__restrict __stacksize)
     throw () __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_attr_setstack (pthread_attr_t *__attr, void *__stackaddr,
      size_t __stacksize) throw () __attribute__ ((__nonnull__ (1)));





extern int pthread_attr_setaffinity_np (pthread_attr_t *__attr,
     size_t __cpusetsize,
     const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));



extern int pthread_attr_getaffinity_np (const pthread_attr_t *__attr,
     size_t __cpusetsize,
     cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (1, 3)));


extern int pthread_getattr_default_np (pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_setattr_default_np (const pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));




extern int pthread_getattr_np (pthread_t __th, pthread_attr_t *__attr)
     throw () __attribute__ ((__nonnull__ (2)));







extern int pthread_setschedparam (pthread_t __target_thread, int __policy,
      const struct sched_param *__param)
     throw () __attribute__ ((__nonnull__ (3)));


extern int pthread_getschedparam (pthread_t __target_thread,
      int *__restrict __policy,
      struct sched_param *__restrict __param)
     throw () __attribute__ ((__nonnull__ (2, 3)));


extern int pthread_setschedprio (pthread_t __target_thread, int __prio)
     throw ();




extern int pthread_getname_np (pthread_t __target_thread, char *__buf,
          size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int pthread_setname_np (pthread_t __target_thread, const char *__name)
     throw () __attribute__ ((__nonnull__ (2)));





extern int pthread_getconcurrency (void) throw ();


extern int pthread_setconcurrency (int __level) throw ();







extern int pthread_yield (void) throw ();




extern int pthread_setaffinity_np (pthread_t __th, size_t __cpusetsize,
       const cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));


extern int pthread_getaffinity_np (pthread_t __th, size_t __cpusetsize,
       cpu_set_t *__cpuset)
     throw () __attribute__ ((__nonnull__ (3)));
# 494 "/usr/include/pthread.h" 3 4
extern int pthread_once (pthread_once_t *__once_control,
    void (*__init_routine) (void)) __attribute__ ((__nonnull__ (1, 2)));
# 506 "/usr/include/pthread.h" 3 4
extern int pthread_setcancelstate (int __state, int *__oldstate);



extern int pthread_setcanceltype (int __type, int *__oldtype);


extern int pthread_cancel (pthread_t __th);




extern void pthread_testcancel (void);




typedef struct
{
  struct
  {
    __jmp_buf __cancel_jmp_buf;
    int __mask_was_saved;
  } __cancel_jmp_buf[1];
  void *__pad[4];
} __pthread_unwind_buf_t __attribute__ ((__aligned__));
# 540 "/usr/include/pthread.h" 3 4
struct __pthread_cleanup_frame
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;
};




class __pthread_cleanup_class
{
  void (*__cancel_routine) (void *);
  void *__cancel_arg;
  int __do_it;
  int __cancel_type;

 public:
  __pthread_cleanup_class (void (*__fct) (void *), void *__arg)
    : __cancel_routine (__fct), __cancel_arg (__arg), __do_it (1) { }
  ~__pthread_cleanup_class () { if (__do_it) __cancel_routine (__cancel_arg); }
  void __setdoit (int __newval) { __do_it = __newval; }
  void __defer () { pthread_setcanceltype (PTHREAD_CANCEL_DEFERRED,
        &__cancel_type); }
  void __restore () const { pthread_setcanceltype (__cancel_type, 0); }
};
# 742 "/usr/include/pthread.h" 3 4
struct __jmp_buf_tag;
extern int __sigsetjmp (struct __jmp_buf_tag *__env, int __savemask) throw ();





extern int pthread_mutex_init (pthread_mutex_t *__mutex,
          const pthread_mutexattr_t *__mutexattr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_destroy (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_trylock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutex_lock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_timedlock (pthread_mutex_t *__restrict __mutex,
        const struct timespec *__restrict
        __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_unlock (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutex_getprioceiling (const pthread_mutex_t *
      __restrict __mutex,
      int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutex_setprioceiling (pthread_mutex_t *__restrict __mutex,
      int __prioceiling,
      int *__restrict __old_ceiling)
     throw () __attribute__ ((__nonnull__ (1, 3)));




extern int pthread_mutex_consistent (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));

extern int pthread_mutex_consistent_np (pthread_mutex_t *__mutex)
     throw () __attribute__ ((__nonnull__ (1)));
# 806 "/usr/include/pthread.h" 3 4
extern int pthread_mutexattr_init (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_destroy (pthread_mutexattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getpshared (const pthread_mutexattr_t *
      __restrict __attr,
      int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setpshared (pthread_mutexattr_t *__attr,
      int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_gettype (const pthread_mutexattr_t *__restrict
          __attr, int *__restrict __kind)
     throw () __attribute__ ((__nonnull__ (1, 2)));




extern int pthread_mutexattr_settype (pthread_mutexattr_t *__attr, int __kind)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getprotocol (const pthread_mutexattr_t *
       __restrict __attr,
       int *__restrict __protocol)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setprotocol (pthread_mutexattr_t *__attr,
       int __protocol)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_mutexattr_getprioceiling (const pthread_mutexattr_t *
          __restrict __attr,
          int *__restrict __prioceiling)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_mutexattr_setprioceiling (pthread_mutexattr_t *__attr,
          int __prioceiling)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_mutexattr_getrobust (const pthread_mutexattr_t *__attr,
     int *__robustness)
     throw () __attribute__ ((__nonnull__ (1, 2)));

extern int pthread_mutexattr_getrobust_np (const pthread_mutexattr_t *__attr,
        int *__robustness)
     throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_mutexattr_setrobust (pthread_mutexattr_t *__attr,
     int __robustness)
     throw () __attribute__ ((__nonnull__ (1)));

extern int pthread_mutexattr_setrobust_np (pthread_mutexattr_t *__attr,
        int __robustness)
     throw () __attribute__ ((__nonnull__ (1)));
# 888 "/usr/include/pthread.h" 3 4
extern int pthread_rwlock_init (pthread_rwlock_t *__restrict __rwlock,
    const pthread_rwlockattr_t *__restrict
    __attr) throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_destroy (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_rdlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_tryrdlock (pthread_rwlock_t *__rwlock)
  throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedrdlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_wrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlock_trywrlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_rwlock_timedwrlock (pthread_rwlock_t *__restrict __rwlock,
           const struct timespec *__restrict
           __abstime) throw () __attribute__ ((__nonnull__ (1, 2)));



extern int pthread_rwlock_unlock (pthread_rwlock_t *__rwlock)
     throw () __attribute__ ((__nonnull__ (1)));





extern int pthread_rwlockattr_init (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_destroy (pthread_rwlockattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getpshared (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setpshared (pthread_rwlockattr_t *__attr,
       int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_rwlockattr_getkind_np (const pthread_rwlockattr_t *
       __restrict __attr,
       int *__restrict __pref)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_rwlockattr_setkind_np (pthread_rwlockattr_t *__attr,
       int __pref) throw () __attribute__ ((__nonnull__ (1)));







extern int pthread_cond_init (pthread_cond_t *__restrict __cond,
         const pthread_condattr_t *__restrict __cond_attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_destroy (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_signal (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_cond_broadcast (pthread_cond_t *__cond)
     throw () __attribute__ ((__nonnull__ (1)));






extern int pthread_cond_wait (pthread_cond_t *__restrict __cond,
         pthread_mutex_t *__restrict __mutex)
     __attribute__ ((__nonnull__ (1, 2)));
# 1000 "/usr/include/pthread.h" 3 4
extern int pthread_cond_timedwait (pthread_cond_t *__restrict __cond,
       pthread_mutex_t *__restrict __mutex,
       const struct timespec *__restrict __abstime)
     __attribute__ ((__nonnull__ (1, 2, 3)));




extern int pthread_condattr_init (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_destroy (pthread_condattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_condattr_getpshared (const pthread_condattr_t *
     __restrict __attr,
     int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setpshared (pthread_condattr_t *__attr,
     int __pshared) throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_condattr_getclock (const pthread_condattr_t *
          __restrict __attr,
          __clockid_t *__restrict __clock_id)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_condattr_setclock (pthread_condattr_t *__attr,
          __clockid_t __clock_id)
     throw () __attribute__ ((__nonnull__ (1)));
# 1044 "/usr/include/pthread.h" 3 4
extern int pthread_spin_init (pthread_spinlock_t *__lock, int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_destroy (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_lock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_trylock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_spin_unlock (pthread_spinlock_t *__lock)
     throw () __attribute__ ((__nonnull__ (1)));






extern int pthread_barrier_init (pthread_barrier_t *__restrict __barrier,
     const pthread_barrierattr_t *__restrict
     __attr, unsigned int __count)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_destroy (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrier_wait (pthread_barrier_t *__barrier)
     throw () __attribute__ ((__nonnull__ (1)));



extern int pthread_barrierattr_init (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_destroy (pthread_barrierattr_t *__attr)
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_barrierattr_getpshared (const pthread_barrierattr_t *
        __restrict __attr,
        int *__restrict __pshared)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int pthread_barrierattr_setpshared (pthread_barrierattr_t *__attr,
        int __pshared)
     throw () __attribute__ ((__nonnull__ (1)));
# 1111 "/usr/include/pthread.h" 3 4
extern int pthread_key_create (pthread_key_t *__key,
          void (*__destr_function) (void *))
     throw () __attribute__ ((__nonnull__ (1)));


extern int pthread_key_delete (pthread_key_t __key) throw ();


extern void *pthread_getspecific (pthread_key_t __key) throw ();


extern int pthread_setspecific (pthread_key_t __key,
    const void *__pointer) throw () ;




extern int pthread_getcpuclockid (pthread_t __thread_id,
      __clockid_t *__clock_id)
     throw () __attribute__ ((__nonnull__ (2)));
# 1145 "/usr/include/pthread.h" 3 4
extern int pthread_atfork (void (*__prepare) (void),
      void (*__parent) (void),
      void (*__child) (void)) throw ();
# 1159 "/usr/include/pthread.h" 3 4
}
# 36 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr-default.h" 2 3
# 47 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr-default.h" 3
typedef pthread_t __gthread_t;
typedef pthread_key_t __gthread_key_t;
typedef pthread_once_t __gthread_once_t;
typedef pthread_mutex_t __gthread_mutex_t;
typedef pthread_mutex_t __gthread_recursive_mutex_t;
typedef pthread_cond_t __gthread_cond_t;
typedef struct timespec __gthread_time_t;
# 101 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr-default.h" 3
static __typeof(pthread_once) __gthrw_pthread_once __attribute__ ((__weakref__("pthread_once")));
static __typeof(pthread_getspecific) __gthrw_pthread_getspecific __attribute__ ((__weakref__("pthread_getspecific")));
static __typeof(pthread_setspecific) __gthrw_pthread_setspecific __attribute__ ((__weakref__("pthread_setspecific")));

static __typeof(pthread_create) __gthrw_pthread_create __attribute__ ((__weakref__("pthread_create")));
static __typeof(pthread_join) __gthrw_pthread_join __attribute__ ((__weakref__("pthread_join")));
static __typeof(pthread_equal) __gthrw_pthread_equal __attribute__ ((__weakref__("pthread_equal")));
static __typeof(pthread_self) __gthrw_pthread_self __attribute__ ((__weakref__("pthread_self")));
static __typeof(pthread_detach) __gthrw_pthread_detach __attribute__ ((__weakref__("pthread_detach")));

static __typeof(pthread_cancel) __gthrw_pthread_cancel __attribute__ ((__weakref__("pthread_cancel")));

static __typeof(sched_yield) __gthrw_sched_yield __attribute__ ((__weakref__("sched_yield")));

static __typeof(pthread_mutex_lock) __gthrw_pthread_mutex_lock __attribute__ ((__weakref__("pthread_mutex_lock")));
static __typeof(pthread_mutex_trylock) __gthrw_pthread_mutex_trylock __attribute__ ((__weakref__("pthread_mutex_trylock")));

static __typeof(pthread_mutex_timedlock) __gthrw_pthread_mutex_timedlock __attribute__ ((__weakref__("pthread_mutex_timedlock")));

static __typeof(pthread_mutex_unlock) __gthrw_pthread_mutex_unlock __attribute__ ((__weakref__("pthread_mutex_unlock")));
static __typeof(pthread_mutex_init) __gthrw_pthread_mutex_init __attribute__ ((__weakref__("pthread_mutex_init")));
static __typeof(pthread_mutex_destroy) __gthrw_pthread_mutex_destroy __attribute__ ((__weakref__("pthread_mutex_destroy")));

static __typeof(pthread_cond_init) __gthrw_pthread_cond_init __attribute__ ((__weakref__("pthread_cond_init")));
static __typeof(pthread_cond_broadcast) __gthrw_pthread_cond_broadcast __attribute__ ((__weakref__("pthread_cond_broadcast")));
static __typeof(pthread_cond_signal) __gthrw_pthread_cond_signal __attribute__ ((__weakref__("pthread_cond_signal")));
static __typeof(pthread_cond_wait) __gthrw_pthread_cond_wait __attribute__ ((__weakref__("pthread_cond_wait")));
static __typeof(pthread_cond_timedwait) __gthrw_pthread_cond_timedwait __attribute__ ((__weakref__("pthread_cond_timedwait")));
static __typeof(pthread_cond_destroy) __gthrw_pthread_cond_destroy __attribute__ ((__weakref__("pthread_cond_destroy")));

static __typeof(pthread_key_create) __gthrw_pthread_key_create __attribute__ ((__weakref__("pthread_key_create")));
static __typeof(pthread_key_delete) __gthrw_pthread_key_delete __attribute__ ((__weakref__("pthread_key_delete")));
static __typeof(pthread_mutexattr_init) __gthrw_pthread_mutexattr_init __attribute__ ((__weakref__("pthread_mutexattr_init")));
static __typeof(pthread_mutexattr_settype) __gthrw_pthread_mutexattr_settype __attribute__ ((__weakref__("pthread_mutexattr_settype")));
static __typeof(pthread_mutexattr_destroy) __gthrw_pthread_mutexattr_destroy __attribute__ ((__weakref__("pthread_mutexattr_destroy")));
# 236 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr-default.h" 3
static __typeof(pthread_key_create) __gthrw___pthread_key_create __attribute__ ((__weakref__("__pthread_key_create")));
# 246 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr-default.h" 3
static inline int
__gthread_active_p (void)
{
  static void *const __gthread_active_ptr
    = __extension__ (void *) &__gthrw___pthread_key_create;
  return __gthread_active_ptr != 0;
}
# 658 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr-default.h" 3
static inline int
__gthread_create (__gthread_t *__threadid, void *(*__func) (void*),
    void *__args)
{
  return __gthrw_pthread_create (__threadid, __null, __func, __args);
}

static inline int
__gthread_join (__gthread_t __threadid, void **__value_ptr)
{
  return __gthrw_pthread_join (__threadid, __value_ptr);
}

static inline int
__gthread_detach (__gthread_t __threadid)
{
  return __gthrw_pthread_detach (__threadid);
}

static inline int
__gthread_equal (__gthread_t __t1, __gthread_t __t2)
{
  return __gthrw_pthread_equal (__t1, __t2);
}

static inline __gthread_t
__gthread_self (void)
{
  return __gthrw_pthread_self ();
}

static inline int
__gthread_yield (void)
{
  return __gthrw_sched_yield ();
}

static inline int
__gthread_once (__gthread_once_t *__once, void (*__func) (void))
{
  if (__gthread_active_p ())
    return __gthrw_pthread_once (__once, __func);
  else
    return -1;
}

static inline int
__gthread_key_create (__gthread_key_t *__key, void (*__dtor) (void *))
{
  return __gthrw_pthread_key_create (__key, __dtor);
}

static inline int
__gthread_key_delete (__gthread_key_t __key)
{
  return __gthrw_pthread_key_delete (__key);
}

static inline void *
__gthread_getspecific (__gthread_key_t __key)
{
  return __gthrw_pthread_getspecific (__key);
}

static inline int
__gthread_setspecific (__gthread_key_t __key, const void *__ptr)
{
  return __gthrw_pthread_setspecific (__key, __ptr);
}

static inline void
__gthread_mutex_init_function (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    __gthrw_pthread_mutex_init (__mutex, __null);
}

static inline int
__gthread_mutex_destroy (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_destroy (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_lock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_lock (__mutex);
  else
    return 0;
}

static inline int
__gthread_mutex_trylock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_trylock (__mutex);
  else
    return 0;
}


static inline int
__gthread_mutex_timedlock (__gthread_mutex_t *__mutex,
      const __gthread_time_t *__abs_timeout)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_timedlock (__mutex, __abs_timeout);
  else
    return 0;
}


static inline int
__gthread_mutex_unlock (__gthread_mutex_t *__mutex)
{
  if (__gthread_active_p ())
    return __gthrw_pthread_mutex_unlock (__mutex);
  else
    return 0;
}
# 807 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr-default.h" 3
static inline int
__gthread_recursive_mutex_lock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_lock (__mutex);
}

static inline int
__gthread_recursive_mutex_trylock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_trylock (__mutex);
}


static inline int
__gthread_recursive_mutex_timedlock (__gthread_recursive_mutex_t *__mutex,
         const __gthread_time_t *__abs_timeout)
{
  return __gthread_mutex_timedlock (__mutex, __abs_timeout);
}


static inline int
__gthread_recursive_mutex_unlock (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_unlock (__mutex);
}

static inline int
__gthread_recursive_mutex_destroy (__gthread_recursive_mutex_t *__mutex)
{
  return __gthread_mutex_destroy (__mutex);
}
# 849 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr-default.h" 3
static inline int
__gthread_cond_broadcast (__gthread_cond_t *__cond)
{
  return __gthrw_pthread_cond_broadcast (__cond);
}

static inline int
__gthread_cond_signal (__gthread_cond_t *__cond)
{
  return __gthrw_pthread_cond_signal (__cond);
}

static inline int
__gthread_cond_wait (__gthread_cond_t *__cond, __gthread_mutex_t *__mutex)
{
  return __gthrw_pthread_cond_wait (__cond, __mutex);
}

static inline int
__gthread_cond_timedwait (__gthread_cond_t *__cond, __gthread_mutex_t *__mutex,
     const __gthread_time_t *__abs_timeout)
{
  return __gthrw_pthread_cond_timedwait (__cond, __mutex, __abs_timeout);
}

static inline int
__gthread_cond_wait_recursive (__gthread_cond_t *__cond,
          __gthread_recursive_mutex_t *__mutex)
{
  return __gthread_cond_wait (__cond, __mutex);
}

static inline int
__gthread_cond_destroy (__gthread_cond_t* __cond)
{
  return __gthrw_pthread_cond_destroy (__cond);
}
# 149 "/usr/include/arm-linux-gnueabihf/c++/6/bits/gthr.h" 2 3


#pragma GCC visibility pop
# 36 "/usr/include/c++/6/ext/atomicity.h" 2 3
# 1 "/usr/include/arm-linux-gnueabihf/c++/6/bits/atomic_word.h" 1 3
# 32 "/usr/include/arm-linux-gnueabihf/c++/6/bits/atomic_word.h" 3
typedef int _Atomic_word;
# 37 "/usr/include/c++/6/ext/atomicity.h" 2 3

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{







  static inline _Atomic_word
  __exchange_and_add(volatile _Atomic_word* __mem, int __val)
  { return __atomic_fetch_add(__mem, __val, 4); }

  static inline void
  __atomic_add(volatile _Atomic_word* __mem, int __val)
  { __atomic_fetch_add(__mem, __val, 4); }
# 64 "/usr/include/c++/6/ext/atomicity.h" 3
  static inline _Atomic_word
  __exchange_and_add_single(_Atomic_word* __mem, int __val)
  {
    _Atomic_word __result = *__mem;
    *__mem += __val;
    return __result;
  }

  static inline void
  __atomic_add_single(_Atomic_word* __mem, int __val)
  { *__mem += __val; }

  static inline _Atomic_word
  __attribute__ ((__unused__))
  __exchange_and_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      return __exchange_and_add(__mem, __val);
    else
      return __exchange_and_add_single(__mem, __val);



  }

  static inline void
  __attribute__ ((__unused__))
  __atomic_add_dispatch(_Atomic_word* __mem, int __val)
  {

    if (__gthread_active_p())
      __atomic_add(__mem, __val);
    else
      __atomic_add_single(__mem, __val);



  }


}
# 40 "/usr/include/c++/6/bits/basic_string.h" 2 3
# 1 "/usr/include/c++/6/ext/alloc_traits.h" 1 3
# 32 "/usr/include/c++/6/ext/alloc_traits.h" 3
       
# 33 "/usr/include/c++/6/ext/alloc_traits.h" 3



# 1 "/usr/include/c++/6/bits/alloc_traits.h" 1 3
# 41 "/usr/include/c++/6/bits/alloc_traits.h" 3
namespace std __attribute__ ((__visibility__ ("default")))
{


  struct __allocator_traits_base
  {
    template<typename _Tp, typename _Up, typename = void>
      struct __rebind : __replace_first_arg<_Tp, _Up> { };

    template<typename _Tp, typename _Up>
      struct __rebind<_Tp, _Up,
        __void_t<typename _Tp::template rebind<_Up>::other>>
      { using type = typename _Tp::template rebind<_Up>::other; };

  protected:
    template<typename _Tp>
      using __pointer = typename _Tp::pointer;
    template<typename _Tp>
      using __c_pointer = typename _Tp::const_pointer;
    template<typename _Tp>
      using __v_pointer = typename _Tp::void_pointer;
    template<typename _Tp>
      using __cv_pointer = typename _Tp::const_void_pointer;
    template<typename _Tp>
      using __pocca = typename _Tp::propagate_on_container_copy_assignment;
    template<typename _Tp>
      using __pocma = typename _Tp::propagate_on_container_move_assignment;
    template<typename _Tp>
      using __pocs = typename _Tp::propagate_on_container_swap;
    template<typename _Tp>
      using __equal = typename _Tp::is_always_equal;
  };

  template<typename _Alloc, typename _Up>
    using __alloc_rebind
      = typename __allocator_traits_base::template __rebind<_Alloc, _Up>::type;





  template<typename _Alloc>
    struct allocator_traits : __allocator_traits_base
    {

      typedef _Alloc allocator_type;

      typedef typename _Alloc::value_type value_type;






      using pointer = __detected_or_t<value_type*, __pointer, _Alloc>;

    private:

      template<template<typename> class _Func, typename _Tp, typename = void>
 struct _Ptr
 {
   using type = typename pointer_traits<pointer>::template rebind<_Tp>;
 };

      template<template<typename> class _Func, typename _Tp>
 struct _Ptr<_Func, _Tp, __void_t<_Func<_Alloc>>>
 {
   using type = _Func<_Alloc>;
 };


      template<typename _A2, typename _PtrT, typename = void>
 struct _Diff
 { using type = typename pointer_traits<_PtrT>::difference_type; };

      template<typename _A2, typename _PtrT>
 struct _Diff<_A2, _PtrT, __void_t<typename _A2::difference_type>>
 { using type = typename _A2::difference_type; };


      template<typename _A2, typename _DiffT, typename = void>
 struct _Size : make_unsigned<_DiffT> { };

      template<typename _A2, typename _DiffT>
 struct _Size<_A2, _DiffT, __void_t<typename _A2::size_type>>
 { using type = typename _A2::size_type; };

    public:






      using const_pointer = typename _Ptr<__c_pointer, const value_type>::type;







      using void_pointer = typename _Ptr<__v_pointer, void>::type;







      using const_void_pointer = typename _Ptr<__cv_pointer, const void>::type;







      using difference_type = typename _Diff<_Alloc, pointer>::type;







      using size_type = typename _Size<_Alloc, difference_type>::type;







      using propagate_on_container_copy_assignment
 = __detected_or_t<false_type, __pocca, _Alloc>;







      using propagate_on_container_move_assignment
 = __detected_or_t<false_type, __pocma, _Alloc>;







      using propagate_on_container_swap
 = __detected_or_t<false_type, __pocs, _Alloc>;







      using is_always_equal
 = __detected_or_t<typename is_empty<_Alloc>::type, __equal, _Alloc>;

      template<typename _Tp>
 using rebind_alloc = __alloc_rebind<_Alloc, _Tp>;
      template<typename _Tp>
 using rebind_traits = allocator_traits<rebind_alloc<_Tp>>;

    private:
      template<typename _Alloc2>
 static auto
 _S_allocate(_Alloc2& __a, size_type __n, const_void_pointer __hint, int)
 -> decltype(__a.allocate(__n, __hint))
 { return __a.allocate(__n, __hint); }

      template<typename _Alloc2>
 static pointer
 _S_allocate(_Alloc2& __a, size_type __n, const_void_pointer, ...)
 { return __a.allocate(__n); }

      template<typename _Tp, typename... _Args>
 struct __construct_helper
 {
   template<typename _Alloc2,
     typename = decltype(std::declval<_Alloc2*>()->construct(
    std::declval<_Tp*>(), std::declval<_Args>()...))>
     static true_type __test(int);

   template<typename>
     static false_type __test(...);

   using type = decltype(__test<_Alloc>(0));
 };

      template<typename _Tp, typename... _Args>
 using __has_construct
   = typename __construct_helper<_Tp, _Args...>::type;

      template<typename _Tp, typename... _Args>
 static _Require<__has_construct<_Tp, _Args...>>
 _S_construct(_Alloc& __a, _Tp* __p, _Args&&... __args)
 { __a.construct(__p, std::forward<_Args>(__args)...); }

      template<typename _Tp, typename... _Args>
 static
 _Require<__and_<__not_<__has_construct<_Tp, _Args...>>,
          is_constructible<_Tp, _Args...>>>
 _S_construct(_Alloc&, _Tp* __p, _Args&&... __args)
 { ::new((void*)__p) _Tp(std::forward<_Args>(__args)...); }

      template<typename _Alloc2, typename _Tp>
 static auto
 _S_destroy(_Alloc2& __a, _Tp* __p, int)
 -> decltype(__a.destroy(__p))
 { __a.destroy(__p); }

      template<typename _Alloc2, typename _Tp>
 static void
 _S_destroy(_Alloc2&, _Tp* __p, ...)
 { __p->~_Tp(); }

      template<typename _Alloc2>
 static auto
 _S_max_size(_Alloc2& __a, int)
 -> decltype(__a.max_size())
 { return __a.max_size(); }

      template<typename _Alloc2>
 static size_type
 _S_max_size(_Alloc2&, ...)
 {


   return __gnu_cxx::__numeric_traits<size_type>::__max
     / sizeof(value_type);
 }

      template<typename _Alloc2>
 static auto
 _S_select(_Alloc2& __a, int)
 -> decltype(__a.select_on_container_copy_construction())
 { return __a.select_on_container_copy_construction(); }

      template<typename _Alloc2>
 static _Alloc2
 _S_select(_Alloc2& __a, ...)
 { return __a; }

    public:
# 299 "/usr/include/c++/6/bits/alloc_traits.h" 3
      static pointer
      allocate(_Alloc& __a, size_type __n)
      { return __a.allocate(__n); }
# 314 "/usr/include/c++/6/bits/alloc_traits.h" 3
      static pointer
      allocate(_Alloc& __a, size_type __n, const_void_pointer __hint)
      { return _S_allocate(__a, __n, __hint, 0); }
# 326 "/usr/include/c++/6/bits/alloc_traits.h" 3
      static void
      deallocate(_Alloc& __a, pointer __p, size_type __n)
      { __a.deallocate(__p, __n); }
# 341 "/usr/include/c++/6/bits/alloc_traits.h" 3
      template<typename _Tp, typename... _Args>
 static auto construct(_Alloc& __a, _Tp* __p, _Args&&... __args)
 -> decltype(_S_construct(__a, __p, std::forward<_Args>(__args)...))
 { _S_construct(__a, __p, std::forward<_Args>(__args)...); }
# 354 "/usr/include/c++/6/bits/alloc_traits.h" 3
      template<typename _Tp>
 static void destroy(_Alloc& __a, _Tp* __p)
 { _S_destroy(__a, __p, 0); }
# 366 "/usr/include/c++/6/bits/alloc_traits.h" 3
      static size_type max_size(const _Alloc& __a) noexcept
      { return _S_max_size(__a, 0); }
# 377 "/usr/include/c++/6/bits/alloc_traits.h" 3
      static _Alloc
      select_on_container_copy_construction(const _Alloc& __rhs)
      { return _S_select(__rhs, 0); }
    };


  template<typename _Tp>
    struct allocator_traits<allocator<_Tp>>
    {

      using allocator_type = allocator<_Tp>;

      using value_type = _Tp;


      using pointer = _Tp*;


      using const_pointer = const _Tp*;


      using void_pointer = void*;


      using const_void_pointer = const void*;


      using difference_type = std::ptrdiff_t;


      using size_type = std::size_t;


      using propagate_on_container_copy_assignment = false_type;


      using propagate_on_container_move_assignment = true_type;


      using propagate_on_container_swap = false_type;


      using is_always_equal = true_type;

      template<typename _Up>
 using rebind_alloc = allocator<_Up>;

      template<typename _Up>
 using rebind_traits = allocator_traits<allocator<_Up>>;
# 434 "/usr/include/c++/6/bits/alloc_traits.h" 3
      static pointer
      allocate(allocator_type& __a, size_type __n)
      { return __a.allocate(__n); }
# 448 "/usr/include/c++/6/bits/alloc_traits.h" 3
      static pointer
      allocate(allocator_type& __a, size_type __n, const_void_pointer __hint)
      { return __a.allocate(__n, __hint); }
# 460 "/usr/include/c++/6/bits/alloc_traits.h" 3
      static void
      deallocate(allocator_type& __a, pointer __p, size_type __n)
      { __a.deallocate(__p, __n); }
# 472 "/usr/include/c++/6/bits/alloc_traits.h" 3
      template<typename _Up, typename... _Args>
 static void
 construct(allocator_type& __a, _Up* __p, _Args&&... __args)
 { __a.construct(__p, std::forward<_Args>(__args)...); }
# 484 "/usr/include/c++/6/bits/alloc_traits.h" 3
      template<typename _Up>
 static void
 destroy(allocator_type& __a, _Up* __p)
 { __a.destroy(__p); }






      static size_type
      max_size(const allocator_type& __a) noexcept
      { return __a.max_size(); }






      static allocator_type
      select_on_container_copy_construction(const allocator_type& __rhs)
      { return __rhs; }
    };


  template<typename _Alloc>
    inline void
    __do_alloc_on_copy(_Alloc& __one, const _Alloc& __two, true_type)
    { __one = __two; }

  template<typename _Alloc>
    inline void
    __do_alloc_on_copy(_Alloc&, const _Alloc&, false_type)
    { }

  template<typename _Alloc>
    inline void __alloc_on_copy(_Alloc& __one, const _Alloc& __two)
    {
      typedef allocator_traits<_Alloc> __traits;
      typedef typename __traits::propagate_on_container_copy_assignment __pocca;
      __do_alloc_on_copy(__one, __two, __pocca());
    }

  template<typename _Alloc>
    inline _Alloc __alloc_on_copy(const _Alloc& __a)
    {
      typedef allocator_traits<_Alloc> __traits;
      return __traits::select_on_container_copy_construction(__a);
    }

  template<typename _Alloc>
    inline void __do_alloc_on_move(_Alloc& __one, _Alloc& __two, true_type)
    { __one = std::move(__two); }

  template<typename _Alloc>
    inline void __do_alloc_on_move(_Alloc&, _Alloc&, false_type)
    { }

  template<typename _Alloc>
    inline void __alloc_on_move(_Alloc& __one, _Alloc& __two)
    {
      typedef allocator_traits<_Alloc> __traits;
      typedef typename __traits::propagate_on_container_move_assignment __pocma;
      __do_alloc_on_move(__one, __two, __pocma());
    }

  template<typename _Alloc>
    inline void __do_alloc_on_swap(_Alloc& __one, _Alloc& __two, true_type)
    {
      using std::swap;
      swap(__one, __two);
    }

  template<typename _Alloc>
    inline void __do_alloc_on_swap(_Alloc&, _Alloc&, false_type)
    { }

  template<typename _Alloc>
    inline void __alloc_on_swap(_Alloc& __one, _Alloc& __two)
    {
      typedef allocator_traits<_Alloc> __traits;
      typedef typename __traits::propagate_on_container_swap __pocs;
      __do_alloc_on_swap(__one, __two, __pocs());
    }

  template<typename _Alloc>
    class __is_copy_insertable_impl
    {
      typedef allocator_traits<_Alloc> _Traits;

      template<typename _Up, typename
        = decltype(_Traits::construct(std::declval<_Alloc&>(),
          std::declval<_Up*>(),
          std::declval<const _Up&>()))>
 static true_type
 _M_select(int);

      template<typename _Up>
 static false_type
 _M_select(...);

    public:
      typedef decltype(_M_select<typename _Alloc::value_type>(0)) type;
    };


  template<typename _Alloc>
    struct __is_copy_insertable
    : __is_copy_insertable_impl<_Alloc>::type
    { };


  template<typename _Tp>
    struct __is_copy_insertable<allocator<_Tp>>
    : is_copy_constructible<_Tp>
    { };


}
# 37 "/usr/include/c++/6/ext/alloc_traits.h" 2 3




namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{






template<typename _Alloc>
  struct __alloc_traits

  : std::allocator_traits<_Alloc>

  {
    typedef _Alloc allocator_type;

    typedef std::allocator_traits<_Alloc> _Base_type;
    typedef typename _Base_type::value_type value_type;
    typedef typename _Base_type::pointer pointer;
    typedef typename _Base_type::const_pointer const_pointer;
    typedef typename _Base_type::size_type size_type;
    typedef typename _Base_type::difference_type difference_type;

    typedef value_type& reference;
    typedef const value_type& const_reference;
    using _Base_type::allocate;
    using _Base_type::deallocate;
    using _Base_type::construct;
    using _Base_type::destroy;
    using _Base_type::max_size;

  private:
    template<typename _Ptr>
      using __is_custom_pointer
 = std::__and_<std::is_same<pointer, _Ptr>,
        std::__not_<std::is_pointer<_Ptr>>>;

  public:

    template<typename _Ptr, typename... _Args>
      static typename std::enable_if<__is_custom_pointer<_Ptr>::value>::type
      construct(_Alloc& __a, _Ptr __p, _Args&&... __args)
      {
 _Base_type::construct(__a, std::addressof(*__p),
         std::forward<_Args>(__args)...);
      }


    template<typename _Ptr>
      static typename std::enable_if<__is_custom_pointer<_Ptr>::value>::type
      destroy(_Alloc& __a, _Ptr __p)
      { _Base_type::destroy(__a, std::addressof(*__p)); }

    static _Alloc _S_select_on_copy(const _Alloc& __a)
    { return _Base_type::select_on_container_copy_construction(__a); }

    static void _S_on_swap(_Alloc& __a, _Alloc& __b)
    { std::__alloc_on_swap(__a, __b); }

    static constexpr bool _S_propagate_on_copy_assign()
    { return _Base_type::propagate_on_container_copy_assignment::value; }

    static constexpr bool _S_propagate_on_move_assign()
    { return _Base_type::propagate_on_container_move_assignment::value; }

    static constexpr bool _S_propagate_on_swap()
    { return _Base_type::propagate_on_container_swap::value; }

    static constexpr bool _S_always_equal()
    { return _Base_type::is_always_equal::value; }

    static constexpr bool _S_nothrow_move()
    { return _S_propagate_on_move_assign() || _S_always_equal(); }

    template<typename _Tp>
      struct rebind
      { typedef typename _Base_type::template rebind_alloc<_Tp> other; };
# 158 "/usr/include/c++/6/ext/alloc_traits.h" 3
  };


}
# 41 "/usr/include/c++/6/bits/basic_string.h" 2 3






namespace std __attribute__ ((__visibility__ ("default")))
{



namespace __cxx11 {
# 71 "/usr/include/c++/6/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    class basic_string
    {
      typedef typename __gnu_cxx::__alloc_traits<_Alloc>::template
 rebind<_CharT>::other _Char_alloc_type;
      typedef __gnu_cxx::__alloc_traits<_Char_alloc_type> _Alloc_traits;


    public:
      typedef _Traits traits_type;
      typedef typename _Traits::char_type value_type;
      typedef _Char_alloc_type allocator_type;
      typedef typename _Alloc_traits::size_type size_type;
      typedef typename _Alloc_traits::difference_type difference_type;
      typedef typename _Alloc_traits::reference reference;
      typedef typename _Alloc_traits::const_reference const_reference;
      typedef typename _Alloc_traits::pointer pointer;
      typedef typename _Alloc_traits::const_pointer const_pointer;
      typedef __gnu_cxx::__normal_iterator<pointer, basic_string> iterator;
      typedef __gnu_cxx::__normal_iterator<const_pointer, basic_string>
       const_iterator;
      typedef std::reverse_iterator<const_iterator> const_reverse_iterator;
      typedef std::reverse_iterator<iterator> reverse_iterator;


      static const size_type npos = static_cast<size_type>(-1);

    private:




      typedef const_iterator __const_iterator;



      struct _Alloc_hider : allocator_type
      {
 _Alloc_hider(pointer __dat, const _Alloc& __a = _Alloc())
 : allocator_type(__a), _M_p(__dat) { }

 pointer _M_p;
      };

      _Alloc_hider _M_dataplus;
      size_type _M_string_length;

      enum { _S_local_capacity = 15 / sizeof(_CharT) };

      union
      {
 _CharT _M_local_buf[_S_local_capacity + 1];
 size_type _M_allocated_capacity;
      };

      void
      _M_data(pointer __p)
      { _M_dataplus._M_p = __p; }

      void
      _M_length(size_type __length)
      { _M_string_length = __length; }

      pointer
      _M_data() const
      { return _M_dataplus._M_p; }

      pointer
      _M_local_data()
      {

 return std::pointer_traits<pointer>::pointer_to(*_M_local_buf);



      }

      const_pointer
      _M_local_data() const
      {

 return std::pointer_traits<const_pointer>::pointer_to(*_M_local_buf);



      }

      void
      _M_capacity(size_type __capacity)
      { _M_allocated_capacity = __capacity; }

      void
      _M_set_length(size_type __n)
      {
 _M_length(__n);
 traits_type::assign(_M_data()[__n], _CharT());
      }

      bool
      _M_is_local() const
      { return _M_data() == _M_local_data(); }


      pointer
      _M_create(size_type&, size_type);

      void
      _M_dispose()
      {
 if (!_M_is_local())
   _M_destroy(_M_allocated_capacity);
      }

      void
      _M_destroy(size_type __size) throw()
      { _Alloc_traits::deallocate(_M_get_allocator(), _M_data(), __size + 1); }



      template<typename _InIterator>
        void
        _M_construct_aux(_InIterator __beg, _InIterator __end,
    std::__false_type)
 {
          typedef typename iterator_traits<_InIterator>::iterator_category _Tag;
          _M_construct(__beg, __end, _Tag());
 }



      template<typename _Integer>
        void
        _M_construct_aux(_Integer __beg, _Integer __end, std::__true_type)
 { _M_construct_aux_2(static_cast<size_type>(__beg), __end); }

      void
      _M_construct_aux_2(size_type __req, _CharT __c)
      { _M_construct(__req, __c); }

      template<typename _InIterator>
        void
        _M_construct(_InIterator __beg, _InIterator __end)
 {
   typedef typename std::__is_integer<_InIterator>::__type _Integral;
   _M_construct_aux(__beg, __end, _Integral());
        }


      template<typename _InIterator>
        void
        _M_construct(_InIterator __beg, _InIterator __end,
       std::input_iterator_tag);



      template<typename _FwdIterator>
        void
        _M_construct(_FwdIterator __beg, _FwdIterator __end,
       std::forward_iterator_tag);

      void
      _M_construct(size_type __req, _CharT __c);

      allocator_type&
      _M_get_allocator()
      { return _M_dataplus; }

      const allocator_type&
      _M_get_allocator() const
      { return _M_dataplus; }

    private:
# 258 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      _M_check(size_type __pos, const char* __s) const
      {
 if (__pos > this->size())
   __throw_out_of_range_fmt(("%s: __pos (which is %zu) > " "this->size() (which is %zu)")
                                         ,
       __s, __pos, this->size());
 return __pos;
      }

      void
      _M_check_length(size_type __n1, size_type __n2, const char* __s) const
      {
 if (this->max_size() - (this->size() - __n1) < __n2)
   __throw_length_error((__s));
      }



      size_type
      _M_limit(size_type __pos, size_type __off) const noexcept
      {
 const bool __testoff = __off < this->size() - __pos;
 return __testoff ? __off : this->size() - __pos;
      }


      bool
      _M_disjunct(const _CharT* __s) const noexcept
      {
 return (less<const _CharT*>()(__s, _M_data())
  || less<const _CharT*>()(_M_data() + this->size(), __s));
      }



      static void
      _S_copy(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::copy(__d, __s, __n);
      }

      static void
      _S_move(_CharT* __d, const _CharT* __s, size_type __n)
      {
 if (__n == 1)
   traits_type::assign(*__d, *__s);
 else
   traits_type::move(__d, __s, __n);
      }

      static void
      _S_assign(_CharT* __d, size_type __n, _CharT __c)
      {
 if (__n == 1)
   traits_type::assign(*__d, __c);
 else
   traits_type::assign(__d, __n, __c);
      }



      template<class _Iterator>
        static void
        _S_copy_chars(_CharT* __p, _Iterator __k1, _Iterator __k2)
        {
   for (; __k1 != __k2; ++__k1, (void)++__p)
     traits_type::assign(*__p, *__k1);
 }

      static void
      _S_copy_chars(_CharT* __p, iterator __k1, iterator __k2) noexcept
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, const_iterator __k1, const_iterator __k2)
      noexcept
      { _S_copy_chars(__p, __k1.base(), __k2.base()); }

      static void
      _S_copy_chars(_CharT* __p, _CharT* __k1, _CharT* __k2) noexcept
      { _S_copy(__p, __k1, __k2 - __k1); }

      static void
      _S_copy_chars(_CharT* __p, const _CharT* __k1, const _CharT* __k2)
      noexcept
      { _S_copy(__p, __k1, __k2 - __k1); }

      static int
      _S_compare(size_type __n1, size_type __n2) noexcept
      {
 const difference_type __d = difference_type(__n1 - __n2);

 if (__d > __gnu_cxx::__numeric_traits<int>::__max)
   return __gnu_cxx::__numeric_traits<int>::__max;
 else if (__d < __gnu_cxx::__numeric_traits<int>::__min)
   return __gnu_cxx::__numeric_traits<int>::__min;
 else
   return int(__d);
      }

      void
      _M_assign(const basic_string& __rcs);

      void
      _M_mutate(size_type __pos, size_type __len1, const _CharT* __s,
  size_type __len2);

      void
      _M_erase(size_type __pos, size_type __n);

    public:







      basic_string()
      noexcept(is_nothrow_default_constructible<_Alloc>::value)
      : _M_dataplus(_M_local_data())
      { _M_set_length(0); }




      explicit
      basic_string(const _Alloc& __a) noexcept
      : _M_dataplus(_M_local_data(), __a)
      { _M_set_length(0); }





      basic_string(const basic_string& __str)
      : _M_dataplus(_M_local_data(),
      _Alloc_traits::_S_select_on_copy(__str._M_get_allocator()))
      { _M_construct(__str._M_data(), __str._M_data() + __str.length()); }
# 410 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string(const basic_string& __str, size_type __pos,
     size_type __n = npos)
      : _M_dataplus(_M_local_data())
      {
 const _CharT* __start = __str._M_data()
   + __str._M_check(__pos, "basic_string::basic_string");
 _M_construct(__start, __start + __str._M_limit(__pos, __n));
      }
# 426 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string(const basic_string& __str, size_type __pos,
     size_type __n, const _Alloc& __a)
      : _M_dataplus(_M_local_data(), __a)
      {
 const _CharT* __start
   = __str._M_data() + __str._M_check(__pos, "string::string");
 _M_construct(__start, __start + __str._M_limit(__pos, __n));
      }
# 444 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string(const _CharT* __s, size_type __n,
     const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__s, __s + __n); }






      basic_string(const _CharT* __s, const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__s, __s ? __s + traits_type::length(__s) : __s+npos); }







      basic_string(size_type __n, _CharT __c, const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__n, __c); }
# 476 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string(basic_string&& __str) noexcept
      : _M_dataplus(_M_local_data(), std::move(__str._M_get_allocator()))
      {
 if (__str._M_is_local())
   {
     traits_type::copy(_M_local_buf, __str._M_local_buf,
         _S_local_capacity + 1);
   }
 else
   {
     _M_data(__str._M_data());
     _M_capacity(__str._M_allocated_capacity);
   }




 _M_length(__str.length());
 __str._M_data(__str._M_local_data());
 __str._M_set_length(0);
      }






      basic_string(initializer_list<_CharT> __l, const _Alloc& __a = _Alloc())
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__l.begin(), __l.end()); }

      basic_string(const basic_string& __str, const _Alloc& __a)
      : _M_dataplus(_M_local_data(), __a)
      { _M_construct(__str.begin(), __str.end()); }

      basic_string(basic_string&& __str, const _Alloc& __a)
      noexcept(_Alloc_traits::_S_always_equal())
      : _M_dataplus(_M_local_data(), __a)
      {
 if (__str._M_is_local())
   {
     traits_type::copy(_M_local_buf, __str._M_local_buf,
         _S_local_capacity + 1);
     _M_length(__str.length());
     __str._M_set_length(0);
   }
 else if (_Alloc_traits::_S_always_equal()
     || __str.get_allocator() == __a)
   {
     _M_data(__str._M_data());
     _M_length(__str.length());
     _M_capacity(__str._M_allocated_capacity);
     __str._M_data(__str._M_local_buf);
     __str._M_set_length(0);
   }
 else
   _M_construct(__str.begin(), __str.end());
      }
# 544 "/usr/include/c++/6/bits/basic_string.h" 3
      template<typename _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>



        basic_string(_InputIterator __beg, _InputIterator __end,
       const _Alloc& __a = _Alloc())
 : _M_dataplus(_M_local_data(), __a)
 { _M_construct(__beg, __end); }




      ~basic_string()
      { _M_dispose(); }





      basic_string&
      operator=(const basic_string& __str)
      {

 if (_Alloc_traits::_S_propagate_on_copy_assign())
   {
     if (!_Alloc_traits::_S_always_equal() && !_M_is_local()
  && _M_get_allocator() != __str._M_get_allocator())
       {


  if (__str.size() <= _S_local_capacity)
    {
      _M_destroy(_M_allocated_capacity);
      _M_data(_M_local_data());
      _M_set_length(0);
    }
  else
    {
      const auto __len = __str.size();
      auto __alloc = __str._M_get_allocator();

      auto __ptr = _Alloc_traits::allocate(__alloc, __len + 1);
      _M_destroy(_M_allocated_capacity);
      _M_data(__ptr);
      _M_capacity(__len);
      _M_set_length(__len);
    }
       }
     std::__alloc_on_copy(_M_get_allocator(), __str._M_get_allocator());
   }

 return this->assign(__str);
      }





      basic_string&
      operator=(const _CharT* __s)
      { return this->assign(__s); }
# 614 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      operator=(_CharT __c)
      {
 this->assign(1, __c);
 return *this;
      }
# 632 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      operator=(basic_string&& __str)
      noexcept(_Alloc_traits::_S_nothrow_move())
      {
 if (!_M_is_local() && _Alloc_traits::_S_propagate_on_move_assign()
     && !_Alloc_traits::_S_always_equal()
     && _M_get_allocator() != __str._M_get_allocator())
   {

     _M_destroy(_M_allocated_capacity);
     _M_data(_M_local_data());
     _M_set_length(0);
   }

 std::__alloc_on_move(_M_get_allocator(), __str._M_get_allocator());

 if (!__str._M_is_local()
     && (_Alloc_traits::_S_propagate_on_move_assign()
       || _Alloc_traits::_S_always_equal()))
   {
     pointer __data = nullptr;
     size_type __capacity;
     if (!_M_is_local())
       {
  if (_Alloc_traits::_S_always_equal())
    {
      __data = _M_data();
      __capacity = _M_allocated_capacity;
    }
  else
    _M_destroy(_M_allocated_capacity);
       }

     _M_data(__str._M_data());
     _M_length(__str.length());
     _M_capacity(__str._M_allocated_capacity);
     if (__data)
       {
  __str._M_data(__data);
  __str._M_capacity(__capacity);
       }
     else
       __str._M_data(__str._M_local_buf);
   }
 else
     assign(__str);
 __str.clear();
 return *this;
      }





      basic_string&
      operator=(initializer_list<_CharT> __l)
      {
 this->assign(__l.begin(), __l.size());
 return *this;
      }







      iterator
      begin() noexcept
      { return iterator(_M_data()); }





      const_iterator
      begin() const noexcept
      { return const_iterator(_M_data()); }





      iterator
      end() noexcept
      { return iterator(_M_data() + this->size()); }





      const_iterator
      end() const noexcept
      { return const_iterator(_M_data() + this->size()); }






      reverse_iterator
      rbegin() noexcept
      { return reverse_iterator(this->end()); }






      const_reverse_iterator
      rbegin() const noexcept
      { return const_reverse_iterator(this->end()); }






      reverse_iterator
      rend() noexcept
      { return reverse_iterator(this->begin()); }






      const_reverse_iterator
      rend() const noexcept
      { return const_reverse_iterator(this->begin()); }






      const_iterator
      cbegin() const noexcept
      { return const_iterator(this->_M_data()); }





      const_iterator
      cend() const noexcept
      { return const_iterator(this->_M_data() + this->size()); }






      const_reverse_iterator
      crbegin() const noexcept
      { return const_reverse_iterator(this->end()); }






      const_reverse_iterator
      crend() const noexcept
      { return const_reverse_iterator(this->begin()); }


    public:



      size_type
      size() const noexcept
      { return _M_string_length; }



      size_type
      length() const noexcept
      { return _M_string_length; }


      size_type
      max_size() const noexcept
      { return (_Alloc_traits::max_size(_M_get_allocator()) - 1) / 2; }
# 828 "/usr/include/c++/6/bits/basic_string.h" 3
      void
      resize(size_type __n, _CharT __c);
# 841 "/usr/include/c++/6/bits/basic_string.h" 3
      void
      resize(size_type __n)
      { this->resize(__n, _CharT()); }



      void
      shrink_to_fit() noexcept
      {

 if (capacity() > size())
   {
     try
       { reserve(0); }
     catch(...)
       { }
   }

      }






      size_type
      capacity() const noexcept
      {
 return _M_is_local() ? size_type(_S_local_capacity)
                      : _M_allocated_capacity;
      }
# 890 "/usr/include/c++/6/bits/basic_string.h" 3
      void
      reserve(size_type __res_arg = 0);




      void
      clear() noexcept
      { _M_set_length(0); }





      bool
      empty() const noexcept
      { return this->size() == 0; }
# 919 "/usr/include/c++/6/bits/basic_string.h" 3
      const_reference
      operator[] (size_type __pos) const noexcept
      {
 ;
 return _M_data()[__pos];
      }
# 936 "/usr/include/c++/6/bits/basic_string.h" 3
      reference
      operator[](size_type __pos)
      {


 ;

 ;
 return _M_data()[__pos];
      }
# 957 "/usr/include/c++/6/bits/basic_string.h" 3
      const_reference
      at(size_type __n) const
      {
 if (__n >= this->size())
   __throw_out_of_range_fmt(("basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)")

                            ,
       __n, this->size());
 return _M_data()[__n];
      }
# 978 "/usr/include/c++/6/bits/basic_string.h" 3
      reference
      at(size_type __n)
      {
 if (__n >= size())
   __throw_out_of_range_fmt(("basic_string::at: __n " "(which is %zu) >= this->size() " "(which is %zu)")

                            ,
       __n, this->size());
 return _M_data()[__n];
      }






      reference
      front() noexcept
      {
 ;
 return operator[](0);
      }





      const_reference
      front() const noexcept
      {
 ;
 return operator[](0);
      }





      reference
      back() noexcept
      {
 ;
 return operator[](this->size() - 1);
      }





      const_reference
      back() const noexcept
      {
 ;
 return operator[](this->size() - 1);
      }
# 1041 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      operator+=(const basic_string& __str)
      { return this->append(__str); }






      basic_string&
      operator+=(const _CharT* __s)
      { return this->append(__s); }






      basic_string&
      operator+=(_CharT __c)
      {
 this->push_back(__c);
 return *this;
      }







      basic_string&
      operator+=(initializer_list<_CharT> __l)
      { return this->append(__l.begin(), __l.size()); }







      basic_string&
      append(const basic_string& __str)
      { return _M_append(__str._M_data(), __str.size()); }
# 1099 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      append(const basic_string& __str, size_type __pos, size_type __n)
      { return _M_append(__str._M_data()
    + __str._M_check(__pos, "basic_string::append"),
    __str._M_limit(__pos, __n)); }







      basic_string&
      append(const _CharT* __s, size_type __n)
      {
 ;
 _M_check_length(size_type(0), __n, "basic_string::append");
 return _M_append(__s, __n);
      }






      basic_string&
      append(const _CharT* __s)
      {
 ;
 const size_type __n = traits_type::length(__s);
 _M_check_length(size_type(0), __n, "basic_string::append");
 return _M_append(__s, __n);
      }
# 1141 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      append(size_type __n, _CharT __c)
      { return _M_replace_aux(this->size(), size_type(0), __n, __c); }







      basic_string&
      append(initializer_list<_CharT> __l)
      { return this->append(__l.begin(), __l.size()); }
# 1165 "/usr/include/c++/6/bits/basic_string.h" 3
      template<class _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>



        basic_string&
        append(_InputIterator __first, _InputIterator __last)
        { return this->replace(end(), end(), __first, __last); }





      void
      push_back(_CharT __c)
      {
 const size_type __size = this->size();
 if (__size + 1 > this->capacity())
   this->_M_mutate(__size, size_type(0), 0, size_type(1));
 traits_type::assign(this->_M_data()[__size], __c);
 this->_M_set_length(__size + 1);
      }






      basic_string&
      assign(const basic_string& __str)
      {
 this->_M_assign(__str);
 return *this;
      }
# 1209 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      assign(basic_string&& __str)
      noexcept(_Alloc_traits::_S_nothrow_move())
      {


 return *this = std::move(__str);
      }
# 1232 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      assign(const basic_string& __str, size_type __pos, size_type __n)
      { return _M_replace(size_type(0), this->size(), __str._M_data()
     + __str._M_check(__pos, "basic_string::assign"),
     __str._M_limit(__pos, __n)); }
# 1248 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s, size_type __n)
      {
 ;
 return _M_replace(size_type(0), this->size(), __s, __n);
      }
# 1264 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      assign(const _CharT* __s)
      {
 ;
 return _M_replace(size_type(0), this->size(), __s,
     traits_type::length(__s));
      }
# 1281 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      assign(size_type __n, _CharT __c)
      { return _M_replace_aux(size_type(0), this->size(), __n, __c); }
# 1294 "/usr/include/c++/6/bits/basic_string.h" 3
      template<class _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>



        basic_string&
        assign(_InputIterator __first, _InputIterator __last)
        { return this->replace(begin(), end(), __first, __last); }







      basic_string&
      assign(initializer_list<_CharT> __l)
      { return this->assign(__l.begin(), __l.size()); }
# 1330 "/usr/include/c++/6/bits/basic_string.h" 3
      iterator
      insert(const_iterator __p, size_type __n, _CharT __c)
      {
 ;
 const size_type __pos = __p - begin();
 this->replace(__p, __p, __n, __c);
 return iterator(this->_M_data() + __pos);
      }
# 1372 "/usr/include/c++/6/bits/basic_string.h" 3
      template<class _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>
 iterator
        insert(const_iterator __p, _InputIterator __beg, _InputIterator __end)
        {
   ;
   const size_type __pos = __p - begin();
   this->replace(__p, __p, __beg, __end);
   return iterator(this->_M_data() + __pos);
 }
# 1408 "/usr/include/c++/6/bits/basic_string.h" 3
      void
      insert(iterator __p, initializer_list<_CharT> __l)
      {
 ;
 this->insert(__p - begin(), __l.begin(), __l.size());
      }
# 1428 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str)
      { return this->replace(__pos1, size_type(0),
        __str._M_data(), __str.size()); }
# 1451 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos1, const basic_string& __str,
      size_type __pos2, size_type __n)
      { return this->replace(__pos1, size_type(0), __str._M_data()
        + __str._M_check(__pos2, "basic_string::insert"),
        __str._M_limit(__pos2, __n)); }
# 1474 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s, size_type __n)
      { return this->replace(__pos, size_type(0), __s, __n); }
# 1493 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, const _CharT* __s)
      {
 ;
 return this->replace(__pos, size_type(0), __s,
        traits_type::length(__s));
      }
# 1517 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      insert(size_type __pos, size_type __n, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::insert"),
         size_type(0), __n, __c); }
# 1535 "/usr/include/c++/6/bits/basic_string.h" 3
      iterator
      insert(__const_iterator __p, _CharT __c)
      {
 ;
 const size_type __pos = __p - begin();
 _M_replace_aux(__pos, size_type(0), size_type(1), __c);
 return iterator(_M_data() + __pos);
      }
# 1559 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      erase(size_type __pos = 0, size_type __n = npos)
      {
 this->_M_erase(_M_check(__pos, "basic_string::erase"),
         _M_limit(__pos, __n));
 return *this;
      }
# 1575 "/usr/include/c++/6/bits/basic_string.h" 3
      iterator
      erase(__const_iterator __position)
      {

                           ;
 const size_type __pos = __position - begin();
 this->_M_erase(__pos, size_type(1));
 return iterator(_M_data() + __pos);
      }
# 1594 "/usr/include/c++/6/bits/basic_string.h" 3
      iterator
      erase(__const_iterator __first, __const_iterator __last)
      {

                        ;
        const size_type __pos = __first - begin();
 this->_M_erase(__pos, __last - __first);
 return iterator(this->_M_data() + __pos);
      }







      void
      pop_back() noexcept
      {
 ;
 _M_erase(size() - 1, 1);
      }
# 1635 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n, const basic_string& __str)
      { return this->replace(__pos, __n, __str._M_data(), __str.size()); }
# 1657 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2)
      { return this->replace(__pos1, __n1, __str._M_data()
        + __str._M_check(__pos2, "basic_string::replace"),
        __str._M_limit(__pos2, __n2)); }
# 1682 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2)
      {
 ;
 return _M_replace(_M_check(__pos, "basic_string::replace"),
     _M_limit(__pos, __n1), __s, __n2);
      }
# 1707 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, const _CharT* __s)
      {
 ;
 return this->replace(__pos, __n1, __s, traits_type::length(__s));
      }
# 1731 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      replace(size_type __pos, size_type __n1, size_type __n2, _CharT __c)
      { return _M_replace_aux(_M_check(__pos, "basic_string::replace"),
         _M_limit(__pos, __n1), __n2, __c); }
# 1749 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const basic_string& __str)
      { return this->replace(__i1, __i2, __str._M_data(), __str.size()); }
# 1769 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const _CharT* __s, size_type __n)
      {

                      ;
 return this->replace(__i1 - begin(), __i2 - __i1, __s, __n);
      }
# 1791 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2, const _CharT* __s)
      {
 ;
 return this->replace(__i1, __i2, __s, traits_type::length(__s));
      }
# 1812 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2, size_type __n,
       _CharT __c)
      {

                      ;
 return _M_replace_aux(__i1 - begin(), __i2 - __i1, __n, __c);
      }
# 1837 "/usr/include/c++/6/bits/basic_string.h" 3
      template<class _InputIterator,
        typename = std::_RequireInputIter<_InputIterator>>
        basic_string&
        replace(const_iterator __i1, const_iterator __i2,
  _InputIterator __k1, _InputIterator __k2)
        {
  
                        ;
   ;
   return this->_M_replace_dispatch(__i1, __i2, __k1, __k2,
        std::__false_type());
 }
# 1869 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       _CharT* __k1, _CharT* __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const _CharT* __k1, const _CharT* __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1, __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       iterator __k1, iterator __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }

      basic_string&
      replace(__const_iterator __i1, __const_iterator __i2,
       const_iterator __k1, const_iterator __k2)
      {

                      ;
 ;
 return this->replace(__i1 - begin(), __i2 - __i1,
        __k1.base(), __k2 - __k1);
      }
# 1928 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string& replace(const_iterator __i1, const_iterator __i2,
       initializer_list<_CharT> __l)
      { return this->replace(__i1, __i2, __l.begin(), __l.end()); }


    private:
      template<class _Integer>
 basic_string&
 _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
       _Integer __n, _Integer __val, __true_type)
        { return _M_replace_aux(__i1 - begin(), __i2 - __i1, __n, __val); }

      template<class _InputIterator>
 basic_string&
 _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
       _InputIterator __k1, _InputIterator __k2,
       __false_type);

      basic_string&
      _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
       _CharT __c);

      basic_string&
      _M_replace(size_type __pos, size_type __len1, const _CharT* __s,
   const size_type __len2);

      basic_string&
      _M_append(const _CharT* __s, size_type __n);

    public:
# 1971 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      copy(_CharT* __s, size_type __n, size_type __pos = 0) const;
# 1981 "/usr/include/c++/6/bits/basic_string.h" 3
      void
      swap(basic_string& __s) noexcept;
# 1991 "/usr/include/c++/6/bits/basic_string.h" 3
      const _CharT*
      c_str() const noexcept
      { return _M_data(); }







      const _CharT*
      data() const noexcept
      { return _M_data(); }




      allocator_type
      get_allocator() const noexcept
      { return _M_get_allocator(); }
# 2024 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos, size_type __n) const;
# 2037 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find(const basic_string& __str, size_type __pos = 0) const
 noexcept
      { return this->find(__str.data(), __pos, __str.size()); }
# 2052 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find(__s, __pos, traits_type::length(__s));
      }
# 2069 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find(_CharT __c, size_type __pos = 0) const noexcept;
# 2082 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      rfind(const basic_string& __str, size_type __pos = npos) const
 noexcept
      { return this->rfind(__str.data(), __pos, __str.size()); }
# 2099 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos, size_type __n) const;
# 2112 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      rfind(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->rfind(__s, __pos, traits_type::length(__s));
      }
# 2129 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      rfind(_CharT __c, size_type __pos = npos) const noexcept;
# 2143 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_first_of(const basic_string& __str, size_type __pos = 0) const
 noexcept
      { return this->find_first_of(__str.data(), __pos, __str.size()); }
# 2160 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 2173 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_first_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_of(__s, __pos, traits_type::length(__s));
      }
# 2192 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_first_of(_CharT __c, size_type __pos = 0) const noexcept
      { return this->find(__c, __pos); }
# 2207 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_last_of(const basic_string& __str, size_type __pos = npos) const
 noexcept
      { return this->find_last_of(__str.data(), __pos, __str.size()); }
# 2224 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos, size_type __n) const;
# 2237 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_last_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_of(__s, __pos, traits_type::length(__s));
      }
# 2256 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_last_of(_CharT __c, size_type __pos = npos) const noexcept
      { return this->rfind(__c, __pos); }
# 2270 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_first_not_of(const basic_string& __str, size_type __pos = 0) const
 noexcept
      { return this->find_first_not_of(__str.data(), __pos, __str.size()); }
# 2287 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos,
   size_type __n) const;
# 2301 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_first_not_of(const _CharT* __s, size_type __pos = 0) const
      {
 ;
 return this->find_first_not_of(__s, __pos, traits_type::length(__s));
      }
# 2318 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_first_not_of(_CharT __c, size_type __pos = 0) const
 noexcept;
# 2333 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_last_not_of(const basic_string& __str, size_type __pos = npos) const
 noexcept
      { return this->find_last_not_of(__str.data(), __pos, __str.size()); }
# 2350 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos,
         size_type __n) const;
# 2364 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_last_not_of(const _CharT* __s, size_type __pos = npos) const
      {
 ;
 return this->find_last_not_of(__s, __pos, traits_type::length(__s));
      }
# 2381 "/usr/include/c++/6/bits/basic_string.h" 3
      size_type
      find_last_not_of(_CharT __c, size_type __pos = npos) const
 noexcept;
# 2397 "/usr/include/c++/6/bits/basic_string.h" 3
      basic_string
      substr(size_type __pos = 0, size_type __n = npos) const
      { return basic_string(*this,
       _M_check(__pos, "basic_string::substr"), __n); }
# 2416 "/usr/include/c++/6/bits/basic_string.h" 3
      int
      compare(const basic_string& __str) const
      {
 const size_type __size = this->size();
 const size_type __osize = __str.size();
 const size_type __len = std::min(__size, __osize);

 int __r = traits_type::compare(_M_data(), __str.data(), __len);
 if (!__r)
   __r = _S_compare(__size, __osize);
 return __r;
      }
# 2448 "/usr/include/c++/6/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n, const basic_string& __str) const;
# 2474 "/usr/include/c++/6/bits/basic_string.h" 3
      int
      compare(size_type __pos1, size_type __n1, const basic_string& __str,
       size_type __pos2, size_type __n2) const;
# 2492 "/usr/include/c++/6/bits/basic_string.h" 3
      int
      compare(const _CharT* __s) const;
# 2516 "/usr/include/c++/6/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s) const;
# 2543 "/usr/include/c++/6/bits/basic_string.h" 3
      int
      compare(size_type __pos, size_type __n1, const _CharT* __s,
       size_type __n2) const;
  };
}
# 4942 "/usr/include/c++/6/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT,_Traits,_Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT,_Traits,_Alloc>& __rhs);







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    {
      basic_string<_CharT, _Traits, _Alloc> __str(__lhs);
      __str.append(__rhs);
      return __str;
    }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs, _CharT __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str(__lhs);
      __str.append(__size_type(1), __rhs);
      return __str;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return std::move(__lhs.append(__rhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       basic_string<_CharT, _Traits, _Alloc>&& __rhs)
    { return std::move(__rhs.insert(0, __lhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
       basic_string<_CharT, _Traits, _Alloc>&& __rhs)
    {
      const auto __size = __lhs.size() + __rhs.size();
      const bool __cond = (__size > __lhs.capacity()
      && __size <= __rhs.capacity());
      return __cond ? std::move(__rhs.insert(0, __lhs))
             : std::move(__lhs.append(__rhs));
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       basic_string<_CharT, _Traits, _Alloc>&& __rhs)
    { return std::move(__rhs.insert(0, __lhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs,
       basic_string<_CharT, _Traits, _Alloc>&& __rhs)
    { return std::move(__rhs.insert(0, 1, __lhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
       const _CharT* __rhs)
    { return std::move(__lhs.append(__rhs)); }

  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_string<_CharT, _Traits, _Alloc>
    operator+(basic_string<_CharT, _Traits, _Alloc>&& __lhs,
       _CharT __rhs)
    { return std::move(__lhs.append(1, __rhs)); }
# 5063 "/usr/include/c++/6/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) == 0; }

  template<typename _CharT>
    inline
    typename __gnu_cxx::__enable_if<__is_char<_CharT>::__value, bool>::__type
    operator==(const basic_string<_CharT>& __lhs,
        const basic_string<_CharT>& __rhs) noexcept
    { return (__lhs.size() == __rhs.size()
       && !std::char_traits<_CharT>::compare(__lhs.data(), __rhs.data(),
          __lhs.size())); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) == 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator==(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) == 0; }
# 5110 "/usr/include/c++/6/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return !(__lhs == __rhs); }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator!=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return !(__lhs == __rhs); }
# 5148 "/usr/include/c++/6/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) < 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) > 0; }
# 5186 "/usr/include/c++/6/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
       const _CharT* __rhs)
    { return __lhs.compare(__rhs) > 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) < 0; }
# 5224 "/usr/include/c++/6/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) <= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator<=(const _CharT* __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) >= 0; }
# 5262 "/usr/include/c++/6/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const basic_string<_CharT, _Traits, _Alloc>& __lhs,
        const _CharT* __rhs)
    { return __lhs.compare(__rhs) >= 0; }







  template<typename _CharT, typename _Traits, typename _Alloc>
    inline bool
    operator>=(const _CharT* __lhs,
      const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    { return __rhs.compare(__lhs) <= 0; }
# 5300 "/usr/include/c++/6/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline void
    swap(basic_string<_CharT, _Traits, _Alloc>& __lhs,
  basic_string<_CharT, _Traits, _Alloc>& __rhs)
    noexcept(noexcept(__lhs.swap(__rhs)))
    { __lhs.swap(__rhs); }
# 5320 "/usr/include/c++/6/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __is,
        basic_string<_CharT, _Traits, _Alloc>& __str);

  template<>
    basic_istream<char>&
    operator>>(basic_istream<char>& __is, basic_string<char>& __str);
# 5338 "/usr/include/c++/6/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_ostream<_CharT, _Traits>&
    operator<<(basic_ostream<_CharT, _Traits>& __os,
        const basic_string<_CharT, _Traits, _Alloc>& __str)
    {


      return __ostream_insert(__os, __str.data(), __str.size());
    }
# 5361 "/usr/include/c++/6/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim);
# 5378 "/usr/include/c++/6/bits/basic_string.h" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return std::getline(__is, __str, __is.widen('\n')); }



  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>&& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    { return std::getline(__is, __str, __delim); }


  template<typename _CharT, typename _Traits, typename _Alloc>
    inline basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>&& __is,
     basic_string<_CharT, _Traits, _Alloc>& __str)
    { return std::getline(__is, __str); }


  template<>
    basic_istream<char>&
    getline(basic_istream<char>& __in, basic_string<char>& __str,
     char __delim);


  template<>
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>& __in, basic_string<wchar_t>& __str,
     wchar_t __delim);



}



# 1 "/usr/include/c++/6/ext/string_conversions.h" 1 3
# 32 "/usr/include/c++/6/ext/string_conversions.h" 3
       
# 33 "/usr/include/c++/6/ext/string_conversions.h" 3
# 41 "/usr/include/c++/6/ext/string_conversions.h" 3
# 1 "/usr/include/c++/6/cstdlib" 1 3
# 39 "/usr/include/c++/6/cstdlib" 3
       
# 40 "/usr/include/c++/6/cstdlib" 3
# 75 "/usr/include/c++/6/cstdlib" 3
# 1 "/usr/include/stdlib.h" 1 3 4
# 32 "/usr/include/stdlib.h" 3 4
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 33 "/usr/include/stdlib.h" 2 3 4

extern "C" {






# 1 "/usr/include/arm-linux-gnueabihf/bits/waitflags.h" 1 3 4
# 50 "/usr/include/arm-linux-gnueabihf/bits/waitflags.h" 3 4
typedef enum
{
  P_ALL,
  P_PID,
  P_PGID
} idtype_t;
# 42 "/usr/include/stdlib.h" 2 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/waitstatus.h" 1 3 4
# 43 "/usr/include/stdlib.h" 2 3 4
# 56 "/usr/include/stdlib.h" 3 4


typedef struct
  {
    int quot;
    int rem;
  } div_t;



typedef struct
  {
    long int quot;
    long int rem;
  } ldiv_t;







__extension__ typedef struct
  {
    long long int quot;
    long long int rem;
  } lldiv_t;


# 100 "/usr/include/stdlib.h" 3 4
extern size_t __ctype_get_mb_cur_max (void) throw () ;




extern double atof (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern int atoi (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;

extern long int atol (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





__extension__ extern long long int atoll (const char *__nptr)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;





extern double strtod (const char *__restrict __nptr,
        char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern float strtof (const char *__restrict __nptr,
       char **__restrict __endptr) throw () __attribute__ ((__nonnull__ (1)));

extern long double strtold (const char *__restrict __nptr,
       char **__restrict __endptr)
     throw () __attribute__ ((__nonnull__ (1)));





extern long int strtol (const char *__restrict __nptr,
   char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

extern unsigned long int strtoul (const char *__restrict __nptr,
      char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));




__extension__
extern long long int strtoq (const char *__restrict __nptr,
        char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtouq (const char *__restrict __nptr,
           char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));





__extension__
extern long long int strtoll (const char *__restrict __nptr,
         char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

__extension__
extern unsigned long long int strtoull (const char *__restrict __nptr,
     char **__restrict __endptr, int __base)
     throw () __attribute__ ((__nonnull__ (1)));

# 200 "/usr/include/stdlib.h" 3 4
extern long int strtol_l (const char *__restrict __nptr,
     char **__restrict __endptr, int __base,
     __locale_t __loc) throw () __attribute__ ((__nonnull__ (1, 4)));

extern unsigned long int strtoul_l (const char *__restrict __nptr,
        char **__restrict __endptr,
        int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern long long int strtoll_l (const char *__restrict __nptr,
    char **__restrict __endptr, int __base,
    __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

__extension__
extern unsigned long long int strtoull_l (const char *__restrict __nptr,
       char **__restrict __endptr,
       int __base, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 4)));

extern double strtod_l (const char *__restrict __nptr,
   char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern float strtof_l (const char *__restrict __nptr,
         char **__restrict __endptr, __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));

extern long double strtold_l (const char *__restrict __nptr,
         char **__restrict __endptr,
         __locale_t __loc)
     throw () __attribute__ ((__nonnull__ (1, 3)));
# 266 "/usr/include/stdlib.h" 3 4
extern char *l64a (long int __n) throw () ;


extern long int a64l (const char *__s)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1))) ;




# 1 "/usr/include/arm-linux-gnueabihf/sys/types.h" 1 3 4
# 27 "/usr/include/arm-linux-gnueabihf/sys/types.h" 3 4
extern "C" {





typedef __u_char u_char;
typedef __u_short u_short;
typedef __u_int u_int;
typedef __u_long u_long;
typedef __quad_t quad_t;
typedef __u_quad_t u_quad_t;
typedef __fsid_t fsid_t;




typedef __loff_t loff_t;



typedef __ino_t ino_t;






typedef __ino64_t ino64_t;




typedef __dev_t dev_t;




typedef __gid_t gid_t;




typedef __mode_t mode_t;




typedef __nlink_t nlink_t;




typedef __uid_t uid_t;





typedef __off_t off_t;






typedef __off64_t off64_t;
# 104 "/usr/include/arm-linux-gnueabihf/sys/types.h" 3 4
typedef __id_t id_t;




typedef __ssize_t ssize_t;





typedef __daddr_t daddr_t;
typedef __caddr_t caddr_t;





typedef __key_t key_t;
# 136 "/usr/include/arm-linux-gnueabihf/sys/types.h" 3 4
typedef __useconds_t useconds_t;



typedef __suseconds_t suseconds_t;





# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 147 "/usr/include/arm-linux-gnueabihf/sys/types.h" 2 3 4



typedef unsigned long int ulong;
typedef unsigned short int ushort;
typedef unsigned int uint;
# 200 "/usr/include/arm-linux-gnueabihf/sys/types.h" 3 4
typedef unsigned int u_int8_t __attribute__ ((__mode__ (__QI__)));
typedef unsigned int u_int16_t __attribute__ ((__mode__ (__HI__)));
typedef unsigned int u_int32_t __attribute__ ((__mode__ (__SI__)));
typedef unsigned int u_int64_t __attribute__ ((__mode__ (__DI__)));

typedef int register_t __attribute__ ((__mode__ (__word__)));
# 219 "/usr/include/arm-linux-gnueabihf/sys/types.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/sys/select.h" 1 3 4
# 30 "/usr/include/arm-linux-gnueabihf/sys/select.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/select.h" 1 3 4
# 31 "/usr/include/arm-linux-gnueabihf/sys/select.h" 2 3 4


# 1 "/usr/include/arm-linux-gnueabihf/bits/sigset.h" 1 3 4
# 22 "/usr/include/arm-linux-gnueabihf/bits/sigset.h" 3 4
typedef int __sig_atomic_t;




typedef struct
  {
    unsigned long int __val[(1024 / (8 * sizeof (unsigned long int)))];
  } __sigset_t;
# 34 "/usr/include/arm-linux-gnueabihf/sys/select.h" 2 3 4



typedef __sigset_t sigset_t;
# 47 "/usr/include/arm-linux-gnueabihf/sys/select.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/time.h" 1 3 4
# 48 "/usr/include/arm-linux-gnueabihf/sys/select.h" 2 3 4
# 56 "/usr/include/arm-linux-gnueabihf/sys/select.h" 3 4
typedef long int __fd_mask;
# 66 "/usr/include/arm-linux-gnueabihf/sys/select.h" 3 4
typedef struct
  {



    __fd_mask fds_bits[1024 / (8 * (int) sizeof (__fd_mask))];





  } fd_set;






typedef __fd_mask fd_mask;
# 98 "/usr/include/arm-linux-gnueabihf/sys/select.h" 3 4
extern "C" {
# 108 "/usr/include/arm-linux-gnueabihf/sys/select.h" 3 4
extern int select (int __nfds, fd_set *__restrict __readfds,
     fd_set *__restrict __writefds,
     fd_set *__restrict __exceptfds,
     struct timeval *__restrict __timeout);
# 120 "/usr/include/arm-linux-gnueabihf/sys/select.h" 3 4
extern int pselect (int __nfds, fd_set *__restrict __readfds,
      fd_set *__restrict __writefds,
      fd_set *__restrict __exceptfds,
      const struct timespec *__restrict __timeout,
      const __sigset_t *__restrict __sigmask);
# 133 "/usr/include/arm-linux-gnueabihf/sys/select.h" 3 4
}
# 220 "/usr/include/arm-linux-gnueabihf/sys/types.h" 2 3 4


# 1 "/usr/include/arm-linux-gnueabihf/sys/sysmacros.h" 1 3 4
# 24 "/usr/include/arm-linux-gnueabihf/sys/sysmacros.h" 3 4
extern "C" {

__extension__
extern unsigned int gnu_dev_major (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned int gnu_dev_minor (unsigned long long int __dev)
     throw () __attribute__ ((__const__));
__extension__
extern unsigned long long int gnu_dev_makedev (unsigned int __major,
            unsigned int __minor)
     throw () __attribute__ ((__const__));
# 58 "/usr/include/arm-linux-gnueabihf/sys/sysmacros.h" 3 4
}
# 223 "/usr/include/arm-linux-gnueabihf/sys/types.h" 2 3 4





typedef __blksize_t blksize_t;






typedef __blkcnt_t blkcnt_t;



typedef __fsblkcnt_t fsblkcnt_t;



typedef __fsfilcnt_t fsfilcnt_t;
# 262 "/usr/include/arm-linux-gnueabihf/sys/types.h" 3 4
typedef __blkcnt64_t blkcnt64_t;
typedef __fsblkcnt64_t fsblkcnt64_t;
typedef __fsfilcnt64_t fsfilcnt64_t;
# 273 "/usr/include/arm-linux-gnueabihf/sys/types.h" 3 4
}
# 276 "/usr/include/stdlib.h" 2 3 4






extern long int random (void) throw ();


extern void srandom (unsigned int __seed) throw ();





extern char *initstate (unsigned int __seed, char *__statebuf,
   size_t __statelen) throw () __attribute__ ((__nonnull__ (2)));



extern char *setstate (char *__statebuf) throw () __attribute__ ((__nonnull__ (1)));







struct random_data
  {
    int32_t *fptr;
    int32_t *rptr;
    int32_t *state;
    int rand_type;
    int rand_deg;
    int rand_sep;
    int32_t *end_ptr;
  };

extern int random_r (struct random_data *__restrict __buf,
       int32_t *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int srandom_r (unsigned int __seed, struct random_data *__buf)
     throw () __attribute__ ((__nonnull__ (2)));

extern int initstate_r (unsigned int __seed, char *__restrict __statebuf,
   size_t __statelen,
   struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (2, 4)));

extern int setstate_r (char *__restrict __statebuf,
         struct random_data *__restrict __buf)
     throw () __attribute__ ((__nonnull__ (1, 2)));






extern int rand (void) throw ();

extern void srand (unsigned int __seed) throw ();




extern int rand_r (unsigned int *__seed) throw ();







extern double drand48 (void) throw ();
extern double erand48 (unsigned short int __xsubi[3]) throw () __attribute__ ((__nonnull__ (1)));


extern long int lrand48 (void) throw ();
extern long int nrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern long int mrand48 (void) throw ();
extern long int jrand48 (unsigned short int __xsubi[3])
     throw () __attribute__ ((__nonnull__ (1)));


extern void srand48 (long int __seedval) throw ();
extern unsigned short int *seed48 (unsigned short int __seed16v[3])
     throw () __attribute__ ((__nonnull__ (1)));
extern void lcong48 (unsigned short int __param[7]) throw () __attribute__ ((__nonnull__ (1)));





struct drand48_data
  {
    unsigned short int __x[3];
    unsigned short int __old_x[3];
    unsigned short int __c;
    unsigned short int __init;
    __extension__ unsigned long long int __a;

  };


extern int drand48_r (struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));
extern int erand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        double *__restrict __result) throw () __attribute__ ((__nonnull__ (1, 2)));


extern int lrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int nrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int mrand48_r (struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));
extern int jrand48_r (unsigned short int __xsubi[3],
        struct drand48_data *__restrict __buffer,
        long int *__restrict __result)
     throw () __attribute__ ((__nonnull__ (1, 2)));


extern int srand48_r (long int __seedval, struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (2)));

extern int seed48_r (unsigned short int __seed16v[3],
       struct drand48_data *__buffer) throw () __attribute__ ((__nonnull__ (1, 2)));

extern int lcong48_r (unsigned short int __param[7],
        struct drand48_data *__buffer)
     throw () __attribute__ ((__nonnull__ (1, 2)));









extern void *malloc (size_t __size) throw () __attribute__ ((__malloc__)) ;

extern void *calloc (size_t __nmemb, size_t __size)
     throw () __attribute__ ((__malloc__)) ;










extern void *realloc (void *__ptr, size_t __size)
     throw () __attribute__ ((__warn_unused_result__));

extern void free (void *__ptr) throw ();




extern void cfree (void *__ptr) throw ();



# 1 "/usr/include/alloca.h" 1 3 4
# 24 "/usr/include/alloca.h" 3 4
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 25 "/usr/include/alloca.h" 2 3 4

extern "C" {





extern void *alloca (size_t __size) throw ();





}
# 454 "/usr/include/stdlib.h" 2 3 4





extern void *valloc (size_t __size) throw () __attribute__ ((__malloc__)) ;




extern int posix_memalign (void **__memptr, size_t __alignment, size_t __size)
     throw () __attribute__ ((__nonnull__ (1))) ;




extern void *aligned_alloc (size_t __alignment, size_t __size)
     throw () __attribute__ ((__malloc__)) __attribute__ ((__alloc_size__ (2))) ;




extern void abort (void) throw () __attribute__ ((__noreturn__));



extern int atexit (void (*__func) (void)) throw () __attribute__ ((__nonnull__ (1)));




extern "C++" int at_quick_exit (void (*__func) (void))
     throw () __asm ("at_quick_exit") __attribute__ ((__nonnull__ (1)));









extern int on_exit (void (*__func) (int __status, void *__arg), void *__arg)
     throw () __attribute__ ((__nonnull__ (1)));






extern void exit (int __status) throw () __attribute__ ((__noreturn__));





extern void quick_exit (int __status) throw () __attribute__ ((__noreturn__));







extern void _Exit (int __status) throw () __attribute__ ((__noreturn__));






extern char *getenv (const char *__name) throw () __attribute__ ((__nonnull__ (1))) ;





extern char *secure_getenv (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;






extern int putenv (char *__string) throw () __attribute__ ((__nonnull__ (1)));





extern int setenv (const char *__name, const char *__value, int __replace)
     throw () __attribute__ ((__nonnull__ (2)));


extern int unsetenv (const char *__name) throw () __attribute__ ((__nonnull__ (1)));






extern int clearenv (void) throw ();
# 567 "/usr/include/stdlib.h" 3 4
extern char *mktemp (char *__template) throw () __attribute__ ((__nonnull__ (1)));
# 580 "/usr/include/stdlib.h" 3 4
extern int mkstemp (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 590 "/usr/include/stdlib.h" 3 4
extern int mkstemp64 (char *__template) __attribute__ ((__nonnull__ (1))) ;
# 602 "/usr/include/stdlib.h" 3 4
extern int mkstemps (char *__template, int __suffixlen) __attribute__ ((__nonnull__ (1))) ;
# 612 "/usr/include/stdlib.h" 3 4
extern int mkstemps64 (char *__template, int __suffixlen)
     __attribute__ ((__nonnull__ (1))) ;
# 623 "/usr/include/stdlib.h" 3 4
extern char *mkdtemp (char *__template) throw () __attribute__ ((__nonnull__ (1))) ;
# 634 "/usr/include/stdlib.h" 3 4
extern int mkostemp (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 644 "/usr/include/stdlib.h" 3 4
extern int mkostemp64 (char *__template, int __flags) __attribute__ ((__nonnull__ (1))) ;
# 654 "/usr/include/stdlib.h" 3 4
extern int mkostemps (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;
# 666 "/usr/include/stdlib.h" 3 4
extern int mkostemps64 (char *__template, int __suffixlen, int __flags)
     __attribute__ ((__nonnull__ (1))) ;









extern int system (const char *__command) ;






extern char *canonicalize_file_name (const char *__name)
     throw () __attribute__ ((__nonnull__ (1))) ;
# 694 "/usr/include/stdlib.h" 3 4
extern char *realpath (const char *__restrict __name,
         char *__restrict __resolved) throw () ;






typedef int (*__compar_fn_t) (const void *, const void *);


typedef __compar_fn_t comparison_fn_t;



typedef int (*__compar_d_fn_t) (const void *, const void *, void *);





extern void *bsearch (const void *__key, const void *__base,
        size_t __nmemb, size_t __size, __compar_fn_t __compar)
     __attribute__ ((__nonnull__ (1, 2, 5))) ;







extern void qsort (void *__base, size_t __nmemb, size_t __size,
     __compar_fn_t __compar) __attribute__ ((__nonnull__ (1, 4)));

extern void qsort_r (void *__base, size_t __nmemb, size_t __size,
       __compar_d_fn_t __compar, void *__arg)
  __attribute__ ((__nonnull__ (1, 4)));




extern int abs (int __x) throw () __attribute__ ((__const__)) ;
extern long int labs (long int __x) throw () __attribute__ ((__const__)) ;



__extension__ extern long long int llabs (long long int __x)
     throw () __attribute__ ((__const__)) ;







extern div_t div (int __numer, int __denom)
     throw () __attribute__ ((__const__)) ;
extern ldiv_t ldiv (long int __numer, long int __denom)
     throw () __attribute__ ((__const__)) ;




__extension__ extern lldiv_t lldiv (long long int __numer,
        long long int __denom)
     throw () __attribute__ ((__const__)) ;

# 772 "/usr/include/stdlib.h" 3 4
extern char *ecvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *fcvt (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign) throw () __attribute__ ((__nonnull__ (3, 4))) ;




extern char *gcvt (double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern char *qecvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qfcvt (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign)
     throw () __attribute__ ((__nonnull__ (3, 4))) ;
extern char *qgcvt (long double __value, int __ndigit, char *__buf)
     throw () __attribute__ ((__nonnull__ (3))) ;




extern int ecvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int fcvt_r (double __value, int __ndigit, int *__restrict __decpt,
     int *__restrict __sign, char *__restrict __buf,
     size_t __len) throw () __attribute__ ((__nonnull__ (3, 4, 5)));

extern int qecvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));
extern int qfcvt_r (long double __value, int __ndigit,
      int *__restrict __decpt, int *__restrict __sign,
      char *__restrict __buf, size_t __len)
     throw () __attribute__ ((__nonnull__ (3, 4, 5)));






extern int mblen (const char *__s, size_t __n) throw ();


extern int mbtowc (wchar_t *__restrict __pwc,
     const char *__restrict __s, size_t __n) throw ();


extern int wctomb (char *__s, wchar_t __wchar) throw ();



extern size_t mbstowcs (wchar_t *__restrict __pwcs,
   const char *__restrict __s, size_t __n) throw ();

extern size_t wcstombs (char *__restrict __s,
   const wchar_t *__restrict __pwcs, size_t __n)
     throw ();








extern int rpmatch (const char *__response) throw () __attribute__ ((__nonnull__ (1))) ;
# 859 "/usr/include/stdlib.h" 3 4
extern int getsubopt (char **__restrict __optionp,
        char *const *__restrict __tokens,
        char **__restrict __valuep)
     throw () __attribute__ ((__nonnull__ (1, 2, 3))) ;





extern void setkey (const char *__key) throw () __attribute__ ((__nonnull__ (1)));







extern int posix_openpt (int __oflag) ;







extern int grantpt (int __fd) throw ();



extern int unlockpt (int __fd) throw ();




extern char *ptsname (int __fd) throw () ;






extern int ptsname_r (int __fd, char *__buf, size_t __buflen)
     throw () __attribute__ ((__nonnull__ (2)));


extern int getpt (void);






extern int getloadavg (double __loadavg[], int __nelem)
     throw () __attribute__ ((__nonnull__ (1)));
# 921 "/usr/include/stdlib.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/stdlib-float.h" 1 3 4
# 922 "/usr/include/stdlib.h" 2 3 4
# 934 "/usr/include/stdlib.h" 3 4
}
# 76 "/usr/include/c++/6/cstdlib" 2 3
# 118 "/usr/include/c++/6/cstdlib" 3
extern "C++"
{
namespace std __attribute__ ((__visibility__ ("default")))
{


  using ::div_t;
  using ::ldiv_t;

  using ::abort;
  using ::abs;
  using ::atexit;


  using ::at_quick_exit;


  using ::atof;
  using ::atoi;
  using ::atol;
  using ::bsearch;
  using ::calloc;
  using ::div;
  using ::exit;
  using ::free;
  using ::getenv;
  using ::labs;
  using ::ldiv;
  using ::malloc;

  using ::mblen;
  using ::mbstowcs;
  using ::mbtowc;

  using ::qsort;


  using ::quick_exit;


  using ::rand;
  using ::realloc;
  using ::srand;
  using ::strtod;
  using ::strtol;
  using ::strtoul;
  using ::system;

  using ::wcstombs;
  using ::wctomb;



  inline long
  abs(long __i) { return __builtin_labs(__i); }

  inline ldiv_t
  div(long __i, long __j) { return ldiv(__i, __j); }



  inline long long
  abs(long long __x) { return __builtin_llabs (__x); }
# 201 "/usr/include/c++/6/cstdlib" 3

}
# 215 "/usr/include/c++/6/cstdlib" 3
namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{



  using ::lldiv_t;





  using ::_Exit;



  using ::llabs;

  inline lldiv_t
  div(long long __n, long long __d)
  { lldiv_t __q; __q.quot = __n / __d; __q.rem = __n % __d; return __q; }

  using ::lldiv;
# 247 "/usr/include/c++/6/cstdlib" 3
  using ::atoll;
  using ::strtoll;
  using ::strtoull;

  using ::strtof;
  using ::strtold;


}

namespace std
{

  using ::__gnu_cxx::lldiv_t;

  using ::__gnu_cxx::_Exit;

  using ::__gnu_cxx::llabs;
  using ::__gnu_cxx::div;
  using ::__gnu_cxx::lldiv;

  using ::__gnu_cxx::atoll;
  using ::__gnu_cxx::strtof;
  using ::__gnu_cxx::strtoll;
  using ::__gnu_cxx::strtoull;
  using ::__gnu_cxx::strtold;
}



}
# 42 "/usr/include/c++/6/ext/string_conversions.h" 2 3
# 1 "/usr/include/c++/6/cwchar" 1 3
# 39 "/usr/include/c++/6/cwchar" 3
       
# 40 "/usr/include/c++/6/cwchar" 3




# 1 "/usr/include/wchar.h" 1 3 4
# 45 "/usr/include/c++/6/cwchar" 2 3
# 43 "/usr/include/c++/6/ext/string_conversions.h" 2 3
# 1 "/usr/include/c++/6/cstdio" 1 3
# 39 "/usr/include/c++/6/cstdio" 3
       
# 40 "/usr/include/c++/6/cstdio" 3


# 1 "/usr/include/stdio.h" 1 3 4
# 29 "/usr/include/stdio.h" 3 4
extern "C" {



# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 34 "/usr/include/stdio.h" 2 3 4
# 74 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/libio.h" 1 3 4
# 31 "/usr/include/libio.h" 3 4
# 1 "/usr/include/_G_config.h" 1 3 4
# 15 "/usr/include/_G_config.h" 3 4
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 16 "/usr/include/_G_config.h" 2 3 4




# 1 "/usr/include/wchar.h" 1 3 4
# 21 "/usr/include/_G_config.h" 2 3 4
typedef struct
{
  __off_t __pos;
  __mbstate_t __state;
} _G_fpos_t;
typedef struct
{
  __off64_t __pos;
  __mbstate_t __state;
} _G_fpos64_t;
# 32 "/usr/include/libio.h" 2 3 4
# 49 "/usr/include/libio.h" 3 4
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stdarg.h" 1 3 4
# 50 "/usr/include/libio.h" 2 3 4
# 144 "/usr/include/libio.h" 3 4
struct _IO_jump_t; struct _IO_FILE;





typedef void _IO_lock_t;





struct _IO_marker {
  struct _IO_marker *_next;
  struct _IO_FILE *_sbuf;



  int _pos;
# 173 "/usr/include/libio.h" 3 4
};


enum __codecvt_result
{
  __codecvt_ok,
  __codecvt_partial,
  __codecvt_error,
  __codecvt_noconv
};
# 241 "/usr/include/libio.h" 3 4
struct _IO_FILE {
  int _flags;




  char* _IO_read_ptr;
  char* _IO_read_end;
  char* _IO_read_base;
  char* _IO_write_base;
  char* _IO_write_ptr;
  char* _IO_write_end;
  char* _IO_buf_base;
  char* _IO_buf_end;

  char *_IO_save_base;
  char *_IO_backup_base;
  char *_IO_save_end;

  struct _IO_marker *_markers;

  struct _IO_FILE *_chain;

  int _fileno;



  int _flags2;

  __off_t _old_offset;



  unsigned short _cur_column;
  signed char _vtable_offset;
  char _shortbuf[1];



  _IO_lock_t *_lock;
# 289 "/usr/include/libio.h" 3 4
  __off64_t _offset;







  void *__pad1;
  void *__pad2;
  void *__pad3;
  void *__pad4;

  size_t __pad5;
  int _mode;

  char _unused2[15 * sizeof (int) - 4 * sizeof (void *) - sizeof (size_t)];

};





struct _IO_FILE_plus;

extern struct _IO_FILE_plus _IO_2_1_stdin_;
extern struct _IO_FILE_plus _IO_2_1_stdout_;
extern struct _IO_FILE_plus _IO_2_1_stderr_;
# 333 "/usr/include/libio.h" 3 4
typedef __ssize_t __io_read_fn (void *__cookie, char *__buf, size_t __nbytes);







typedef __ssize_t __io_write_fn (void *__cookie, const char *__buf,
     size_t __n);







typedef int __io_seek_fn (void *__cookie, __off64_t *__pos, int __w);


typedef int __io_close_fn (void *__cookie);




typedef __io_read_fn cookie_read_function_t;
typedef __io_write_fn cookie_write_function_t;
typedef __io_seek_fn cookie_seek_function_t;
typedef __io_close_fn cookie_close_function_t;


typedef struct
{
  __io_read_fn *read;
  __io_write_fn *write;
  __io_seek_fn *seek;
  __io_close_fn *close;
} _IO_cookie_io_functions_t;
typedef _IO_cookie_io_functions_t cookie_io_functions_t;

struct _IO_cookie_file;


extern void _IO_cookie_init (struct _IO_cookie_file *__cfile, int __read_write,
        void *__cookie, _IO_cookie_io_functions_t __fns);




extern "C" {


extern int __underflow (_IO_FILE *);
extern int __uflow (_IO_FILE *);
extern int __overflow (_IO_FILE *, int);
# 429 "/usr/include/libio.h" 3 4
extern int _IO_getc (_IO_FILE *__fp);
extern int _IO_putc (int __c, _IO_FILE *__fp);
extern int _IO_feof (_IO_FILE *__fp) throw ();
extern int _IO_ferror (_IO_FILE *__fp) throw ();

extern int _IO_peekc_locked (_IO_FILE *__fp);





extern void _IO_flockfile (_IO_FILE *) throw ();
extern void _IO_funlockfile (_IO_FILE *) throw ();
extern int _IO_ftrylockfile (_IO_FILE *) throw ();
# 459 "/usr/include/libio.h" 3 4
extern int _IO_vfscanf (_IO_FILE * __restrict, const char * __restrict,
   __gnuc_va_list, int *__restrict);
extern int _IO_vfprintf (_IO_FILE *__restrict, const char *__restrict,
    __gnuc_va_list);
extern __ssize_t _IO_padn (_IO_FILE *, int, __ssize_t);
extern size_t _IO_sgetn (_IO_FILE *, void *, size_t);

extern __off64_t _IO_seekoff (_IO_FILE *, __off64_t, int, int);
extern __off64_t _IO_seekpos (_IO_FILE *, __off64_t, int);

extern void _IO_free_backup_area (_IO_FILE *) throw ();
# 521 "/usr/include/libio.h" 3 4
}
# 75 "/usr/include/stdio.h" 2 3 4




typedef __gnuc_va_list va_list;
# 110 "/usr/include/stdio.h" 3 4


typedef _G_fpos_t fpos_t;





typedef _G_fpos64_t fpos64_t;
# 166 "/usr/include/stdio.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/stdio_lim.h" 1 3 4
# 167 "/usr/include/stdio.h" 2 3 4



extern struct _IO_FILE *stdin;
extern struct _IO_FILE *stdout;
extern struct _IO_FILE *stderr;







extern int remove (const char *__filename) throw ();

extern int rename (const char *__old, const char *__new) throw ();




extern int renameat (int __oldfd, const char *__old, int __newfd,
       const char *__new) throw ();








extern FILE *tmpfile (void) ;
# 207 "/usr/include/stdio.h" 3 4
extern FILE *tmpfile64 (void) ;



extern char *tmpnam (char *__s) throw () ;





extern char *tmpnam_r (char *__s) throw () ;
# 229 "/usr/include/stdio.h" 3 4
extern char *tempnam (const char *__dir, const char *__pfx)
     throw () __attribute__ ((__malloc__)) ;








extern int fclose (FILE *__stream);




extern int fflush (FILE *__stream);

# 254 "/usr/include/stdio.h" 3 4
extern int fflush_unlocked (FILE *__stream);
# 264 "/usr/include/stdio.h" 3 4
extern int fcloseall (void);









extern FILE *fopen (const char *__restrict __filename,
      const char *__restrict __modes) ;




extern FILE *freopen (const char *__restrict __filename,
        const char *__restrict __modes,
        FILE *__restrict __stream) ;
# 297 "/usr/include/stdio.h" 3 4


extern FILE *fopen64 (const char *__restrict __filename,
        const char *__restrict __modes) ;
extern FILE *freopen64 (const char *__restrict __filename,
   const char *__restrict __modes,
   FILE *__restrict __stream) ;




extern FILE *fdopen (int __fd, const char *__modes) throw () ;





extern FILE *fopencookie (void *__restrict __magic_cookie,
     const char *__restrict __modes,
     _IO_cookie_io_functions_t __io_funcs) throw () ;




extern FILE *fmemopen (void *__s, size_t __len, const char *__modes)
  throw () ;




extern FILE *open_memstream (char **__bufloc, size_t *__sizeloc) throw () ;






extern void setbuf (FILE *__restrict __stream, char *__restrict __buf) throw ();



extern int setvbuf (FILE *__restrict __stream, char *__restrict __buf,
      int __modes, size_t __n) throw ();





extern void setbuffer (FILE *__restrict __stream, char *__restrict __buf,
         size_t __size) throw ();


extern void setlinebuf (FILE *__stream) throw ();








extern int fprintf (FILE *__restrict __stream,
      const char *__restrict __format, ...);




extern int printf (const char *__restrict __format, ...);

extern int sprintf (char *__restrict __s,
      const char *__restrict __format, ...) throw ();





extern int vfprintf (FILE *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg);




extern int vprintf (const char *__restrict __format, __gnuc_va_list __arg);

extern int vsprintf (char *__restrict __s, const char *__restrict __format,
       __gnuc_va_list __arg) throw ();





extern int snprintf (char *__restrict __s, size_t __maxlen,
       const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 3, 4)));

extern int vsnprintf (char *__restrict __s, size_t __maxlen,
        const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 3, 0)));






extern int vasprintf (char **__restrict __ptr, const char *__restrict __f,
        __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__printf__, 2, 0))) ;
extern int __asprintf (char **__restrict __ptr,
         const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;
extern int asprintf (char **__restrict __ptr,
       const char *__restrict __fmt, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3))) ;




extern int vdprintf (int __fd, const char *__restrict __fmt,
       __gnuc_va_list __arg)
     __attribute__ ((__format__ (__printf__, 2, 0)));
extern int dprintf (int __fd, const char *__restrict __fmt, ...)
     __attribute__ ((__format__ (__printf__, 2, 3)));








extern int fscanf (FILE *__restrict __stream,
     const char *__restrict __format, ...) ;




extern int scanf (const char *__restrict __format, ...) ;

extern int sscanf (const char *__restrict __s,
     const char *__restrict __format, ...) throw ();
# 465 "/usr/include/stdio.h" 3 4








extern int vfscanf (FILE *__restrict __s, const char *__restrict __format,
      __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 2, 0))) ;





extern int vscanf (const char *__restrict __format, __gnuc_va_list __arg)
     __attribute__ ((__format__ (__scanf__, 1, 0))) ;


extern int vsscanf (const char *__restrict __s,
      const char *__restrict __format, __gnuc_va_list __arg)
     throw () __attribute__ ((__format__ (__scanf__, 2, 0)));
# 524 "/usr/include/stdio.h" 3 4









extern int fgetc (FILE *__stream);
extern int getc (FILE *__stream);





extern int getchar (void);

# 552 "/usr/include/stdio.h" 3 4
extern int getc_unlocked (FILE *__stream);
extern int getchar_unlocked (void);
# 563 "/usr/include/stdio.h" 3 4
extern int fgetc_unlocked (FILE *__stream);











extern int fputc (int __c, FILE *__stream);
extern int putc (int __c, FILE *__stream);





extern int putchar (int __c);

# 596 "/usr/include/stdio.h" 3 4
extern int fputc_unlocked (int __c, FILE *__stream);







extern int putc_unlocked (int __c, FILE *__stream);
extern int putchar_unlocked (int __c);






extern int getw (FILE *__stream);


extern int putw (int __w, FILE *__stream);








extern char *fgets (char *__restrict __s, int __n, FILE *__restrict __stream)
     ;
# 642 "/usr/include/stdio.h" 3 4

# 651 "/usr/include/stdio.h" 3 4
extern char *fgets_unlocked (char *__restrict __s, int __n,
        FILE *__restrict __stream) ;
# 667 "/usr/include/stdio.h" 3 4
extern __ssize_t __getdelim (char **__restrict __lineptr,
          size_t *__restrict __n, int __delimiter,
          FILE *__restrict __stream) ;
extern __ssize_t getdelim (char **__restrict __lineptr,
        size_t *__restrict __n, int __delimiter,
        FILE *__restrict __stream) ;







extern __ssize_t getline (char **__restrict __lineptr,
       size_t *__restrict __n,
       FILE *__restrict __stream) ;








extern int fputs (const char *__restrict __s, FILE *__restrict __stream);





extern int puts (const char *__s);






extern int ungetc (int __c, FILE *__stream);






extern size_t fread (void *__restrict __ptr, size_t __size,
       size_t __n, FILE *__restrict __stream) ;




extern size_t fwrite (const void *__restrict __ptr, size_t __size,
        size_t __n, FILE *__restrict __s);

# 728 "/usr/include/stdio.h" 3 4
extern int fputs_unlocked (const char *__restrict __s,
      FILE *__restrict __stream);
# 739 "/usr/include/stdio.h" 3 4
extern size_t fread_unlocked (void *__restrict __ptr, size_t __size,
         size_t __n, FILE *__restrict __stream) ;
extern size_t fwrite_unlocked (const void *__restrict __ptr, size_t __size,
          size_t __n, FILE *__restrict __stream);








extern int fseek (FILE *__stream, long int __off, int __whence);




extern long int ftell (FILE *__stream) ;




extern void rewind (FILE *__stream);

# 775 "/usr/include/stdio.h" 3 4
extern int fseeko (FILE *__stream, __off_t __off, int __whence);




extern __off_t ftello (FILE *__stream) ;
# 794 "/usr/include/stdio.h" 3 4






extern int fgetpos (FILE *__restrict __stream, fpos_t *__restrict __pos);




extern int fsetpos (FILE *__stream, const fpos_t *__pos);
# 817 "/usr/include/stdio.h" 3 4



extern int fseeko64 (FILE *__stream, __off64_t __off, int __whence);
extern __off64_t ftello64 (FILE *__stream) ;
extern int fgetpos64 (FILE *__restrict __stream, fpos64_t *__restrict __pos);
extern int fsetpos64 (FILE *__stream, const fpos64_t *__pos);




extern void clearerr (FILE *__stream) throw ();

extern int feof (FILE *__stream) throw () ;

extern int ferror (FILE *__stream) throw () ;




extern void clearerr_unlocked (FILE *__stream) throw ();
extern int feof_unlocked (FILE *__stream) throw () ;
extern int ferror_unlocked (FILE *__stream) throw () ;








extern void perror (const char *__s);






# 1 "/usr/include/arm-linux-gnueabihf/bits/sys_errlist.h" 1 3 4
# 26 "/usr/include/arm-linux-gnueabihf/bits/sys_errlist.h" 3 4
extern int sys_nerr;
extern const char *const sys_errlist[];


extern int _sys_nerr;
extern const char *const _sys_errlist[];
# 856 "/usr/include/stdio.h" 2 3 4




extern int fileno (FILE *__stream) throw () ;




extern int fileno_unlocked (FILE *__stream) throw () ;
# 874 "/usr/include/stdio.h" 3 4
extern FILE *popen (const char *__command, const char *__modes) ;





extern int pclose (FILE *__stream);





extern char *ctermid (char *__s) throw ();





extern char *cuserid (char *__s);




struct obstack;


extern int obstack_printf (struct obstack *__restrict __obstack,
      const char *__restrict __format, ...)
     throw () __attribute__ ((__format__ (__printf__, 2, 3)));
extern int obstack_vprintf (struct obstack *__restrict __obstack,
       const char *__restrict __format,
       __gnuc_va_list __args)
     throw () __attribute__ ((__format__ (__printf__, 2, 0)));







extern void flockfile (FILE *__stream) throw ();



extern int ftrylockfile (FILE *__stream) throw () ;


extern void funlockfile (FILE *__stream) throw ();
# 944 "/usr/include/stdio.h" 3 4
}
# 43 "/usr/include/c++/6/cstdio" 2 3
# 96 "/usr/include/c++/6/cstdio" 3
namespace std
{
  using ::FILE;
  using ::fpos_t;

  using ::clearerr;
  using ::fclose;
  using ::feof;
  using ::ferror;
  using ::fflush;
  using ::fgetc;
  using ::fgetpos;
  using ::fgets;
  using ::fopen;
  using ::fprintf;
  using ::fputc;
  using ::fputs;
  using ::fread;
  using ::freopen;
  using ::fscanf;
  using ::fseek;
  using ::fsetpos;
  using ::ftell;
  using ::fwrite;
  using ::getc;
  using ::getchar;




  using ::perror;
  using ::printf;
  using ::putc;
  using ::putchar;
  using ::puts;
  using ::remove;
  using ::rename;
  using ::rewind;
  using ::scanf;
  using ::setbuf;
  using ::setvbuf;
  using ::sprintf;
  using ::sscanf;
  using ::tmpfile;

  using ::tmpnam;

  using ::ungetc;
  using ::vfprintf;
  using ::vprintf;
  using ::vsprintf;
}
# 157 "/usr/include/c++/6/cstdio" 3
namespace __gnu_cxx
{
# 175 "/usr/include/c++/6/cstdio" 3
  using ::snprintf;
  using ::vfscanf;
  using ::vscanf;
  using ::vsnprintf;
  using ::vsscanf;

}

namespace std
{
  using ::__gnu_cxx::snprintf;
  using ::__gnu_cxx::vfscanf;
  using ::__gnu_cxx::vscanf;
  using ::__gnu_cxx::vsnprintf;
  using ::__gnu_cxx::vsscanf;
}
# 44 "/usr/include/c++/6/ext/string_conversions.h" 2 3
# 1 "/usr/include/c++/6/cerrno" 1 3
# 39 "/usr/include/c++/6/cerrno" 3
       
# 40 "/usr/include/c++/6/cerrno" 3


# 1 "/usr/include/errno.h" 1 3 4
# 31 "/usr/include/errno.h" 3 4
extern "C" {



# 1 "/usr/include/arm-linux-gnueabihf/bits/errno.h" 1 3 4
# 24 "/usr/include/arm-linux-gnueabihf/bits/errno.h" 3 4
# 1 "/usr/include/linux/errno.h" 1 3 4
# 1 "/usr/include/arm-linux-gnueabihf/asm/errno.h" 1 3 4
# 1 "/usr/include/asm-generic/errno.h" 1 3 4



# 1 "/usr/include/asm-generic/errno-base.h" 1 3 4
# 5 "/usr/include/asm-generic/errno.h" 2 3 4
# 1 "/usr/include/arm-linux-gnueabihf/asm/errno.h" 2 3 4
# 1 "/usr/include/linux/errno.h" 2 3 4
# 25 "/usr/include/arm-linux-gnueabihf/bits/errno.h" 2 3 4
# 50 "/usr/include/arm-linux-gnueabihf/bits/errno.h" 3 4
extern int *__errno_location (void) throw () __attribute__ ((__const__));
# 36 "/usr/include/errno.h" 2 3 4
# 54 "/usr/include/errno.h" 3 4
extern char *program_invocation_name, *program_invocation_short_name;



}
# 68 "/usr/include/errno.h" 3 4
typedef int error_t;
# 43 "/usr/include/c++/6/cerrno" 2 3
# 45 "/usr/include/c++/6/ext/string_conversions.h" 2 3

namespace __gnu_cxx __attribute__ ((__visibility__ ("default")))
{



  template<typename _TRet, typename _Ret = _TRet, typename _CharT,
    typename... _Base>
    _Ret
    __stoa(_TRet (*__convf) (const _CharT*, _CharT**, _Base...),
    const char* __name, const _CharT* __str, std::size_t* __idx,
    _Base... __base)
    {
      _Ret __ret;

      _CharT* __endptr;

      struct _Save_errno {
 _Save_errno() : _M_errno((*__errno_location ())) { (*__errno_location ()) = 0; }
 ~_Save_errno() { if ((*__errno_location ()) == 0) (*__errno_location ()) = _M_errno; }
 int _M_errno;
      } const __save_errno;

      const _TRet __tmp = __convf(__str, &__endptr, __base...);

      if (__endptr == __str)
 std::__throw_invalid_argument(__name);
      else if ((*__errno_location ()) == 34
        || (std::__are_same<_Ret, int>::__value
     && (__tmp < __numeric_traits<int>::__min
         || __tmp > __numeric_traits<int>::__max)))
 std::__throw_out_of_range(__name);
      else
 __ret = __tmp;

      if (__idx)
 *__idx = __endptr - __str;

      return __ret;
    }


  template<typename _String, typename _CharT = typename _String::value_type>
    _String
    __to_xstring(int (*__convf) (_CharT*, std::size_t, const _CharT*,
     __builtin_va_list), std::size_t __n,
   const _CharT* __fmt, ...)
    {


      _CharT* __s = static_cast<_CharT*>(__builtin_alloca(sizeof(_CharT)
         * __n));

      __builtin_va_list __args;
      __builtin_va_start(__args, __fmt);

      const int __len = __convf(__s, __n, __fmt, __args);

      __builtin_va_end(__args);

      return _String(__s, __s + __len);
    }


}
# 5418 "/usr/include/c++/6/bits/basic_string.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{

namespace __cxx11 {



  inline int
  stoi(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa<long, int>(&std::strtol, "stoi", __str.c_str(),
     __idx, __base); }

  inline long
  stol(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtol, "stol", __str.c_str(),
        __idx, __base); }

  inline unsigned long
  stoul(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoul, "stoul", __str.c_str(),
        __idx, __base); }

  inline long long
  stoll(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoll, "stoll", __str.c_str(),
        __idx, __base); }

  inline unsigned long long
  stoull(const string& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::strtoull, "stoull", __str.c_str(),
        __idx, __base); }


  inline float
  stof(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtof, "stof", __str.c_str(), __idx); }

  inline double
  stod(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtod, "stod", __str.c_str(), __idx); }

  inline long double
  stold(const string& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::strtold, "stold", __str.c_str(), __idx); }






  inline string
  to_string(int __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, 4 * sizeof(int),
        "%d", __val); }

  inline string
  to_string(unsigned __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(unsigned),
        "%u", __val); }

  inline string
  to_string(long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, 4 * sizeof(long),
        "%ld", __val); }

  inline string
  to_string(unsigned long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(unsigned long),
        "%lu", __val); }

  inline string
  to_string(long long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(long long),
        "%lld", __val); }

  inline string
  to_string(unsigned long long __val)
  { return __gnu_cxx::__to_xstring<string>(&std::vsnprintf,
        4 * sizeof(unsigned long long),
        "%llu", __val); }

  inline string
  to_string(float __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<float>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, __n,
        "%f", __val);
  }

  inline string
  to_string(double __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, __n,
        "%f", __val);
  }

  inline string
  to_string(long double __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<long double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<string>(&std::vsnprintf, __n,
        "%Lf", __val);
  }



  inline int
  stoi(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa<long, int>(&std::wcstol, "stoi", __str.c_str(),
     __idx, __base); }

  inline long
  stol(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstol, "stol", __str.c_str(),
        __idx, __base); }

  inline unsigned long
  stoul(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoul, "stoul", __str.c_str(),
        __idx, __base); }

  inline long long
  stoll(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoll, "stoll", __str.c_str(),
        __idx, __base); }

  inline unsigned long long
  stoull(const wstring& __str, size_t* __idx = 0, int __base = 10)
  { return __gnu_cxx::__stoa(&std::wcstoull, "stoull", __str.c_str(),
        __idx, __base); }


  inline float
  stof(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstof, "stof", __str.c_str(), __idx); }

  inline double
  stod(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstod, "stod", __str.c_str(), __idx); }

  inline long double
  stold(const wstring& __str, size_t* __idx = 0)
  { return __gnu_cxx::__stoa(&std::wcstold, "stold", __str.c_str(), __idx); }



  inline wstring
  to_wstring(int __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf, 4 * sizeof(int),
         L"%d", __val); }

  inline wstring
  to_wstring(unsigned __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf,
         4 * sizeof(unsigned),
         L"%u", __val); }

  inline wstring
  to_wstring(long __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf, 4 * sizeof(long),
         L"%ld", __val); }

  inline wstring
  to_wstring(unsigned long __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf,
         4 * sizeof(unsigned long),
         L"%lu", __val); }

  inline wstring
  to_wstring(long long __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf,
         4 * sizeof(long long),
         L"%lld", __val); }

  inline wstring
  to_wstring(unsigned long long __val)
  { return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf,
         4 * sizeof(unsigned long long),
         L"%llu", __val); }

  inline wstring
  to_wstring(float __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<float>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf, __n,
         L"%f", __val);
  }

  inline wstring
  to_wstring(double __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf, __n,
         L"%f", __val);
  }

  inline wstring
  to_wstring(long double __val)
  {
    const int __n =
      __gnu_cxx::__numeric_traits<long double>::__max_exponent10 + 20;
    return __gnu_cxx::__to_xstring<wstring>(&std::vswprintf, __n,
         L"%Lf", __val);
  }



}

}





# 1 "/usr/include/c++/6/bits/functional_hash.h" 1 3
# 33 "/usr/include/c++/6/bits/functional_hash.h" 3
       
# 34 "/usr/include/c++/6/bits/functional_hash.h" 3

# 1 "/usr/include/c++/6/bits/hash_bytes.h" 1 3
# 33 "/usr/include/c++/6/bits/hash_bytes.h" 3
       
# 34 "/usr/include/c++/6/bits/hash_bytes.h" 3



namespace std
{







  size_t
  _Hash_bytes(const void* __ptr, size_t __len, size_t __seed);





  size_t
  _Fnv_hash_bytes(const void* __ptr, size_t __len, size_t __seed);


}
# 36 "/usr/include/c++/6/bits/functional_hash.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{

# 49 "/usr/include/c++/6/bits/functional_hash.h" 3
  template<typename _Result, typename _Arg>
    struct __hash_base
    {
      typedef _Result result_type;
      typedef _Arg argument_type;
    };


  template<typename _Tp>
    struct hash;


  template<typename _Tp, bool = is_enum<_Tp>::value>
    struct __hash_enum
    {
    private:

      __hash_enum(__hash_enum&&);
      ~__hash_enum();
    };


  template<typename _Tp>
    struct __hash_enum<_Tp, true> : public __hash_base<size_t, _Tp>
    {
      size_t
      operator()(_Tp __val) const noexcept
      {
       using __type = typename underlying_type<_Tp>::type;
       return hash<__type>{}(static_cast<__type>(__val));
      }
    };



  template<typename _Tp>
    struct hash : __hash_enum<_Tp>
    { };


  template<typename _Tp>
    struct hash<_Tp*> : public __hash_base<size_t, _Tp*>
    {
      size_t
      operator()(_Tp* __p) const noexcept
      { return reinterpret_cast<size_t>(__p); }
    };
# 108 "/usr/include/c++/6/bits/functional_hash.h" 3
  template<> struct hash<bool> : public __hash_base<size_t, bool> { size_t operator()(bool __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<char> : public __hash_base<size_t, char> { size_t operator()(char __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<signed char> : public __hash_base<size_t, signed char> { size_t operator()(signed char __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<unsigned char> : public __hash_base<size_t, unsigned char> { size_t operator()(unsigned char __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<wchar_t> : public __hash_base<size_t, wchar_t> { size_t operator()(wchar_t __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<char16_t> : public __hash_base<size_t, char16_t> { size_t operator()(char16_t __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<char32_t> : public __hash_base<size_t, char32_t> { size_t operator()(char32_t __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<short> : public __hash_base<size_t, short> { size_t operator()(short __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<int> : public __hash_base<size_t, int> { size_t operator()(int __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<long> : public __hash_base<size_t, long> { size_t operator()(long __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<long long> : public __hash_base<size_t, long long> { size_t operator()(long long __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<unsigned short> : public __hash_base<size_t, unsigned short> { size_t operator()(unsigned short __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<unsigned int> : public __hash_base<size_t, unsigned int> { size_t operator()(unsigned int __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<unsigned long> : public __hash_base<size_t, unsigned long> { size_t operator()(unsigned long __val) const noexcept { return static_cast<size_t>(__val); } };


  template<> struct hash<unsigned long long> : public __hash_base<size_t, unsigned long long> { size_t operator()(unsigned long long __val) const noexcept { return static_cast<size_t>(__val); } };
# 171 "/usr/include/c++/6/bits/functional_hash.h" 3
  struct _Hash_impl
  {
    static size_t
    hash(const void* __ptr, size_t __clength,
  size_t __seed = static_cast<size_t>(0xc70f6907UL))
    { return _Hash_bytes(__ptr, __clength, __seed); }

    template<typename _Tp>
      static size_t
      hash(const _Tp& __val)
      { return hash(&__val, sizeof(__val)); }

    template<typename _Tp>
      static size_t
      __hash_combine(const _Tp& __val, size_t __hash)
      { return hash(&__val, sizeof(__val), __hash); }
  };

  struct _Fnv_hash_impl
  {
    static size_t
    hash(const void* __ptr, size_t __clength,
  size_t __seed = static_cast<size_t>(2166136261UL))
    { return _Fnv_hash_bytes(__ptr, __clength, __seed); }

    template<typename _Tp>
      static size_t
      hash(const _Tp& __val)
      { return hash(&__val, sizeof(__val)); }

    template<typename _Tp>
      static size_t
      __hash_combine(const _Tp& __val, size_t __hash)
      { return hash(&__val, sizeof(__val), __hash); }
  };


  template<>
    struct hash<float> : public __hash_base<size_t, float>
    {
      size_t
      operator()(float __val) const noexcept
      {

 return __val != 0.0f ? std::_Hash_impl::hash(__val) : 0;
      }
    };


  template<>
    struct hash<double> : public __hash_base<size_t, double>
    {
      size_t
      operator()(double __val) const noexcept
      {

 return __val != 0.0 ? std::_Hash_impl::hash(__val) : 0;
      }
    };


  template<>
    struct hash<long double>
    : public __hash_base<size_t, long double>
    {
      __attribute__ ((__pure__)) size_t
      operator()(long double __val) const noexcept;
    };







  template<typename _Hash>
    struct __is_fast_hash : public std::true_type
    { };

  template<>
    struct __is_fast_hash<hash<long double>> : public std::false_type
    { };


}
# 5644 "/usr/include/c++/6/bits/basic_string.h" 2 3

namespace std __attribute__ ((__visibility__ ("default")))
{






  template<>
    struct hash<string>
    : public __hash_base<size_t, string>
    {
      size_t
      operator()(const string& __s) const noexcept
      { return std::_Hash_impl::hash(__s.data(), __s.length()); }
    };

  template<>
    struct __is_fast_hash<hash<string>> : std::false_type
    { };



  template<>
    struct hash<wstring>
    : public __hash_base<size_t, wstring>
    {
      size_t
      operator()(const wstring& __s) const noexcept
      { return std::_Hash_impl::hash(__s.data(),
                                     __s.length() * sizeof(wchar_t)); }
    };

  template<>
    struct __is_fast_hash<hash<wstring>> : std::false_type
    { };





  template<>
    struct hash<u16string>
    : public __hash_base<size_t, u16string>
    {
      size_t
      operator()(const u16string& __s) const noexcept
      { return std::_Hash_impl::hash(__s.data(),
                                     __s.length() * sizeof(char16_t)); }
    };

  template<>
    struct __is_fast_hash<hash<u16string>> : std::false_type
    { };


  template<>
    struct hash<u32string>
    : public __hash_base<size_t, u32string>
    {
      size_t
      operator()(const u32string& __s) const noexcept
      { return std::_Hash_impl::hash(__s.data(),
                                     __s.length() * sizeof(char32_t)); }
    };

  template<>
    struct __is_fast_hash<hash<u32string>> : std::false_type
    { };








  inline namespace literals
  {
  inline namespace string_literals
  {


    __attribute ((__abi_tag__ ("cxx11")))
    inline basic_string<char>
    operator""s(const char* __str, size_t __len)
    { return basic_string<char>{__str, __len}; }


    __attribute ((__abi_tag__ ("cxx11")))
    inline basic_string<wchar_t>
    operator""s(const wchar_t* __str, size_t __len)
    { return basic_string<wchar_t>{__str, __len}; }



    __attribute ((__abi_tag__ ("cxx11")))
    inline basic_string<char16_t>
    operator""s(const char16_t* __str, size_t __len)
    { return basic_string<char16_t>{__str, __len}; }

    __attribute ((__abi_tag__ ("cxx11")))
    inline basic_string<char32_t>
    operator""s(const char32_t* __str, size_t __len)
    { return basic_string<char32_t>{__str, __len}; }



  }
  }



}
# 53 "/usr/include/c++/6/string" 2 3
# 1 "/usr/include/c++/6/bits/basic_string.tcc" 1 3
# 42 "/usr/include/c++/6/bits/basic_string.tcc" 3
       
# 43 "/usr/include/c++/6/bits/basic_string.tcc" 3



namespace std __attribute__ ((__visibility__ ("default")))
{




  template<typename _CharT, typename _Traits, typename _Alloc>
    const typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::npos;

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    swap(basic_string& __s) noexcept
    {
      if (this == &__s)
 return;

      _Alloc_traits::_S_on_swap(_M_get_allocator(), __s._M_get_allocator());

      if (_M_is_local())
 if (__s._M_is_local())
   {
     if (length() && __s.length())
       {
  _CharT __tmp_data[_S_local_capacity + 1];
  traits_type::copy(__tmp_data, __s._M_local_buf,
      _S_local_capacity + 1);
  traits_type::copy(__s._M_local_buf, _M_local_buf,
      _S_local_capacity + 1);
  traits_type::copy(_M_local_buf, __tmp_data,
      _S_local_capacity + 1);
       }
     else if (__s.length())
       {
  traits_type::copy(_M_local_buf, __s._M_local_buf,
      _S_local_capacity + 1);
  _M_length(__s.length());
  __s._M_set_length(0);
  return;
       }
     else if (length())
       {
  traits_type::copy(__s._M_local_buf, _M_local_buf,
      _S_local_capacity + 1);
  __s._M_length(length());
  _M_set_length(0);
  return;
       }
   }
 else
   {
     const size_type __tmp_capacity = __s._M_allocated_capacity;
     traits_type::copy(__s._M_local_buf, _M_local_buf,
         _S_local_capacity + 1);
     _M_data(__s._M_data());
     __s._M_data(__s._M_local_buf);
     _M_capacity(__tmp_capacity);
   }
      else
 {
   const size_type __tmp_capacity = _M_allocated_capacity;
   if (__s._M_is_local())
     {
       traits_type::copy(_M_local_buf, __s._M_local_buf,
    _S_local_capacity + 1);
       __s._M_data(_M_data());
       _M_data(_M_local_buf);
     }
   else
     {
       pointer __tmp_ptr = _M_data();
       _M_data(__s._M_data());
       __s._M_data(__tmp_ptr);
       _M_capacity(__s._M_allocated_capacity);
     }
   __s._M_capacity(__tmp_capacity);
 }

      const size_type __tmp_length = length();
      _M_length(__s.length());
      __s._M_length(__tmp_length);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::pointer
    basic_string<_CharT, _Traits, _Alloc>::
    _M_create(size_type& __capacity, size_type __old_capacity)
    {


      if (__capacity > max_size())
 std::__throw_length_error(("basic_string::_M_create"));




      if (__capacity > __old_capacity && __capacity < 2 * __old_capacity)
 {
   __capacity = 2 * __old_capacity;

   if (__capacity > max_size())
     __capacity = max_size();
 }



      return _Alloc_traits::allocate(_M_get_allocator(), __capacity + 1);
    }





  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      void
      basic_string<_CharT, _Traits, _Alloc>::
      _M_construct(_InIterator __beg, _InIterator __end,
     std::input_iterator_tag)
      {
 size_type __len = 0;
 size_type __capacity = size_type(_S_local_capacity);

 while (__beg != __end && __len < __capacity)
   {
     _M_data()[__len++] = *__beg;
     ++__beg;
   }

 try
   {
     while (__beg != __end)
       {
  if (__len == __capacity)
    {

      __capacity = __len + 1;
      pointer __another = _M_create(__capacity, __len);
      this->_S_copy(__another, _M_data(), __len);
      _M_dispose();
      _M_data(__another);
      _M_capacity(__capacity);
    }
  _M_data()[__len++] = *__beg;
  ++__beg;
       }
   }
 catch(...)
   {
     _M_dispose();
     throw;
   }

 _M_set_length(__len);
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InIterator>
      void
      basic_string<_CharT, _Traits, _Alloc>::
      _M_construct(_InIterator __beg, _InIterator __end,
     std::forward_iterator_tag)
      {

 if (__gnu_cxx::__is_null_pointer(__beg) && __beg != __end)
   std::__throw_logic_error(("basic_string::" "_M_construct null not valid")
                                         );

 size_type __dnew = static_cast<size_type>(std::distance(__beg, __end));

 if (__dnew > size_type(_S_local_capacity))
   {
     _M_data(_M_create(__dnew, size_type(0)));
     _M_capacity(__dnew);
   }


 try
   { this->_S_copy_chars(_M_data(), __beg, __end); }
 catch(...)
   {
     _M_dispose();
     throw;
   }

 _M_set_length(__dnew);
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_construct(size_type __n, _CharT __c)
    {
      if (__n > size_type(_S_local_capacity))
 {
   _M_data(_M_create(__n, size_type(0)));
   _M_capacity(__n);
 }

      if (__n)
 this->_S_assign(_M_data(), __n, __c);

      _M_set_length(__n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_assign(const basic_string& __str)
    {
      if (this != &__str)
 {
   const size_type __rsize = __str.length();
   const size_type __capacity = capacity();

   if (__rsize > __capacity)
     {
       size_type __new_capacity = __rsize;
       pointer __tmp = _M_create(__new_capacity, __capacity);
       _M_dispose();
       _M_data(__tmp);
       _M_capacity(__new_capacity);
     }

   if (__rsize)
     this->_S_copy(_M_data(), __str._M_data(), __rsize);

   _M_set_length(__rsize);
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    reserve(size_type __res)
    {

      if (__res < length())
 __res = length();

      const size_type __capacity = capacity();
      if (__res != __capacity)
 {
   if (__res > __capacity
       || __res > size_type(_S_local_capacity))
     {
       pointer __tmp = _M_create(__res, __capacity);
       this->_S_copy(__tmp, _M_data(), length() + 1);
       _M_dispose();
       _M_data(__tmp);
       _M_capacity(__res);
     }
   else if (!_M_is_local())
     {
       this->_S_copy(_M_local_data(), _M_data(), length() + 1);
       _M_destroy(__capacity);
       _M_data(_M_local_data());
     }
 }
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_mutate(size_type __pos, size_type __len1, const _CharT* __s,
       size_type __len2)
    {
      const size_type __how_much = length() - __pos - __len1;

      size_type __new_capacity = length() + __len2 - __len1;
      pointer __r = _M_create(__new_capacity, capacity());

      if (__pos)
 this->_S_copy(__r, _M_data(), __pos);
      if (__s && __len2)
 this->_S_copy(__r + __pos, __s, __len2);
      if (__how_much)
 this->_S_copy(__r + __pos + __len2,
        _M_data() + __pos + __len1, __how_much);

      _M_dispose();
      _M_data(__r);
      _M_capacity(__new_capacity);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    _M_erase(size_type __pos, size_type __n)
    {
      const size_type __how_much = length() - __pos - __n;

      if (__how_much && __n)
 this->_S_move(_M_data() + __pos, _M_data() + __pos + __n, __how_much);

      _M_set_length(length() - __n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    void
    basic_string<_CharT, _Traits, _Alloc>::
    resize(size_type __n, _CharT __c)
    {
      const size_type __size = this->size();
      if (__size < __n)
 this->append(__n - __size, __c);
      else if (__n < __size)
 this->_M_erase(__n, __size - __n);
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_append(const _CharT* __s, size_type __n)
    {
      const size_type __len = __n + this->size();

      if (__len <= this->capacity())
 {
   if (__n)
     this->_S_copy(this->_M_data() + this->size(), __s, __n);
 }
      else
 this->_M_mutate(this->size(), size_type(0), __s, __n);

      this->_M_set_length(__len);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    template<typename _InputIterator>
      basic_string<_CharT, _Traits, _Alloc>&
      basic_string<_CharT, _Traits, _Alloc>::
      _M_replace_dispatch(const_iterator __i1, const_iterator __i2,
     _InputIterator __k1, _InputIterator __k2,
     std::__false_type)
      {
 const basic_string __s(__k1, __k2);
 const size_type __n1 = __i2 - __i1;
 return _M_replace(__i1 - begin(), __n1, __s._M_data(),
     __s.size());
      }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace_aux(size_type __pos1, size_type __n1, size_type __n2,
     _CharT __c)
    {
      _M_check_length(__n1, __n2, "basic_string::_M_replace_aux");

      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __n2 - __n1;

      if (__new_size <= this->capacity())
 {
   pointer __p = this->_M_data() + __pos1;

   const size_type __how_much = __old_size - __pos1 - __n1;
   if (__how_much && __n1 != __n2)
     this->_S_move(__p + __n2, __p + __n1, __how_much);
 }
      else
 this->_M_mutate(__pos1, __n1, 0, __n2);

      if (__n2)
 this->_S_assign(this->_M_data() + __pos1, __n2, __c);

      this->_M_set_length(__new_size);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>&
    basic_string<_CharT, _Traits, _Alloc>::
    _M_replace(size_type __pos, size_type __len1, const _CharT* __s,
        const size_type __len2)
    {
      _M_check_length(__len1, __len2, "basic_string::_M_replace");

      const size_type __old_size = this->size();
      const size_type __new_size = __old_size + __len2 - __len1;

      if (__new_size <= this->capacity())
 {
   pointer __p = this->_M_data() + __pos;

   const size_type __how_much = __old_size - __pos - __len1;
   if (_M_disjunct(__s))
     {
       if (__how_much && __len1 != __len2)
  this->_S_move(__p + __len2, __p + __len1, __how_much);
       if (__len2)
  this->_S_copy(__p, __s, __len2);
     }
   else
     {

       if (__len2 && __len2 <= __len1)
  this->_S_move(__p, __s, __len2);
       if (__how_much && __len1 != __len2)
  this->_S_move(__p + __len2, __p + __len1, __how_much);
       if (__len2 > __len1)
  {
    if (__s + __len2 <= __p + __len1)
      this->_S_move(__p, __s, __len2);
    else if (__s >= __p + __len1)
      this->_S_copy(__p, __s + __len2 - __len1, __len2);
    else
      {
        const size_type __nleft = (__p + __len1) - __s;
        this->_S_move(__p, __s, __nleft);
        this->_S_copy(__p + __nleft, __p + __len2,
        __len2 - __nleft);
      }
  }
     }
 }
      else
 this->_M_mutate(__pos, __len1, __s, __len2);

      this->_M_set_length(__new_size);
      return *this;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    copy(_CharT* __s, size_type __n, size_type __pos) const
    {
      _M_check(__pos, "basic_string::copy");
      __n = _M_limit(__pos, __n);
      ;
      if (__n)
 _S_copy(__s, _M_data() + __pos, __n);

      return __n;
    }
# 1145 "/usr/include/c++/6/bits/basic_string.tcc" 3
  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(const _CharT* __lhs,
       const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      ;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      const __size_type __len = _Traits::length(__lhs);
      __string_type __str;
      __str.reserve(__len + __rhs.size());
      __str.append(__lhs, __len);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_string<_CharT, _Traits, _Alloc>
    operator+(_CharT __lhs, const basic_string<_CharT, _Traits, _Alloc>& __rhs)
    {
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __string_type::size_type __size_type;
      __string_type __str;
      const __size_type __len = __rhs.size();
      __str.reserve(__len + 1);
      __str.append(__size_type(1), __lhs);
      __str.append(__rhs);
      return __str;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      const _CharT* __data = _M_data();

      if (__n == 0)
 return __pos <= __size ? __pos : npos;

      if (__n <= __size)
 {
   for (; __pos <= __size - __n; ++__pos)
     if (traits_type::eq(__data[__pos], __s[0])
  && traits_type::compare(__data + __pos + 1,
     __s + 1, __n - 1) == 0)
       return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find(_CharT __c, size_type __pos) const noexcept
    {
      size_type __ret = npos;
      const size_type __size = this->size();
      if (__pos < __size)
 {
   const _CharT* __data = _M_data();
   const size_type __n = __size - __pos;
   const _CharT* __p = traits_type::find(__data + __pos, __n, __c);
   if (__p)
     __ret = __p - __data;
 }
      return __ret;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      const size_type __size = this->size();
      if (__n <= __size)
 {
   __pos = std::min(size_type(__size - __n), __pos);
   const _CharT* __data = _M_data();
   do
     {
       if (traits_type::compare(__data + __pos, __s, __n) == 0)
  return __pos;
     }
   while (__pos-- > 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    rfind(_CharT __c, size_type __pos) const noexcept
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   for (++__size; __size-- > 0; )
     if (traits_type::eq(_M_data()[__size], __c))
       return __size;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __n && __pos < this->size(); ++__pos)
 {
   const _CharT* __p = traits_type::find(__s, __n, _M_data()[__pos]);
   if (__p)
     return __pos;
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size && __n)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size-- != 0);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::find(__s, __n, _M_data()[__pos]))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_first_not_of(_CharT __c, size_type __pos) const noexcept
    {
      for (; __pos < this->size(); ++__pos)
 if (!traits_type::eq(_M_data()[__pos], __c))
   return __pos;
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(const _CharT* __s, size_type __pos, size_type __n) const
    {
      ;
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::find(__s, __n, _M_data()[__size]))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    typename basic_string<_CharT, _Traits, _Alloc>::size_type
    basic_string<_CharT, _Traits, _Alloc>::
    find_last_not_of(_CharT __c, size_type __pos) const noexcept
    {
      size_type __size = this->size();
      if (__size)
 {
   if (--__size > __pos)
     __size = __pos;
   do
     {
       if (!traits_type::eq(_M_data()[__size], __c))
  return __size;
     }
   while (__size--);
 }
      return npos;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n, const basic_string& __str) const
    {
      _M_check(__pos, "basic_string::compare");
      __n = _M_limit(__pos, __n);
      const size_type __osize = __str.size();
      const size_type __len = std::min(__n, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __str.data(), __len);
      if (!__r)
 __r = _S_compare(__n, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(size_type __pos1, size_type __n1, const basic_string& __str,
     size_type __pos2, size_type __n2) const
    {
      _M_check(__pos1, "basic_string::compare");
      __str._M_check(__pos2, "basic_string::compare");
      __n1 = _M_limit(__pos1, __n1);
      __n2 = __str._M_limit(__pos2, __n2);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos1,
         __str.data() + __pos2, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string<_CharT, _Traits, _Alloc>::
    compare(const _CharT* __s) const
    {
      ;
      const size_type __size = this->size();
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__size, __osize);
      int __r = traits_type::compare(_M_data(), __s, __len);
      if (!__r)
 __r = _S_compare(__size, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __osize = traits_type::length(__s);
      const size_type __len = std::min(__n1, __osize);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __osize);
      return __r;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    int
    basic_string <_CharT, _Traits, _Alloc>::
    compare(size_type __pos, size_type __n1, const _CharT* __s,
     size_type __n2) const
    {
      ;
      _M_check(__pos, "basic_string::compare");
      __n1 = _M_limit(__pos, __n1);
      const size_type __len = std::min(__n1, __n2);
      int __r = traits_type::compare(_M_data() + __pos, __s, __len);
      if (!__r)
 __r = _S_compare(__n1, __n2);
      return __r;
    }


  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    operator>>(basic_istream<_CharT, _Traits>& __in,
        basic_string<_CharT, _Traits, _Alloc>& __str)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;
      typedef ctype<_CharT> __ctype_type;
      typedef typename __ctype_type::ctype_base __ctype_base;

      __size_type __extracted = 0;
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, false);
      if (__cerb)
 {
   try
     {

       __str.erase();
       _CharT __buf[128];
       __size_type __len = 0;
       const streamsize __w = __in.width();
       const __size_type __n = __w > 0 ? static_cast<__size_type>(__w)
                                : __str.max_size();
       const __ctype_type& __ct = use_facet<__ctype_type>(__in.getloc());
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !__ct.is(__ctype_base::space,
     _Traits::to_char_type(__c)))
  {
    if (__len == sizeof(__buf) / sizeof(_CharT))
      {
        __str.append(__buf, sizeof(__buf) / sizeof(_CharT));
        __len = 0;
      }
    __buf[__len++] = _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }
       __str.append(__buf, __len);

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       __in.width(0);
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }

      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }

  template<typename _CharT, typename _Traits, typename _Alloc>
    basic_istream<_CharT, _Traits>&
    getline(basic_istream<_CharT, _Traits>& __in,
     basic_string<_CharT, _Traits, _Alloc>& __str, _CharT __delim)
    {
      typedef basic_istream<_CharT, _Traits> __istream_type;
      typedef basic_string<_CharT, _Traits, _Alloc> __string_type;
      typedef typename __istream_type::ios_base __ios_base;
      typedef typename __istream_type::int_type __int_type;
      typedef typename __string_type::size_type __size_type;

      __size_type __extracted = 0;
      const __size_type __n = __str.max_size();
      typename __ios_base::iostate __err = __ios_base::goodbit;
      typename __istream_type::sentry __cerb(__in, true);
      if (__cerb)
 {
   try
     {
       __str.erase();
       const __int_type __idelim = _Traits::to_int_type(__delim);
       const __int_type __eof = _Traits::eof();
       __int_type __c = __in.rdbuf()->sgetc();

       while (__extracted < __n
       && !_Traits::eq_int_type(__c, __eof)
       && !_Traits::eq_int_type(__c, __idelim))
  {
    __str += _Traits::to_char_type(__c);
    ++__extracted;
    __c = __in.rdbuf()->snextc();
  }

       if (_Traits::eq_int_type(__c, __eof))
  __err |= __ios_base::eofbit;
       else if (_Traits::eq_int_type(__c, __idelim))
  {
    ++__extracted;
    __in.rdbuf()->sbumpc();
  }
       else
  __err |= __ios_base::failbit;
     }
   catch(__cxxabiv1::__forced_unwind&)
     {
       __in._M_setstate(__ios_base::badbit);
       throw;
     }
   catch(...)
     {



       __in._M_setstate(__ios_base::badbit);
     }
 }
      if (!__extracted)
 __err |= __ios_base::failbit;
      if (__err)
 __in.setstate(__err);
      return __in;
    }




  extern template class basic_string<char>;
  extern template
    basic_istream<char>&
    operator>>(basic_istream<char>&, string&);
  extern template
    basic_ostream<char>&
    operator<<(basic_ostream<char>&, const string&);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&, char);
  extern template
    basic_istream<char>&
    getline(basic_istream<char>&, string&);


  extern template class basic_string<wchar_t>;
  extern template
    basic_istream<wchar_t>&
    operator>>(basic_istream<wchar_t>&, wstring&);
  extern template
    basic_ostream<wchar_t>&
    operator<<(basic_ostream<wchar_t>&, const wstring&);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&, wchar_t);
  extern template
    basic_istream<wchar_t>&
    getline(basic_istream<wchar_t>&, wstring&);




}
# 54 "/usr/include/c++/6/string" 2 3
# 2 "bluetooth.cpp" 2
# 1 "bluetooth.h" 1
       

# 1 "gdbus.h" 1
# 28 "gdbus.h"

# 28 "gdbus.h"
extern "C" {


# 1 "/usr/include/dbus-1.0/dbus/dbus.h" 1
# 29 "/usr/include/dbus-1.0/dbus/dbus.h"
# 1 "/usr/lib/arm-linux-gnueabihf/dbus-1.0/include/dbus/dbus-arch-deps.h" 1
# 30 "/usr/lib/arm-linux-gnueabihf/dbus-1.0/include/dbus/dbus-arch-deps.h"
# 1 "/usr/include/dbus-1.0/dbus/dbus-macros.h" 1
# 31 "/usr/lib/arm-linux-gnueabihf/dbus-1.0/include/dbus/dbus-arch-deps.h" 2

extern "C" {



__extension__ typedef long long dbus_int64_t;
__extension__ typedef unsigned long long dbus_uint64_t;




typedef int dbus_int32_t;
typedef unsigned int dbus_uint32_t;

typedef short dbus_int16_t;
typedef unsigned short dbus_uint16_t;
# 59 "/usr/lib/arm-linux-gnueabihf/dbus-1.0/include/dbus/dbus-arch-deps.h"
}
# 30 "/usr/include/dbus-1.0/dbus/dbus.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-address.h" 1
# 30 "/usr/include/dbus-1.0/dbus/dbus-address.h"
# 1 "/usr/include/dbus-1.0/dbus/dbus-types.h" 1
# 30 "/usr/include/dbus-1.0/dbus/dbus-types.h"
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 149 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 3 4

# 149 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 3 4
typedef int ptrdiff_t;
# 426 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 3 4
typedef struct {
  long long __max_align_ll __attribute__((__aligned__(__alignof__(long long))));
  long double __max_align_ld __attribute__((__aligned__(__alignof__(long double))));
} max_align_t;






  typedef decltype(nullptr) nullptr_t;
# 31 "/usr/include/dbus-1.0/dbus/dbus-types.h" 2
# 1 "/usr/lib/arm-linux-gnueabihf/dbus-1.0/include/dbus/dbus-arch-deps.h" 1
# 32 "/usr/include/dbus-1.0/dbus/dbus-types.h" 2


# 33 "/usr/include/dbus-1.0/dbus/dbus-types.h"
typedef dbus_uint32_t dbus_unichar_t;

typedef dbus_uint32_t dbus_bool_t;
# 121 "/usr/include/dbus-1.0/dbus/dbus-types.h"
typedef struct
{
  dbus_uint32_t first32;
  dbus_uint32_t second32;
} DBus8ByteStruct;
# 137 "/usr/include/dbus-1.0/dbus/dbus-types.h"
typedef union
{
  unsigned char bytes[8];
  dbus_int16_t i16;
  dbus_uint16_t u16;
  dbus_int32_t i32;
  dbus_uint32_t u32;
  dbus_bool_t bool_val;
  dbus_int64_t i64;
  dbus_uint64_t u64;
  DBus8ByteStruct eight;
  double dbl;
  unsigned char byt;
  char *str;
  int fd;
} DBusBasicValue;
# 31 "/usr/include/dbus-1.0/dbus/dbus-address.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-errors.h" 1
# 31 "/usr/include/dbus-1.0/dbus/dbus-errors.h"
# 1 "/usr/include/dbus-1.0/dbus/dbus-macros.h" 1
# 32 "/usr/include/dbus-1.0/dbus/dbus-errors.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-types.h" 1
# 33 "/usr/include/dbus-1.0/dbus/dbus-errors.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-protocol.h" 1
# 33 "/usr/include/dbus-1.0/dbus/dbus-protocol.h"
extern "C" {
# 476 "/usr/include/dbus-1.0/dbus/dbus-protocol.h"
}
# 34 "/usr/include/dbus-1.0/dbus/dbus-errors.h" 2

extern "C" {







typedef struct DBusError DBusError;




struct DBusError
{
  const char *name;
  const char *message;

  unsigned int dummy1 : 1;
  unsigned int dummy2 : 1;
  unsigned int dummy3 : 1;
  unsigned int dummy4 : 1;
  unsigned int dummy5 : 1;

  void *padding1;
};



__attribute__ ((__visibility__ ("default")))
void dbus_error_init (DBusError *error);
__attribute__ ((__visibility__ ("default")))
void dbus_error_free (DBusError *error);
__attribute__ ((__visibility__ ("default")))
void dbus_set_error (DBusError *error,
                                  const char *name,
                                  const char *message,
                                  ...);
__attribute__ ((__visibility__ ("default")))
void dbus_set_error_const (DBusError *error,
                                  const char *name,
                                  const char *message);
__attribute__ ((__visibility__ ("default")))
void dbus_move_error (DBusError *src,
                                  DBusError *dest);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_error_has_name (const DBusError *error,
                                  const char *name);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_error_is_set (const DBusError *error);



}
# 32 "/usr/include/dbus-1.0/dbus/dbus-address.h" 2

extern "C" {







typedef struct DBusAddressEntry DBusAddressEntry;

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_parse_address (const char *address,
        DBusAddressEntry ***entry,
        int *array_len,
        DBusError *error);
__attribute__ ((__visibility__ ("default")))
const char *dbus_address_entry_get_value (DBusAddressEntry *entry,
        const char *key);
__attribute__ ((__visibility__ ("default")))
const char *dbus_address_entry_get_method (DBusAddressEntry *entry);
__attribute__ ((__visibility__ ("default")))
void dbus_address_entries_free (DBusAddressEntry **entries);

__attribute__ ((__visibility__ ("default")))
char* dbus_address_escape_value (const char *value);
__attribute__ ((__visibility__ ("default")))
char* dbus_address_unescape_value (const char *value,
                                   DBusError *error);



}
# 31 "/usr/include/dbus-1.0/dbus/dbus.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-bus.h" 1
# 30 "/usr/include/dbus-1.0/dbus/dbus-bus.h"
# 1 "/usr/include/dbus-1.0/dbus/dbus-connection.h" 1
# 30 "/usr/include/dbus-1.0/dbus/dbus-connection.h"
# 1 "/usr/include/dbus-1.0/dbus/dbus-errors.h" 1
# 31 "/usr/include/dbus-1.0/dbus/dbus-connection.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-memory.h" 1
# 30 "/usr/include/dbus-1.0/dbus/dbus-memory.h"
# 1 "/usr/include/dbus-1.0/dbus/dbus-macros.h" 1
# 31 "/usr/include/dbus-1.0/dbus/dbus-memory.h" 2
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 32 "/usr/include/dbus-1.0/dbus/dbus-memory.h" 2

extern "C" {






__attribute__ ((__visibility__ ("default")))
__attribute__((__malloc__))
__attribute__((__alloc_size__(1)))
void* dbus_malloc (size_t bytes);

__attribute__ ((__visibility__ ("default")))
__attribute__((__malloc__))
__attribute__((__alloc_size__(1)))
void* dbus_malloc0 (size_t bytes);

__attribute__ ((__visibility__ ("default")))
__attribute__((__malloc__))
__attribute__((__alloc_size__(2)))
void* dbus_realloc (void *memory,
                          size_t bytes);
__attribute__ ((__visibility__ ("default")))
void dbus_free (void *memory);




__attribute__ ((__visibility__ ("default")))
void dbus_free_string_array (char **str_array);

typedef void (* DBusFreeFunction) (void *memory);

__attribute__ ((__visibility__ ("default")))
void dbus_shutdown (void);



}
# 32 "/usr/include/dbus-1.0/dbus/dbus-connection.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-message.h" 1
# 30 "/usr/include/dbus-1.0/dbus/dbus-message.h"
# 1 "/usr/include/dbus-1.0/dbus/dbus-macros.h" 1
# 31 "/usr/include/dbus-1.0/dbus/dbus-message.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-types.h" 1
# 32 "/usr/include/dbus-1.0/dbus/dbus-message.h" 2
# 1 "/usr/lib/arm-linux-gnueabihf/dbus-1.0/include/dbus/dbus-arch-deps.h" 1
# 33 "/usr/include/dbus-1.0/dbus/dbus-message.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-memory.h" 1
# 34 "/usr/include/dbus-1.0/dbus/dbus-message.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-errors.h" 1
# 35 "/usr/include/dbus-1.0/dbus/dbus-message.h" 2
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stdarg.h" 1 3 4
# 36 "/usr/include/dbus-1.0/dbus/dbus-message.h" 2

extern "C" {






typedef struct DBusMessage DBusMessage;

typedef struct DBusMessageIter DBusMessageIter;




struct DBusMessageIter
{
  void *dummy1;
  void *dummy2;
  dbus_uint32_t dummy3;
  int dummy4;
  int dummy5;
  int dummy6;
  int dummy7;
  int dummy8;
  int dummy9;
  int dummy10;
  int dummy11;
  int pad1;
  void *pad2;
  void *pad3;
};

__attribute__ ((__visibility__ ("default")))
DBusMessage* dbus_message_new (int message_type);
__attribute__ ((__visibility__ ("default")))
DBusMessage* dbus_message_new_method_call (const char *bus_name,
                                             const char *path,
                                             const char *iface,
                                             const char *method);
__attribute__ ((__visibility__ ("default")))
DBusMessage* dbus_message_new_method_return (DBusMessage *method_call);
__attribute__ ((__visibility__ ("default")))
DBusMessage* dbus_message_new_signal (const char *path,
                                             const char *iface,
                                             const char *name);
__attribute__ ((__visibility__ ("default")))
DBusMessage* dbus_message_new_error (DBusMessage *reply_to,
                                             const char *error_name,
                                             const char *error_message);
__attribute__ ((__visibility__ ("default")))
DBusMessage* dbus_message_new_error_printf (DBusMessage *reply_to,
                                             const char *error_name,
                                             const char *error_format,
          ...);

__attribute__ ((__visibility__ ("default")))
DBusMessage* dbus_message_copy (const DBusMessage *message);

__attribute__ ((__visibility__ ("default")))
DBusMessage* dbus_message_ref (DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
void dbus_message_unref (DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
int dbus_message_get_type (DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_set_path (DBusMessage *message,
                                             const char *object_path);
__attribute__ ((__visibility__ ("default")))
const char* dbus_message_get_path (DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_has_path (DBusMessage *message,
                                             const char *object_path);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_set_interface (DBusMessage *message,
                                             const char *iface);
__attribute__ ((__visibility__ ("default")))
const char* dbus_message_get_interface (DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_has_interface (DBusMessage *message,
                                             const char *iface);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_set_member (DBusMessage *message,
                                             const char *member);
__attribute__ ((__visibility__ ("default")))
const char* dbus_message_get_member (DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_has_member (DBusMessage *message,
                                             const char *member);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_set_error_name (DBusMessage *message,
                                             const char *name);
__attribute__ ((__visibility__ ("default")))
const char* dbus_message_get_error_name (DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_set_destination (DBusMessage *message,
                                             const char *destination);
__attribute__ ((__visibility__ ("default")))
const char* dbus_message_get_destination (DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_set_sender (DBusMessage *message,
                                             const char *sender);
__attribute__ ((__visibility__ ("default")))
const char* dbus_message_get_sender (DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
const char* dbus_message_get_signature (DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
void dbus_message_set_no_reply (DBusMessage *message,
                                             dbus_bool_t no_reply);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_get_no_reply (DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_is_method_call (DBusMessage *message,
                                             const char *iface,
                                             const char *method);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_is_signal (DBusMessage *message,
                                             const char *iface,
                                             const char *signal_name);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_is_error (DBusMessage *message,
                                             const char *error_name);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_has_destination (DBusMessage *message,
                                             const char *bus_name);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_has_sender (DBusMessage *message,
                                             const char *unique_bus_name);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_has_signature (DBusMessage *message,
                                             const char *signature);
__attribute__ ((__visibility__ ("default")))
dbus_uint32_t dbus_message_get_serial (DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
void dbus_message_set_serial (DBusMessage *message,
                                             dbus_uint32_t serial);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_set_reply_serial (DBusMessage *message,
                                             dbus_uint32_t reply_serial);
__attribute__ ((__visibility__ ("default")))
dbus_uint32_t dbus_message_get_reply_serial (DBusMessage *message);

__attribute__ ((__visibility__ ("default")))
void dbus_message_set_auto_start (DBusMessage *message,
                                             dbus_bool_t auto_start);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_get_auto_start (DBusMessage *message);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_get_path_decomposed (DBusMessage *message,
                                                char ***path);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_append_args (DBusMessage *message,
            int first_arg_type,
            ...);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_append_args_valist (DBusMessage *message,
            int first_arg_type,
            va_list var_args);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_get_args (DBusMessage *message,
            DBusError *error,
            int first_arg_type,
            ...);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_get_args_valist (DBusMessage *message,
            DBusError *error,
            int first_arg_type,
            va_list var_args);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_contains_unix_fds (DBusMessage *message);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_iter_init (DBusMessage *message,
                                                DBusMessageIter *iter);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_iter_has_next (DBusMessageIter *iter);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_iter_next (DBusMessageIter *iter);
__attribute__ ((__visibility__ ("default")))
char* dbus_message_iter_get_signature (DBusMessageIter *iter);
__attribute__ ((__visibility__ ("default")))
int dbus_message_iter_get_arg_type (DBusMessageIter *iter);
__attribute__ ((__visibility__ ("default")))
int dbus_message_iter_get_element_type (DBusMessageIter *iter);
__attribute__ ((__visibility__ ("default")))
void dbus_message_iter_recurse (DBusMessageIter *iter,
                                                DBusMessageIter *sub);
__attribute__ ((__visibility__ ("default")))
void dbus_message_iter_get_basic (DBusMessageIter *iter,
                                                void *value);
__attribute__ ((__visibility__ ("default")))
int dbus_message_iter_get_element_count(DBusMessageIter *iter);





__attribute__ ((__visibility__ ("default")))
__attribute__ ((__deprecated__)) int dbus_message_iter_get_array_len (DBusMessageIter *iter);

__attribute__ ((__visibility__ ("default")))
void dbus_message_iter_get_fixed_array (DBusMessageIter *iter,
                                                void *value,
                                                int *n_elements);


__attribute__ ((__visibility__ ("default")))
void dbus_message_iter_init_append (DBusMessage *message,
                                                  DBusMessageIter *iter);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_iter_append_basic (DBusMessageIter *iter,
                                                  int type,
                                                  const void *value);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_iter_append_fixed_array (DBusMessageIter *iter,
                                                  int element_type,
                                                  const void *value,
                                                  int n_elements);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_iter_open_container (DBusMessageIter *iter,
                                                  int type,
                                                  const char *contained_signature,
                                                  DBusMessageIter *sub);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_iter_close_container (DBusMessageIter *iter,
                                                  DBusMessageIter *sub);
__attribute__ ((__visibility__ ("default")))
void dbus_message_iter_abandon_container (DBusMessageIter *iter,
                                                  DBusMessageIter *sub);

__attribute__ ((__visibility__ ("default")))
void dbus_message_lock (DBusMessage *message);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_set_error_from_message (DBusError *error,
                                           DBusMessage *message);


__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_allocate_data_slot (dbus_int32_t *slot_p);
__attribute__ ((__visibility__ ("default")))
void dbus_message_free_data_slot (dbus_int32_t *slot_p);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_set_data (DBusMessage *message,
                                             dbus_int32_t slot,
                                             void *data,
                                             DBusFreeFunction free_data_func);
__attribute__ ((__visibility__ ("default")))
void* dbus_message_get_data (DBusMessage *message,
                                             dbus_int32_t slot);

__attribute__ ((__visibility__ ("default")))
int dbus_message_type_from_string (const char *type_str);
__attribute__ ((__visibility__ ("default")))
const char* dbus_message_type_to_string (int type);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_marshal (DBusMessage *msg,
                                     char **marshalled_data_p,
                                     int *len_p);
__attribute__ ((__visibility__ ("default")))
DBusMessage* dbus_message_demarshal (const char *str,
                                     int len,
                                     DBusError *error);

__attribute__ ((__visibility__ ("default")))
int dbus_message_demarshal_bytes_needed (const char *str,
                                                  int len);

__attribute__ ((__visibility__ ("default")))
void dbus_message_set_allow_interactive_authorization (DBusMessage *message,
    dbus_bool_t allow);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_message_get_allow_interactive_authorization (
    DBusMessage *message);



}
# 33 "/usr/include/dbus-1.0/dbus/dbus-connection.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-shared.h" 1
# 32 "/usr/include/dbus-1.0/dbus/dbus-shared.h"
extern "C" {
# 56 "/usr/include/dbus-1.0/dbus/dbus-shared.h"
typedef enum
{
  DBUS_BUS_SESSION,
  DBUS_BUS_SYSTEM,
  DBUS_BUS_STARTER
} DBusBusType;




typedef enum
{
  DBUS_HANDLER_RESULT_HANDLED,
  DBUS_HANDLER_RESULT_NOT_YET_HANDLED,
  DBUS_HANDLER_RESULT_NEED_MEMORY
} DBusHandlerResult;
# 133 "/usr/include/dbus-1.0/dbus/dbus-shared.h"
}
# 34 "/usr/include/dbus-1.0/dbus/dbus-connection.h" 2

extern "C" {







typedef struct DBusWatch DBusWatch;

typedef struct DBusTimeout DBusTimeout;

typedef struct DBusPreallocatedSend DBusPreallocatedSend;

typedef struct DBusPendingCall DBusPendingCall;

typedef struct DBusConnection DBusConnection;

typedef struct DBusObjectPathVTable DBusObjectPathVTable;




typedef enum
{
  DBUS_WATCH_READABLE = 1 << 0,
  DBUS_WATCH_WRITABLE = 1 << 1,
  DBUS_WATCH_ERROR = 1 << 2,




  DBUS_WATCH_HANGUP = 1 << 3





} DBusWatchFlags;





typedef enum
{
  DBUS_DISPATCH_DATA_REMAINS,
  DBUS_DISPATCH_COMPLETE,
  DBUS_DISPATCH_NEED_MEMORY
} DBusDispatchStatus;






typedef dbus_bool_t (* DBusAddWatchFunction) (DBusWatch *watch,
                                                    void *data);




typedef void (* DBusWatchToggledFunction) (DBusWatch *watch,
                                                    void *data);




typedef void (* DBusRemoveWatchFunction) (DBusWatch *watch,
                                                    void *data);





typedef dbus_bool_t (* DBusAddTimeoutFunction) (DBusTimeout *timeout,
                                                    void *data);





typedef void (* DBusTimeoutToggledFunction) (DBusTimeout *timeout,
                                                    void *data);




typedef void (* DBusRemoveTimeoutFunction) (DBusTimeout *timeout,
                                                    void *data);



typedef void (* DBusDispatchStatusFunction) (DBusConnection *connection,
                                                    DBusDispatchStatus new_status,
                                                    void *data);




typedef void (* DBusWakeupMainFunction) (void *data);







typedef dbus_bool_t (* DBusAllowUnixUserFunction) (DBusConnection *connection,
                                                    unsigned long uid,
                                                    void *data);







typedef dbus_bool_t (* DBusAllowWindowsUserFunction) (DBusConnection *connection,
                                                       const char *user_sid,
                                                       void *data);






typedef void (* DBusPendingCallNotifyFunction) (DBusPendingCall *pending,
                                                void *user_data);





typedef DBusHandlerResult (* DBusHandleMessageFunction) (DBusConnection *connection,
                                                         DBusMessage *message,
                                                         void *user_data);
__attribute__ ((__visibility__ ("default")))
DBusConnection* dbus_connection_open (const char *address,
                                                                 DBusError *error);
__attribute__ ((__visibility__ ("default")))
DBusConnection* dbus_connection_open_private (const char *address,
                                                                 DBusError *error);
__attribute__ ((__visibility__ ("default")))
DBusConnection* dbus_connection_ref (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_unref (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_close (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_get_is_connected (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_get_is_authenticated (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_get_is_anonymous (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
char* dbus_connection_get_server_id (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_can_send_type (DBusConnection *connection,
                                                                 int type);

__attribute__ ((__visibility__ ("default")))
void dbus_connection_set_exit_on_disconnect (DBusConnection *connection,
                                                                 dbus_bool_t exit_on_disconnect);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_flush (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_read_write_dispatch (DBusConnection *connection,
                                                                 int timeout_milliseconds);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_read_write (DBusConnection *connection,
                                                                 int timeout_milliseconds);
__attribute__ ((__visibility__ ("default")))
DBusMessage* dbus_connection_borrow_message (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_return_message (DBusConnection *connection,
                                                                 DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_steal_borrowed_message (DBusConnection *connection,
                                                                 DBusMessage *message);
__attribute__ ((__visibility__ ("default")))
DBusMessage* dbus_connection_pop_message (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
DBusDispatchStatus dbus_connection_get_dispatch_status (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
DBusDispatchStatus dbus_connection_dispatch (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_has_messages_to_send (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_send (DBusConnection *connection,
                                                                 DBusMessage *message,
                                                                 dbus_uint32_t *client_serial);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_send_with_reply (DBusConnection *connection,
                                                                 DBusMessage *message,
                                                                 DBusPendingCall **pending_return,
                                                                 int timeout_milliseconds);
__attribute__ ((__visibility__ ("default")))
DBusMessage * dbus_connection_send_with_reply_and_block (DBusConnection *connection,
                                                                 DBusMessage *message,
                                                                 int timeout_milliseconds,
                                                                 DBusError *error);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_set_watch_functions (DBusConnection *connection,
                                                                 DBusAddWatchFunction add_function,
                                                                 DBusRemoveWatchFunction remove_function,
                                                                 DBusWatchToggledFunction toggled_function,
                                                                 void *data,
                                                                 DBusFreeFunction free_data_function);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_set_timeout_functions (DBusConnection *connection,
                                                                 DBusAddTimeoutFunction add_function,
                                                                 DBusRemoveTimeoutFunction remove_function,
                                                                 DBusTimeoutToggledFunction toggled_function,
                                                                 void *data,
                                                                 DBusFreeFunction free_data_function);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_set_wakeup_main_function (DBusConnection *connection,
                                                                 DBusWakeupMainFunction wakeup_main_function,
                                                                 void *data,
                                                                 DBusFreeFunction free_data_function);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_set_dispatch_status_function (DBusConnection *connection,
                                                                 DBusDispatchStatusFunction function,
                                                                 void *data,
                                                                 DBusFreeFunction free_data_function);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_get_unix_user (DBusConnection *connection,
                                                                 unsigned long *uid);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_get_unix_process_id (DBusConnection *connection,
                                                                 unsigned long *pid);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_get_adt_audit_session_data (DBusConnection *connection,
                                                                 void **data,
                                                                 dbus_int32_t *data_size);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_set_unix_user_function (DBusConnection *connection,
                                                                 DBusAllowUnixUserFunction function,
                                                                 void *data,
                                                                 DBusFreeFunction free_data_function);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_get_windows_user (DBusConnection *connection,
                                                                 char **windows_sid_p);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_set_windows_user_function (DBusConnection *connection,
                                                                 DBusAllowWindowsUserFunction function,
                                                                 void *data,
                                                                 DBusFreeFunction free_data_function);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_set_allow_anonymous (DBusConnection *connection,
                                                                 dbus_bool_t value);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_set_route_peer_messages (DBusConnection *connection,
                                                                 dbus_bool_t value);




__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_add_filter (DBusConnection *connection,
                                           DBusHandleMessageFunction function,
                                           void *user_data,
                                           DBusFreeFunction free_data_function);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_remove_filter (DBusConnection *connection,
                                           DBusHandleMessageFunction function,
                                           void *user_data);



__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_allocate_data_slot (dbus_int32_t *slot_p);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_free_data_slot (dbus_int32_t *slot_p);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_set_data (DBusConnection *connection,
                                                dbus_int32_t slot,
                                                void *data,
                                                DBusFreeFunction free_data_func);
__attribute__ ((__visibility__ ("default")))
void* dbus_connection_get_data (DBusConnection *connection,
                                                dbus_int32_t slot);

__attribute__ ((__visibility__ ("default")))
void dbus_connection_set_change_sigpipe (dbus_bool_t will_modify_sigpipe);

__attribute__ ((__visibility__ ("default")))
void dbus_connection_set_max_message_size (DBusConnection *connection,
                                            long size);
__attribute__ ((__visibility__ ("default")))
long dbus_connection_get_max_message_size (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_set_max_received_size (DBusConnection *connection,
                                            long size);
__attribute__ ((__visibility__ ("default")))
long dbus_connection_get_max_received_size (DBusConnection *connection);

__attribute__ ((__visibility__ ("default")))
void dbus_connection_set_max_message_unix_fds (DBusConnection *connection,
                                               long n);
__attribute__ ((__visibility__ ("default")))
long dbus_connection_get_max_message_unix_fds (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_set_max_received_unix_fds(DBusConnection *connection,
                                               long n);
__attribute__ ((__visibility__ ("default")))
long dbus_connection_get_max_received_unix_fds(DBusConnection *connection);

__attribute__ ((__visibility__ ("default")))
long dbus_connection_get_outgoing_size (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
long dbus_connection_get_outgoing_unix_fds (DBusConnection *connection);

__attribute__ ((__visibility__ ("default")))
DBusPreallocatedSend* dbus_connection_preallocate_send (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_free_preallocated_send (DBusConnection *connection,
                                                              DBusPreallocatedSend *preallocated);
__attribute__ ((__visibility__ ("default")))
void dbus_connection_send_preallocated (DBusConnection *connection,
                                                              DBusPreallocatedSend *preallocated,
                                                              DBusMessage *message,
                                                              dbus_uint32_t *client_serial);
# 367 "/usr/include/dbus-1.0/dbus/dbus-connection.h"
typedef void (* DBusObjectPathUnregisterFunction) (DBusConnection *connection,
                                                                void *user_data);





typedef DBusHandlerResult (* DBusObjectPathMessageFunction) (DBusConnection *connection,
                                                                DBusMessage *message,
                                                                void *user_data);







struct DBusObjectPathVTable
{
  DBusObjectPathUnregisterFunction unregister_function;
  DBusObjectPathMessageFunction message_function;

  void (* dbus_internal_pad1) (void *);
  void (* dbus_internal_pad2) (void *);
  void (* dbus_internal_pad3) (void *);
  void (* dbus_internal_pad4) (void *);
};

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_try_register_object_path (DBusConnection *connection,
                                                      const char *path,
                                                      const DBusObjectPathVTable *vtable,
                                                      void *user_data,
                                                      DBusError *error);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_register_object_path (DBusConnection *connection,
                                                    const char *path,
                                                    const DBusObjectPathVTable *vtable,
                                                    void *user_data);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_try_register_fallback (DBusConnection *connection,
                                                   const char *path,
                                                   const DBusObjectPathVTable *vtable,
                                                   void *user_data,
                                                   DBusError *error);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_register_fallback (DBusConnection *connection,
                                                    const char *path,
                                                    const DBusObjectPathVTable *vtable,
                                                    void *user_data);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_unregister_object_path (DBusConnection *connection,
                                                    const char *path);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_get_object_path_data (DBusConnection *connection,
                                                    const char *path,
                                                    void **data_p);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_list_registered (DBusConnection *connection,
                                                    const char *parent_path,
                                                    char ***child_entries);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_get_unix_fd (DBusConnection *connection,
                                                    int *fd);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_connection_get_socket (DBusConnection *connection,
                                                    int *fd);
# 450 "/usr/include/dbus-1.0/dbus/dbus-connection.h"
__attribute__ ((__visibility__ ("default")))
__attribute__ ((__deprecated__)) int dbus_watch_get_fd (DBusWatch *watch);


__attribute__ ((__visibility__ ("default")))
int dbus_watch_get_unix_fd (DBusWatch *watch);
__attribute__ ((__visibility__ ("default")))
int dbus_watch_get_socket (DBusWatch *watch);
__attribute__ ((__visibility__ ("default")))
unsigned int dbus_watch_get_flags (DBusWatch *watch);
__attribute__ ((__visibility__ ("default")))
void* dbus_watch_get_data (DBusWatch *watch);
__attribute__ ((__visibility__ ("default")))
void dbus_watch_set_data (DBusWatch *watch,
                                     void *data,
                                     DBusFreeFunction free_data_function);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_watch_handle (DBusWatch *watch,
                                     unsigned int flags);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_watch_get_enabled (DBusWatch *watch);
# 479 "/usr/include/dbus-1.0/dbus/dbus-connection.h"
__attribute__ ((__visibility__ ("default")))
int dbus_timeout_get_interval (DBusTimeout *timeout);
__attribute__ ((__visibility__ ("default")))
void* dbus_timeout_get_data (DBusTimeout *timeout);
__attribute__ ((__visibility__ ("default")))
void dbus_timeout_set_data (DBusTimeout *timeout,
                                       void *data,
                                       DBusFreeFunction free_data_function);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_timeout_handle (DBusTimeout *timeout);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_timeout_get_enabled (DBusTimeout *timeout);



}
# 31 "/usr/include/dbus-1.0/dbus/dbus-bus.h" 2

extern "C" {






__attribute__ ((__visibility__ ("default")))
DBusConnection *dbus_bus_get (DBusBusType type,
        DBusError *error);
__attribute__ ((__visibility__ ("default")))
DBusConnection *dbus_bus_get_private (DBusBusType type,
        DBusError *error);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_bus_register (DBusConnection *connection,
        DBusError *error);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_bus_set_unique_name (DBusConnection *connection,
        const char *unique_name);
__attribute__ ((__visibility__ ("default")))
const char* dbus_bus_get_unique_name (DBusConnection *connection);
__attribute__ ((__visibility__ ("default")))
unsigned long dbus_bus_get_unix_user (DBusConnection *connection,
                      const char *name,
                                           DBusError *error);
__attribute__ ((__visibility__ ("default")))
char* dbus_bus_get_id (DBusConnection *connection,
                                           DBusError *error);
__attribute__ ((__visibility__ ("default")))
int dbus_bus_request_name (DBusConnection *connection,
        const char *name,
        unsigned int flags,
        DBusError *error);
__attribute__ ((__visibility__ ("default")))
int dbus_bus_release_name (DBusConnection *connection,
        const char *name,
        DBusError *error);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_bus_name_has_owner (DBusConnection *connection,
        const char *name,
        DBusError *error);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_bus_start_service_by_name (DBusConnection *connection,
                                                const char *name,
                                                dbus_uint32_t flags,
                                                dbus_uint32_t *reply,
                                                DBusError *error);

__attribute__ ((__visibility__ ("default")))
void dbus_bus_add_match (DBusConnection *connection,
                                           const char *rule,
                                           DBusError *error);
__attribute__ ((__visibility__ ("default")))
void dbus_bus_remove_match (DBusConnection *connection,
                                           const char *rule,
                                           DBusError *error);



}
# 32 "/usr/include/dbus-1.0/dbus/dbus.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-connection.h" 1
# 33 "/usr/include/dbus-1.0/dbus/dbus.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-errors.h" 1
# 34 "/usr/include/dbus-1.0/dbus/dbus.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-macros.h" 1
# 35 "/usr/include/dbus-1.0/dbus/dbus.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-message.h" 1
# 36 "/usr/include/dbus-1.0/dbus/dbus.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-misc.h" 1
# 30 "/usr/include/dbus-1.0/dbus/dbus-misc.h"
# 1 "/usr/include/dbus-1.0/dbus/dbus-types.h" 1
# 31 "/usr/include/dbus-1.0/dbus/dbus-misc.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-errors.h" 1
# 32 "/usr/include/dbus-1.0/dbus/dbus-misc.h" 2

extern "C" {





__attribute__ ((__visibility__ ("default")))
char* dbus_get_local_machine_id (void);

__attribute__ ((__visibility__ ("default")))
void dbus_get_version (int *major_version_p,
                                        int *minor_version_p,
                                        int *micro_version_p);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_setenv (const char *variable,
                                        const char *value);



}
# 37 "/usr/include/dbus-1.0/dbus/dbus.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-pending-call.h" 1
# 30 "/usr/include/dbus-1.0/dbus/dbus-pending-call.h"
# 1 "/usr/include/dbus-1.0/dbus/dbus-macros.h" 1
# 31 "/usr/include/dbus-1.0/dbus/dbus-pending-call.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-types.h" 1
# 32 "/usr/include/dbus-1.0/dbus/dbus-pending-call.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-connection.h" 1
# 33 "/usr/include/dbus-1.0/dbus/dbus-pending-call.h" 2

extern "C" {
# 44 "/usr/include/dbus-1.0/dbus/dbus-pending-call.h"
__attribute__ ((__visibility__ ("default")))
DBusPendingCall* dbus_pending_call_ref (DBusPendingCall *pending);
__attribute__ ((__visibility__ ("default")))
void dbus_pending_call_unref (DBusPendingCall *pending);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_pending_call_set_notify (DBusPendingCall *pending,
                                              DBusPendingCallNotifyFunction function,
                                              void *user_data,
                                              DBusFreeFunction free_user_data);
__attribute__ ((__visibility__ ("default")))
void dbus_pending_call_cancel (DBusPendingCall *pending);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_pending_call_get_completed (DBusPendingCall *pending);
__attribute__ ((__visibility__ ("default")))
DBusMessage* dbus_pending_call_steal_reply (DBusPendingCall *pending);
__attribute__ ((__visibility__ ("default")))
void dbus_pending_call_block (DBusPendingCall *pending);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_pending_call_allocate_data_slot (dbus_int32_t *slot_p);
__attribute__ ((__visibility__ ("default")))
void dbus_pending_call_free_data_slot (dbus_int32_t *slot_p);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_pending_call_set_data (DBusPendingCall *pending,
                                                  dbus_int32_t slot,
                                                  void *data,
                                                  DBusFreeFunction free_data_func);
__attribute__ ((__visibility__ ("default")))
void* dbus_pending_call_get_data (DBusPendingCall *pending,
                                                  dbus_int32_t slot);



}
# 38 "/usr/include/dbus-1.0/dbus/dbus.h" 2

# 1 "/usr/include/dbus-1.0/dbus/dbus-server.h" 1
# 30 "/usr/include/dbus-1.0/dbus/dbus-server.h"
# 1 "/usr/include/dbus-1.0/dbus/dbus-errors.h" 1
# 31 "/usr/include/dbus-1.0/dbus/dbus-server.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-message.h" 1
# 32 "/usr/include/dbus-1.0/dbus/dbus-server.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-connection.h" 1
# 33 "/usr/include/dbus-1.0/dbus/dbus-server.h" 2


extern "C" {






typedef struct DBusServer DBusServer;




typedef void (* DBusNewConnectionFunction) (DBusServer *server,
                                            DBusConnection *new_connection,
                                            void *data);

__attribute__ ((__visibility__ ("default")))
DBusServer* dbus_server_listen (const char *address,
                                          DBusError *error);
__attribute__ ((__visibility__ ("default")))
DBusServer* dbus_server_ref (DBusServer *server);
__attribute__ ((__visibility__ ("default")))
void dbus_server_unref (DBusServer *server);
__attribute__ ((__visibility__ ("default")))
void dbus_server_disconnect (DBusServer *server);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_server_get_is_connected (DBusServer *server);
__attribute__ ((__visibility__ ("default")))
char* dbus_server_get_address (DBusServer *server);
__attribute__ ((__visibility__ ("default")))
char* dbus_server_get_id (DBusServer *server);
__attribute__ ((__visibility__ ("default")))
void dbus_server_set_new_connection_function (DBusServer *server,
                                                     DBusNewConnectionFunction function,
                                                     void *data,
                                                     DBusFreeFunction free_data_function);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_server_set_watch_functions (DBusServer *server,
                                                     DBusAddWatchFunction add_function,
                                                     DBusRemoveWatchFunction remove_function,
                                                     DBusWatchToggledFunction toggled_function,
                                                     void *data,
                                                     DBusFreeFunction free_data_function);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_server_set_timeout_functions (DBusServer *server,
                                                     DBusAddTimeoutFunction add_function,
                                                     DBusRemoveTimeoutFunction remove_function,
                                                     DBusTimeoutToggledFunction toggled_function,
                                                     void *data,
                                                     DBusFreeFunction free_data_function);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_server_set_auth_mechanisms (DBusServer *server,
                                                     const char **mechanisms);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_server_allocate_data_slot (dbus_int32_t *slot_p);
__attribute__ ((__visibility__ ("default")))
void dbus_server_free_data_slot (dbus_int32_t *slot_p);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_server_set_data (DBusServer *server,
                                            int slot,
                                            void *data,
                                            DBusFreeFunction free_data_func);
__attribute__ ((__visibility__ ("default")))
void* dbus_server_get_data (DBusServer *server,
                                            int slot);



}
# 40 "/usr/include/dbus-1.0/dbus/dbus.h" 2

# 1 "/usr/include/dbus-1.0/dbus/dbus-signature.h" 1
# 30 "/usr/include/dbus-1.0/dbus/dbus-signature.h"
# 1 "/usr/include/dbus-1.0/dbus/dbus-macros.h" 1
# 31 "/usr/include/dbus-1.0/dbus/dbus-signature.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-types.h" 1
# 32 "/usr/include/dbus-1.0/dbus/dbus-signature.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-errors.h" 1
# 33 "/usr/include/dbus-1.0/dbus/dbus-signature.h" 2

extern "C" {
# 44 "/usr/include/dbus-1.0/dbus/dbus-signature.h"
typedef struct
{
  void *dummy1;
  void *dummy2;
  dbus_uint32_t dummy8;
  int dummy12;
  int dummy17;
} DBusSignatureIter;

__attribute__ ((__visibility__ ("default")))
void dbus_signature_iter_init (DBusSignatureIter *iter,
            const char *signature);

__attribute__ ((__visibility__ ("default")))
int dbus_signature_iter_get_current_type (const DBusSignatureIter *iter);

__attribute__ ((__visibility__ ("default")))
char * dbus_signature_iter_get_signature (const DBusSignatureIter *iter);

__attribute__ ((__visibility__ ("default")))
int dbus_signature_iter_get_element_type (const DBusSignatureIter *iter);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_signature_iter_next (DBusSignatureIter *iter);

__attribute__ ((__visibility__ ("default")))
void dbus_signature_iter_recurse (const DBusSignatureIter *iter,
            DBusSignatureIter *subiter);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_signature_validate (const char *signature,
            DBusError *error);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_signature_validate_single (const char *signature,
            DBusError *error);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_type_is_valid (int typecode);

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_type_is_basic (int typecode);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_type_is_container (int typecode);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_type_is_fixed (int typecode);



}
# 42 "/usr/include/dbus-1.0/dbus/dbus.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-syntax.h" 1
# 31 "/usr/include/dbus-1.0/dbus/dbus-syntax.h"
# 1 "/usr/include/dbus-1.0/dbus/dbus-macros.h" 1
# 32 "/usr/include/dbus-1.0/dbus/dbus-syntax.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-types.h" 1
# 33 "/usr/include/dbus-1.0/dbus/dbus-syntax.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-errors.h" 1
# 34 "/usr/include/dbus-1.0/dbus/dbus-syntax.h" 2

extern "C" {

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_validate_path (const char *path,
                                                      DBusError *error);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_validate_interface (const char *name,
                                                      DBusError *error);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_validate_member (const char *name,
                                                      DBusError *error);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_validate_error_name (const char *name,
                                                      DBusError *error);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_validate_bus_name (const char *name,
                                                      DBusError *error);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_validate_utf8 (const char *alleged_utf8,
                                                      DBusError *error);

}
# 43 "/usr/include/dbus-1.0/dbus/dbus.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-threads.h" 1
# 30 "/usr/include/dbus-1.0/dbus/dbus-threads.h"
# 1 "/usr/include/dbus-1.0/dbus/dbus-macros.h" 1
# 31 "/usr/include/dbus-1.0/dbus/dbus-threads.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-types.h" 1
# 32 "/usr/include/dbus-1.0/dbus/dbus-threads.h" 2

extern "C" {







typedef struct DBusMutex DBusMutex;

typedef struct DBusCondVar DBusCondVar;


typedef DBusMutex* (* DBusMutexNewFunction) (void);

typedef void (* DBusMutexFreeFunction) (DBusMutex *mutex);

typedef dbus_bool_t (* DBusMutexLockFunction) (DBusMutex *mutex);

typedef dbus_bool_t (* DBusMutexUnlockFunction) (DBusMutex *mutex);
# 61 "/usr/include/dbus-1.0/dbus/dbus-threads.h"
typedef DBusMutex* (* DBusRecursiveMutexNewFunction) (void);


typedef void (* DBusRecursiveMutexFreeFunction) (DBusMutex *mutex);



typedef void (* DBusRecursiveMutexLockFunction) (DBusMutex *mutex);



typedef void (* DBusRecursiveMutexUnlockFunction) (DBusMutex *mutex);




typedef DBusCondVar* (* DBusCondVarNewFunction) (void);


typedef void (* DBusCondVarFreeFunction) (DBusCondVar *cond);
# 92 "/usr/include/dbus-1.0/dbus/dbus-threads.h"
typedef void (* DBusCondVarWaitFunction) (DBusCondVar *cond,
         DBusMutex *mutex);







typedef dbus_bool_t (* DBusCondVarWaitTimeoutFunction) (DBusCondVar *cond,
         DBusMutex *mutex,
         int timeout_milliseconds);




typedef void (* DBusCondVarWakeOneFunction) (DBusCondVar *cond);





typedef void (* DBusCondVarWakeAllFunction) (DBusCondVar *cond);






typedef enum
{
  DBUS_THREAD_FUNCTIONS_MUTEX_NEW_MASK = 1 << 0,
  DBUS_THREAD_FUNCTIONS_MUTEX_FREE_MASK = 1 << 1,
  DBUS_THREAD_FUNCTIONS_MUTEX_LOCK_MASK = 1 << 2,
  DBUS_THREAD_FUNCTIONS_MUTEX_UNLOCK_MASK = 1 << 3,
  DBUS_THREAD_FUNCTIONS_CONDVAR_NEW_MASK = 1 << 4,
  DBUS_THREAD_FUNCTIONS_CONDVAR_FREE_MASK = 1 << 5,
  DBUS_THREAD_FUNCTIONS_CONDVAR_WAIT_MASK = 1 << 6,
  DBUS_THREAD_FUNCTIONS_CONDVAR_WAIT_TIMEOUT_MASK = 1 << 7,
  DBUS_THREAD_FUNCTIONS_CONDVAR_WAKE_ONE_MASK = 1 << 8,
  DBUS_THREAD_FUNCTIONS_CONDVAR_WAKE_ALL_MASK = 1 << 9,
  DBUS_THREAD_FUNCTIONS_RECURSIVE_MUTEX_NEW_MASK = 1 << 10,
  DBUS_THREAD_FUNCTIONS_RECURSIVE_MUTEX_FREE_MASK = 1 << 11,
  DBUS_THREAD_FUNCTIONS_RECURSIVE_MUTEX_LOCK_MASK = 1 << 12,
  DBUS_THREAD_FUNCTIONS_RECURSIVE_MUTEX_UNLOCK_MASK = 1 << 13,
  DBUS_THREAD_FUNCTIONS_ALL_MASK = (1 << 14) - 1
} DBusThreadFunctionsMask;
# 152 "/usr/include/dbus-1.0/dbus/dbus-threads.h"
typedef struct
{
  unsigned int mask;

  DBusMutexNewFunction mutex_new;
  DBusMutexFreeFunction mutex_free;
  DBusMutexLockFunction mutex_lock;
  DBusMutexUnlockFunction mutex_unlock;

  DBusCondVarNewFunction condvar_new;
  DBusCondVarFreeFunction condvar_free;
  DBusCondVarWaitFunction condvar_wait;
  DBusCondVarWaitTimeoutFunction condvar_wait_timeout;
  DBusCondVarWakeOneFunction condvar_wake_one;
  DBusCondVarWakeAllFunction condvar_wake_all;

  DBusRecursiveMutexNewFunction recursive_mutex_new;
  DBusRecursiveMutexFreeFunction recursive_mutex_free;
  DBusRecursiveMutexLockFunction recursive_mutex_lock;
  DBusRecursiveMutexUnlockFunction recursive_mutex_unlock;

  void (* padding1) (void);
  void (* padding2) (void);
  void (* padding3) (void);
  void (* padding4) (void);

} DBusThreadFunctions;

__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_threads_init (const DBusThreadFunctions *functions);
__attribute__ ((__visibility__ ("default")))
dbus_bool_t dbus_threads_init_default (void);



}
# 44 "/usr/include/dbus-1.0/dbus/dbus.h" 2
# 1 "/usr/include/dbus-1.0/dbus/dbus-types.h" 1
# 45 "/usr/include/dbus-1.0/dbus/dbus.h" 2
# 32 "gdbus.h" 2
# 1 "/usr/include/glib-2.0/glib.h" 1
# 30 "/usr/include/glib-2.0/glib.h"
# 1 "/usr/include/glib-2.0/glib/galloca.h" 1
# 32 "/usr/include/glib-2.0/glib/galloca.h"
# 1 "/usr/include/glib-2.0/glib/gtypes.h" 1
# 32 "/usr/include/glib-2.0/glib/gtypes.h"
# 1 "/usr/lib/arm-linux-gnueabihf/glib-2.0/include/glibconfig.h" 1
# 9 "/usr/lib/arm-linux-gnueabihf/glib-2.0/include/glibconfig.h"
# 1 "/usr/include/glib-2.0/glib/gmacros.h" 1
# 38 "/usr/include/glib-2.0/glib/gmacros.h"
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 39 "/usr/include/glib-2.0/glib/gmacros.h" 2
# 10 "/usr/lib/arm-linux-gnueabihf/glib-2.0/include/glibconfig.h" 2

# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include-fixed/limits.h" 1 3 4
# 34 "/usr/lib/gcc/arm-linux-gnueabihf/6/include-fixed/limits.h" 3 4
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include-fixed/syslimits.h" 1 3 4






# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include-fixed/limits.h" 1 3 4
# 168 "/usr/lib/gcc/arm-linux-gnueabihf/6/include-fixed/limits.h" 3 4
# 1 "/usr/include/limits.h" 1 3 4
# 143 "/usr/include/limits.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/posix1_lim.h" 1 3 4
# 160 "/usr/include/arm-linux-gnueabihf/bits/posix1_lim.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/local_lim.h" 1 3 4
# 38 "/usr/include/arm-linux-gnueabihf/bits/local_lim.h" 3 4
# 1 "/usr/include/linux/limits.h" 1 3 4
# 39 "/usr/include/arm-linux-gnueabihf/bits/local_lim.h" 2 3 4
# 161 "/usr/include/arm-linux-gnueabihf/bits/posix1_lim.h" 2 3 4
# 144 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/arm-linux-gnueabihf/bits/posix2_lim.h" 1 3 4
# 148 "/usr/include/limits.h" 2 3 4



# 1 "/usr/include/arm-linux-gnueabihf/bits/xopen_lim.h" 1 3 4
# 33 "/usr/include/arm-linux-gnueabihf/bits/xopen_lim.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/stdio_lim.h" 1 3 4
# 34 "/usr/include/arm-linux-gnueabihf/bits/xopen_lim.h" 2 3 4
# 152 "/usr/include/limits.h" 2 3 4
# 169 "/usr/lib/gcc/arm-linux-gnueabihf/6/include-fixed/limits.h" 2 3 4
# 8 "/usr/lib/gcc/arm-linux-gnueabihf/6/include-fixed/syslimits.h" 2 3 4
# 35 "/usr/lib/gcc/arm-linux-gnueabihf/6/include-fixed/limits.h" 2 3 4
# 12 "/usr/lib/arm-linux-gnueabihf/glib-2.0/include/glibconfig.h" 2
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/float.h" 1 3 4
# 13 "/usr/lib/arm-linux-gnueabihf/glib-2.0/include/glibconfig.h" 2
# 21 "/usr/lib/arm-linux-gnueabihf/glib-2.0/include/glibconfig.h"
extern "C" {
# 37 "/usr/lib/arm-linux-gnueabihf/glib-2.0/include/glibconfig.h"
typedef signed char gint8;
typedef unsigned char guint8;
typedef signed short gint16;
typedef unsigned short guint16;



typedef signed int gint32;
typedef unsigned int guint32;





__extension__ typedef signed long long gint64;
__extension__ typedef unsigned long long guint64;
# 65 "/usr/lib/arm-linux-gnueabihf/glib-2.0/include/glibconfig.h"
typedef signed int gssize;
typedef unsigned int gsize;
# 76 "/usr/lib/arm-linux-gnueabihf/glib-2.0/include/glibconfig.h"
typedef gint64 goffset;
# 93 "/usr/lib/arm-linux-gnueabihf/glib-2.0/include/glibconfig.h"
typedef signed int gintptr;
typedef unsigned int guintptr;
# 182 "/usr/lib/arm-linux-gnueabihf/glib-2.0/include/glibconfig.h"
typedef int GPid;
# 193 "/usr/lib/arm-linux-gnueabihf/glib-2.0/include/glibconfig.h"
}
# 33 "/usr/include/glib-2.0/glib/gtypes.h" 2

# 1 "/usr/include/glib-2.0/glib/gversionmacros.h" 1
# 35 "/usr/include/glib-2.0/glib/gtypes.h" 2


extern "C" {
# 46 "/usr/include/glib-2.0/glib/gtypes.h"
typedef char gchar;
typedef short gshort;
typedef long glong;
typedef int gint;
typedef gint gboolean;

typedef unsigned char guchar;
typedef unsigned short gushort;
typedef unsigned long gulong;
typedef unsigned int guint;

typedef float gfloat;
typedef double gdouble;
# 77 "/usr/include/glib-2.0/glib/gtypes.h"
typedef void* gpointer;
typedef const void *gconstpointer;

typedef gint (*GCompareFunc) (gconstpointer a,
                                                 gconstpointer b);
typedef gint (*GCompareDataFunc) (gconstpointer a,
                                                 gconstpointer b,
       gpointer user_data);
typedef gboolean (*GEqualFunc) (gconstpointer a,
                                                 gconstpointer b);
typedef void (*GDestroyNotify) (gpointer data);
typedef void (*GFunc) (gpointer data,
                                                 gpointer user_data);
typedef guint (*GHashFunc) (gconstpointer key);
typedef void (*GHFunc) (gpointer key,
                                                 gpointer value,
                                                 gpointer user_data);
# 103 "/usr/include/glib-2.0/glib/gtypes.h"
typedef void (*GFreeFunc) (gpointer data);
# 117 "/usr/include/glib-2.0/glib/gtypes.h"
typedef const gchar * (*GTranslateFunc) (const gchar *str,
       gpointer data);
# 418 "/usr/include/glib-2.0/glib/gtypes.h"
static inline gboolean _GLIB_CHECKED_ADD_U32 (guint32 *dest, guint32 a, guint32 b) {
  return !__builtin_uadd_overflow(a, b, dest); }
static inline gboolean _GLIB_CHECKED_MUL_U32 (guint32 *dest, guint32 a, guint32 b) {
  return !__builtin_umul_overflow(a, b, dest); }
static inline gboolean _GLIB_CHECKED_ADD_U64 (guint64 *dest, guint64 a, guint64 b) {
  typedef char _GStaticAssertCompileTimeAssertion_0[(sizeof (unsigned long long) == sizeof (guint64)) ? 1 : -1] __attribute__((__unused__));
  return !__builtin_uaddll_overflow(a, b, (unsigned long long *) dest); }
static inline gboolean _GLIB_CHECKED_MUL_U64 (guint64 *dest, guint64 a, guint64 b) {
  return !__builtin_umulll_overflow(a, b, (unsigned long long *) dest); }
# 455 "/usr/include/glib-2.0/glib/gtypes.h"
typedef union _GDoubleIEEE754 GDoubleIEEE754;
typedef union _GFloatIEEE754 GFloatIEEE754;





union _GFloatIEEE754
{
  gfloat v_float;
  struct {
    guint mantissa : 23;
    guint biased_exponent : 8;
    guint sign : 1;
  } mpn;
};
union _GDoubleIEEE754
{
  gdouble v_double;
  struct {
    guint mantissa_low : 32;
    guint mantissa_high : 20;
    guint biased_exponent : 11;
    guint sign : 1;
  } mpn;
};
# 505 "/usr/include/glib-2.0/glib/gtypes.h"
typedef struct _GTimeVal GTimeVal;

struct _GTimeVal
{
  glong tv_sec;
  glong tv_usec;
};

}
# 33 "/usr/include/glib-2.0/glib/galloca.h" 2
# 31 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/garray.h" 1
# 34 "/usr/include/glib-2.0/glib/garray.h"
extern "C" {

typedef struct _GBytes GBytes;
typedef struct _GArray GArray;
typedef struct _GByteArray GByteArray;
typedef struct _GPtrArray GPtrArray;

struct _GArray
{
  gchar *data;
  guint len;
};

struct _GByteArray
{
  guint8 *data;
  guint len;
};

struct _GPtrArray
{
  gpointer *pdata;
  guint len;
};
# 69 "/usr/include/glib-2.0/glib/garray.h"
extern
GArray* g_array_new (gboolean zero_terminated,
       gboolean clear_,
       guint element_size);
extern
GArray* g_array_sized_new (gboolean zero_terminated,
       gboolean clear_,
       guint element_size,
       guint reserved_size);
extern
gchar* g_array_free (GArray *array,
       gboolean free_segment);
extern
GArray *g_array_ref (GArray *array);
extern
void g_array_unref (GArray *array);
extern
guint g_array_get_element_size (GArray *array);
extern
GArray* g_array_append_vals (GArray *array,
       gconstpointer data,
       guint len);
extern
GArray* g_array_prepend_vals (GArray *array,
       gconstpointer data,
       guint len);
extern
GArray* g_array_insert_vals (GArray *array,
       guint index_,
       gconstpointer data,
       guint len);
extern
GArray* g_array_set_size (GArray *array,
       guint length);
extern
GArray* g_array_remove_index (GArray *array,
       guint index_);
extern
GArray* g_array_remove_index_fast (GArray *array,
       guint index_);
extern
GArray* g_array_remove_range (GArray *array,
       guint index_,
       guint length);
extern
void g_array_sort (GArray *array,
       GCompareFunc compare_func);
extern
void g_array_sort_with_data (GArray *array,
       GCompareDataFunc compare_func,
       gpointer user_data);
extern
void g_array_set_clear_func (GArray *array,
                                   GDestroyNotify clear_func);






extern
GPtrArray* g_ptr_array_new (void);
extern
GPtrArray* g_ptr_array_new_with_free_func (GDestroyNotify element_free_func);
extern
GPtrArray* g_ptr_array_sized_new (guint reserved_size);
extern
GPtrArray* g_ptr_array_new_full (guint reserved_size,
        GDestroyNotify element_free_func);
extern
gpointer* g_ptr_array_free (GPtrArray *array,
        gboolean free_seg);
extern
GPtrArray* g_ptr_array_ref (GPtrArray *array);
extern
void g_ptr_array_unref (GPtrArray *array);
extern
void g_ptr_array_set_free_func (GPtrArray *array,
                                           GDestroyNotify element_free_func);
extern
void g_ptr_array_set_size (GPtrArray *array,
        gint length);
extern
gpointer g_ptr_array_remove_index (GPtrArray *array,
        guint index_);
extern
gpointer g_ptr_array_remove_index_fast (GPtrArray *array,
        guint index_);
extern
gboolean g_ptr_array_remove (GPtrArray *array,
        gpointer data);
extern
gboolean g_ptr_array_remove_fast (GPtrArray *array,
        gpointer data);
extern
GPtrArray *g_ptr_array_remove_range (GPtrArray *array,
        guint index_,
        guint length);
extern
void g_ptr_array_add (GPtrArray *array,
        gpointer data);
extern
void g_ptr_array_insert (GPtrArray *array,
                                           gint index_,
                                           gpointer data);
extern
void g_ptr_array_sort (GPtrArray *array,
        GCompareFunc compare_func);
extern
void g_ptr_array_sort_with_data (GPtrArray *array,
        GCompareDataFunc compare_func,
        gpointer user_data);
extern
void g_ptr_array_foreach (GPtrArray *array,
        GFunc func,
        gpointer user_data);






extern
GByteArray* g_byte_array_new (void);
extern
GByteArray* g_byte_array_new_take (guint8 *data,
                                            gsize len);
extern
GByteArray* g_byte_array_sized_new (guint reserved_size);
extern
guint8* g_byte_array_free (GByteArray *array,
         gboolean free_segment);
extern
GBytes* g_byte_array_free_to_bytes (GByteArray *array);
extern
GByteArray *g_byte_array_ref (GByteArray *array);
extern
void g_byte_array_unref (GByteArray *array);
extern
GByteArray* g_byte_array_append (GByteArray *array,
         const guint8 *data,
         guint len);
extern
GByteArray* g_byte_array_prepend (GByteArray *array,
         const guint8 *data,
         guint len);
extern
GByteArray* g_byte_array_set_size (GByteArray *array,
         guint length);
extern
GByteArray* g_byte_array_remove_index (GByteArray *array,
         guint index_);
extern
GByteArray* g_byte_array_remove_index_fast (GByteArray *array,
         guint index_);
extern
GByteArray* g_byte_array_remove_range (GByteArray *array,
         guint index_,
         guint length);
extern
void g_byte_array_sort (GByteArray *array,
         GCompareFunc compare_func);
extern
void g_byte_array_sort_with_data (GByteArray *array,
         GCompareDataFunc compare_func,
         gpointer user_data);

}
# 32 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gasyncqueue.h" 1
# 32 "/usr/include/glib-2.0/glib/gasyncqueue.h"
# 1 "/usr/include/glib-2.0/glib/gthread.h" 1
# 32 "/usr/include/glib-2.0/glib/gthread.h"
# 1 "/usr/include/glib-2.0/glib/gatomic.h" 1
# 29 "/usr/include/glib-2.0/glib/gatomic.h"
extern "C" {

extern
gint g_atomic_int_get (const volatile gint *atomic);
extern
void g_atomic_int_set (volatile gint *atomic,
                                                               gint newval);
extern
void g_atomic_int_inc (volatile gint *atomic);
extern
gboolean g_atomic_int_dec_and_test (volatile gint *atomic);
extern
gboolean g_atomic_int_compare_and_exchange (volatile gint *atomic,
                                                               gint oldval,
                                                               gint newval);
extern
gint g_atomic_int_add (volatile gint *atomic,
                                                               gint val);
extern
guint g_atomic_int_and (volatile guint *atomic,
                                                               guint val);
extern
guint g_atomic_int_or (volatile guint *atomic,
                                                               guint val);
extern
guint g_atomic_int_xor (volatile guint *atomic,
                                                               guint val);

extern
gpointer g_atomic_pointer_get (const volatile void *atomic);
extern
void g_atomic_pointer_set (volatile void *atomic,
                                                               gpointer newval);
extern
gboolean g_atomic_pointer_compare_and_exchange (volatile void *atomic,
                                                               gpointer oldval,
                                                               gpointer newval);
extern
gssize g_atomic_pointer_add (volatile void *atomic,
                                                               gssize val);
extern
gsize g_atomic_pointer_and (volatile void *atomic,
                                                               gsize val);
extern
gsize g_atomic_pointer_or (volatile void *atomic,
                                                               gsize val);
extern
gsize g_atomic_pointer_xor (volatile void *atomic,
                                                               gsize val);

__attribute__((__deprecated__("Use '" "g_atomic_int_add" "' instead"))) extern
gint g_atomic_int_exchange_and_add (volatile gint *atomic,
                                                               gint val);

}
# 33 "/usr/include/glib-2.0/glib/gthread.h" 2
# 1 "/usr/include/glib-2.0/glib/gerror.h" 1
# 29 "/usr/include/glib-2.0/glib/gerror.h"
# 1 "/usr/include/glib-2.0/glib/gquark.h" 1
# 34 "/usr/include/glib-2.0/glib/gquark.h"
extern "C" {

typedef guint32 GQuark;



extern
GQuark g_quark_try_string (const gchar *string);
extern
GQuark g_quark_from_static_string (const gchar *string);
extern
GQuark g_quark_from_string (const gchar *string);
extern
const gchar * g_quark_to_string (GQuark quark) __attribute__((__const__));
# 61 "/usr/include/glib-2.0/glib/gquark.h"
extern
const gchar * g_intern_string (const gchar *string);
extern
const gchar * g_intern_static_string (const gchar *string);

}
# 30 "/usr/include/glib-2.0/glib/gerror.h" 2

extern "C" {
# 42 "/usr/include/glib-2.0/glib/gerror.h"
typedef struct _GError GError;

struct _GError
{
  GQuark domain;
  gint code;
  gchar *message;
};

extern
GError* g_error_new (GQuark domain,
                                gint code,
                                const gchar *format,
                                ...) __attribute__((__format__ (__printf__, 3, 4)));

extern
GError* g_error_new_literal (GQuark domain,
                                gint code,
                                const gchar *message);
extern
GError* g_error_new_valist (GQuark domain,
                                gint code,
                                const gchar *format,
                                va_list args) __attribute__((__format__ (__printf__, 3, 0)));

extern
void g_error_free (GError *error);
extern
GError* g_error_copy (const GError *error);

extern
gboolean g_error_matches (const GError *error,
                                GQuark domain,
                                gint code);




extern
void g_set_error (GError **err,
                                GQuark domain,
                                gint code,
                                const gchar *format,
                                ...) __attribute__((__format__ (__printf__, 4, 5)));

extern
void g_set_error_literal (GError **err,
                                GQuark domain,
                                gint code,
                                const gchar *message);



extern
void g_propagate_error (GError **dest,
    GError *src);


extern
void g_clear_error (GError **err);


extern
void g_prefix_error (GError **err,
                                       const gchar *format,
                                       ...) __attribute__((__format__ (__printf__, 2, 3)));


extern
void g_propagate_prefixed_error (GError **dest,
                                       GError *src,
                                       const gchar *format,
                                       ...) __attribute__((__format__ (__printf__, 3, 4)));

}
# 34 "/usr/include/glib-2.0/glib/gthread.h" 2
# 1 "/usr/include/glib-2.0/glib/gutils.h" 1
# 35 "/usr/include/glib-2.0/glib/gutils.h"
extern "C" {
# 50 "/usr/include/glib-2.0/glib/gutils.h"
extern
const gchar * g_get_user_name (void);
extern
const gchar * g_get_real_name (void);
extern
const gchar * g_get_home_dir (void);
extern
const gchar * g_get_tmp_dir (void);
extern
const gchar * g_get_host_name (void);
extern
const gchar * g_get_prgname (void);
extern
void g_set_prgname (const gchar *prgname);
extern
const gchar * g_get_application_name (void);
extern
void g_set_application_name (const gchar *application_name);

extern
void g_reload_user_special_dirs_cache (void);
extern
const gchar * g_get_user_data_dir (void);
extern
const gchar * g_get_user_config_dir (void);
extern
const gchar * g_get_user_cache_dir (void);
extern
const gchar * const * g_get_system_data_dirs (void);
# 99 "/usr/include/glib-2.0/glib/gutils.h"
extern
const gchar * const * g_get_system_config_dirs (void);

extern
const gchar * g_get_user_runtime_dir (void);
# 127 "/usr/include/glib-2.0/glib/gutils.h"
typedef enum {
  G_USER_DIRECTORY_DESKTOP,
  G_USER_DIRECTORY_DOCUMENTS,
  G_USER_DIRECTORY_DOWNLOAD,
  G_USER_DIRECTORY_MUSIC,
  G_USER_DIRECTORY_PICTURES,
  G_USER_DIRECTORY_PUBLIC_SHARE,
  G_USER_DIRECTORY_TEMPLATES,
  G_USER_DIRECTORY_VIDEOS,

  G_USER_N_DIRECTORIES
} GUserDirectory;

extern
const gchar * g_get_user_special_dir (GUserDirectory directory);
# 151 "/usr/include/glib-2.0/glib/gutils.h"
typedef struct _GDebugKey GDebugKey;
struct _GDebugKey
{
  const gchar *key;
  guint value;
};



extern
guint g_parse_debug_string (const gchar *string,
         const GDebugKey *keys,
         guint nkeys);

extern
gint g_snprintf (gchar *string,
         gulong n,
         gchar const *format,
         ...) __attribute__((__format__ (__printf__, 3, 4)));
extern
gint g_vsnprintf (gchar *string,
         gulong n,
         gchar const *format,
         va_list args)
         __attribute__((__format__ (__printf__, 3, 0)));

extern
void g_nullify_pointer (gpointer *nullify_location);

typedef enum
{
  G_FORMAT_SIZE_DEFAULT = 0,
  G_FORMAT_SIZE_LONG_FORMAT = 1 << 0,
  G_FORMAT_SIZE_IEC_UNITS = 1 << 1
} GFormatSizeFlags;

extern
gchar *g_format_size_full (guint64 size,
                             GFormatSizeFlags flags);
extern
gchar *g_format_size (guint64 size);

__attribute__((__deprecated__("Use '" "g_format_size" "' instead"))) extern
gchar *g_format_size_for_display (goffset size);
# 204 "/usr/include/glib-2.0/glib/gutils.h"
typedef void (*GVoidFunc) (void);

__attribute__((__deprecated__)) extern
void g_atexit (GVoidFunc func);
# 226 "/usr/include/glib-2.0/glib/gutils.h"
extern
gchar* g_find_program_in_path (const gchar *program);
# 244 "/usr/include/glib-2.0/glib/gutils.h"
extern
gint (g_bit_nth_lsf) (gulong mask,
                                 gint nth_bit);
extern
gint (g_bit_nth_msf) (gulong mask,
                                 gint nth_bit);
extern
guint (g_bit_storage) (gulong number);

static inline gint
g_bit_nth_lsf_impl (gulong mask,
                    gint nth_bit)
{
  if ((nth_bit < -1))
    nth_bit = -1;
  while (nth_bit < ((4 * 8) - 1))
    {
      nth_bit++;
      if (mask & (1UL << nth_bit))
        return nth_bit;
    }
  return -1;
}

static inline gint
g_bit_nth_msf_impl (gulong mask,
                    gint nth_bit)
{
  if (nth_bit < 0 || (nth_bit > 4 * 8))
    nth_bit = 4 * 8;
  while (nth_bit > 0)
    {
      nth_bit--;
      if (mask & (1UL << nth_bit))
        return nth_bit;
    }
  return -1;
}

static inline guint
g_bit_storage_impl (gulong number)
{




  guint n_bits = 0;

  do
    {
      n_bits++;
      number >>= 1;
    }
  while (number);
  return n_bits;

}
# 361 "/usr/include/glib-2.0/glib/gutils.h"
}
# 35 "/usr/include/glib-2.0/glib/gthread.h" 2

extern "C" {


extern
GQuark g_thread_error_quark (void);

typedef enum
{
  G_THREAD_ERROR_AGAIN
} GThreadError;

typedef gpointer (*GThreadFunc) (gpointer data);

typedef struct _GThread GThread;

typedef union _GMutex GMutex;
typedef struct _GRecMutex GRecMutex;
typedef struct _GRWLock GRWLock;
typedef struct _GCond GCond;
typedef struct _GPrivate GPrivate;
typedef struct _GOnce GOnce;

union _GMutex
{

  gpointer p;
  guint i[2];
};

struct _GRWLock
{

  gpointer p;
  guint i[2];
};

struct _GCond
{

  gpointer p;
  guint i[2];
};

struct _GRecMutex
{

  gpointer p;
  guint i[2];
};


struct _GPrivate
{

  gpointer p;
  GDestroyNotify notify;
  gpointer future[2];
};

typedef enum
{
  G_ONCE_STATUS_NOTCALLED,
  G_ONCE_STATUS_PROGRESS,
  G_ONCE_STATUS_READY
} GOnceStatus;


struct _GOnce
{
  volatile GOnceStatus status;
  volatile gpointer retval;
};
# 140 "/usr/include/glib-2.0/glib/gthread.h"
extern
GThread * g_thread_ref (GThread *thread);
extern
void g_thread_unref (GThread *thread);
extern
GThread * g_thread_new (const gchar *name,
                                                 GThreadFunc func,
                                                 gpointer data);
extern
GThread * g_thread_try_new (const gchar *name,
                                                 GThreadFunc func,
                                                 gpointer data,
                                                 GError **error);
extern
GThread * g_thread_self (void);
extern
void g_thread_exit (gpointer retval);
extern
gpointer g_thread_join (GThread *thread);
extern
void g_thread_yield (void);


extern
void g_mutex_init (GMutex *mutex);
extern
void g_mutex_clear (GMutex *mutex);
extern
void g_mutex_lock (GMutex *mutex);
extern
gboolean g_mutex_trylock (GMutex *mutex);
extern
void g_mutex_unlock (GMutex *mutex);

extern
void g_rw_lock_init (GRWLock *rw_lock);
extern
void g_rw_lock_clear (GRWLock *rw_lock);
extern
void g_rw_lock_writer_lock (GRWLock *rw_lock);
extern
gboolean g_rw_lock_writer_trylock (GRWLock *rw_lock);
extern
void g_rw_lock_writer_unlock (GRWLock *rw_lock);
extern
void g_rw_lock_reader_lock (GRWLock *rw_lock);
extern
gboolean g_rw_lock_reader_trylock (GRWLock *rw_lock);
extern
void g_rw_lock_reader_unlock (GRWLock *rw_lock);

extern
void g_rec_mutex_init (GRecMutex *rec_mutex);
extern
void g_rec_mutex_clear (GRecMutex *rec_mutex);
extern
void g_rec_mutex_lock (GRecMutex *rec_mutex);
extern
gboolean g_rec_mutex_trylock (GRecMutex *rec_mutex);
extern
void g_rec_mutex_unlock (GRecMutex *rec_mutex);

extern
void g_cond_init (GCond *cond);
extern
void g_cond_clear (GCond *cond);
extern
void g_cond_wait (GCond *cond,
                                                 GMutex *mutex);
extern
void g_cond_signal (GCond *cond);
extern
void g_cond_broadcast (GCond *cond);
extern
gboolean g_cond_wait_until (GCond *cond,
                                                 GMutex *mutex,
                                                 gint64 end_time);

extern
gpointer g_private_get (GPrivate *key);
extern
void g_private_set (GPrivate *key,
                                                 gpointer value);
extern
void g_private_replace (GPrivate *key,
                                                 gpointer value);

extern
gpointer g_once_impl (GOnce *once,
                                                 GThreadFunc func,
                                                 gpointer arg);
extern
gboolean g_once_init_enter (volatile void *location);
extern
void g_once_init_leave (volatile void *location,
                                                 gsize result);
# 267 "/usr/include/glib-2.0/glib/gthread.h"
extern
guint g_get_num_processors (void);







typedef void GMutexLocker;
# 318 "/usr/include/glib-2.0/glib/gthread.h"
static inline GMutexLocker *
g_mutex_locker_new (GMutex *mutex)
{
  g_mutex_lock (mutex);
  return (GMutexLocker *) mutex;
}
# 333 "/usr/include/glib-2.0/glib/gthread.h"
static inline void
g_mutex_locker_free (GMutexLocker *locker)
{
  g_mutex_unlock ((GMutex *) locker);
}

}
# 33 "/usr/include/glib-2.0/glib/gasyncqueue.h" 2

extern "C" {

typedef struct _GAsyncQueue GAsyncQueue;

extern
GAsyncQueue *g_async_queue_new (void);
extern
GAsyncQueue *g_async_queue_new_full (GDestroyNotify item_free_func);
extern
void g_async_queue_lock (GAsyncQueue *queue);
extern
void g_async_queue_unlock (GAsyncQueue *queue);
extern
GAsyncQueue *g_async_queue_ref (GAsyncQueue *queue);
extern
void g_async_queue_unref (GAsyncQueue *queue);

__attribute__((__deprecated__("Use '" "g_async_queue_ref" "' instead"))) extern
void g_async_queue_ref_unlocked (GAsyncQueue *queue);

__attribute__((__deprecated__("Use '" "g_async_queue_unref" "' instead"))) extern
void g_async_queue_unref_and_unlock (GAsyncQueue *queue);

extern
void g_async_queue_push (GAsyncQueue *queue,
                                                 gpointer data);
extern
void g_async_queue_push_unlocked (GAsyncQueue *queue,
                                                 gpointer data);
extern
void g_async_queue_push_sorted (GAsyncQueue *queue,
                                                 gpointer data,
                                                 GCompareDataFunc func,
                                                 gpointer user_data);
extern
void g_async_queue_push_sorted_unlocked (GAsyncQueue *queue,
                                                 gpointer data,
                                                 GCompareDataFunc func,
                                                 gpointer user_data);
extern
gpointer g_async_queue_pop (GAsyncQueue *queue);
extern
gpointer g_async_queue_pop_unlocked (GAsyncQueue *queue);
extern
gpointer g_async_queue_try_pop (GAsyncQueue *queue);
extern
gpointer g_async_queue_try_pop_unlocked (GAsyncQueue *queue);
extern
gpointer g_async_queue_timeout_pop (GAsyncQueue *queue,
                                                 guint64 timeout);
extern
gpointer g_async_queue_timeout_pop_unlocked (GAsyncQueue *queue,
                                                 guint64 timeout);
extern
gint g_async_queue_length (GAsyncQueue *queue);
extern
gint g_async_queue_length_unlocked (GAsyncQueue *queue);
extern
void g_async_queue_sort (GAsyncQueue *queue,
                                                 GCompareDataFunc func,
                                                 gpointer user_data);
extern
void g_async_queue_sort_unlocked (GAsyncQueue *queue,
                                                 GCompareDataFunc func,
                                                 gpointer user_data);

extern
gboolean g_async_queue_remove (GAsyncQueue *queue,
                                                 gpointer item);
extern
gboolean g_async_queue_remove_unlocked (GAsyncQueue *queue,
                                                 gpointer item);
extern
void g_async_queue_push_front (GAsyncQueue *queue,
                                                 gpointer item);
extern
void g_async_queue_push_front_unlocked (GAsyncQueue *queue,
                                                 gpointer item);

__attribute__((__deprecated__("Use '" "g_async_queue_timeout_pop" "' instead"))) extern
gpointer g_async_queue_timed_pop (GAsyncQueue *queue,
                                                 GTimeVal *end_time);
__attribute__((__deprecated__("Use '" "g_async_queue_timeout_pop_unlocked" "' instead"))) extern
gpointer g_async_queue_timed_pop_unlocked (GAsyncQueue *queue,
                                                 GTimeVal *end_time);

}
# 33 "/usr/include/glib-2.0/glib.h" 2

# 1 "/usr/include/glib-2.0/glib/gbacktrace.h" 1
# 33 "/usr/include/glib-2.0/glib/gbacktrace.h"
# 1 "/usr/include/signal.h" 1 3 4
# 30 "/usr/include/signal.h" 3 4

# 30 "/usr/include/signal.h" 3 4
extern "C" {

# 1 "/usr/include/arm-linux-gnueabihf/bits/sigset.h" 1 3 4
# 102 "/usr/include/arm-linux-gnueabihf/bits/sigset.h" 3 4
extern int __sigismember (const __sigset_t *, int);
extern int __sigaddset (__sigset_t *, int);
extern int __sigdelset (__sigset_t *, int);
# 33 "/usr/include/signal.h" 2 3 4







typedef __sig_atomic_t sig_atomic_t;

# 57 "/usr/include/signal.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/signum.h" 1 3 4
# 58 "/usr/include/signal.h" 2 3 4
# 80 "/usr/include/signal.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/siginfo.h" 1 3 4
# 24 "/usr/include/arm-linux-gnueabihf/bits/siginfo.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/wordsize.h" 1 3 4
# 25 "/usr/include/arm-linux-gnueabihf/bits/siginfo.h" 2 3 4







typedef union sigval
  {
    int sival_int;
    void *sival_ptr;
  } sigval_t;
# 50 "/usr/include/arm-linux-gnueabihf/bits/siginfo.h" 3 4
typedef struct
  {
    int si_signo;
    int si_errno;

    int si_code;

    union
      {
 int _pad[((128 / sizeof (int)) - 3)];


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
   } _kill;


 struct
   {
     int si_tid;
     int si_overrun;
     sigval_t si_sigval;
   } _timer;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     sigval_t si_sigval;
   } _rt;


 struct
   {
     __pid_t si_pid;
     __uid_t si_uid;
     int si_status;
     __clock_t si_utime;
     __clock_t si_stime;
   } _sigchld;


 struct
   {
     void *si_addr;
     short int si_addr_lsb;
   } _sigfault;


 struct
   {
     long int si_band;
     int si_fd;
   } _sigpoll;


 struct
   {
     void *_call_addr;
     int _syscall;
     unsigned int _arch;
   } _sigsys;
      } _sifields;
  } siginfo_t;
# 141 "/usr/include/arm-linux-gnueabihf/bits/siginfo.h" 3 4
enum
{
  SI_ASYNCNL = -60,

  SI_TKILL = -6,

  SI_SIGIO,

  SI_ASYNCIO,

  SI_MESGQ,

  SI_TIMER,

  SI_QUEUE,

  SI_USER,

  SI_KERNEL = 0x80

};




enum
{
  ILL_ILLOPC = 1,

  ILL_ILLOPN,

  ILL_ILLADR,

  ILL_ILLTRP,

  ILL_PRVOPC,

  ILL_PRVREG,

  ILL_COPROC,

  ILL_BADSTK

};


enum
{
  FPE_INTDIV = 1,

  FPE_INTOVF,

  FPE_FLTDIV,

  FPE_FLTOVF,

  FPE_FLTUND,

  FPE_FLTRES,

  FPE_FLTINV,

  FPE_FLTSUB

};


enum
{
  SEGV_MAPERR = 1,

  SEGV_ACCERR

};


enum
{
  BUS_ADRALN = 1,

  BUS_ADRERR,

  BUS_OBJERR,

  BUS_MCEERR_AR,

  BUS_MCEERR_AO

};




enum
{
  TRAP_BRKPT = 1,

  TRAP_TRACE

};




enum
{
  CLD_EXITED = 1,

  CLD_KILLED,

  CLD_DUMPED,

  CLD_TRAPPED,

  CLD_STOPPED,

  CLD_CONTINUED

};


enum
{
  POLL_IN = 1,

  POLL_OUT,

  POLL_MSG,

  POLL_ERR,

  POLL_PRI,

  POLL_HUP

};
# 301 "/usr/include/arm-linux-gnueabihf/bits/siginfo.h" 3 4
typedef struct sigevent
  {
    sigval_t sigev_value;
    int sigev_signo;
    int sigev_notify;

    union
      {
 int _pad[((64 / sizeof (int)) - 3)];



 __pid_t _tid;

 struct
   {
     void (*_function) (sigval_t);
     pthread_attr_t *_attribute;
   } _sigev_thread;
      } _sigev_un;
  } sigevent_t;






enum
{
  SIGEV_SIGNAL = 0,

  SIGEV_NONE,

  SIGEV_THREAD,


  SIGEV_THREAD_ID = 4

};
# 81 "/usr/include/signal.h" 2 3 4




typedef void (*__sighandler_t) (int);




extern __sighandler_t __sysv_signal (int __sig, __sighandler_t __handler)
     throw ();

extern __sighandler_t sysv_signal (int __sig, __sighandler_t __handler)
     throw ();







extern __sighandler_t signal (int __sig, __sighandler_t __handler)
     throw ();
# 114 "/usr/include/signal.h" 3 4





extern __sighandler_t bsd_signal (int __sig, __sighandler_t __handler)
     throw ();






extern int kill (__pid_t __pid, int __sig) throw ();






extern int killpg (__pid_t __pgrp, int __sig) throw ();




extern int raise (int __sig) throw ();




extern __sighandler_t ssignal (int __sig, __sighandler_t __handler)
     throw ();
extern int gsignal (int __sig) throw ();




extern void psignal (int __sig, const char *__s);


extern void psiginfo (const siginfo_t *__pinfo, const char *__s);
# 168 "/usr/include/signal.h" 3 4
extern int sigpause (int __sig) __asm__ ("__xpg_sigpause");
# 187 "/usr/include/signal.h" 3 4
extern int sigblock (int __mask) throw () __attribute__ ((__deprecated__));


extern int sigsetmask (int __mask) throw () __attribute__ ((__deprecated__));


extern int siggetmask (void) throw () __attribute__ ((__deprecated__));
# 202 "/usr/include/signal.h" 3 4
typedef __sighandler_t sighandler_t;




typedef __sighandler_t sig_t;





extern int sigemptyset (sigset_t *__set) throw () __attribute__ ((__nonnull__ (1)));


extern int sigfillset (sigset_t *__set) throw () __attribute__ ((__nonnull__ (1)));


extern int sigaddset (sigset_t *__set, int __signo) throw () __attribute__ ((__nonnull__ (1)));


extern int sigdelset (sigset_t *__set, int __signo) throw () __attribute__ ((__nonnull__ (1)));


extern int sigismember (const sigset_t *__set, int __signo)
     throw () __attribute__ ((__nonnull__ (1)));



extern int sigisemptyset (const sigset_t *__set) throw () __attribute__ ((__nonnull__ (1)));


extern int sigandset (sigset_t *__set, const sigset_t *__left,
        const sigset_t *__right) throw () __attribute__ ((__nonnull__ (1, 2, 3)));


extern int sigorset (sigset_t *__set, const sigset_t *__left,
       const sigset_t *__right) throw () __attribute__ ((__nonnull__ (1, 2, 3)));




# 1 "/usr/include/arm-linux-gnueabihf/bits/sigaction.h" 1 3 4
# 24 "/usr/include/arm-linux-gnueabihf/bits/sigaction.h" 3 4
struct sigaction
  {


    union
      {

 __sighandler_t sa_handler;

 void (*sa_sigaction) (int, siginfo_t *, void *);
      }
    __sigaction_handler;







    __sigset_t sa_mask;


    int sa_flags;


    void (*sa_restorer) (void);
  };
# 244 "/usr/include/signal.h" 2 3 4


extern int sigprocmask (int __how, const sigset_t *__restrict __set,
   sigset_t *__restrict __oset) throw ();






extern int sigsuspend (const sigset_t *__set) __attribute__ ((__nonnull__ (1)));


extern int sigaction (int __sig, const struct sigaction *__restrict __act,
        struct sigaction *__restrict __oact) throw ();


extern int sigpending (sigset_t *__set) throw () __attribute__ ((__nonnull__ (1)));






extern int sigwait (const sigset_t *__restrict __set, int *__restrict __sig)
     __attribute__ ((__nonnull__ (1, 2)));






extern int sigwaitinfo (const sigset_t *__restrict __set,
   siginfo_t *__restrict __info) __attribute__ ((__nonnull__ (1)));






extern int sigtimedwait (const sigset_t *__restrict __set,
    siginfo_t *__restrict __info,
    const struct timespec *__restrict __timeout)
     __attribute__ ((__nonnull__ (1)));



extern int sigqueue (__pid_t __pid, int __sig, const union sigval __val)
     throw ();
# 301 "/usr/include/signal.h" 3 4
extern const char *const _sys_siglist[65];
extern const char *const sys_siglist[65];



# 1 "/usr/include/arm-linux-gnueabihf/bits/sigcontext.h" 1 3 4
# 27 "/usr/include/arm-linux-gnueabihf/bits/sigcontext.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/asm/sigcontext.h" 1 3 4
# 9 "/usr/include/arm-linux-gnueabihf/asm/sigcontext.h" 3 4
struct sigcontext {
 unsigned long trap_no;
 unsigned long error_code;
 unsigned long oldmask;
 unsigned long arm_r0;
 unsigned long arm_r1;
 unsigned long arm_r2;
 unsigned long arm_r3;
 unsigned long arm_r4;
 unsigned long arm_r5;
 unsigned long arm_r6;
 unsigned long arm_r7;
 unsigned long arm_r8;
 unsigned long arm_r9;
 unsigned long arm_r10;
 unsigned long arm_fp;
 unsigned long arm_ip;
 unsigned long arm_sp;
 unsigned long arm_lr;
 unsigned long arm_pc;
 unsigned long arm_cpsr;
 unsigned long fault_address;
};
# 28 "/usr/include/arm-linux-gnueabihf/bits/sigcontext.h" 2 3 4



# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 32 "/usr/include/arm-linux-gnueabihf/bits/sigcontext.h" 2 3 4
# 307 "/usr/include/signal.h" 2 3 4


extern int sigreturn (struct sigcontext *__scp) throw ();






# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 317 "/usr/include/signal.h" 2 3 4




extern int siginterrupt (int __sig, int __interrupt) throw ();

# 1 "/usr/include/arm-linux-gnueabihf/bits/sigstack.h" 1 3 4
# 25 "/usr/include/arm-linux-gnueabihf/bits/sigstack.h" 3 4
struct sigstack
  {
    void *ss_sp;
    int ss_onstack;
  };



enum
{
  SS_ONSTACK = 1,

  SS_DISABLE

};
# 49 "/usr/include/arm-linux-gnueabihf/bits/sigstack.h" 3 4
typedef struct sigaltstack
  {
    void *ss_sp;
    int ss_flags;
    size_t ss_size;
  } stack_t;
# 324 "/usr/include/signal.h" 2 3 4


# 1 "/usr/include/arm-linux-gnueabihf/sys/ucontext.h" 1 3 4
# 24 "/usr/include/arm-linux-gnueabihf/sys/ucontext.h" 3 4
# 1 "/usr/include/signal.h" 1 3 4
# 25 "/usr/include/arm-linux-gnueabihf/sys/ucontext.h" 2 3 4



# 1 "/usr/include/arm-linux-gnueabihf/bits/sigcontext.h" 1 3 4
# 29 "/usr/include/arm-linux-gnueabihf/sys/ucontext.h" 2 3 4

typedef int greg_t;





typedef greg_t gregset_t[18];


enum
{
  REG_R0 = 0,

  REG_R1 = 1,

  REG_R2 = 2,

  REG_R3 = 3,

  REG_R4 = 4,

  REG_R5 = 5,

  REG_R6 = 6,

  REG_R7 = 7,

  REG_R8 = 8,

  REG_R9 = 9,

  REG_R10 = 10,

  REG_R11 = 11,

  REG_R12 = 12,

  REG_R13 = 13,

  REG_R14 = 14,

  REG_R15 = 15

};

struct _libc_fpstate
{
  struct
  {
    unsigned int sign1:1;
    unsigned int unused:15;
    unsigned int sign2:1;
    unsigned int exponent:14;
    unsigned int j:1;
    unsigned int mantissa1:31;
    unsigned int mantissa0:32;
  } fpregs[8];
  unsigned int fpsr:32;
  unsigned int fpcr:32;
  unsigned char ftype[8];
  unsigned int init_flag;
};

typedef struct _libc_fpstate fpregset_t;





typedef struct sigcontext mcontext_t;


typedef struct ucontext
  {
    unsigned long uc_flags;
    struct ucontext *uc_link;
    stack_t uc_stack;
    mcontext_t uc_mcontext;
    __sigset_t uc_sigmask;
    unsigned long uc_regspace[128] __attribute__((__aligned__(8)));
  } ucontext_t;
# 327 "/usr/include/signal.h" 2 3 4





extern int sigstack (struct sigstack *__ss, struct sigstack *__oss)
     throw () __attribute__ ((__deprecated__));



extern int sigaltstack (const struct sigaltstack *__restrict __ss,
   struct sigaltstack *__restrict __oss) throw ();







extern int sighold (int __sig) throw ();


extern int sigrelse (int __sig) throw ();


extern int sigignore (int __sig) throw ();


extern __sighandler_t sigset (int __sig, __sighandler_t __disp) throw ();






# 1 "/usr/include/arm-linux-gnueabihf/bits/sigthread.h" 1 3 4
# 30 "/usr/include/arm-linux-gnueabihf/bits/sigthread.h" 3 4
extern int pthread_sigmask (int __how,
       const __sigset_t *__restrict __newmask,
       __sigset_t *__restrict __oldmask)throw ();


extern int pthread_kill (pthread_t __threadid, int __signo) throw ();



extern int pthread_sigqueue (pthread_t __threadid, int __signo,
        const union sigval __value) throw ();
# 363 "/usr/include/signal.h" 2 3 4






extern int __libc_current_sigrtmin (void) throw ();

extern int __libc_current_sigrtmax (void) throw ();



}
# 34 "/usr/include/glib-2.0/glib/gbacktrace.h" 2


# 35 "/usr/include/glib-2.0/glib/gbacktrace.h"
extern "C" {

extern
void g_on_error_query (const gchar *prg_name);
extern
void g_on_error_stack_trace (const gchar *prg_name);
# 64 "/usr/include/glib-2.0/glib/gbacktrace.h"
}
# 35 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gbase64.h" 1
# 28 "/usr/include/glib-2.0/glib/gbase64.h"
extern "C" {

extern
gsize g_base64_encode_step (const guchar *in,
                                 gsize len,
                                 gboolean break_lines,
                                 gchar *out,
                                 gint *state,
                                 gint *save);
extern
gsize g_base64_encode_close (gboolean break_lines,
                                 gchar *out,
                                 gint *state,
                                 gint *save);
extern
gchar* g_base64_encode (const guchar *data,
                                 gsize len) __attribute__((__malloc__));
extern
gsize g_base64_decode_step (const gchar *in,
                                 gsize len,
                                 guchar *out,
                                 gint *state,
                                 guint *save);
extern
guchar *g_base64_decode (const gchar *text,
                                 gsize *out_len) __attribute__((__malloc__));
extern
guchar *g_base64_decode_inplace (gchar *text,
                                 gsize *out_len);


}
# 36 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gbitlock.h" 1
# 30 "/usr/include/glib-2.0/glib/gbitlock.h"
extern "C" {

extern
void g_bit_lock (volatile gint *address,
                                           gint lock_bit);
extern
gboolean g_bit_trylock (volatile gint *address,
                                           gint lock_bit);
extern
void g_bit_unlock (volatile gint *address,
                                           gint lock_bit);

extern
void g_pointer_bit_lock (volatile void *address,
                                           gint lock_bit);
extern
gboolean g_pointer_bit_trylock (volatile void *address,
                                           gint lock_bit);
extern
void g_pointer_bit_unlock (volatile void *address,
                                           gint lock_bit);
# 74 "/usr/include/glib-2.0/glib/gbitlock.h"
}
# 37 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gbookmarkfile.h" 1
# 30 "/usr/include/glib-2.0/glib/gbookmarkfile.h"
extern "C" {
# 57 "/usr/include/glib-2.0/glib/gbookmarkfile.h"
typedef enum
{
  G_BOOKMARK_FILE_ERROR_INVALID_URI,
  G_BOOKMARK_FILE_ERROR_INVALID_VALUE,
  G_BOOKMARK_FILE_ERROR_APP_NOT_REGISTERED,
  G_BOOKMARK_FILE_ERROR_URI_NOT_FOUND,
  G_BOOKMARK_FILE_ERROR_READ,
  G_BOOKMARK_FILE_ERROR_UNKNOWN_ENCODING,
  G_BOOKMARK_FILE_ERROR_WRITE,
  G_BOOKMARK_FILE_ERROR_FILE_NOT_FOUND
} GBookmarkFileError;

extern
GQuark g_bookmark_file_error_quark (void);







typedef struct _GBookmarkFile GBookmarkFile;

extern
GBookmarkFile *g_bookmark_file_new (void);
extern
void g_bookmark_file_free (GBookmarkFile *bookmark);

extern
gboolean g_bookmark_file_load_from_file (GBookmarkFile *bookmark,
          const gchar *filename,
          GError **error);
extern
gboolean g_bookmark_file_load_from_data (GBookmarkFile *bookmark,
          const gchar *data,
          gsize length,
          GError **error);
extern
gboolean g_bookmark_file_load_from_data_dirs (GBookmarkFile *bookmark,
          const gchar *file,
          gchar **full_path,
          GError **error);
extern
gchar * g_bookmark_file_to_data (GBookmarkFile *bookmark,
          gsize *length,
          GError **error) __attribute__((__malloc__));
extern
gboolean g_bookmark_file_to_file (GBookmarkFile *bookmark,
          const gchar *filename,
          GError **error);

extern
void g_bookmark_file_set_title (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *title);
extern
gchar * g_bookmark_file_get_title (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error) __attribute__((__malloc__));
extern
void g_bookmark_file_set_description (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *description);
extern
gchar * g_bookmark_file_get_description (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error) __attribute__((__malloc__));
extern
void g_bookmark_file_set_mime_type (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *mime_type);
extern
gchar * g_bookmark_file_get_mime_type (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error) __attribute__((__malloc__));
extern
void g_bookmark_file_set_groups (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar **groups,
          gsize length);
extern
void g_bookmark_file_add_group (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *group);
extern
gboolean g_bookmark_file_has_group (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *group,
          GError **error);
extern
gchar ** g_bookmark_file_get_groups (GBookmarkFile *bookmark,
          const gchar *uri,
          gsize *length,
          GError **error) __attribute__((__malloc__));
extern
void g_bookmark_file_add_application (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          const gchar *exec);
extern
gboolean g_bookmark_file_has_application (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          GError **error);
extern
gchar ** g_bookmark_file_get_applications (GBookmarkFile *bookmark,
          const gchar *uri,
          gsize *length,
          GError **error) __attribute__((__malloc__));
extern
gboolean g_bookmark_file_set_app_info (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          const gchar *exec,
          gint count,
          time_t stamp,
          GError **error);
extern
gboolean g_bookmark_file_get_app_info (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          gchar **exec,
          guint *count,
          time_t *stamp,
          GError **error);
extern
void g_bookmark_file_set_is_private (GBookmarkFile *bookmark,
          const gchar *uri,
          gboolean is_private);
extern
gboolean g_bookmark_file_get_is_private (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
extern
void g_bookmark_file_set_icon (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *href,
          const gchar *mime_type);
extern
gboolean g_bookmark_file_get_icon (GBookmarkFile *bookmark,
          const gchar *uri,
          gchar **href,
          gchar **mime_type,
          GError **error);
extern
void g_bookmark_file_set_added (GBookmarkFile *bookmark,
          const gchar *uri,
          time_t added);
extern
time_t g_bookmark_file_get_added (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
extern
void g_bookmark_file_set_modified (GBookmarkFile *bookmark,
          const gchar *uri,
          time_t modified);
extern
time_t g_bookmark_file_get_modified (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
extern
void g_bookmark_file_set_visited (GBookmarkFile *bookmark,
          const gchar *uri,
          time_t visited);
extern
time_t g_bookmark_file_get_visited (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
extern
gboolean g_bookmark_file_has_item (GBookmarkFile *bookmark,
          const gchar *uri);
extern
gint g_bookmark_file_get_size (GBookmarkFile *bookmark);
extern
gchar ** g_bookmark_file_get_uris (GBookmarkFile *bookmark,
          gsize *length) __attribute__((__malloc__));
extern
gboolean g_bookmark_file_remove_group (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *group,
          GError **error);
extern
gboolean g_bookmark_file_remove_application (GBookmarkFile *bookmark,
          const gchar *uri,
          const gchar *name,
          GError **error);
extern
gboolean g_bookmark_file_remove_item (GBookmarkFile *bookmark,
          const gchar *uri,
          GError **error);
extern
gboolean g_bookmark_file_move_item (GBookmarkFile *bookmark,
          const gchar *old_uri,
          const gchar *new_uri,
          GError **error);

}
# 38 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gbytes.h" 1
# 32 "/usr/include/glib-2.0/glib/gbytes.h"
extern "C" {

extern
GBytes * g_bytes_new (gconstpointer data,
                                                 gsize size);

extern
GBytes * g_bytes_new_take (gpointer data,
                                                 gsize size);

extern
GBytes * g_bytes_new_static (gconstpointer data,
                                                 gsize size);

extern
GBytes * g_bytes_new_with_free_func (gconstpointer data,
                                                 gsize size,
                                                 GDestroyNotify free_func,
                                                 gpointer user_data);

extern
GBytes * g_bytes_new_from_bytes (GBytes *bytes,
                                                 gsize offset,
                                                 gsize length);

extern
gconstpointer g_bytes_get_data (GBytes *bytes,
                                                 gsize *size);

extern
gsize g_bytes_get_size (GBytes *bytes);

extern
GBytes * g_bytes_ref (GBytes *bytes);

extern
void g_bytes_unref (GBytes *bytes);

extern
gpointer g_bytes_unref_to_data (GBytes *bytes,
                                                 gsize *size);

extern
GByteArray * g_bytes_unref_to_array (GBytes *bytes);

extern
guint g_bytes_hash (gconstpointer bytes);

extern
gboolean g_bytes_equal (gconstpointer bytes1,
                                                 gconstpointer bytes2);

extern
gint g_bytes_compare (gconstpointer bytes1,
                                                 gconstpointer bytes2);

}
# 39 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gcharset.h" 1
# 29 "/usr/include/glib-2.0/glib/gcharset.h"
extern "C" {

extern
gboolean g_get_charset (const char **charset);
extern
gchar * g_get_codeset (void);

extern
const gchar * const * g_get_language_names (void);
extern
gchar ** g_get_locale_variants (const gchar *locale);

}
# 40 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gchecksum.h" 1
# 29 "/usr/include/glib-2.0/glib/gchecksum.h"
extern "C" {
# 46 "/usr/include/glib-2.0/glib/gchecksum.h"
typedef enum {
  G_CHECKSUM_MD5,
  G_CHECKSUM_SHA1,
  G_CHECKSUM_SHA256,
  G_CHECKSUM_SHA512
} GChecksumType;
# 62 "/usr/include/glib-2.0/glib/gchecksum.h"
typedef struct _GChecksum GChecksum;

extern
gssize g_checksum_type_get_length (GChecksumType checksum_type);

extern
GChecksum * g_checksum_new (GChecksumType checksum_type);
extern
void g_checksum_reset (GChecksum *checksum);
extern
GChecksum * g_checksum_copy (const GChecksum *checksum);
extern
void g_checksum_free (GChecksum *checksum);
extern
void g_checksum_update (GChecksum *checksum,
                                                     const guchar *data,
                                                     gssize length);
extern
const gchar * g_checksum_get_string (GChecksum *checksum);
extern
void g_checksum_get_digest (GChecksum *checksum,
                                                     guint8 *buffer,
                                                     gsize *digest_len);

extern
gchar *g_compute_checksum_for_data (GChecksumType checksum_type,
                                                     const guchar *data,
                                                     gsize length);
extern
gchar *g_compute_checksum_for_string (GChecksumType checksum_type,
                                                     const gchar *str,
                                                     gssize length);

extern
gchar *g_compute_checksum_for_bytes (GChecksumType checksum_type,
                                                     GBytes *data);

}
# 41 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gconvert.h" 1
# 34 "/usr/include/glib-2.0/glib/gconvert.h"
extern "C" {
# 49 "/usr/include/glib-2.0/glib/gconvert.h"
typedef enum
{
  G_CONVERT_ERROR_NO_CONVERSION,
  G_CONVERT_ERROR_ILLEGAL_SEQUENCE,
  G_CONVERT_ERROR_FAILED,
  G_CONVERT_ERROR_PARTIAL_INPUT,
  G_CONVERT_ERROR_BAD_URI,
  G_CONVERT_ERROR_NOT_ABSOLUTE_PATH,
  G_CONVERT_ERROR_NO_MEMORY
} GConvertError;
# 68 "/usr/include/glib-2.0/glib/gconvert.h"
extern
GQuark g_convert_error_quark (void);







typedef struct _GIConv *GIConv;

extern
GIConv g_iconv_open (const gchar *to_codeset,
         const gchar *from_codeset);
extern
gsize g_iconv (GIConv converter,
         gchar **inbuf,
         gsize *inbytes_left,
         gchar **outbuf,
         gsize *outbytes_left);
extern
gint g_iconv_close (GIConv converter);


extern
gchar* g_convert (const gchar *str,
    gssize len,
    const gchar *to_codeset,
    const gchar *from_codeset,
    gsize *bytes_read,
    gsize *bytes_written,
    GError **error) __attribute__((__malloc__));
extern
gchar* g_convert_with_iconv (const gchar *str,
    gssize len,
    GIConv converter,
    gsize *bytes_read,
    gsize *bytes_written,
    GError **error) __attribute__((__malloc__));
extern
gchar* g_convert_with_fallback (const gchar *str,
    gssize len,
    const gchar *to_codeset,
    const gchar *from_codeset,
    const gchar *fallback,
    gsize *bytes_read,
    gsize *bytes_written,
    GError **error) __attribute__((__malloc__));




extern
gchar* g_locale_to_utf8 (const gchar *opsysstring,
      gssize len,
      gsize *bytes_read,
      gsize *bytes_written,
      GError **error) __attribute__((__malloc__));
extern
gchar* g_locale_from_utf8 (const gchar *utf8string,
      gssize len,
      gsize *bytes_read,
      gsize *bytes_written,
      GError **error) __attribute__((__malloc__));




extern
gchar* g_filename_to_utf8 (const gchar *opsysstring,
        gssize len,
        gsize *bytes_read,
        gsize *bytes_written,
        GError **error) __attribute__((__malloc__));
extern
gchar* g_filename_from_utf8 (const gchar *utf8string,
        gssize len,
        gsize *bytes_read,
        gsize *bytes_written,
        GError **error) __attribute__((__malloc__));

extern
gchar *g_filename_from_uri (const gchar *uri,
       gchar **hostname,
       GError **error) __attribute__((__malloc__));

extern
gchar *g_filename_to_uri (const gchar *filename,
       const gchar *hostname,
       GError **error) __attribute__((__malloc__));
extern
gchar *g_filename_display_name (const gchar *filename) __attribute__((__malloc__));
extern
gboolean g_get_filename_charsets (const gchar ***charsets);

extern
gchar *g_filename_display_basename (const gchar *filename) __attribute__((__malloc__));

extern
gchar **g_uri_list_extract_uris (const gchar *uri_list) __attribute__((__malloc__));
# 199 "/usr/include/glib-2.0/glib/gconvert.h"
}
# 42 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gdataset.h" 1
# 34 "/usr/include/glib-2.0/glib/gdataset.h"
extern "C" {

typedef struct _GData GData;

typedef void (*GDataForeachFunc) (GQuark key_id,
                                                 gpointer data,
                                                 gpointer user_data);



extern
void g_datalist_init (GData **datalist);
extern
void g_datalist_clear (GData **datalist);
extern
gpointer g_datalist_id_get_data (GData **datalist,
      GQuark key_id);
extern
void g_datalist_id_set_data_full (GData **datalist,
      GQuark key_id,
      gpointer data,
      GDestroyNotify destroy_func);

typedef gpointer (*GDuplicateFunc) (gpointer data, gpointer user_data);

extern
gpointer g_datalist_id_dup_data (GData **datalist,
                                         GQuark key_id,
                                         GDuplicateFunc dup_func,
      gpointer user_data);
extern
gboolean g_datalist_id_replace_data (GData **datalist,
                                         GQuark key_id,
                                         gpointer oldval,
                                         gpointer newval,
                                         GDestroyNotify destroy,
      GDestroyNotify *old_destroy);

extern
gpointer g_datalist_id_remove_no_notify (GData **datalist,
      GQuark key_id);
extern
void g_datalist_foreach (GData **datalist,
      GDataForeachFunc func,
      gpointer user_data);
# 89 "/usr/include/glib-2.0/glib/gdataset.h"
extern
void g_datalist_set_flags (GData **datalist,
      guint flags);
extern
void g_datalist_unset_flags (GData **datalist,
      guint flags);
extern
guint g_datalist_get_flags (GData **datalist);
# 113 "/usr/include/glib-2.0/glib/gdataset.h"
extern
void g_dataset_destroy (gconstpointer dataset_location);
extern
gpointer g_dataset_id_get_data (gconstpointer dataset_location,
                                         GQuark key_id);
extern
gpointer g_datalist_get_data (GData **datalist,
       const gchar *key);
extern
void g_dataset_id_set_data_full (gconstpointer dataset_location,
                                         GQuark key_id,
                                         gpointer data,
                                         GDestroyNotify destroy_func);
extern
gpointer g_dataset_id_remove_no_notify (gconstpointer dataset_location,
                                         GQuark key_id);
extern
void g_dataset_foreach (gconstpointer dataset_location,
                                         GDataForeachFunc func,
                                         gpointer user_data);
# 148 "/usr/include/glib-2.0/glib/gdataset.h"
}
# 43 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gdate.h" 1
# 37 "/usr/include/glib-2.0/glib/gdate.h"
extern "C" {
# 48 "/usr/include/glib-2.0/glib/gdate.h"
typedef gint32 GTime;
typedef guint16 GDateYear;
typedef guint8 GDateDay;
typedef struct _GDate GDate;


typedef enum
{
  G_DATE_DAY = 0,
  G_DATE_MONTH = 1,
  G_DATE_YEAR = 2
} GDateDMY;


typedef enum
{
  G_DATE_BAD_WEEKDAY = 0,
  G_DATE_MONDAY = 1,
  G_DATE_TUESDAY = 2,
  G_DATE_WEDNESDAY = 3,
  G_DATE_THURSDAY = 4,
  G_DATE_FRIDAY = 5,
  G_DATE_SATURDAY = 6,
  G_DATE_SUNDAY = 7
} GDateWeekday;
typedef enum
{
  G_DATE_BAD_MONTH = 0,
  G_DATE_JANUARY = 1,
  G_DATE_FEBRUARY = 2,
  G_DATE_MARCH = 3,
  G_DATE_APRIL = 4,
  G_DATE_MAY = 5,
  G_DATE_JUNE = 6,
  G_DATE_JULY = 7,
  G_DATE_AUGUST = 8,
  G_DATE_SEPTEMBER = 9,
  G_DATE_OCTOBER = 10,
  G_DATE_NOVEMBER = 11,
  G_DATE_DECEMBER = 12
} GDateMonth;
# 99 "/usr/include/glib-2.0/glib/gdate.h"
struct _GDate
{
  guint julian_days : 32;





  guint julian : 1;
  guint dmy : 1;


  guint day : 6;
  guint month : 4;
  guint year : 16;
};





extern
GDate* g_date_new (void);
extern
GDate* g_date_new_dmy (GDateDay day,
                                           GDateMonth month,
                                           GDateYear year);
extern
GDate* g_date_new_julian (guint32 julian_day);
extern
void g_date_free (GDate *date);






extern
gboolean g_date_valid (const GDate *date);
extern
gboolean g_date_valid_day (GDateDay day) __attribute__((__const__));
extern
gboolean g_date_valid_month (GDateMonth month) __attribute__((__const__));
extern
gboolean g_date_valid_year (GDateYear year) __attribute__((__const__));
extern
gboolean g_date_valid_weekday (GDateWeekday weekday) __attribute__((__const__));
extern
gboolean g_date_valid_julian (guint32 julian_date) __attribute__((__const__));
extern
gboolean g_date_valid_dmy (GDateDay day,
                                           GDateMonth month,
                                           GDateYear year) __attribute__((__const__));

extern
GDateWeekday g_date_get_weekday (const GDate *date);
extern
GDateMonth g_date_get_month (const GDate *date);
extern
GDateYear g_date_get_year (const GDate *date);
extern
GDateDay g_date_get_day (const GDate *date);
extern
guint32 g_date_get_julian (const GDate *date);
extern
guint g_date_get_day_of_year (const GDate *date);






extern
guint g_date_get_monday_week_of_year (const GDate *date);
extern
guint g_date_get_sunday_week_of_year (const GDate *date);
extern
guint g_date_get_iso8601_week_of_year (const GDate *date);





extern
void g_date_clear (GDate *date,
                                           guint n_dates);





extern
void g_date_set_parse (GDate *date,
                                           const gchar *str);
extern
void g_date_set_time_t (GDate *date,
        time_t timet);
extern
void g_date_set_time_val (GDate *date,
        GTimeVal *timeval);

__attribute__((__deprecated__("Use '" "g_date_set_time_t" "' instead"))) extern
void g_date_set_time (GDate *date,
                                           GTime time_);

extern
void g_date_set_month (GDate *date,
                                           GDateMonth month);
extern
void g_date_set_day (GDate *date,
                                           GDateDay day);
extern
void g_date_set_year (GDate *date,
                                           GDateYear year);
extern
void g_date_set_dmy (GDate *date,
                                           GDateDay day,
                                           GDateMonth month,
                                           GDateYear y);
extern
void g_date_set_julian (GDate *date,
                                           guint32 julian_date);
extern
gboolean g_date_is_first_of_month (const GDate *date);
extern
gboolean g_date_is_last_of_month (const GDate *date);


extern
void g_date_add_days (GDate *date,
                                           guint n_days);
extern
void g_date_subtract_days (GDate *date,
                                           guint n_days);


extern
void g_date_add_months (GDate *date,
                                           guint n_months);
extern
void g_date_subtract_months (GDate *date,
                                           guint n_months);


extern
void g_date_add_years (GDate *date,
                                           guint n_years);
extern
void g_date_subtract_years (GDate *date,
                                           guint n_years);
extern
gboolean g_date_is_leap_year (GDateYear year) __attribute__((__const__));
extern
guint8 g_date_get_days_in_month (GDateMonth month,
                                           GDateYear year) __attribute__((__const__));
extern
guint8 g_date_get_monday_weeks_in_year (GDateYear year) __attribute__((__const__));
extern
guint8 g_date_get_sunday_weeks_in_year (GDateYear year) __attribute__((__const__));



extern
gint g_date_days_between (const GDate *date1,
        const GDate *date2);


extern
gint g_date_compare (const GDate *lhs,
                                           const GDate *rhs);
extern
void g_date_to_struct_tm (const GDate *date,
                                           struct tm *tm);

extern
void g_date_clamp (GDate *date,
        const GDate *min_date,
        const GDate *max_date);


extern
void g_date_order (GDate *date1, GDate *date2);




extern
gsize g_date_strftime (gchar *s,
                                           gsize slen,
                                           const gchar *format,
                                           const GDate *date);
# 307 "/usr/include/glib-2.0/glib/gdate.h"
}
# 44 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gdatetime.h" 1
# 33 "/usr/include/glib-2.0/glib/gdatetime.h"
# 1 "/usr/include/glib-2.0/glib/gtimezone.h" 1
# 29 "/usr/include/glib-2.0/glib/gtimezone.h"
extern "C" {

typedef struct _GTimeZone GTimeZone;
# 48 "/usr/include/glib-2.0/glib/gtimezone.h"
typedef enum
{
  G_TIME_TYPE_STANDARD,
  G_TIME_TYPE_DAYLIGHT,
  G_TIME_TYPE_UNIVERSAL
} GTimeType;

extern
GTimeZone * g_time_zone_new (const gchar *identifier);
extern
GTimeZone * g_time_zone_new_utc (void);
extern
GTimeZone * g_time_zone_new_local (void);

extern
GTimeZone * g_time_zone_ref (GTimeZone *tz);
extern
void g_time_zone_unref (GTimeZone *tz);

extern
gint g_time_zone_find_interval (GTimeZone *tz,
                                                                         GTimeType type,
                                                                         gint64 time_);

extern
gint g_time_zone_adjust_time (GTimeZone *tz,
                                                                         GTimeType type,
                                                                         gint64 *time_);

extern
const gchar * g_time_zone_get_abbreviation (GTimeZone *tz,
                                                                         gint interval);
extern
gint32 g_time_zone_get_offset (GTimeZone *tz,
                                                                         gint interval);
extern
gboolean g_time_zone_is_dst (GTimeZone *tz,
                                                                         gint interval);

}
# 34 "/usr/include/glib-2.0/glib/gdatetime.h" 2

extern "C" {
# 89 "/usr/include/glib-2.0/glib/gdatetime.h"
typedef gint64 GTimeSpan;
# 99 "/usr/include/glib-2.0/glib/gdatetime.h"
typedef struct _GDateTime GDateTime;

extern
void g_date_time_unref (GDateTime *datetime);
extern
GDateTime * g_date_time_ref (GDateTime *datetime);

extern
GDateTime * g_date_time_new_now (GTimeZone *tz);
extern
GDateTime * g_date_time_new_now_local (void);
extern
GDateTime * g_date_time_new_now_utc (void);

extern
GDateTime * g_date_time_new_from_unix_local (gint64 t);
extern
GDateTime * g_date_time_new_from_unix_utc (gint64 t);

extern
GDateTime * g_date_time_new_from_timeval_local (const GTimeVal *tv);
extern
GDateTime * g_date_time_new_from_timeval_utc (const GTimeVal *tv);

extern
GDateTime * g_date_time_new (GTimeZone *tz,
                                                                         gint year,
                                                                         gint month,
                                                                         gint day,
                                                                         gint hour,
                                                                         gint minute,
                                                                         gdouble seconds);
extern
GDateTime * g_date_time_new_local (gint year,
                                                                         gint month,
                                                                         gint day,
                                                                         gint hour,
                                                                         gint minute,
                                                                         gdouble seconds);
extern
GDateTime * g_date_time_new_utc (gint year,
                                                                         gint month,
                                                                         gint day,
                                                                         gint hour,
                                                                         gint minute,
                                                                         gdouble seconds);

extern
__attribute__((warn_unused_result))
GDateTime * g_date_time_add (GDateTime *datetime,
                                                                         GTimeSpan timespan);

extern
__attribute__((warn_unused_result))
GDateTime * g_date_time_add_years (GDateTime *datetime,
                                                                         gint years);
extern
__attribute__((warn_unused_result))
GDateTime * g_date_time_add_months (GDateTime *datetime,
                                                                         gint months);
extern
__attribute__((warn_unused_result))
GDateTime * g_date_time_add_weeks (GDateTime *datetime,
                                                                         gint weeks);
extern
__attribute__((warn_unused_result))
GDateTime * g_date_time_add_days (GDateTime *datetime,
                                                                         gint days);

extern
__attribute__((warn_unused_result))
GDateTime * g_date_time_add_hours (GDateTime *datetime,
                                                                         gint hours);
extern
__attribute__((warn_unused_result))
GDateTime * g_date_time_add_minutes (GDateTime *datetime,
                                                                         gint minutes);
extern
__attribute__((warn_unused_result))
GDateTime * g_date_time_add_seconds (GDateTime *datetime,
                                                                         gdouble seconds);

extern
__attribute__((warn_unused_result))
GDateTime * g_date_time_add_full (GDateTime *datetime,
                                                                         gint years,
                                                                         gint months,
                                                                         gint days,
                                                                         gint hours,
                                                                         gint minutes,
                                                                         gdouble seconds);

extern
gint g_date_time_compare (gconstpointer dt1,
                                                                         gconstpointer dt2);
extern
GTimeSpan g_date_time_difference (GDateTime *end,
                                                                         GDateTime *begin);
extern
guint g_date_time_hash (gconstpointer datetime);
extern
gboolean g_date_time_equal (gconstpointer dt1,
                                                                         gconstpointer dt2);

extern
void g_date_time_get_ymd (GDateTime *datetime,
                                                                         gint *year,
                                                                         gint *month,
                                                                         gint *day);

extern
gint g_date_time_get_year (GDateTime *datetime);
extern
gint g_date_time_get_month (GDateTime *datetime);
extern
gint g_date_time_get_day_of_month (GDateTime *datetime);

extern
gint g_date_time_get_week_numbering_year (GDateTime *datetime);
extern
gint g_date_time_get_week_of_year (GDateTime *datetime);
extern
gint g_date_time_get_day_of_week (GDateTime *datetime);

extern
gint g_date_time_get_day_of_year (GDateTime *datetime);

extern
gint g_date_time_get_hour (GDateTime *datetime);
extern
gint g_date_time_get_minute (GDateTime *datetime);
extern
gint g_date_time_get_second (GDateTime *datetime);
extern
gint g_date_time_get_microsecond (GDateTime *datetime);
extern
gdouble g_date_time_get_seconds (GDateTime *datetime);

extern
gint64 g_date_time_to_unix (GDateTime *datetime);
extern
gboolean g_date_time_to_timeval (GDateTime *datetime,
                                                                         GTimeVal *tv);

extern
GTimeSpan g_date_time_get_utc_offset (GDateTime *datetime);
extern
const gchar * g_date_time_get_timezone_abbreviation (GDateTime *datetime);
extern
gboolean g_date_time_is_daylight_savings (GDateTime *datetime);

extern
GDateTime * g_date_time_to_timezone (GDateTime *datetime,
                                                                         GTimeZone *tz);
extern
GDateTime * g_date_time_to_local (GDateTime *datetime);
extern
GDateTime * g_date_time_to_utc (GDateTime *datetime);

extern
gchar * g_date_time_format (GDateTime *datetime,
                                                                         const gchar *format) __attribute__((__malloc__));

}
# 45 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gdir.h" 1
# 32 "/usr/include/glib-2.0/glib/gdir.h"
# 1 "/usr/include/dirent.h" 1 3 4
# 27 "/usr/include/dirent.h" 3 4

# 27 "/usr/include/dirent.h" 3 4
extern "C" {
# 61 "/usr/include/dirent.h" 3 4
# 1 "/usr/include/arm-linux-gnueabihf/bits/dirent.h" 1 3 4
# 22 "/usr/include/arm-linux-gnueabihf/bits/dirent.h" 3 4
struct dirent
  {

    __ino_t d_ino;
    __off_t d_off;




    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };


struct dirent64
  {
    __ino64_t d_ino;
    __off64_t d_off;
    unsigned short int d_reclen;
    unsigned char d_type;
    char d_name[256];
  };
# 62 "/usr/include/dirent.h" 2 3 4
# 97 "/usr/include/dirent.h" 3 4
enum
  {
    DT_UNKNOWN = 0,

    DT_FIFO = 1,

    DT_CHR = 2,

    DT_DIR = 4,

    DT_BLK = 6,

    DT_REG = 8,

    DT_LNK = 10,

    DT_SOCK = 12,

    DT_WHT = 14

  };
# 127 "/usr/include/dirent.h" 3 4
typedef struct __dirstream DIR;






extern DIR *opendir (const char *__name) __attribute__ ((__nonnull__ (1)));






extern DIR *fdopendir (int __fd);







extern int closedir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 162 "/usr/include/dirent.h" 3 4
extern struct dirent *readdir (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 173 "/usr/include/dirent.h" 3 4
extern struct dirent64 *readdir64 (DIR *__dirp) __attribute__ ((__nonnull__ (1)));
# 183 "/usr/include/dirent.h" 3 4
extern int readdir_r (DIR *__restrict __dirp,
        struct dirent *__restrict __entry,
        struct dirent **__restrict __result)
     __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__deprecated__));
# 201 "/usr/include/dirent.h" 3 4
extern int readdir64_r (DIR *__restrict __dirp,
   struct dirent64 *__restrict __entry,
   struct dirent64 **__restrict __result)
  __attribute__ ((__nonnull__ (1, 2, 3))) __attribute__ ((__deprecated__));




extern void rewinddir (DIR *__dirp) throw () __attribute__ ((__nonnull__ (1)));





extern void seekdir (DIR *__dirp, long int __pos) throw () __attribute__ ((__nonnull__ (1)));


extern long int telldir (DIR *__dirp) throw () __attribute__ ((__nonnull__ (1)));





extern int dirfd (DIR *__dirp) throw () __attribute__ ((__nonnull__ (1)));
# 245 "/usr/include/dirent.h" 3 4
# 1 "/usr/lib/gcc/arm-linux-gnueabihf/6/include/stddef.h" 1 3 4
# 246 "/usr/include/dirent.h" 2 3 4
# 255 "/usr/include/dirent.h" 3 4
extern int scandir (const char *__restrict __dir,
      struct dirent ***__restrict __namelist,
      int (*__selector) (const struct dirent *),
      int (*__cmp) (const struct dirent **,
      const struct dirent **))
     __attribute__ ((__nonnull__ (1, 2)));
# 278 "/usr/include/dirent.h" 3 4
extern int scandir64 (const char *__restrict __dir,
        struct dirent64 ***__restrict __namelist,
        int (*__selector) (const struct dirent64 *),
        int (*__cmp) (const struct dirent64 **,
        const struct dirent64 **))
     __attribute__ ((__nonnull__ (1, 2)));
# 293 "/usr/include/dirent.h" 3 4
extern int scandirat (int __dfd, const char *__restrict __dir,
        struct dirent ***__restrict __namelist,
        int (*__selector) (const struct dirent *),
        int (*__cmp) (const struct dirent **,
        const struct dirent **))
     __attribute__ ((__nonnull__ (2, 3)));
# 315 "/usr/include/dirent.h" 3 4
extern int scandirat64 (int __dfd, const char *__restrict __dir,
   struct dirent64 ***__restrict __namelist,
   int (*__selector) (const struct dirent64 *),
   int (*__cmp) (const struct dirent64 **,
          const struct dirent64 **))
     __attribute__ ((__nonnull__ (2, 3)));




extern int alphasort (const struct dirent **__e1,
        const struct dirent **__e2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 340 "/usr/include/dirent.h" 3 4
extern int alphasort64 (const struct dirent64 **__e1,
   const struct dirent64 **__e2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 353 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries (int __fd, char *__restrict __buf,
    size_t __nbytes,
    __off_t *__restrict __basep)
     throw () __attribute__ ((__nonnull__ (2, 4)));
# 370 "/usr/include/dirent.h" 3 4
extern __ssize_t getdirentries64 (int __fd, char *__restrict __buf,
      size_t __nbytes,
      __off64_t *__restrict __basep)
     throw () __attribute__ ((__nonnull__ (2, 4)));






extern int versionsort (const struct dirent **__e1,
   const struct dirent **__e2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));
# 396 "/usr/include/dirent.h" 3 4
extern int versionsort64 (const struct dirent64 **__e1,
     const struct dirent64 **__e2)
     throw () __attribute__ ((__pure__)) __attribute__ ((__nonnull__ (1, 2)));



}
# 33 "/usr/include/glib-2.0/glib/gdir.h" 2



# 35 "/usr/include/glib-2.0/glib/gdir.h"
extern "C" {

typedef struct _GDir GDir;

extern
GDir * g_dir_open (const gchar *path,
            guint flags,
            GError **error);
extern
const gchar * g_dir_read_name (GDir *dir);
extern
void g_dir_rewind (GDir *dir);
extern
void g_dir_close (GDir *dir);
# 64 "/usr/include/glib-2.0/glib/gdir.h"
}
# 46 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/genviron.h" 1
# 34 "/usr/include/glib-2.0/glib/genviron.h"
extern "C" {

extern
const gchar * g_getenv (const gchar *variable);
extern
gboolean g_setenv (const gchar *variable,
                                  const gchar *value,
                                  gboolean overwrite);
extern
void g_unsetenv (const gchar *variable);
extern
gchar ** g_listenv (void);

extern
gchar ** g_get_environ (void);
extern
const gchar * g_environ_getenv (gchar **envp,
                                  const gchar *variable);
extern
gchar ** g_environ_setenv (gchar **envp,
                                  const gchar *variable,
                                  const gchar *value,
                                  gboolean overwrite) __attribute__((warn_unused_result));
extern
gchar ** g_environ_unsetenv (gchar **envp,
                                  const gchar *variable) __attribute__((warn_unused_result));
# 77 "/usr/include/glib-2.0/glib/genviron.h"
}
# 47 "/usr/include/glib-2.0/glib.h" 2

# 1 "/usr/include/glib-2.0/glib/gfileutils.h" 1
# 29 "/usr/include/glib-2.0/glib/gfileutils.h"
extern "C" {



typedef enum
{
  G_FILE_ERROR_EXIST,
  G_FILE_ERROR_ISDIR,
  G_FILE_ERROR_ACCES,
  G_FILE_ERROR_NAMETOOLONG,
  G_FILE_ERROR_NOENT,
  G_FILE_ERROR_NOTDIR,
  G_FILE_ERROR_NXIO,
  G_FILE_ERROR_NODEV,
  G_FILE_ERROR_ROFS,
  G_FILE_ERROR_TXTBSY,
  G_FILE_ERROR_FAULT,
  G_FILE_ERROR_LOOP,
  G_FILE_ERROR_NOSPC,
  G_FILE_ERROR_NOMEM,
  G_FILE_ERROR_MFILE,
  G_FILE_ERROR_NFILE,
  G_FILE_ERROR_BADF,
  G_FILE_ERROR_INVAL,
  G_FILE_ERROR_PIPE,
  G_FILE_ERROR_AGAIN,
  G_FILE_ERROR_INTR,
  G_FILE_ERROR_IO,
  G_FILE_ERROR_PERM,
  G_FILE_ERROR_NOSYS,
  G_FILE_ERROR_FAILED
} GFileError;





typedef enum
{
  G_FILE_TEST_IS_REGULAR = 1 << 0,
  G_FILE_TEST_IS_SYMLINK = 1 << 1,
  G_FILE_TEST_IS_DIR = 1 << 2,
  G_FILE_TEST_IS_EXECUTABLE = 1 << 3,
  G_FILE_TEST_EXISTS = 1 << 4
} GFileTest;

extern
GQuark g_file_error_quark (void);

extern
GFileError g_file_error_from_errno (gint err_no);

extern
gboolean g_file_test (const gchar *filename,
                              GFileTest test);
extern
gboolean g_file_get_contents (const gchar *filename,
                              gchar **contents,
                              gsize *length,
                              GError **error);
extern
gboolean g_file_set_contents (const gchar *filename,
                              const gchar *contents,
                              gssize length,
                              GError **error);
extern
gchar *g_file_read_link (const gchar *filename,
                              GError **error);


extern
gchar *g_mkdtemp (gchar *tmpl);
extern
gchar *g_mkdtemp_full (gchar *tmpl,
                               gint mode);


extern
gint g_mkstemp (gchar *tmpl);
extern
gint g_mkstemp_full (gchar *tmpl,
                               gint flags,
                               gint mode);


extern
gint g_file_open_tmp (const gchar *tmpl,
                               gchar **name_used,
                               GError **error);
extern
gchar *g_dir_make_tmp (const gchar *tmpl,
                               GError **error);

extern
gchar *g_build_path (const gchar *separator,
                               const gchar *first_element,
                               ...) __attribute__((__malloc__)) __attribute__((__sentinel__));
extern
gchar *g_build_pathv (const gchar *separator,
                               gchar **args) __attribute__((__malloc__));

extern
gchar *g_build_filename (const gchar *first_element,
                               ...) __attribute__((__malloc__)) __attribute__((__sentinel__));
extern
gchar *g_build_filenamev (gchar **args) __attribute__((__malloc__));

extern
gint g_mkdir_with_parents (const gchar *pathname,
                               gint mode);
# 162 "/usr/include/glib-2.0/glib/gfileutils.h"
extern
gboolean g_path_is_absolute (const gchar *file_name);
extern
const gchar *g_path_skip_root (const gchar *file_name);

__attribute__((__deprecated__("Use '" "g_path_get_basename" "' instead"))) extern
const gchar *g_basename (const gchar *file_name);




extern
gchar *g_get_current_dir (void);
extern
gchar *g_path_get_basename (const gchar *file_name) __attribute__((__malloc__));
extern
gchar *g_path_get_dirname (const gchar *file_name) __attribute__((__malloc__));
# 207 "/usr/include/glib-2.0/glib/gfileutils.h"
}
# 49 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/ggettext.h" 1
# 34 "/usr/include/glib-2.0/glib/ggettext.h"
extern "C" {

extern
const gchar *g_strip_context (const gchar *msgid,
                              const gchar *msgval) __attribute__((__format_arg__ (1)));

extern
const gchar *g_dgettext (const gchar *domain,
                              const gchar *msgid) __attribute__((__format_arg__ (2)));
extern
const gchar *g_dcgettext (const gchar *domain,
                              const gchar *msgid,
                              gint category) __attribute__((__format_arg__ (2)));
extern
const gchar *g_dngettext (const gchar *domain,
                              const gchar *msgid,
                              const gchar *msgid_plural,
                              gulong n) __attribute__((__format_arg__ (3)));
extern
const gchar *g_dpgettext (const gchar *domain,
                              const gchar *msgctxtid,
                              gsize msgidoffset) __attribute__((__format_arg__ (2)));
extern
const gchar *g_dpgettext2 (const gchar *domain,
                              const gchar *context,
                              const gchar *msgid) __attribute__((__format_arg__ (3)));

}
# 50 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/ghash.h" 1
# 33 "/usr/include/glib-2.0/glib/ghash.h"
# 1 "/usr/include/glib-2.0/glib/glist.h" 1
# 32 "/usr/include/glib-2.0/glib/glist.h"
# 1 "/usr/include/glib-2.0/glib/gmem.h" 1
# 34 "/usr/include/glib-2.0/glib/gmem.h"
extern "C" {
# 51 "/usr/include/glib-2.0/glib/gmem.h"
typedef struct _GMemVTable GMemVTable;
# 70 "/usr/include/glib-2.0/glib/gmem.h"
extern
void g_free (gpointer mem);

extern
void g_clear_pointer (gpointer *pp,
                           GDestroyNotify destroy);

extern
gpointer g_malloc (gsize n_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
extern
gpointer g_malloc0 (gsize n_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
extern
gpointer g_realloc (gpointer mem,
      gsize n_bytes) __attribute__((warn_unused_result));
extern
gpointer g_try_malloc (gsize n_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
extern
gpointer g_try_malloc0 (gsize n_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
extern
gpointer g_try_realloc (gpointer mem,
      gsize n_bytes) __attribute__((warn_unused_result));

extern
gpointer g_malloc_n (gsize n_blocks,
      gsize n_block_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2)));
extern
gpointer g_malloc0_n (gsize n_blocks,
      gsize n_block_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2)));
extern
gpointer g_realloc_n (gpointer mem,
      gsize n_blocks,
      gsize n_block_bytes) __attribute__((warn_unused_result));
extern
gpointer g_try_malloc_n (gsize n_blocks,
      gsize n_block_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2)));
extern
gpointer g_try_malloc0_n (gsize n_blocks,
      gsize n_block_bytes) __attribute__((__malloc__)) __attribute__((__alloc_size__(1,2)));
extern
gpointer g_try_realloc_n (gpointer mem,
      gsize n_blocks,
      gsize n_block_bytes) __attribute__((warn_unused_result));
# 185 "/usr/include/glib-2.0/glib/gmem.h"
static inline gpointer
g_steal_pointer (gpointer pp)
{
  gpointer *ptr = (gpointer *) pp;
  gpointer ref;

  ref = *ptr;
  *ptr = 
# 192 "/usr/include/glib-2.0/glib/gmem.h" 3 4
        __null
# 192 "/usr/include/glib-2.0/glib/gmem.h"
            ;

  return ref;
}
# 344 "/usr/include/glib-2.0/glib/gmem.h"
struct _GMemVTable {
  gpointer (*malloc) (gsize n_bytes);
  gpointer (*realloc) (gpointer mem,
      gsize n_bytes);
  void (*free) (gpointer mem);

  gpointer (*calloc) (gsize n_blocks,
      gsize n_block_bytes);
  gpointer (*try_malloc) (gsize n_bytes);
  gpointer (*try_realloc) (gpointer mem,
      gsize n_bytes);
};
__attribute__((__deprecated__)) extern
void g_mem_set_vtable (GMemVTable *vtable);
__attribute__((__deprecated__)) extern
gboolean g_mem_is_system_malloc (void);

extern gboolean g_mem_gc_friendly;



extern GMemVTable *glib_mem_profiler_table;
__attribute__((__deprecated__)) extern
void g_mem_profile (void);

}
# 33 "/usr/include/glib-2.0/glib/glist.h" 2
# 1 "/usr/include/glib-2.0/glib/gnode.h" 1
# 34 "/usr/include/glib-2.0/glib/gnode.h"
extern "C" {

typedef struct _GNode GNode;


typedef enum
{
  G_TRAVERSE_LEAVES = 1 << 0,
  G_TRAVERSE_NON_LEAVES = 1 << 1,
  G_TRAVERSE_ALL = G_TRAVERSE_LEAVES | G_TRAVERSE_NON_LEAVES,
  G_TRAVERSE_MASK = 0x03,
  G_TRAVERSE_LEAFS = G_TRAVERSE_LEAVES,
  G_TRAVERSE_NON_LEAFS = G_TRAVERSE_NON_LEAVES
} GTraverseFlags;


typedef enum
{
  G_IN_ORDER,
  G_PRE_ORDER,
  G_POST_ORDER,
  G_LEVEL_ORDER
} GTraverseType;

typedef gboolean (*GNodeTraverseFunc) (GNode *node,
       gpointer data);
typedef void (*GNodeForeachFunc) (GNode *node,
       gpointer data);
# 75 "/usr/include/glib-2.0/glib/gnode.h"
typedef gpointer (*GCopyFunc) (gconstpointer src,
                                                 gpointer data);



struct _GNode
{
  gpointer data;
  GNode *next;
  GNode *prev;
  GNode *parent;
  GNode *children;
};
# 113 "/usr/include/glib-2.0/glib/gnode.h"
extern
GNode* g_node_new (gpointer data);
extern
void g_node_destroy (GNode *root);
extern
void g_node_unlink (GNode *node);
extern
GNode* g_node_copy_deep (GNode *node,
     GCopyFunc copy_func,
     gpointer data);
extern
GNode* g_node_copy (GNode *node);
extern
GNode* g_node_insert (GNode *parent,
     gint position,
     GNode *node);
extern
GNode* g_node_insert_before (GNode *parent,
     GNode *sibling,
     GNode *node);
extern
GNode* g_node_insert_after (GNode *parent,
     GNode *sibling,
     GNode *node);
extern
GNode* g_node_prepend (GNode *parent,
     GNode *node);
extern
guint g_node_n_nodes (GNode *root,
     GTraverseFlags flags);
extern
GNode* g_node_get_root (GNode *node);
extern
gboolean g_node_is_ancestor (GNode *node,
     GNode *descendant);
extern
guint g_node_depth (GNode *node);
extern
GNode* g_node_find (GNode *root,
     GTraverseType order,
     GTraverseFlags flags,
     gpointer data);
# 238 "/usr/include/glib-2.0/glib/gnode.h"
extern
void g_node_traverse (GNode *root,
     GTraverseType order,
     GTraverseFlags flags,
     gint max_depth,
     GNodeTraverseFunc func,
     gpointer data);






extern
guint g_node_max_height (GNode *root);

extern
void g_node_children_foreach (GNode *node,
      GTraverseFlags flags,
      GNodeForeachFunc func,
      gpointer data);
extern
void g_node_reverse_children (GNode *node);
extern
guint g_node_n_children (GNode *node);
extern
GNode* g_node_nth_child (GNode *node,
      guint n);
extern
GNode* g_node_last_child (GNode *node);
extern
GNode* g_node_find_child (GNode *node,
      GTraverseFlags flags,
      gpointer data);
extern
gint g_node_child_position (GNode *node,
      GNode *child);
extern
gint g_node_child_index (GNode *node,
      gpointer data);

extern
GNode* g_node_first_sibling (GNode *node);
extern
GNode* g_node_last_sibling (GNode *node);
# 320 "/usr/include/glib-2.0/glib/gnode.h"
}
# 34 "/usr/include/glib-2.0/glib/glist.h" 2

extern "C" {

typedef struct _GList GList;

struct _GList
{
  gpointer data;
  GList *next;
  GList *prev;
};



extern
GList* g_list_alloc (void) __attribute__((warn_unused_result));
extern
void g_list_free (GList *list);
extern
void g_list_free_1 (GList *list);

extern
void g_list_free_full (GList *list,
      GDestroyNotify free_func);
extern
GList* g_list_append (GList *list,
      gpointer data) __attribute__((warn_unused_result));
extern
GList* g_list_prepend (GList *list,
      gpointer data) __attribute__((warn_unused_result));
extern
GList* g_list_insert (GList *list,
      gpointer data,
      gint position) __attribute__((warn_unused_result));
extern
GList* g_list_insert_sorted (GList *list,
      gpointer data,
      GCompareFunc func) __attribute__((warn_unused_result));
extern
GList* g_list_insert_sorted_with_data (GList *list,
      gpointer data,
      GCompareDataFunc func,
      gpointer user_data) __attribute__((warn_unused_result));
extern
GList* g_list_insert_before (GList *list,
      GList *sibling,
      gpointer data) __attribute__((warn_unused_result));
extern
GList* g_list_concat (GList *list1,
      GList *list2) __attribute__((warn_unused_result));
extern
GList* g_list_remove (GList *list,
      gconstpointer data) __attribute__((warn_unused_result));
extern
GList* g_list_remove_all (GList *list,
      gconstpointer data) __attribute__((warn_unused_result));
extern
GList* g_list_remove_link (GList *list,
      GList *llink) __attribute__((warn_unused_result));
extern
GList* g_list_delete_link (GList *list,
      GList *link_) __attribute__((warn_unused_result));
extern
GList* g_list_reverse (GList *list) __attribute__((warn_unused_result));
extern
GList* g_list_copy (GList *list) __attribute__((warn_unused_result));

extern
GList* g_list_copy_deep (GList *list,
      GCopyFunc func,
      gpointer user_data) __attribute__((warn_unused_result));

extern
GList* g_list_nth (GList *list,
      guint n);
extern
GList* g_list_nth_prev (GList *list,
      guint n);
extern
GList* g_list_find (GList *list,
      gconstpointer data);
extern
GList* g_list_find_custom (GList *list,
      gconstpointer data,
      GCompareFunc func);
extern
gint g_list_position (GList *list,
      GList *llink);
extern
gint g_list_index (GList *list,
      gconstpointer data);
extern
GList* g_list_last (GList *list);
extern
GList* g_list_first (GList *list);
extern
guint g_list_length (GList *list);
extern
void g_list_foreach (GList *list,
      GFunc func,
      gpointer user_data);
extern
GList* g_list_sort (GList *list,
      GCompareFunc compare_func) __attribute__((warn_unused_result));
extern
GList* g_list_sort_with_data (GList *list,
      GCompareDataFunc compare_func,
      gpointer user_data) __attribute__((warn_unused_result));
extern
gpointer g_list_nth_data (GList *list,
      guint n);





}
# 34 "/usr/include/glib-2.0/glib/ghash.h" 2

extern "C" {

typedef struct _GHashTable GHashTable;

typedef gboolean (*GHRFunc) (gpointer key,
                               gpointer value,
                               gpointer user_data);

typedef struct _GHashTableIter GHashTableIter;

struct _GHashTableIter
{

  gpointer dummy1;
  gpointer dummy2;
  gpointer dummy3;
  int dummy4;
  gboolean dummy5;
  gpointer dummy6;
};

extern
GHashTable* g_hash_table_new (GHashFunc hash_func,
                                            GEqualFunc key_equal_func);
extern
GHashTable* g_hash_table_new_full (GHashFunc hash_func,
                                            GEqualFunc key_equal_func,
                                            GDestroyNotify key_destroy_func,
                                            GDestroyNotify value_destroy_func);
extern
void g_hash_table_destroy (GHashTable *hash_table);
extern
gboolean g_hash_table_insert (GHashTable *hash_table,
                                            gpointer key,
                                            gpointer value);
extern
gboolean g_hash_table_replace (GHashTable *hash_table,
                                            gpointer key,
                                            gpointer value);
extern
gboolean g_hash_table_add (GHashTable *hash_table,
                                            gpointer key);
extern
gboolean g_hash_table_remove (GHashTable *hash_table,
                                            gconstpointer key);
extern
void g_hash_table_remove_all (GHashTable *hash_table);
extern
gboolean g_hash_table_steal (GHashTable *hash_table,
                                            gconstpointer key);
extern
void g_hash_table_steal_all (GHashTable *hash_table);
extern
gpointer g_hash_table_lookup (GHashTable *hash_table,
                                            gconstpointer key);
extern
gboolean g_hash_table_contains (GHashTable *hash_table,
                                            gconstpointer key);
extern
gboolean g_hash_table_lookup_extended (GHashTable *hash_table,
                                            gconstpointer lookup_key,
                                            gpointer *orig_key,
                                            gpointer *value);
extern
void g_hash_table_foreach (GHashTable *hash_table,
                                            GHFunc func,
                                            gpointer user_data);
extern
gpointer g_hash_table_find (GHashTable *hash_table,
                                            GHRFunc predicate,
                                            gpointer user_data);
extern
guint g_hash_table_foreach_remove (GHashTable *hash_table,
                                            GHRFunc func,
                                            gpointer user_data);
extern
guint g_hash_table_foreach_steal (GHashTable *hash_table,
                                            GHRFunc func,
                                            gpointer user_data);
extern
guint g_hash_table_size (GHashTable *hash_table);
extern
GList * g_hash_table_get_keys (GHashTable *hash_table);
extern
GList * g_hash_table_get_values (GHashTable *hash_table);
extern
gpointer * g_hash_table_get_keys_as_array (GHashTable *hash_table,
                                            guint *length);

extern
void g_hash_table_iter_init (GHashTableIter *iter,
                                            GHashTable *hash_table);
extern
gboolean g_hash_table_iter_next (GHashTableIter *iter,
                                            gpointer *key,
                                            gpointer *value);
extern
GHashTable* g_hash_table_iter_get_hash_table (GHashTableIter *iter);
extern
void g_hash_table_iter_remove (GHashTableIter *iter);
extern
void g_hash_table_iter_replace (GHashTableIter *iter,
                                            gpointer value);
extern
void g_hash_table_iter_steal (GHashTableIter *iter);

extern
GHashTable* g_hash_table_ref (GHashTable *hash_table);
extern
void g_hash_table_unref (GHashTable *hash_table);
# 153 "/usr/include/glib-2.0/glib/ghash.h"
extern
gboolean g_str_equal (gconstpointer v1,
                         gconstpointer v2);
extern
guint g_str_hash (gconstpointer v);

extern
gboolean g_int_equal (gconstpointer v1,
                         gconstpointer v2);
extern
guint g_int_hash (gconstpointer v);

extern
gboolean g_int64_equal (gconstpointer v1,
                         gconstpointer v2);
extern
guint g_int64_hash (gconstpointer v);

extern
gboolean g_double_equal (gconstpointer v1,
                         gconstpointer v2);
extern
guint g_double_hash (gconstpointer v);

extern
guint g_direct_hash (gconstpointer v) __attribute__((__const__));
extern
gboolean g_direct_equal (gconstpointer v1,
                         gconstpointer v2) __attribute__((__const__));

}
# 51 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/ghmac.h" 1
# 27 "/usr/include/glib-2.0/glib/ghmac.h"
# 1 "/usr/include/glib-2.0/glib/gchecksum.h" 1
# 28 "/usr/include/glib-2.0/glib/ghmac.h" 2

extern "C" {
# 40 "/usr/include/glib-2.0/glib/ghmac.h"
typedef struct _GHmac GHmac;

extern
GHmac * g_hmac_new (GChecksumType digest_type,
                                                     const guchar *key,
                                                     gsize key_len);
extern
GHmac * g_hmac_copy (const GHmac *hmac);
extern
GHmac * g_hmac_ref (GHmac *hmac);
extern
void g_hmac_unref (GHmac *hmac);
extern
void g_hmac_update (GHmac *hmac,
                                                     const guchar *data,
                                                     gssize length);
extern
const gchar * g_hmac_get_string (GHmac *hmac);
extern
void g_hmac_get_digest (GHmac *hmac,
                                                     guint8 *buffer,
                                                     gsize *digest_len);

extern
gchar *g_compute_hmac_for_data (GChecksumType digest_type,
                                                     const guchar *key,
                                                     gsize key_len,
                                                     const guchar *data,
                                                     gsize length);
extern
gchar *g_compute_hmac_for_string (GChecksumType digest_type,
                                                     const guchar *key,
                                                     gsize key_len,
                                                     const gchar *str,
                                                     gssize length);
extern
gchar *g_compute_hmac_for_bytes (GChecksumType digest_type,
                                                     GBytes *key,
                                                     GBytes *data);


}
# 52 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/ghook.h" 1
# 34 "/usr/include/glib-2.0/glib/ghook.h"
extern "C" {



typedef struct _GHook GHook;
typedef struct _GHookList GHookList;

typedef gint (*GHookCompareFunc) (GHook *new_hook,
       GHook *sibling);
typedef gboolean (*GHookFindFunc) (GHook *hook,
       gpointer data);
typedef void (*GHookMarshaller) (GHook *hook,
       gpointer marshal_data);
typedef gboolean (*GHookCheckMarshaller) (GHook *hook,
       gpointer marshal_data);
typedef void (*GHookFunc) (gpointer data);
typedef gboolean (*GHookCheckFunc) (gpointer data);
typedef void (*GHookFinalizeFunc) (GHookList *hook_list,
       GHook *hook);
typedef enum
{
  G_HOOK_FLAG_ACTIVE = 1 << 0,
  G_HOOK_FLAG_IN_CALL = 1 << 1,
  G_HOOK_FLAG_MASK = 0x0f
} GHookFlagMask;




struct _GHookList
{
  gulong seq_id;
  guint hook_size : 16;
  guint is_setup : 1;
  GHook *hooks;
  gpointer dummy3;
  GHookFinalizeFunc finalize_hook;
  gpointer dummy[2];
};
struct _GHook
{
  gpointer data;
  GHook *next;
  GHook *prev;
  guint ref_count;
  gulong hook_id;
  guint flags;
  gpointer func;
  GDestroyNotify destroy;
};
# 104 "/usr/include/glib-2.0/glib/ghook.h"
extern
void g_hook_list_init (GHookList *hook_list,
      guint hook_size);
extern
void g_hook_list_clear (GHookList *hook_list);
extern
GHook* g_hook_alloc (GHookList *hook_list);
extern
void g_hook_free (GHookList *hook_list,
      GHook *hook);
extern
GHook * g_hook_ref (GHookList *hook_list,
      GHook *hook);
extern
void g_hook_unref (GHookList *hook_list,
      GHook *hook);
extern
gboolean g_hook_destroy (GHookList *hook_list,
      gulong hook_id);
extern
void g_hook_destroy_link (GHookList *hook_list,
      GHook *hook);
extern
void g_hook_prepend (GHookList *hook_list,
      GHook *hook);
extern
void g_hook_insert_before (GHookList *hook_list,
      GHook *sibling,
      GHook *hook);
extern
void g_hook_insert_sorted (GHookList *hook_list,
      GHook *hook,
      GHookCompareFunc func);
extern
GHook* g_hook_get (GHookList *hook_list,
      gulong hook_id);
extern
GHook* g_hook_find (GHookList *hook_list,
      gboolean need_valids,
      GHookFindFunc func,
      gpointer data);
extern
GHook* g_hook_find_data (GHookList *hook_list,
      gboolean need_valids,
      gpointer data);
extern
GHook* g_hook_find_func (GHookList *hook_list,
      gboolean need_valids,
      gpointer func);
extern
GHook* g_hook_find_func_data (GHookList *hook_list,
      gboolean need_valids,
      gpointer func,
      gpointer data);

extern
GHook* g_hook_first_valid (GHookList *hook_list,
      gboolean may_be_in_call);



extern
GHook* g_hook_next_valid (GHookList *hook_list,
      GHook *hook,
      gboolean may_be_in_call);

extern
gint g_hook_compare_ids (GHook *new_hook,
      GHook *sibling);





extern
void g_hook_list_invoke (GHookList *hook_list,
      gboolean may_recurse);



extern
void g_hook_list_invoke_check (GHookList *hook_list,
      gboolean may_recurse);


extern
void g_hook_list_marshal (GHookList *hook_list,
      gboolean may_recurse,
      GHookMarshaller marshaller,
      gpointer marshal_data);
extern
void g_hook_list_marshal_check (GHookList *hook_list,
      gboolean may_recurse,
      GHookCheckMarshaller marshaller,
      gpointer marshal_data);

}
# 53 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/ghostutils.h" 1
# 27 "/usr/include/glib-2.0/glib/ghostutils.h"
extern "C" {

extern
gboolean g_hostname_is_non_ascii (const gchar *hostname);
extern
gboolean g_hostname_is_ascii_encoded (const gchar *hostname);
extern
gboolean g_hostname_is_ip_address (const gchar *hostname);

extern
gchar *g_hostname_to_ascii (const gchar *hostname);
extern
gchar *g_hostname_to_unicode (const gchar *hostname);

}
# 54 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/giochannel.h" 1
# 33 "/usr/include/glib-2.0/glib/giochannel.h"
# 1 "/usr/include/glib-2.0/glib/gmain.h" 1
# 25 "/usr/include/glib-2.0/glib/gmain.h"
# 1 "/usr/include/glib-2.0/glib/gpoll.h" 1
# 28 "/usr/include/glib-2.0/glib/gpoll.h"
extern "C" {
# 59 "/usr/include/glib-2.0/glib/gpoll.h"
typedef struct _GPollFD GPollFD;
# 74 "/usr/include/glib-2.0/glib/gpoll.h"
typedef gint (*GPollFunc) (GPollFD *ufds,
                                 guint nfsd,
                                 gint timeout_);
# 91 "/usr/include/glib-2.0/glib/gpoll.h"
struct _GPollFD
{





  gint fd;

  gushort events;
  gushort revents;
};
# 112 "/usr/include/glib-2.0/glib/gpoll.h"
extern
gint
g_poll (GPollFD *fds,
 guint nfds,
 gint timeout);

}
# 26 "/usr/include/glib-2.0/glib/gmain.h" 2
# 1 "/usr/include/glib-2.0/glib/gslist.h" 1
# 35 "/usr/include/glib-2.0/glib/gslist.h"
extern "C" {

typedef struct _GSList GSList;

struct _GSList
{
  gpointer data;
  GSList *next;
};



extern
GSList* g_slist_alloc (void) __attribute__((warn_unused_result));
extern
void g_slist_free (GSList *list);
extern
void g_slist_free_1 (GSList *list);

extern
void g_slist_free_full (GSList *list,
       GDestroyNotify free_func);
extern
GSList* g_slist_append (GSList *list,
       gpointer data) __attribute__((warn_unused_result));
extern
GSList* g_slist_prepend (GSList *list,
       gpointer data) __attribute__((warn_unused_result));
extern
GSList* g_slist_insert (GSList *list,
       gpointer data,
       gint position) __attribute__((warn_unused_result));
extern
GSList* g_slist_insert_sorted (GSList *list,
       gpointer data,
       GCompareFunc func) __attribute__((warn_unused_result));
extern
GSList* g_slist_insert_sorted_with_data (GSList *list,
       gpointer data,
       GCompareDataFunc func,
       gpointer user_data) __attribute__((warn_unused_result));
extern
GSList* g_slist_insert_before (GSList *slist,
       GSList *sibling,
       gpointer data) __attribute__((warn_unused_result));
extern
GSList* g_slist_concat (GSList *list1,
       GSList *list2) __attribute__((warn_unused_result));
extern
GSList* g_slist_remove (GSList *list,
       gconstpointer data) __attribute__((warn_unused_result));
extern
GSList* g_slist_remove_all (GSList *list,
       gconstpointer data) __attribute__((warn_unused_result));
extern
GSList* g_slist_remove_link (GSList *list,
       GSList *link_) __attribute__((warn_unused_result));
extern
GSList* g_slist_delete_link (GSList *list,
       GSList *link_) __attribute__((warn_unused_result));
extern
GSList* g_slist_reverse (GSList *list) __attribute__((warn_unused_result));
extern
GSList* g_slist_copy (GSList *list) __attribute__((warn_unused_result));

extern
GSList* g_slist_copy_deep (GSList *list,
       GCopyFunc func,
       gpointer user_data) __attribute__((warn_unused_result));
extern
GSList* g_slist_nth (GSList *list,
       guint n);
extern
GSList* g_slist_find (GSList *list,
       gconstpointer data);
extern
GSList* g_slist_find_custom (GSList *list,
       gconstpointer data,
       GCompareFunc func);
extern
gint g_slist_position (GSList *list,
       GSList *llink);
extern
gint g_slist_index (GSList *list,
       gconstpointer data);
extern
GSList* g_slist_last (GSList *list);
extern
guint g_slist_length (GSList *list);
extern
void g_slist_foreach (GSList *list,
       GFunc func,
       gpointer user_data);
extern
GSList* g_slist_sort (GSList *list,
       GCompareFunc compare_func) __attribute__((warn_unused_result));
extern
GSList* g_slist_sort_with_data (GSList *list,
       GCompareDataFunc compare_func,
       gpointer user_data) __attribute__((warn_unused_result));
extern
gpointer g_slist_nth_data (GSList *list,
       guint n);



}
# 27 "/usr/include/glib-2.0/glib/gmain.h" 2


extern "C" {

typedef enum
{
  G_IO_IN =1,
  G_IO_OUT =4,
  G_IO_PRI =2,
  G_IO_ERR =8,
  G_IO_HUP =16,
  G_IO_NVAL =32
} GIOCondition;
# 48 "/usr/include/glib-2.0/glib/gmain.h"
typedef struct _GMainContext GMainContext;







typedef struct _GMainLoop GMainLoop;







typedef struct _GSource GSource;
typedef struct _GSourcePrivate GSourcePrivate;
# 77 "/usr/include/glib-2.0/glib/gmain.h"
typedef struct _GSourceCallbackFuncs GSourceCallbackFuncs;
# 130 "/usr/include/glib-2.0/glib/gmain.h"
typedef struct _GSourceFuncs GSourceFuncs;
# 166 "/usr/include/glib-2.0/glib/gmain.h"
typedef gboolean (*GSourceFunc) (gpointer user_data);
# 179 "/usr/include/glib-2.0/glib/gmain.h"
typedef void (*GChildWatchFunc) (GPid pid,
                                       gint status,
                                       gpointer user_data);
struct _GSource
{

  gpointer callback_data;
  GSourceCallbackFuncs *callback_funcs;

  const GSourceFuncs *source_funcs;
  guint ref_count;

  GMainContext *context;

  gint priority;
  guint flags;
  guint source_id;

  GSList *poll_fds;

  GSource *prev;
  GSource *next;

  char *name;

  GSourcePrivate *priv;
};

struct _GSourceCallbackFuncs
{
  void (*ref) (gpointer cb_data);
  void (*unref) (gpointer cb_data);
  void (*get) (gpointer cb_data,
                 GSource *source,
                 GSourceFunc *func,
                 gpointer *data);
};







typedef void (*GSourceDummyMarshal) (void);

struct _GSourceFuncs
{
  gboolean (*prepare) (GSource *source,
                        gint *timeout_);
  gboolean (*check) (GSource *source);
  gboolean (*dispatch) (GSource *source,
                        GSourceFunc callback,
                        gpointer user_data);
  void (*finalize) (GSource *source);



  GSourceFunc closure_callback;
  GSourceDummyMarshal closure_marshal;
};
# 316 "/usr/include/glib-2.0/glib/gmain.h"
extern
GMainContext *g_main_context_new (void);
extern
GMainContext *g_main_context_ref (GMainContext *context);
extern
void g_main_context_unref (GMainContext *context);
extern
GMainContext *g_main_context_default (void);

extern
gboolean g_main_context_iteration (GMainContext *context,
                                        gboolean may_block);
extern
gboolean g_main_context_pending (GMainContext *context);



extern
GSource *g_main_context_find_source_by_id (GMainContext *context,
                                                             guint source_id);
extern
GSource *g_main_context_find_source_by_user_data (GMainContext *context,
                                                             gpointer user_data);
extern
GSource *g_main_context_find_source_by_funcs_user_data (GMainContext *context,
                                                             GSourceFuncs *funcs,
                                                             gpointer user_data);



extern
void g_main_context_wakeup (GMainContext *context);
extern
gboolean g_main_context_acquire (GMainContext *context);
extern
void g_main_context_release (GMainContext *context);
extern
gboolean g_main_context_is_owner (GMainContext *context);
extern
gboolean g_main_context_wait (GMainContext *context,
                                 GCond *cond,
                                 GMutex *mutex);

extern
gboolean g_main_context_prepare (GMainContext *context,
                                  gint *priority);
extern
gint g_main_context_query (GMainContext *context,
                                  gint max_priority,
                                  gint *timeout_,
                                  GPollFD *fds,
                                  gint n_fds);
extern
gint g_main_context_check (GMainContext *context,
                                  gint max_priority,
                                  GPollFD *fds,
                                  gint n_fds);
extern
void g_main_context_dispatch (GMainContext *context);

extern
void g_main_context_set_poll_func (GMainContext *context,
                                       GPollFunc func);
extern
GPollFunc g_main_context_get_poll_func (GMainContext *context);



extern
void g_main_context_add_poll (GMainContext *context,
                                     GPollFD *fd,
                                     gint priority);
extern
void g_main_context_remove_poll (GMainContext *context,
                                     GPollFD *fd);

extern
gint g_main_depth (void);
extern
GSource *g_main_current_source (void);



extern
void g_main_context_push_thread_default (GMainContext *context);
extern
void g_main_context_pop_thread_default (GMainContext *context);
extern
GMainContext *g_main_context_get_thread_default (void);
extern
GMainContext *g_main_context_ref_thread_default (void);



extern
GMainLoop *g_main_loop_new (GMainContext *context,
                                   gboolean is_running);
extern
void g_main_loop_run (GMainLoop *loop);
extern
void g_main_loop_quit (GMainLoop *loop);
extern
GMainLoop *g_main_loop_ref (GMainLoop *loop);
extern
void g_main_loop_unref (GMainLoop *loop);
extern
gboolean g_main_loop_is_running (GMainLoop *loop);
extern
GMainContext *g_main_loop_get_context (GMainLoop *loop);



extern
GSource *g_source_new (GSourceFuncs *source_funcs,
                                   guint struct_size);
extern
GSource *g_source_ref (GSource *source);
extern
void g_source_unref (GSource *source);

extern
guint g_source_attach (GSource *source,
                                   GMainContext *context);
extern
void g_source_destroy (GSource *source);

extern
void g_source_set_priority (GSource *source,
                                   gint priority);
extern
gint g_source_get_priority (GSource *source);
extern
void g_source_set_can_recurse (GSource *source,
                                   gboolean can_recurse);
extern
gboolean g_source_get_can_recurse (GSource *source);
extern
guint g_source_get_id (GSource *source);

extern
GMainContext *g_source_get_context (GSource *source);

extern
void g_source_set_callback (GSource *source,
                                   GSourceFunc func,
                                   gpointer data,
                                   GDestroyNotify notify);

extern
void g_source_set_funcs (GSource *source,
                                   GSourceFuncs *funcs);
extern
gboolean g_source_is_destroyed (GSource *source);

extern
void g_source_set_name (GSource *source,
                                              const char *name);
extern
const char * g_source_get_name (GSource *source);
extern
void g_source_set_name_by_id (guint tag,
                                              const char *name);

extern
void g_source_set_ready_time (GSource *source,
                                              gint64 ready_time);
extern
gint64 g_source_get_ready_time (GSource *source);


extern
gpointer g_source_add_unix_fd (GSource *source,
                                              gint fd,
                                              GIOCondition events);
extern
void g_source_modify_unix_fd (GSource *source,
                                              gpointer tag,
                                              GIOCondition new_events);
extern
void g_source_remove_unix_fd (GSource *source,
                                              gpointer tag);
extern
GIOCondition g_source_query_unix_fd (GSource *source,
                                              gpointer tag);



extern
void g_source_set_callback_indirect (GSource *source,
                                     gpointer callback_data,
                                     GSourceCallbackFuncs *callback_funcs);

extern
void g_source_add_poll (GSource *source,
           GPollFD *fd);
extern
void g_source_remove_poll (GSource *source,
           GPollFD *fd);

extern
void g_source_add_child_source (GSource *source,
           GSource *child_source);
extern
void g_source_remove_child_source (GSource *source,
           GSource *child_source);

__attribute__((__deprecated__("Use '" "g_source_get_time" "' instead"))) extern
void g_source_get_current_time (GSource *source,
                                    GTimeVal *timeval);

extern
gint64 g_source_get_time (GSource *source);







extern
GSource *g_idle_source_new (void);
extern
GSource *g_child_watch_source_new (GPid pid);
extern
GSource *g_timeout_source_new (guint interval);
extern
GSource *g_timeout_source_new_seconds (guint interval);



extern
void g_get_current_time (GTimeVal *result);
extern
gint64 g_get_monotonic_time (void);
extern
gint64 g_get_real_time (void);



extern
gboolean g_source_remove (guint tag);
extern
gboolean g_source_remove_by_user_data (gpointer user_data);
extern
gboolean g_source_remove_by_funcs_user_data (GSourceFuncs *funcs,
                                              gpointer user_data);


extern
guint g_timeout_add_full (gint priority,
                                     guint interval,
                                     GSourceFunc function,
                                     gpointer data,
                                     GDestroyNotify notify);
extern
guint g_timeout_add (guint interval,
                                     GSourceFunc function,
                                     gpointer data);
extern
guint g_timeout_add_seconds_full (gint priority,
                                     guint interval,
                                     GSourceFunc function,
                                     gpointer data,
                                     GDestroyNotify notify);
extern
guint g_timeout_add_seconds (guint interval,
                                     GSourceFunc function,
                                     gpointer data);
extern
guint g_child_watch_add_full (gint priority,
                                     GPid pid,
                                     GChildWatchFunc function,
                                     gpointer data,
                                     GDestroyNotify notify);
extern
guint g_child_watch_add (GPid pid,
                                     GChildWatchFunc function,
                                     gpointer data);
extern
guint g_idle_add (GSourceFunc function,
                                     gpointer data);
extern
guint g_idle_add_full (gint priority,
                                     GSourceFunc function,
                                     gpointer data,
                                     GDestroyNotify notify);
extern
gboolean g_idle_remove_by_data (gpointer data);

extern
void g_main_context_invoke_full (GMainContext *context,
                                     gint priority,
                                     GSourceFunc function,
                                     gpointer data,
                                     GDestroyNotify notify);
extern
void g_main_context_invoke (GMainContext *context,
                                     GSourceFunc function,
                                     gpointer data);


extern GSourceFuncs g_timeout_funcs;
extern GSourceFuncs g_child_watch_funcs;
extern GSourceFuncs g_idle_funcs;

extern GSourceFuncs g_unix_signal_funcs;
extern GSourceFuncs g_unix_fd_source_funcs;


}
# 34 "/usr/include/glib-2.0/glib/giochannel.h" 2
# 1 "/usr/include/glib-2.0/glib/gstring.h" 1
# 33 "/usr/include/glib-2.0/glib/gstring.h"
# 1 "/usr/include/glib-2.0/glib/gunicode.h" 1
# 31 "/usr/include/glib-2.0/glib/gunicode.h"
extern "C" {
# 60 "/usr/include/glib-2.0/glib/gunicode.h"
typedef guint32 gunichar;
# 78 "/usr/include/glib-2.0/glib/gunicode.h"
typedef guint16 gunichar2;
# 117 "/usr/include/glib-2.0/glib/gunicode.h"
typedef enum
{
  G_UNICODE_CONTROL,
  G_UNICODE_FORMAT,
  G_UNICODE_UNASSIGNED,
  G_UNICODE_PRIVATE_USE,
  G_UNICODE_SURROGATE,
  G_UNICODE_LOWERCASE_LETTER,
  G_UNICODE_MODIFIER_LETTER,
  G_UNICODE_OTHER_LETTER,
  G_UNICODE_TITLECASE_LETTER,
  G_UNICODE_UPPERCASE_LETTER,
  G_UNICODE_SPACING_MARK,
  G_UNICODE_ENCLOSING_MARK,
  G_UNICODE_NON_SPACING_MARK,
  G_UNICODE_DECIMAL_NUMBER,
  G_UNICODE_LETTER_NUMBER,
  G_UNICODE_OTHER_NUMBER,
  G_UNICODE_CONNECT_PUNCTUATION,
  G_UNICODE_DASH_PUNCTUATION,
  G_UNICODE_CLOSE_PUNCTUATION,
  G_UNICODE_FINAL_PUNCTUATION,
  G_UNICODE_INITIAL_PUNCTUATION,
  G_UNICODE_OTHER_PUNCTUATION,
  G_UNICODE_OPEN_PUNCTUATION,
  G_UNICODE_CURRENCY_SYMBOL,
  G_UNICODE_MODIFIER_SYMBOL,
  G_UNICODE_MATH_SYMBOL,
  G_UNICODE_OTHER_SYMBOL,
  G_UNICODE_LINE_SEPARATOR,
  G_UNICODE_PARAGRAPH_SEPARATOR,
  G_UNICODE_SPACE_SEPARATOR
} GUnicodeType;
# 215 "/usr/include/glib-2.0/glib/gunicode.h"
typedef enum
{
  G_UNICODE_BREAK_MANDATORY,
  G_UNICODE_BREAK_CARRIAGE_RETURN,
  G_UNICODE_BREAK_LINE_FEED,
  G_UNICODE_BREAK_COMBINING_MARK,
  G_UNICODE_BREAK_SURROGATE,
  G_UNICODE_BREAK_ZERO_WIDTH_SPACE,
  G_UNICODE_BREAK_INSEPARABLE,
  G_UNICODE_BREAK_NON_BREAKING_GLUE,
  G_UNICODE_BREAK_CONTINGENT,
  G_UNICODE_BREAK_SPACE,
  G_UNICODE_BREAK_AFTER,
  G_UNICODE_BREAK_BEFORE,
  G_UNICODE_BREAK_BEFORE_AND_AFTER,
  G_UNICODE_BREAK_HYPHEN,
  G_UNICODE_BREAK_NON_STARTER,
  G_UNICODE_BREAK_OPEN_PUNCTUATION,
  G_UNICODE_BREAK_CLOSE_PUNCTUATION,
  G_UNICODE_BREAK_QUOTATION,
  G_UNICODE_BREAK_EXCLAMATION,
  G_UNICODE_BREAK_IDEOGRAPHIC,
  G_UNICODE_BREAK_NUMERIC,
  G_UNICODE_BREAK_INFIX_SEPARATOR,
  G_UNICODE_BREAK_SYMBOL,
  G_UNICODE_BREAK_ALPHABETIC,
  G_UNICODE_BREAK_PREFIX,
  G_UNICODE_BREAK_POSTFIX,
  G_UNICODE_BREAK_COMPLEX_CONTEXT,
  G_UNICODE_BREAK_AMBIGUOUS,
  G_UNICODE_BREAK_UNKNOWN,
  G_UNICODE_BREAK_NEXT_LINE,
  G_UNICODE_BREAK_WORD_JOINER,
  G_UNICODE_BREAK_HANGUL_L_JAMO,
  G_UNICODE_BREAK_HANGUL_V_JAMO,
  G_UNICODE_BREAK_HANGUL_T_JAMO,
  G_UNICODE_BREAK_HANGUL_LV_SYLLABLE,
  G_UNICODE_BREAK_HANGUL_LVT_SYLLABLE,
  G_UNICODE_BREAK_CLOSE_PARANTHESIS,
  G_UNICODE_BREAK_CONDITIONAL_JAPANESE_STARTER,
  G_UNICODE_BREAK_HEBREW_LETTER,
  G_UNICODE_BREAK_REGIONAL_INDICATOR,
  G_UNICODE_BREAK_EMOJI_BASE,
  G_UNICODE_BREAK_EMOJI_MODIFIER,
  G_UNICODE_BREAK_ZERO_WIDTH_JOINER
} GUnicodeBreakType;
# 427 "/usr/include/glib-2.0/glib/gunicode.h"
typedef enum
{
  G_UNICODE_SCRIPT_INVALID_CODE = -1,
  G_UNICODE_SCRIPT_COMMON = 0,
  G_UNICODE_SCRIPT_INHERITED,
  G_UNICODE_SCRIPT_ARABIC,
  G_UNICODE_SCRIPT_ARMENIAN,
  G_UNICODE_SCRIPT_BENGALI,
  G_UNICODE_SCRIPT_BOPOMOFO,
  G_UNICODE_SCRIPT_CHEROKEE,
  G_UNICODE_SCRIPT_COPTIC,
  G_UNICODE_SCRIPT_CYRILLIC,
  G_UNICODE_SCRIPT_DESERET,
  G_UNICODE_SCRIPT_DEVANAGARI,
  G_UNICODE_SCRIPT_ETHIOPIC,
  G_UNICODE_SCRIPT_GEORGIAN,
  G_UNICODE_SCRIPT_GOTHIC,
  G_UNICODE_SCRIPT_GREEK,
  G_UNICODE_SCRIPT_GUJARATI,
  G_UNICODE_SCRIPT_GURMUKHI,
  G_UNICODE_SCRIPT_HAN,
  G_UNICODE_SCRIPT_HANGUL,
  G_UNICODE_SCRIPT_HEBREW,
  G_UNICODE_SCRIPT_HIRAGANA,
  G_UNICODE_SCRIPT_KANNADA,
  G_UNICODE_SCRIPT_KATAKANA,
  G_UNICODE_SCRIPT_KHMER,
  G_UNICODE_SCRIPT_LAO,
  G_UNICODE_SCRIPT_LATIN,
  G_UNICODE_SCRIPT_MALAYALAM,
  G_UNICODE_SCRIPT_MONGOLIAN,
  G_UNICODE_SCRIPT_MYANMAR,
  G_UNICODE_SCRIPT_OGHAM,
  G_UNICODE_SCRIPT_OLD_ITALIC,
  G_UNICODE_SCRIPT_ORIYA,
  G_UNICODE_SCRIPT_RUNIC,
  G_UNICODE_SCRIPT_SINHALA,
  G_UNICODE_SCRIPT_SYRIAC,
  G_UNICODE_SCRIPT_TAMIL,
  G_UNICODE_SCRIPT_TELUGU,
  G_UNICODE_SCRIPT_THAANA,
  G_UNICODE_SCRIPT_THAI,
  G_UNICODE_SCRIPT_TIBETAN,
  G_UNICODE_SCRIPT_CANADIAN_ABORIGINAL,
  G_UNICODE_SCRIPT_YI,
  G_UNICODE_SCRIPT_TAGALOG,
  G_UNICODE_SCRIPT_HANUNOO,
  G_UNICODE_SCRIPT_BUHID,
  G_UNICODE_SCRIPT_TAGBANWA,


  G_UNICODE_SCRIPT_BRAILLE,
  G_UNICODE_SCRIPT_CYPRIOT,
  G_UNICODE_SCRIPT_LIMBU,
  G_UNICODE_SCRIPT_OSMANYA,
  G_UNICODE_SCRIPT_SHAVIAN,
  G_UNICODE_SCRIPT_LINEAR_B,
  G_UNICODE_SCRIPT_TAI_LE,
  G_UNICODE_SCRIPT_UGARITIC,


  G_UNICODE_SCRIPT_NEW_TAI_LUE,
  G_UNICODE_SCRIPT_BUGINESE,
  G_UNICODE_SCRIPT_GLAGOLITIC,
  G_UNICODE_SCRIPT_TIFINAGH,
  G_UNICODE_SCRIPT_SYLOTI_NAGRI,
  G_UNICODE_SCRIPT_OLD_PERSIAN,
  G_UNICODE_SCRIPT_KHAROSHTHI,


  G_UNICODE_SCRIPT_UNKNOWN,
  G_UNICODE_SCRIPT_BALINESE,
  G_UNICODE_SCRIPT_CUNEIFORM,
  G_UNICODE_SCRIPT_PHOENICIAN,
  G_UNICODE_SCRIPT_PHAGS_PA,
  G_UNICODE_SCRIPT_NKO,


  G_UNICODE_SCRIPT_KAYAH_LI,
  G_UNICODE_SCRIPT_LEPCHA,
  G_UNICODE_SCRIPT_REJANG,
  G_UNICODE_SCRIPT_SUNDANESE,
  G_UNICODE_SCRIPT_SAURASHTRA,
  G_UNICODE_SCRIPT_CHAM,
  G_UNICODE_SCRIPT_OL_CHIKI,
  G_UNICODE_SCRIPT_VAI,
  G_UNICODE_SCRIPT_CARIAN,
  G_UNICODE_SCRIPT_LYCIAN,
  G_UNICODE_SCRIPT_LYDIAN,


  G_UNICODE_SCRIPT_AVESTAN,
  G_UNICODE_SCRIPT_BAMUM,
  G_UNICODE_SCRIPT_EGYPTIAN_HIEROGLYPHS,
  G_UNICODE_SCRIPT_IMPERIAL_ARAMAIC,
  G_UNICODE_SCRIPT_INSCRIPTIONAL_PAHLAVI,
  G_UNICODE_SCRIPT_INSCRIPTIONAL_PARTHIAN,
  G_UNICODE_SCRIPT_JAVANESE,
  G_UNICODE_SCRIPT_KAITHI,
  G_UNICODE_SCRIPT_LISU,
  G_UNICODE_SCRIPT_MEETEI_MAYEK,
  G_UNICODE_SCRIPT_OLD_SOUTH_ARABIAN,
  G_UNICODE_SCRIPT_OLD_TURKIC,
  G_UNICODE_SCRIPT_SAMARITAN,
  G_UNICODE_SCRIPT_TAI_THAM,
  G_UNICODE_SCRIPT_TAI_VIET,


  G_UNICODE_SCRIPT_BATAK,
  G_UNICODE_SCRIPT_BRAHMI,
  G_UNICODE_SCRIPT_MANDAIC,


  G_UNICODE_SCRIPT_CHAKMA,
  G_UNICODE_SCRIPT_MEROITIC_CURSIVE,
  G_UNICODE_SCRIPT_MEROITIC_HIEROGLYPHS,
  G_UNICODE_SCRIPT_MIAO,
  G_UNICODE_SCRIPT_SHARADA,
  G_UNICODE_SCRIPT_SORA_SOMPENG,
  G_UNICODE_SCRIPT_TAKRI,


  G_UNICODE_SCRIPT_BASSA_VAH,
  G_UNICODE_SCRIPT_CAUCASIAN_ALBANIAN,
  G_UNICODE_SCRIPT_DUPLOYAN,
  G_UNICODE_SCRIPT_ELBASAN,
  G_UNICODE_SCRIPT_GRANTHA,
  G_UNICODE_SCRIPT_KHOJKI,
  G_UNICODE_SCRIPT_KHUDAWADI,
  G_UNICODE_SCRIPT_LINEAR_A,
  G_UNICODE_SCRIPT_MAHAJANI,
  G_UNICODE_SCRIPT_MANICHAEAN,
  G_UNICODE_SCRIPT_MENDE_KIKAKUI,
  G_UNICODE_SCRIPT_MODI,
  G_UNICODE_SCRIPT_MRO,
  G_UNICODE_SCRIPT_NABATAEAN,
  G_UNICODE_SCRIPT_OLD_NORTH_ARABIAN,
  G_UNICODE_SCRIPT_OLD_PERMIC,
  G_UNICODE_SCRIPT_PAHAWH_HMONG,
  G_UNICODE_SCRIPT_PALMYRENE,
  G_UNICODE_SCRIPT_PAU_CIN_HAU,
  G_UNICODE_SCRIPT_PSALTER_PAHLAVI,
  G_UNICODE_SCRIPT_SIDDHAM,
  G_UNICODE_SCRIPT_TIRHUTA,
  G_UNICODE_SCRIPT_WARANG_CITI,


  G_UNICODE_SCRIPT_AHOM,
  G_UNICODE_SCRIPT_ANATOLIAN_HIEROGLYPHS,
  G_UNICODE_SCRIPT_HATRAN,
  G_UNICODE_SCRIPT_MULTANI,
  G_UNICODE_SCRIPT_OLD_HUNGARIAN,
  G_UNICODE_SCRIPT_SIGNWRITING,


  G_UNICODE_SCRIPT_ADLAM,
  G_UNICODE_SCRIPT_BHAIKSUKI,
  G_UNICODE_SCRIPT_MARCHEN,
  G_UNICODE_SCRIPT_NEWA,
  G_UNICODE_SCRIPT_OSAGE,
  G_UNICODE_SCRIPT_TANGUT
} GUnicodeScript;

extern
guint32 g_unicode_script_to_iso15924 (GUnicodeScript script);
extern
GUnicodeScript g_unicode_script_from_iso15924 (guint32 iso15924);



extern
gboolean g_unichar_isalnum (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_isalpha (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_iscntrl (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_isdigit (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_isgraph (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_islower (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_isprint (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_ispunct (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_isspace (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_isupper (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_isxdigit (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_istitle (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_isdefined (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_iswide (gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_iswide_cjk(gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_iszerowidth(gunichar c) __attribute__((__const__));
extern
gboolean g_unichar_ismark (gunichar c) __attribute__((__const__));



extern
gunichar g_unichar_toupper (gunichar c) __attribute__((__const__));
extern
gunichar g_unichar_tolower (gunichar c) __attribute__((__const__));
extern
gunichar g_unichar_totitle (gunichar c) __attribute__((__const__));



extern
gint g_unichar_digit_value (gunichar c) __attribute__((__const__));

extern
gint g_unichar_xdigit_value (gunichar c) __attribute__((__const__));


extern
GUnicodeType g_unichar_type (gunichar c) __attribute__((__const__));


extern
GUnicodeBreakType g_unichar_break_type (gunichar c) __attribute__((__const__));


extern
gint g_unichar_combining_class (gunichar uc) __attribute__((__const__));

extern
gboolean g_unichar_get_mirror_char (gunichar ch,
                                    gunichar *mirrored_ch);

extern
GUnicodeScript g_unichar_get_script (gunichar ch) __attribute__((__const__));


extern
gboolean g_unichar_validate (gunichar ch) __attribute__((__const__));


extern
gboolean g_unichar_compose (gunichar a,
                            gunichar b,
                            gunichar *ch);
extern
gboolean g_unichar_decompose (gunichar ch,
                              gunichar *a,
                              gunichar *b);

extern
gsize g_unichar_fully_decompose (gunichar ch,
                                 gboolean compat,
                                 gunichar *result,
                                 gsize result_len);
# 703 "/usr/include/glib-2.0/glib/gunicode.h"
extern
void g_unicode_canonical_ordering (gunichar *string,
                                   gsize len);


__attribute__((__deprecated__)) extern
gunichar *g_unicode_canonical_decomposition (gunichar ch,
                                             gsize *result_len) __attribute__((__malloc__));



extern const gchar * const g_utf8_skip;
# 729 "/usr/include/glib-2.0/glib/gunicode.h"
extern
gunichar g_utf8_get_char (const gchar *p) __attribute__((__pure__));
extern
gunichar g_utf8_get_char_validated (const gchar *p,
                                    gssize max_len) __attribute__((__pure__));

extern
gchar* g_utf8_offset_to_pointer (const gchar *str,
                                   glong offset) __attribute__((__pure__));
extern
glong g_utf8_pointer_to_offset (const gchar *str,
                                   const gchar *pos) __attribute__((__pure__));
extern
gchar* g_utf8_prev_char (const gchar *p) __attribute__((__pure__));
extern
gchar* g_utf8_find_next_char (const gchar *p,
                                   const gchar *end) __attribute__((__pure__));
extern
gchar* g_utf8_find_prev_char (const gchar *str,
                                   const gchar *p) __attribute__((__pure__));

extern
glong g_utf8_strlen (const gchar *p,
                                   gssize max) __attribute__((__pure__));

extern
gchar *g_utf8_substring (const gchar *str,
                                   glong start_pos,
                                   glong end_pos) __attribute__((__malloc__));

extern
gchar *g_utf8_strncpy (gchar *dest,
                                   const gchar *src,
                                   gsize n);



extern
gchar* g_utf8_strchr (const gchar *p,
                       gssize len,
                       gunichar c);
extern
gchar* g_utf8_strrchr (const gchar *p,
                       gssize len,
                       gunichar c);
extern
gchar* g_utf8_strreverse (const gchar *str,
                          gssize len);

extern
gunichar2 *g_utf8_to_utf16 (const gchar *str,
                                glong len,
                                glong *items_read,
                                glong *items_written,
                                GError **error) __attribute__((__malloc__));
extern
gunichar * g_utf8_to_ucs4 (const gchar *str,
                                glong len,
                                glong *items_read,
                                glong *items_written,
                                GError **error) __attribute__((__malloc__));
extern
gunichar * g_utf8_to_ucs4_fast (const gchar *str,
                                glong len,
                                glong *items_written) __attribute__((__malloc__));
extern
gunichar * g_utf16_to_ucs4 (const gunichar2 *str,
                                glong len,
                                glong *items_read,
                                glong *items_written,
                                GError **error) __attribute__((__malloc__));
extern
gchar* g_utf16_to_utf8 (const gunichar2 *str,
                                glong len,
                                glong *items_read,
                                glong *items_written,
                                GError **error) __attribute__((__malloc__));
extern
gunichar2 *g_ucs4_to_utf16 (const gunichar *str,
                                glong len,
                                glong *items_read,
                                glong *items_written,
                                GError **error) __attribute__((__malloc__));
extern
gchar* g_ucs4_to_utf8 (const gunichar *str,
                                glong len,
                                glong *items_read,
                                glong *items_written,
                                GError **error) __attribute__((__malloc__));

extern
gint g_unichar_to_utf8 (gunichar c,
                             gchar *outbuf);

extern
gboolean g_utf8_validate (const gchar *str,
                          gssize max_len,
                          const gchar **end);

extern
gchar *g_utf8_strup (const gchar *str,
                       gssize len) __attribute__((__malloc__));
extern
gchar *g_utf8_strdown (const gchar *str,
                       gssize len) __attribute__((__malloc__));
extern
gchar *g_utf8_casefold (const gchar *str,
                        gssize len) __attribute__((__malloc__));
# 862 "/usr/include/glib-2.0/glib/gunicode.h"
typedef enum {
  G_NORMALIZE_DEFAULT,
  G_NORMALIZE_NFD = G_NORMALIZE_DEFAULT,
  G_NORMALIZE_DEFAULT_COMPOSE,
  G_NORMALIZE_NFC = G_NORMALIZE_DEFAULT_COMPOSE,
  G_NORMALIZE_ALL,
  G_NORMALIZE_NFKD = G_NORMALIZE_ALL,
  G_NORMALIZE_ALL_COMPOSE,
  G_NORMALIZE_NFKC = G_NORMALIZE_ALL_COMPOSE
} GNormalizeMode;

extern
gchar *g_utf8_normalize (const gchar *str,
                         gssize len,
                         GNormalizeMode mode) __attribute__((__malloc__));

extern
gint g_utf8_collate (const gchar *str1,
                           const gchar *str2) __attribute__((__pure__));
extern
gchar *g_utf8_collate_key (const gchar *str,
                           gssize len) __attribute__((__malloc__));
extern
gchar *g_utf8_collate_key_for_filename (const gchar *str,
                                        gssize len) __attribute__((__malloc__));



gchar *_g_utf8_make_valid (const gchar *name);

}
# 34 "/usr/include/glib-2.0/glib/gstring.h" 2



extern "C" {

typedef struct _GString GString;

struct _GString
{
  gchar *str;
  gsize len;
  gsize allocated_len;
};

extern
GString* g_string_new (const gchar *init);
extern
GString* g_string_new_len (const gchar *init,
                                         gssize len);
extern
GString* g_string_sized_new (gsize dfl_size);
extern
gchar* g_string_free (GString *string,
                                         gboolean free_segment);
extern
GBytes* g_string_free_to_bytes (GString *string);
extern
gboolean g_string_equal (const GString *v,
                                         const GString *v2);
extern
guint g_string_hash (const GString *str);
extern
GString* g_string_assign (GString *string,
                                         const gchar *rval);
extern
GString* g_string_truncate (GString *string,
                                         gsize len);
extern
GString* g_string_set_size (GString *string,
                                         gsize len);
extern
GString* g_string_insert_len (GString *string,
                                         gssize pos,
                                         const gchar *val,
                                         gssize len);
extern
GString* g_string_append (GString *string,
                                         const gchar *val);
extern
GString* g_string_append_len (GString *string,
                                         const gchar *val,
                                         gssize len);
extern
GString* g_string_append_c (GString *string,
                                         gchar c);
extern
GString* g_string_append_unichar (GString *string,
                                         gunichar wc);
extern
GString* g_string_prepend (GString *string,
                                         const gchar *val);
extern
GString* g_string_prepend_c (GString *string,
                                         gchar c);
extern
GString* g_string_prepend_unichar (GString *string,
                                         gunichar wc);
extern
GString* g_string_prepend_len (GString *string,
                                         const gchar *val,
                                         gssize len);
extern
GString* g_string_insert (GString *string,
                                         gssize pos,
                                         const gchar *val);
extern
GString* g_string_insert_c (GString *string,
                                         gssize pos,
                                         gchar c);
extern
GString* g_string_insert_unichar (GString *string,
                                         gssize pos,
                                         gunichar wc);
extern
GString* g_string_overwrite (GString *string,
                                         gsize pos,
                                         const gchar *val);
extern
GString* g_string_overwrite_len (GString *string,
                                         gsize pos,
                                         const gchar *val,
                                         gssize len);
extern
GString* g_string_erase (GString *string,
                                         gssize pos,
                                         gssize len);
extern
GString* g_string_ascii_down (GString *string);
extern
GString* g_string_ascii_up (GString *string);
extern
void g_string_vprintf (GString *string,
                                         const gchar *format,
                                         va_list args)
                                         __attribute__((__format__ (__printf__, 2, 0)));
extern
void g_string_printf (GString *string,
                                         const gchar *format,
                                         ...) __attribute__((__format__ (__printf__, 2, 3)));
extern
void g_string_append_vprintf (GString *string,
                                         const gchar *format,
                                         va_list args)
                                         __attribute__((__format__ (__printf__, 2, 0)));
extern
void g_string_append_printf (GString *string,
                                         const gchar *format,
                                         ...) __attribute__((__format__ (__printf__, 2, 3)));
extern
GString* g_string_append_uri_escaped (GString *string,
                                          const gchar *unescaped,
                                          const gchar *reserved_chars_allowed,
                                          gboolean allow_utf8);



static inline GString*
g_string_append_c_inline (GString *gstring,
                          gchar c)
{
  if (gstring->len + 1 < gstring->allocated_len)
    {
      gstring->str[gstring->len++] = c;
      gstring->str[gstring->len] = 0;
    }
  else
    g_string_insert_c (gstring, -1, c);
  return gstring;
}




__attribute__((__deprecated__)) extern
GString *g_string_down (GString *string);
__attribute__((__deprecated__)) extern
GString *g_string_up (GString *string);






}
# 35 "/usr/include/glib-2.0/glib/giochannel.h" 2

extern "C" {




typedef struct _GIOChannel GIOChannel;
typedef struct _GIOFuncs GIOFuncs;

typedef enum
{
  G_IO_ERROR_NONE,
  G_IO_ERROR_AGAIN,
  G_IO_ERROR_INVAL,
  G_IO_ERROR_UNKNOWN
} GIOError;



typedef enum
{

  G_IO_CHANNEL_ERROR_FBIG,
  G_IO_CHANNEL_ERROR_INVAL,
  G_IO_CHANNEL_ERROR_IO,
  G_IO_CHANNEL_ERROR_ISDIR,
  G_IO_CHANNEL_ERROR_NOSPC,
  G_IO_CHANNEL_ERROR_NXIO,
  G_IO_CHANNEL_ERROR_OVERFLOW,
  G_IO_CHANNEL_ERROR_PIPE,

  G_IO_CHANNEL_ERROR_FAILED
} GIOChannelError;

typedef enum
{
  G_IO_STATUS_ERROR,
  G_IO_STATUS_NORMAL,
  G_IO_STATUS_EOF,
  G_IO_STATUS_AGAIN
} GIOStatus;

typedef enum
{
  G_SEEK_CUR,
  G_SEEK_SET,
  G_SEEK_END
} GSeekType;

typedef enum
{
  G_IO_FLAG_APPEND = 1 << 0,
  G_IO_FLAG_NONBLOCK = 1 << 1,
  G_IO_FLAG_IS_READABLE = 1 << 2,
  G_IO_FLAG_IS_WRITABLE = 1 << 3,
  G_IO_FLAG_IS_WRITEABLE = 1 << 3,
  G_IO_FLAG_IS_SEEKABLE = 1 << 4,
  G_IO_FLAG_MASK = (1 << 5) - 1,
  G_IO_FLAG_GET_MASK = G_IO_FLAG_MASK,
  G_IO_FLAG_SET_MASK = G_IO_FLAG_APPEND | G_IO_FLAG_NONBLOCK
} GIOFlags;

struct _GIOChannel
{

  gint ref_count;
  GIOFuncs *funcs;

  gchar *encoding;
  GIConv read_cd;
  GIConv write_cd;
  gchar *line_term;
  guint line_term_len;

  gsize buf_size;
  GString *read_buf;
  GString *encoded_read_buf;
  GString *write_buf;
  gchar partial_write_buf[6];



  guint use_buffer : 1;
  guint do_encode : 1;
  guint close_on_unref : 1;
  guint is_readable : 1;
  guint is_writeable : 1;
  guint is_seekable : 1;

  gpointer reserved1;
  gpointer reserved2;
};

typedef gboolean (*GIOFunc) (GIOChannel *source,
        GIOCondition condition,
        gpointer data);
struct _GIOFuncs
{
  GIOStatus (*io_read) (GIOChannel *channel,
             gchar *buf,
      gsize count,
      gsize *bytes_read,
      GError **err);
  GIOStatus (*io_write) (GIOChannel *channel,
      const gchar *buf,
      gsize count,
      gsize *bytes_written,
      GError **err);
  GIOStatus (*io_seek) (GIOChannel *channel,
      gint64 offset,
      GSeekType type,
      GError **err);
  GIOStatus (*io_close) (GIOChannel *channel,
      GError **err);
  GSource* (*io_create_watch) (GIOChannel *channel,
      GIOCondition condition);
  void (*io_free) (GIOChannel *channel);
  GIOStatus (*io_set_flags) (GIOChannel *channel,
                                  GIOFlags flags,
      GError **err);
  GIOFlags (*io_get_flags) (GIOChannel *channel);
};

extern
void g_io_channel_init (GIOChannel *channel);
extern
GIOChannel *g_io_channel_ref (GIOChannel *channel);
extern
void g_io_channel_unref (GIOChannel *channel);

__attribute__((__deprecated__("Use '" "g_io_channel_read_chars" "' instead"))) extern
GIOError g_io_channel_read (GIOChannel *channel,
                                 gchar *buf,
                                 gsize count,
                                 gsize *bytes_read);

__attribute__((__deprecated__("Use '" "g_io_channel_write_chars" "' instead"))) extern
GIOError g_io_channel_write (GIOChannel *channel,
                                 const gchar *buf,
                                 gsize count,
                                 gsize *bytes_written);

__attribute__((__deprecated__("Use '" "g_io_channel_seek_position" "' instead"))) extern
GIOError g_io_channel_seek (GIOChannel *channel,
                                 gint64 offset,
                                 GSeekType type);

__attribute__((__deprecated__("Use '" "g_io_channel_shutdown" "' instead"))) extern
void g_io_channel_close (GIOChannel *channel);

extern
GIOStatus g_io_channel_shutdown (GIOChannel *channel,
     gboolean flush,
     GError **err);
extern
guint g_io_add_watch_full (GIOChannel *channel,
     gint priority,
     GIOCondition condition,
     GIOFunc func,
     gpointer user_data,
     GDestroyNotify notify);
extern
GSource * g_io_create_watch (GIOChannel *channel,
     GIOCondition condition);
extern
guint g_io_add_watch (GIOChannel *channel,
     GIOCondition condition,
     GIOFunc func,
     gpointer user_data);




extern
void g_io_channel_set_buffer_size (GIOChannel *channel,
        gsize size);
extern
gsize g_io_channel_get_buffer_size (GIOChannel *channel);
extern
GIOCondition g_io_channel_get_buffer_condition (GIOChannel *channel);
extern
GIOStatus g_io_channel_set_flags (GIOChannel *channel,
        GIOFlags flags,
        GError **error);
extern
GIOFlags g_io_channel_get_flags (GIOChannel *channel);
extern
void g_io_channel_set_line_term (GIOChannel *channel,
        const gchar *line_term,
        gint length);
extern
const gchar * g_io_channel_get_line_term (GIOChannel *channel,
        gint *length);
extern
void g_io_channel_set_buffered (GIOChannel *channel,
        gboolean buffered);
extern
gboolean g_io_channel_get_buffered (GIOChannel *channel);
extern
GIOStatus g_io_channel_set_encoding (GIOChannel *channel,
        const gchar *encoding,
        GError **error);
extern
const gchar * g_io_channel_get_encoding (GIOChannel *channel);
extern
void g_io_channel_set_close_on_unref (GIOChannel *channel,
        gboolean do_close);
extern
gboolean g_io_channel_get_close_on_unref (GIOChannel *channel);


extern
GIOStatus g_io_channel_flush (GIOChannel *channel,
        GError **error);
extern
GIOStatus g_io_channel_read_line (GIOChannel *channel,
        gchar **str_return,
        gsize *length,
        gsize *terminator_pos,
        GError **error);
extern
GIOStatus g_io_channel_read_line_string (GIOChannel *channel,
        GString *buffer,
        gsize *terminator_pos,
        GError **error);
extern
GIOStatus g_io_channel_read_to_end (GIOChannel *channel,
        gchar **str_return,
        gsize *length,
        GError **error);
extern
GIOStatus g_io_channel_read_chars (GIOChannel *channel,
        gchar *buf,
        gsize count,
        gsize *bytes_read,
        GError **error);
extern
GIOStatus g_io_channel_read_unichar (GIOChannel *channel,
        gunichar *thechar,
        GError **error);
extern
GIOStatus g_io_channel_write_chars (GIOChannel *channel,
        const gchar *buf,
        gssize count,
        gsize *bytes_written,
        GError **error);
extern
GIOStatus g_io_channel_write_unichar (GIOChannel *channel,
        gunichar thechar,
        GError **error);
extern
GIOStatus g_io_channel_seek_position (GIOChannel *channel,
        gint64 offset,
        GSeekType type,
        GError **error);
extern
GIOChannel* g_io_channel_new_file (const gchar *filename,
        const gchar *mode,
        GError **error);



extern
GQuark g_io_channel_error_quark (void);
extern
GIOChannelError g_io_channel_error_from_errno (gint en);
# 320 "/usr/include/glib-2.0/glib/giochannel.h"
extern
GIOChannel* g_io_channel_unix_new (int fd);
extern
gint g_io_channel_unix_get_fd (GIOChannel *channel);



extern GSourceFuncs g_io_watch_funcs;
# 413 "/usr/include/glib-2.0/glib/giochannel.h"
}
# 55 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gkeyfile.h" 1
# 32 "/usr/include/glib-2.0/glib/gkeyfile.h"
extern "C" {

typedef enum
{
  G_KEY_FILE_ERROR_UNKNOWN_ENCODING,
  G_KEY_FILE_ERROR_PARSE,
  G_KEY_FILE_ERROR_NOT_FOUND,
  G_KEY_FILE_ERROR_KEY_NOT_FOUND,
  G_KEY_FILE_ERROR_GROUP_NOT_FOUND,
  G_KEY_FILE_ERROR_INVALID_VALUE
} GKeyFileError;



extern
GQuark g_key_file_error_quark (void);

typedef struct _GKeyFile GKeyFile;

typedef enum
{
  G_KEY_FILE_NONE = 0,
  G_KEY_FILE_KEEP_COMMENTS = 1 << 0,
  G_KEY_FILE_KEEP_TRANSLATIONS = 1 << 1
} GKeyFileFlags;

extern
GKeyFile *g_key_file_new (void);
extern
GKeyFile *g_key_file_ref (GKeyFile *key_file);
extern
void g_key_file_unref (GKeyFile *key_file);
extern
void g_key_file_free (GKeyFile *key_file);
extern
void g_key_file_set_list_separator (GKeyFile *key_file,
          gchar separator);
extern
gboolean g_key_file_load_from_file (GKeyFile *key_file,
          const gchar *file,
          GKeyFileFlags flags,
          GError **error);
extern
gboolean g_key_file_load_from_data (GKeyFile *key_file,
          const gchar *data,
          gsize length,
          GKeyFileFlags flags,
          GError **error);
extern
gboolean g_key_file_load_from_bytes (GKeyFile *key_file,
                                             GBytes *bytes,
                                             GKeyFileFlags flags,
                                             GError **error);
extern
gboolean g_key_file_load_from_dirs (GKeyFile *key_file,
          const gchar *file,
          const gchar **search_dirs,
          gchar **full_path,
          GKeyFileFlags flags,
          GError **error);
extern
gboolean g_key_file_load_from_data_dirs (GKeyFile *key_file,
          const gchar *file,
          gchar **full_path,
          GKeyFileFlags flags,
          GError **error);
extern
gchar *g_key_file_to_data (GKeyFile *key_file,
          gsize *length,
          GError **error) __attribute__((__malloc__));
extern
gboolean g_key_file_save_to_file (GKeyFile *key_file,
                                             const gchar *filename,
                                             GError **error);
extern
gchar *g_key_file_get_start_group (GKeyFile *key_file) __attribute__((__malloc__));
extern
gchar **g_key_file_get_groups (GKeyFile *key_file,
          gsize *length) __attribute__((__malloc__));
extern
gchar **g_key_file_get_keys (GKeyFile *key_file,
          const gchar *group_name,
          gsize *length,
          GError **error) __attribute__((__malloc__));
extern
gboolean g_key_file_has_group (GKeyFile *key_file,
          const gchar *group_name);
extern
gboolean g_key_file_has_key (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
extern
gchar *g_key_file_get_value (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error) __attribute__((__malloc__));
extern
void g_key_file_set_value (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *value);
extern
gchar *g_key_file_get_string (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error) __attribute__((__malloc__));
extern
void g_key_file_set_string (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *string);
extern
gchar *g_key_file_get_locale_string (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *locale,
          GError **error) __attribute__((__malloc__));
extern
void g_key_file_set_locale_string (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *locale,
          const gchar *string);
extern
gboolean g_key_file_get_boolean (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
extern
void g_key_file_set_boolean (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gboolean value);
extern
gint g_key_file_get_integer (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
extern
void g_key_file_set_integer (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gint value);
extern
gint64 g_key_file_get_int64 (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
extern
void g_key_file_set_int64 (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gint64 value);
extern
guint64 g_key_file_get_uint64 (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
extern
void g_key_file_set_uint64 (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          guint64 value);
extern
gdouble g_key_file_get_double (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             GError **error);
extern
void g_key_file_set_double (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             gdouble value);
extern
gchar **g_key_file_get_string_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gsize *length,
          GError **error) __attribute__((__malloc__));
extern
void g_key_file_set_string_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar * const list[],
          gsize length);
extern
gchar **g_key_file_get_locale_string_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *locale,
          gsize *length,
          GError **error) __attribute__((__malloc__));
extern
void g_key_file_set_locale_string_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          const gchar *locale,
          const gchar * const list[],
          gsize length);
extern
gboolean *g_key_file_get_boolean_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gsize *length,
          GError **error) __attribute__((__malloc__));
extern
void g_key_file_set_boolean_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gboolean list[],
          gsize length);
extern
gint *g_key_file_get_integer_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gsize *length,
          GError **error) __attribute__((__malloc__));
extern
void g_key_file_set_double_list (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             gdouble list[],
                                             gsize length);
extern
gdouble *g_key_file_get_double_list (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             gsize *length,
                                             GError **error) __attribute__((__malloc__));
extern
void g_key_file_set_integer_list (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          gint list[],
          gsize length);
extern
gboolean g_key_file_set_comment (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             const gchar *comment,
                                             GError **error);
extern
gchar *g_key_file_get_comment (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
                                             GError **error) __attribute__((__malloc__));

extern
gboolean g_key_file_remove_comment (GKeyFile *key_file,
                                             const gchar *group_name,
                                             const gchar *key,
          GError **error);
extern
gboolean g_key_file_remove_key (GKeyFile *key_file,
          const gchar *group_name,
          const gchar *key,
          GError **error);
extern
gboolean g_key_file_remove_group (GKeyFile *key_file,
          const gchar *group_name,
          GError **error);
# 327 "/usr/include/glib-2.0/glib/gkeyfile.h"
}
# 56 "/usr/include/glib-2.0/glib.h" 2



# 1 "/usr/include/glib-2.0/glib/gmappedfile.h" 1
# 30 "/usr/include/glib-2.0/glib/gmappedfile.h"
extern "C" {

typedef struct _GMappedFile GMappedFile;

extern
GMappedFile *g_mapped_file_new (const gchar *filename,
             gboolean writable,
             GError **error) __attribute__((__malloc__));
extern
GMappedFile *g_mapped_file_new_from_fd (gint fd,
      gboolean writable,
      GError **error) __attribute__((__malloc__));
extern
gsize g_mapped_file_get_length (GMappedFile *file);
extern
gchar *g_mapped_file_get_contents (GMappedFile *file);
extern
GBytes * g_mapped_file_get_bytes (GMappedFile *file);
extern
GMappedFile *g_mapped_file_ref (GMappedFile *file);
extern
void g_mapped_file_unref (GMappedFile *file);

__attribute__((__deprecated__("Use '" "g_mapped_file_unref" "' instead"))) extern
void g_mapped_file_free (GMappedFile *file);

}
# 60 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gmarkup.h" 1
# 32 "/usr/include/glib-2.0/glib/gmarkup.h"
extern "C" {
# 50 "/usr/include/glib-2.0/glib/gmarkup.h"
typedef enum
{
  G_MARKUP_ERROR_BAD_UTF8,
  G_MARKUP_ERROR_EMPTY,
  G_MARKUP_ERROR_PARSE,



  G_MARKUP_ERROR_UNKNOWN_ELEMENT,
  G_MARKUP_ERROR_UNKNOWN_ATTRIBUTE,
  G_MARKUP_ERROR_INVALID_CONTENT,
  G_MARKUP_ERROR_MISSING_ATTRIBUTE
} GMarkupError;
# 73 "/usr/include/glib-2.0/glib/gmarkup.h"
extern
GQuark g_markup_error_quark (void);
# 96 "/usr/include/glib-2.0/glib/gmarkup.h"
typedef enum
{
  G_MARKUP_DO_NOT_USE_THIS_UNSUPPORTED_FLAG = 1 << 0,
  G_MARKUP_TREAT_CDATA_AS_TEXT = 1 << 1,
  G_MARKUP_PREFIX_ERROR_POSITION = 1 << 2,
  G_MARKUP_IGNORE_QUALIFIED = 1 << 3
} GMarkupParseFlags;
# 113 "/usr/include/glib-2.0/glib/gmarkup.h"
typedef struct _GMarkupParseContext GMarkupParseContext;
typedef struct _GMarkupParser GMarkupParser;
# 144 "/usr/include/glib-2.0/glib/gmarkup.h"
struct _GMarkupParser
{

  void (*start_element) (GMarkupParseContext *context,
                          const gchar *element_name,
                          const gchar **attribute_names,
                          const gchar **attribute_values,
                          gpointer user_data,
                          GError **error);


  void (*end_element) (GMarkupParseContext *context,
                          const gchar *element_name,
                          gpointer user_data,
                          GError **error);



  void (*text) (GMarkupParseContext *context,
                          const gchar *text,
                          gsize text_len,
                          gpointer user_data,
                          GError **error);






  void (*passthrough) (GMarkupParseContext *context,
                          const gchar *passthrough_text,
                          gsize text_len,
                          gpointer user_data,
                          GError **error);




  void (*error) (GMarkupParseContext *context,
                          GError *error,
                          gpointer user_data);
};

extern
GMarkupParseContext *g_markup_parse_context_new (const GMarkupParser *parser,
                                                   GMarkupParseFlags flags,
                                                   gpointer user_data,
                                                   GDestroyNotify user_data_dnotify);
extern
GMarkupParseContext *g_markup_parse_context_ref (GMarkupParseContext *context);
extern
void g_markup_parse_context_unref (GMarkupParseContext *context);
extern
void g_markup_parse_context_free (GMarkupParseContext *context);
extern
gboolean g_markup_parse_context_parse (GMarkupParseContext *context,
                                                   const gchar *text,
                                                   gssize text_len,
                                                   GError **error);
extern
void g_markup_parse_context_push (GMarkupParseContext *context,
                                                   const GMarkupParser *parser,
                                                   gpointer user_data);
extern
gpointer g_markup_parse_context_pop (GMarkupParseContext *context);

extern
gboolean g_markup_parse_context_end_parse (GMarkupParseContext *context,
                                                       GError **error);
extern
const gchar * g_markup_parse_context_get_element (GMarkupParseContext *context);
extern
const GSList * g_markup_parse_context_get_element_stack (GMarkupParseContext *context);


extern
void g_markup_parse_context_get_position (GMarkupParseContext *context,
                                                          gint *line_number,
                                                          gint *char_number);
extern
gpointer g_markup_parse_context_get_user_data (GMarkupParseContext *context);


extern
gchar* g_markup_escape_text (const gchar *text,
                             gssize length);

extern
gchar *g_markup_printf_escaped (const char *format,
    ...) __attribute__((__format__ (__printf__, 1, 2)));
extern
gchar *g_markup_vprintf_escaped (const char *format,
     va_list args) __attribute__((__format__ (__printf__, 1, 0)));

typedef enum
{
  G_MARKUP_COLLECT_INVALID,
  G_MARKUP_COLLECT_STRING,
  G_MARKUP_COLLECT_STRDUP,
  G_MARKUP_COLLECT_BOOLEAN,
  G_MARKUP_COLLECT_TRISTATE,

  G_MARKUP_COLLECT_OPTIONAL = (1 << 16)
} GMarkupCollectType;



extern
gboolean g_markup_collect_attributes (const gchar *element_name,
                                        const gchar **attribute_names,
                                        const gchar **attribute_values,
                                        GError **error,
                                        GMarkupCollectType first_type,
                                        const gchar *first_attr,
                                        ...);

}
# 61 "/usr/include/glib-2.0/glib.h" 2

# 1 "/usr/include/glib-2.0/glib/gmessages.h" 1
# 35 "/usr/include/glib-2.0/glib/gmessages.h"
# 1 "/usr/include/glib-2.0/glib/gvariant.h" 1
# 28 "/usr/include/glib-2.0/glib/gvariant.h"
# 1 "/usr/include/glib-2.0/glib/gvarianttype.h" 1
# 30 "/usr/include/glib-2.0/glib/gvarianttype.h"
extern "C" {
# 41 "/usr/include/glib-2.0/glib/gvarianttype.h"
typedef struct _GVariantType GVariantType;
# 294 "/usr/include/glib-2.0/glib/gvarianttype.h"
extern
gboolean g_variant_type_string_is_valid (const gchar *type_string);
extern
gboolean g_variant_type_string_scan (const gchar *string,
                                                                         const gchar *limit,
                                                                         const gchar **endptr);


extern
void g_variant_type_free (GVariantType *type);
extern
GVariantType * g_variant_type_copy (const GVariantType *type);
extern
GVariantType * g_variant_type_new (const gchar *type_string);


extern
gsize g_variant_type_get_string_length (const GVariantType *type);
extern
const gchar * g_variant_type_peek_string (const GVariantType *type);
extern
gchar * g_variant_type_dup_string (const GVariantType *type);


extern
gboolean g_variant_type_is_definite (const GVariantType *type);
extern
gboolean g_variant_type_is_container (const GVariantType *type);
extern
gboolean g_variant_type_is_basic (const GVariantType *type);
extern
gboolean g_variant_type_is_maybe (const GVariantType *type);
extern
gboolean g_variant_type_is_array (const GVariantType *type);
extern
gboolean g_variant_type_is_tuple (const GVariantType *type);
extern
gboolean g_variant_type_is_dict_entry (const GVariantType *type);
extern
gboolean g_variant_type_is_variant (const GVariantType *type);


extern
guint g_variant_type_hash (gconstpointer type);
extern
gboolean g_variant_type_equal (gconstpointer type1,
                                                                         gconstpointer type2);


extern
gboolean g_variant_type_is_subtype_of (const GVariantType *type,
                                                                         const GVariantType *supertype);


extern
const GVariantType * g_variant_type_element (const GVariantType *type);
extern
const GVariantType * g_variant_type_first (const GVariantType *type);
extern
const GVariantType * g_variant_type_next (const GVariantType *type);
extern
gsize g_variant_type_n_items (const GVariantType *type);
extern
const GVariantType * g_variant_type_key (const GVariantType *type);
extern
const GVariantType * g_variant_type_value (const GVariantType *type);


extern
GVariantType * g_variant_type_new_array (const GVariantType *element);
extern
GVariantType * g_variant_type_new_maybe (const GVariantType *element);
extern
GVariantType * g_variant_type_new_tuple (const GVariantType * const *items,
                                                                         gint length);
extern
GVariantType * g_variant_type_new_dict_entry (const GVariantType *key,
                                                                         const GVariantType *value);


extern
const GVariantType * g_variant_type_checked_ (const gchar *);

}
# 29 "/usr/include/glib-2.0/glib/gvariant.h" 2



extern "C" {

typedef struct _GVariant GVariant;

typedef enum
{
  G_VARIANT_CLASS_BOOLEAN = 'b',
  G_VARIANT_CLASS_BYTE = 'y',
  G_VARIANT_CLASS_INT16 = 'n',
  G_VARIANT_CLASS_UINT16 = 'q',
  G_VARIANT_CLASS_INT32 = 'i',
  G_VARIANT_CLASS_UINT32 = 'u',
  G_VARIANT_CLASS_INT64 = 'x',
  G_VARIANT_CLASS_UINT64 = 't',
  G_VARIANT_CLASS_HANDLE = 'h',
  G_VARIANT_CLASS_DOUBLE = 'd',
  G_VARIANT_CLASS_STRING = 's',
  G_VARIANT_CLASS_OBJECT_PATH = 'o',
  G_VARIANT_CLASS_SIGNATURE = 'g',
  G_VARIANT_CLASS_VARIANT = 'v',
  G_VARIANT_CLASS_MAYBE = 'm',
  G_VARIANT_CLASS_ARRAY = 'a',
  G_VARIANT_CLASS_TUPLE = '(',
  G_VARIANT_CLASS_DICT_ENTRY = '{'
} GVariantClass;

extern
void g_variant_unref (GVariant *value);
extern
GVariant * g_variant_ref (GVariant *value);
extern
GVariant * g_variant_ref_sink (GVariant *value);
extern
gboolean g_variant_is_floating (GVariant *value);
extern
GVariant * g_variant_take_ref (GVariant *value);

extern
const GVariantType * g_variant_get_type (GVariant *value);
extern
const gchar * g_variant_get_type_string (GVariant *value);
extern
gboolean g_variant_is_of_type (GVariant *value,
                                                                         const GVariantType *type);
extern
gboolean g_variant_is_container (GVariant *value);
extern
GVariantClass g_variant_classify (GVariant *value);
extern
GVariant * g_variant_new_boolean (gboolean value);
extern
GVariant * g_variant_new_byte (guchar value);
extern
GVariant * g_variant_new_int16 (gint16 value);
extern
GVariant * g_variant_new_uint16 (guint16 value);
extern
GVariant * g_variant_new_int32 (gint32 value);
extern
GVariant * g_variant_new_uint32 (guint32 value);
extern
GVariant * g_variant_new_int64 (gint64 value);
extern
GVariant * g_variant_new_uint64 (guint64 value);
extern
GVariant * g_variant_new_handle (gint32 value);
extern
GVariant * g_variant_new_double (gdouble value);
extern
GVariant * g_variant_new_string (const gchar *string);
extern
GVariant * g_variant_new_take_string (gchar *string);
extern
GVariant * g_variant_new_printf (const gchar *format_string,
                                                                         ...) __attribute__((__format__ (__printf__, 1, 2)));
extern
GVariant * g_variant_new_object_path (const gchar *object_path);
extern
gboolean g_variant_is_object_path (const gchar *string);
extern
GVariant * g_variant_new_signature (const gchar *signature);
extern
gboolean g_variant_is_signature (const gchar *string);
extern
GVariant * g_variant_new_variant (GVariant *value);
extern
GVariant * g_variant_new_strv (const gchar * const *strv,
                                                                         gssize length);
extern
GVariant * g_variant_new_objv (const gchar * const *strv,
                                                                         gssize length);
extern
GVariant * g_variant_new_bytestring (const gchar *string);
extern
GVariant * g_variant_new_bytestring_array (const gchar * const *strv,
                                                                         gssize length);
extern
GVariant * g_variant_new_fixed_array (const GVariantType *element_type,
                                                                         gconstpointer elements,
                                                                         gsize n_elements,
                                                                         gsize element_size);
extern
gboolean g_variant_get_boolean (GVariant *value);
extern
guchar g_variant_get_byte (GVariant *value);
extern
gint16 g_variant_get_int16 (GVariant *value);
extern
guint16 g_variant_get_uint16 (GVariant *value);
extern
gint32 g_variant_get_int32 (GVariant *value);
extern
guint32 g_variant_get_uint32 (GVariant *value);
extern
gint64 g_variant_get_int64 (GVariant *value);
extern
guint64 g_variant_get_uint64 (GVariant *value);
extern
gint32 g_variant_get_handle (GVariant *value);
extern
gdouble g_variant_get_double (GVariant *value);
extern
GVariant * g_variant_get_variant (GVariant *value);
extern
const gchar * g_variant_get_string (GVariant *value,
                                                                         gsize *length);
extern
gchar * g_variant_dup_string (GVariant *value,
                                                                         gsize *length);
extern
const gchar ** g_variant_get_strv (GVariant *value,
                                                                         gsize *length);
extern
gchar ** g_variant_dup_strv (GVariant *value,
                                                                         gsize *length);
extern
const gchar ** g_variant_get_objv (GVariant *value,
                                                                         gsize *length);
extern
gchar ** g_variant_dup_objv (GVariant *value,
                                                                         gsize *length);
extern
const gchar * g_variant_get_bytestring (GVariant *value);
extern
gchar * g_variant_dup_bytestring (GVariant *value,
                                                                         gsize *length);
extern
const gchar ** g_variant_get_bytestring_array (GVariant *value,
                                                                         gsize *length);
extern
gchar ** g_variant_dup_bytestring_array (GVariant *value,
                                                                         gsize *length);

extern
GVariant * g_variant_new_maybe (const GVariantType *child_type,
                                                                         GVariant *child);
extern
GVariant * g_variant_new_array (const GVariantType *child_type,
                                                                         GVariant * const *children,
                                                                         gsize n_children);
extern
GVariant * g_variant_new_tuple (GVariant * const *children,
                                                                         gsize n_children);
extern
GVariant * g_variant_new_dict_entry (GVariant *key,
                                                                         GVariant *value);

extern
GVariant * g_variant_get_maybe (GVariant *value);
extern
gsize g_variant_n_children (GVariant *value);
extern
void g_variant_get_child (GVariant *value,
                                                                         gsize index_,
                                                                         const gchar *format_string,
                                                                         ...);
extern
GVariant * g_variant_get_child_value (GVariant *value,
                                                                         gsize index_);
extern
gboolean g_variant_lookup (GVariant *dictionary,
                                                                         const gchar *key,
                                                                         const gchar *format_string,
                                                                         ...);
extern
GVariant * g_variant_lookup_value (GVariant *dictionary,
                                                                         const gchar *key,
                                                                         const GVariantType *expected_type);
extern
gconstpointer g_variant_get_fixed_array (GVariant *value,
                                                                         gsize *n_elements,
                                                                         gsize element_size);

extern
gsize g_variant_get_size (GVariant *value);
extern
gconstpointer g_variant_get_data (GVariant *value);
extern
GBytes * g_variant_get_data_as_bytes (GVariant *value);
extern
void g_variant_store (GVariant *value,
                                                                         gpointer data);

extern
gchar * g_variant_print (GVariant *value,
                                                                         gboolean type_annotate);
extern
GString * g_variant_print_string (GVariant *value,
                                                                         GString *string,
                                                                         gboolean type_annotate);

extern
guint g_variant_hash (gconstpointer value);
extern
gboolean g_variant_equal (gconstpointer one,
                                                                         gconstpointer two);

extern
GVariant * g_variant_get_normal_form (GVariant *value);
extern
gboolean g_variant_is_normal_form (GVariant *value);
extern
GVariant * g_variant_byteswap (GVariant *value);

extern
GVariant * g_variant_new_from_bytes (const GVariantType *type,
                                                                         GBytes *bytes,
                                                                         gboolean trusted);
extern
GVariant * g_variant_new_from_data (const GVariantType *type,
                                                                         gconstpointer data,
                                                                         gsize size,
                                                                         gboolean trusted,
                                                                         GDestroyNotify notify,
                                                                         gpointer user_data);

typedef struct _GVariantIter GVariantIter;
struct _GVariantIter {

  gsize x[16];
};

extern
GVariantIter * g_variant_iter_new (GVariant *value);
extern
gsize g_variant_iter_init (GVariantIter *iter,
                                                                         GVariant *value);
extern
GVariantIter * g_variant_iter_copy (GVariantIter *iter);
extern
gsize g_variant_iter_n_children (GVariantIter *iter);
extern
void g_variant_iter_free (GVariantIter *iter);
extern
GVariant * g_variant_iter_next_value (GVariantIter *iter);
extern
gboolean g_variant_iter_next (GVariantIter *iter,
                                                                         const gchar *format_string,
                                                                         ...);
extern
gboolean g_variant_iter_loop (GVariantIter *iter,
                                                                         const gchar *format_string,
                                                                         ...);


typedef struct _GVariantBuilder GVariantBuilder;
struct _GVariantBuilder {

  union
  {
    struct {
      gsize partial_magic;
      const GVariantType *type;
      gsize y[14];
    } s;
    gsize x[16];
  } u;
};

typedef enum
{
  G_VARIANT_PARSE_ERROR_FAILED,
  G_VARIANT_PARSE_ERROR_BASIC_TYPE_EXPECTED,
  G_VARIANT_PARSE_ERROR_CANNOT_INFER_TYPE,
  G_VARIANT_PARSE_ERROR_DEFINITE_TYPE_EXPECTED,
  G_VARIANT_PARSE_ERROR_INPUT_NOT_AT_END,
  G_VARIANT_PARSE_ERROR_INVALID_CHARACTER,
  G_VARIANT_PARSE_ERROR_INVALID_FORMAT_STRING,
  G_VARIANT_PARSE_ERROR_INVALID_OBJECT_PATH,
  G_VARIANT_PARSE_ERROR_INVALID_SIGNATURE,
  G_VARIANT_PARSE_ERROR_INVALID_TYPE_STRING,
  G_VARIANT_PARSE_ERROR_NO_COMMON_TYPE,
  G_VARIANT_PARSE_ERROR_NUMBER_OUT_OF_RANGE,
  G_VARIANT_PARSE_ERROR_NUMBER_TOO_BIG,
  G_VARIANT_PARSE_ERROR_TYPE_ERROR,
  G_VARIANT_PARSE_ERROR_UNEXPECTED_TOKEN,
  G_VARIANT_PARSE_ERROR_UNKNOWN_KEYWORD,
  G_VARIANT_PARSE_ERROR_UNTERMINATED_STRING_CONSTANT,
  G_VARIANT_PARSE_ERROR_VALUE_EXPECTED
} GVariantParseError;


__attribute__((__deprecated__("Use '" "g_variant_parse_error_quark" "' instead"))) extern
GQuark g_variant_parser_get_error_quark (void);

extern
GQuark g_variant_parse_error_quark (void);
# 364 "/usr/include/glib-2.0/glib/gvariant.h"
extern
GVariantBuilder * g_variant_builder_new (const GVariantType *type);
extern
void g_variant_builder_unref (GVariantBuilder *builder);
extern
GVariantBuilder * g_variant_builder_ref (GVariantBuilder *builder);
extern
void g_variant_builder_init (GVariantBuilder *builder,
                                                                         const GVariantType *type);
extern
GVariant * g_variant_builder_end (GVariantBuilder *builder);
extern
void g_variant_builder_clear (GVariantBuilder *builder);
extern
void g_variant_builder_open (GVariantBuilder *builder,
                                                                         const GVariantType *type);
extern
void g_variant_builder_close (GVariantBuilder *builder);
extern
void g_variant_builder_add_value (GVariantBuilder *builder,
                                                                         GVariant *value);
extern
void g_variant_builder_add (GVariantBuilder *builder,
                                                                         const gchar *format_string,
                                                                         ...);
extern
void g_variant_builder_add_parsed (GVariantBuilder *builder,
                                                                         const gchar *format,
                                                                         ...);

extern
GVariant * g_variant_new (const gchar *format_string,
                                                                         ...);
extern
void g_variant_get (GVariant *value,
                                                                         const gchar *format_string,
                                                                         ...);
extern
GVariant * g_variant_new_va (const gchar *format_string,
                                                                         const gchar **endptr,
                                                                         va_list *app);
extern
void g_variant_get_va (GVariant *value,
                                                                         const gchar *format_string,
                                                                         const gchar **endptr,
                                                                         va_list *app);
extern
gboolean g_variant_check_format_string (GVariant *value,
                                                                         const gchar *format_string,
                                                                         gboolean copy_only);

extern
GVariant * g_variant_parse (const GVariantType *type,
                                                                         const gchar *text,
                                                                         const gchar *limit,
                                                                         const gchar **endptr,
                                                                         GError **error);
extern
GVariant * g_variant_new_parsed (const gchar *format,
                                                                         ...);
extern
GVariant * g_variant_new_parsed_va (const gchar *format,
                                                                         va_list *app);

extern
gchar * g_variant_parse_error_print_context (GError *error,
                                                                         const gchar *source_str);

extern
gint g_variant_compare (gconstpointer one,
                                                                         gconstpointer two);

typedef struct _GVariantDict GVariantDict;
struct _GVariantDict {

  union
  {
    struct {
      GVariant *asv;
      gsize partial_magic;
      gsize y[14];
    } s;
    gsize x[16];
  } u;
};
# 479 "/usr/include/glib-2.0/glib/gvariant.h"
extern
GVariantDict * g_variant_dict_new (GVariant *from_asv);

extern
void g_variant_dict_init (GVariantDict *dict,
                                                                         GVariant *from_asv);

extern
gboolean g_variant_dict_lookup (GVariantDict *dict,
                                                                         const gchar *key,
                                                                         const gchar *format_string,
                                                                         ...);
extern
GVariant * g_variant_dict_lookup_value (GVariantDict *dict,
                                                                         const gchar *key,
                                                                         const GVariantType *expected_type);
extern
gboolean g_variant_dict_contains (GVariantDict *dict,
                                                                         const gchar *key);
extern
void g_variant_dict_insert (GVariantDict *dict,
                                                                         const gchar *key,
                                                                         const gchar *format_string,
                                                                         ...);
extern
void g_variant_dict_insert_value (GVariantDict *dict,
                                                                         const gchar *key,
                                                                         GVariant *value);
extern
gboolean g_variant_dict_remove (GVariantDict *dict,
                                                                         const gchar *key);
extern
void g_variant_dict_clear (GVariantDict *dict);
extern
GVariant * g_variant_dict_end (GVariantDict *dict);
extern
GVariantDict * g_variant_dict_ref (GVariantDict *dict);
extern
void g_variant_dict_unref (GVariantDict *dict);

}
# 36 "/usr/include/glib-2.0/glib/gmessages.h" 2

extern "C" {



extern
gsize g_printf_string_upper_bound (const gchar* format,
         va_list args) __attribute__((__format__ (__printf__, 1, 0)));
# 52 "/usr/include/glib-2.0/glib/gmessages.h"
typedef enum
{

  G_LOG_FLAG_RECURSION = 1 << 0,
  G_LOG_FLAG_FATAL = 1 << 1,


  G_LOG_LEVEL_ERROR = 1 << 2,
  G_LOG_LEVEL_CRITICAL = 1 << 3,
  G_LOG_LEVEL_WARNING = 1 << 4,
  G_LOG_LEVEL_MESSAGE = 1 << 5,
  G_LOG_LEVEL_INFO = 1 << 6,
  G_LOG_LEVEL_DEBUG = 1 << 7,

  G_LOG_LEVEL_MASK = ~(G_LOG_FLAG_RECURSION | G_LOG_FLAG_FATAL)
} GLogLevelFlags;




typedef void (*GLogFunc) (const gchar *log_domain,
                                                 GLogLevelFlags log_level,
                                                 const gchar *message,
                                                 gpointer user_data);



extern
guint g_log_set_handler (const gchar *log_domain,
                                         GLogLevelFlags log_levels,
                                         GLogFunc log_func,
                                         gpointer user_data);
extern
guint g_log_set_handler_full (const gchar *log_domain,
                                         GLogLevelFlags log_levels,
                                         GLogFunc log_func,
                                         gpointer user_data,
                                         GDestroyNotify destroy);
extern
void g_log_remove_handler (const gchar *log_domain,
                                         guint handler_id);
extern
void g_log_default_handler (const gchar *log_domain,
                                         GLogLevelFlags log_level,
                                         const gchar *message,
                                         gpointer unused_data);
extern
GLogFunc g_log_set_default_handler (GLogFunc log_func,
        gpointer user_data);
extern
void g_log (const gchar *log_domain,
                                         GLogLevelFlags log_level,
                                         const gchar *format,
                                         ...) __attribute__((__format__ (__printf__, 3, 4)));
extern
void g_logv (const gchar *log_domain,
                                         GLogLevelFlags log_level,
                                         const gchar *format,
                                         va_list args) __attribute__((__format__ (__printf__, 3, 0)));
extern
GLogLevelFlags g_log_set_fatal_mask (const gchar *log_domain,
                                         GLogLevelFlags fatal_mask);
extern
GLogLevelFlags g_log_set_always_fatal (GLogLevelFlags fatal_mask);
# 133 "/usr/include/glib-2.0/glib/gmessages.h"
typedef enum
{
  G_LOG_WRITER_HANDLED = 1,
  G_LOG_WRITER_UNHANDLED = 0,
} GLogWriterOutput;
# 155 "/usr/include/glib-2.0/glib/gmessages.h"
typedef struct _GLogField GLogField;
struct _GLogField
{
  const gchar *key;
  gconstpointer value;
  gssize length;
};
# 186 "/usr/include/glib-2.0/glib/gmessages.h"
typedef GLogWriterOutput (*GLogWriterFunc) (GLogLevelFlags log_level,
                                                const GLogField *fields,
                                                gsize n_fields,
                                                gpointer user_data);

extern
void g_log_structured (const gchar *log_domain,
                                                GLogLevelFlags log_level,
                                                ...);
extern
void g_log_structured_array (GLogLevelFlags log_level,
                                                const GLogField *fields,
                                                gsize n_fields);

extern
void g_log_variant (const gchar *log_domain,
                                                GLogLevelFlags log_level,
                                                GVariant *fields);

extern
void g_log_set_writer_func (GLogWriterFunc func,
                                                gpointer user_data,
                                                GDestroyNotify user_data_free);

extern
gboolean g_log_writer_supports_color (gint output_fd);
extern
gboolean g_log_writer_is_journald (gint output_fd);

extern
gchar *g_log_writer_format_fields (GLogLevelFlags log_level,
                                                const GLogField *fields,
                                                gsize n_fields,
                                                gboolean use_color);

extern
GLogWriterOutput g_log_writer_journald (GLogLevelFlags log_level,
                                                const GLogField *fields,
                                                gsize n_fields,
                                                gpointer user_data);
extern
GLogWriterOutput g_log_writer_standard_streams (GLogLevelFlags log_level,
                                                const GLogField *fields,
                                                gsize n_fields,
                                                gpointer user_data);
extern
GLogWriterOutput g_log_writer_default (GLogLevelFlags log_level,
                                                const GLogField *fields,
                                                gsize n_fields,
                                                gpointer user_data);
# 255 "/usr/include/glib-2.0/glib/gmessages.h"
void _g_log_fallback_handler (const gchar *log_domain,
       GLogLevelFlags log_level,
       const gchar *message,
       gpointer unused_data);


extern
void g_return_if_fail_warning (const char *log_domain,
          const char *pretty_function,
          const char *expression) ;
extern
void g_warn_message (const char *domain,
                               const char *file,
                               int line,
                               const char *func,
                               const char *warnexpr) ;
__attribute__((__deprecated__)) extern
void g_assert_warning (const char *log_domain,
          const char *file,
          const int line,
                 const char *pretty_function,
                 const char *expression) __attribute__((__noreturn__));
# 472 "/usr/include/glib-2.0/glib/gmessages.h"
typedef void (*GPrintFunc) (const gchar *string);
extern
void g_print (const gchar *format,
                                         ...) __attribute__((__format__ (__printf__, 1, 2)));
extern
GPrintFunc g_set_print_handler (GPrintFunc func);
extern
void g_printerr (const gchar *format,
                                         ...) __attribute__((__format__ (__printf__, 1, 2)));
extern
GPrintFunc g_set_printerr_handler (GPrintFunc func);
# 614 "/usr/include/glib-2.0/glib/gmessages.h"
}
# 63 "/usr/include/glib-2.0/glib.h" 2

# 1 "/usr/include/glib-2.0/glib/goption.h" 1
# 29 "/usr/include/glib-2.0/glib/goption.h"
extern "C" {
# 38 "/usr/include/glib-2.0/glib/goption.h"
typedef struct _GOptionContext GOptionContext;
# 51 "/usr/include/glib-2.0/glib/goption.h"
typedef struct _GOptionGroup GOptionGroup;
typedef struct _GOptionEntry GOptionEntry;
# 81 "/usr/include/glib-2.0/glib/goption.h"
typedef enum
{
  G_OPTION_FLAG_NONE = 0,
  G_OPTION_FLAG_HIDDEN = 1 << 0,
  G_OPTION_FLAG_IN_MAIN = 1 << 1,
  G_OPTION_FLAG_REVERSE = 1 << 2,
  G_OPTION_FLAG_NO_ARG = 1 << 3,
  G_OPTION_FLAG_FILENAME = 1 << 4,
  G_OPTION_FLAG_OPTIONAL_ARG = 1 << 5,
  G_OPTION_FLAG_NOALIAS = 1 << 6
} GOptionFlags;
# 118 "/usr/include/glib-2.0/glib/goption.h"
typedef enum
{
  G_OPTION_ARG_NONE,
  G_OPTION_ARG_STRING,
  G_OPTION_ARG_INT,
  G_OPTION_ARG_CALLBACK,
  G_OPTION_ARG_FILENAME,
  G_OPTION_ARG_STRING_ARRAY,
  G_OPTION_ARG_FILENAME_ARRAY,
  G_OPTION_ARG_DOUBLE,
  G_OPTION_ARG_INT64
} GOptionArg;
# 148 "/usr/include/glib-2.0/glib/goption.h"
typedef gboolean (*GOptionArgFunc) (const gchar *option_name,
        const gchar *value,
        gpointer data,
        GError **error);
# 166 "/usr/include/glib-2.0/glib/goption.h"
typedef gboolean (*GOptionParseFunc) (GOptionContext *context,
          GOptionGroup *group,
          gpointer data,
          GError **error);
# 181 "/usr/include/glib-2.0/glib/goption.h"
typedef void (*GOptionErrorFunc) (GOptionContext *context,
      GOptionGroup *group,
      gpointer data,
      GError **error);
# 205 "/usr/include/glib-2.0/glib/goption.h"
typedef enum
{
  G_OPTION_ERROR_UNKNOWN_OPTION,
  G_OPTION_ERROR_BAD_VALUE,
  G_OPTION_ERROR_FAILED
} GOptionError;

extern
GQuark g_option_error_quark (void);
# 257 "/usr/include/glib-2.0/glib/goption.h"
struct _GOptionEntry
{
  const gchar *long_name;
  gchar short_name;
  gint flags;

  GOptionArg arg;
  gpointer arg_data;

  const gchar *description;
  const gchar *arg_description;
};
# 288 "/usr/include/glib-2.0/glib/goption.h"
extern
GOptionContext *g_option_context_new (const gchar *parameter_string);
extern
void g_option_context_set_summary (GOptionContext *context,
                                                   const gchar *summary);
extern
const gchar * g_option_context_get_summary (GOptionContext *context);
extern
void g_option_context_set_description (GOptionContext *context,
                                                   const gchar *description);
extern
const gchar * g_option_context_get_description (GOptionContext *context);
extern
void g_option_context_free (GOptionContext *context);
extern
void g_option_context_set_help_enabled (GOptionContext *context,
         gboolean help_enabled);
extern
gboolean g_option_context_get_help_enabled (GOptionContext *context);
extern
void g_option_context_set_ignore_unknown_options (GOptionContext *context,
            gboolean ignore_unknown);
extern
gboolean g_option_context_get_ignore_unknown_options (GOptionContext *context);

extern
void g_option_context_set_strict_posix (GOptionContext *context,
                                                             gboolean strict_posix);
extern
gboolean g_option_context_get_strict_posix (GOptionContext *context);

extern
void g_option_context_add_main_entries (GOptionContext *context,
         const GOptionEntry *entries,
         const gchar *translation_domain);
extern
gboolean g_option_context_parse (GOptionContext *context,
         gint *argc,
         gchar ***argv,
         GError **error);
extern
gboolean g_option_context_parse_strv (GOptionContext *context,
                                                   gchar ***arguments,
                                                   GError **error);
extern
void g_option_context_set_translate_func (GOptionContext *context,
           GTranslateFunc func,
           gpointer data,
           GDestroyNotify destroy_notify);
extern
void g_option_context_set_translation_domain (GOptionContext *context,
        const gchar *domain);

extern
void g_option_context_add_group (GOptionContext *context,
       GOptionGroup *group);
extern
void g_option_context_set_main_group (GOptionContext *context,
            GOptionGroup *group);
extern
GOptionGroup *g_option_context_get_main_group (GOptionContext *context);
extern
gchar *g_option_context_get_help (GOptionContext *context,
                                               gboolean main_help,
                                               GOptionGroup *group);

extern
GOptionGroup *g_option_group_new (const gchar *name,
           const gchar *description,
           const gchar *help_description,
           gpointer user_data,
           GDestroyNotify destroy);
extern
void g_option_group_set_parse_hooks (GOptionGroup *group,
           GOptionParseFunc pre_parse_func,
           GOptionParseFunc post_parse_func);
extern
void g_option_group_set_error_hook (GOptionGroup *group,
           GOptionErrorFunc error_func);
__attribute__((__deprecated__)) extern
void g_option_group_free (GOptionGroup *group);
extern
GOptionGroup *g_option_group_ref (GOptionGroup *group);
extern
void g_option_group_unref (GOptionGroup *group);
extern
void g_option_group_add_entries (GOptionGroup *group,
           const GOptionEntry *entries);
extern
void g_option_group_set_translate_func (GOptionGroup *group,
           GTranslateFunc func,
           gpointer data,
           GDestroyNotify destroy_notify);
extern
void g_option_group_set_translation_domain (GOptionGroup *group,
           const gchar *domain);

}
# 65 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gpattern.h" 1
# 27 "/usr/include/glib-2.0/glib/gpattern.h"
extern "C" {


typedef struct _GPatternSpec GPatternSpec;

extern
GPatternSpec* g_pattern_spec_new (const gchar *pattern);
extern
void g_pattern_spec_free (GPatternSpec *pspec);
extern
gboolean g_pattern_spec_equal (GPatternSpec *pspec1,
     GPatternSpec *pspec2);
extern
gboolean g_pattern_match (GPatternSpec *pspec,
     guint string_length,
     const gchar *string,
     const gchar *string_reversed);
extern
gboolean g_pattern_match_string (GPatternSpec *pspec,
     const gchar *string);
extern
gboolean g_pattern_match_simple (const gchar *pattern,
     const gchar *string);

}
# 66 "/usr/include/glib-2.0/glib.h" 2

# 1 "/usr/include/glib-2.0/glib/gprimes.h" 1
# 34 "/usr/include/glib-2.0/glib/gprimes.h"
extern "C" {
# 45 "/usr/include/glib-2.0/glib/gprimes.h"
extern
guint g_spaced_primes_closest (guint num) __attribute__((__const__));

}
# 68 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gqsort.h" 1
# 34 "/usr/include/glib-2.0/glib/gqsort.h"
extern "C" {

extern
void g_qsort_with_data (gconstpointer pbase,
   gint total_elems,
   gsize size,
   GCompareDataFunc compare_func,
   gpointer user_data);

}
# 69 "/usr/include/glib-2.0/glib.h" 2

# 1 "/usr/include/glib-2.0/glib/gqueue.h" 1
# 34 "/usr/include/glib-2.0/glib/gqueue.h"
extern "C" {

typedef struct _GQueue GQueue;
# 47 "/usr/include/glib-2.0/glib/gqueue.h"
struct _GQueue
{
  GList *head;
  GList *tail;
  guint length;
};
# 72 "/usr/include/glib-2.0/glib/gqueue.h"
extern
GQueue* g_queue_new (void);
extern
void g_queue_free (GQueue *queue);
extern
void g_queue_free_full (GQueue *queue,
    GDestroyNotify free_func);
extern
void g_queue_init (GQueue *queue);
extern
void g_queue_clear (GQueue *queue);
extern
gboolean g_queue_is_empty (GQueue *queue);
extern
guint g_queue_get_length (GQueue *queue);
extern
void g_queue_reverse (GQueue *queue);
extern
GQueue * g_queue_copy (GQueue *queue);
extern
void g_queue_foreach (GQueue *queue,
                                 GFunc func,
                                 gpointer user_data);
extern
GList * g_queue_find (GQueue *queue,
                                 gconstpointer data);
extern
GList * g_queue_find_custom (GQueue *queue,
                                 gconstpointer data,
                                 GCompareFunc func);
extern
void g_queue_sort (GQueue *queue,
                                 GCompareDataFunc compare_func,
                                 gpointer user_data);

extern
void g_queue_push_head (GQueue *queue,
                                 gpointer data);
extern
void g_queue_push_tail (GQueue *queue,
                                 gpointer data);
extern
void g_queue_push_nth (GQueue *queue,
                                 gpointer data,
                                 gint n);
extern
gpointer g_queue_pop_head (GQueue *queue);
extern
gpointer g_queue_pop_tail (GQueue *queue);
extern
gpointer g_queue_pop_nth (GQueue *queue,
                                 guint n);
extern
gpointer g_queue_peek_head (GQueue *queue);
extern
gpointer g_queue_peek_tail (GQueue *queue);
extern
gpointer g_queue_peek_nth (GQueue *queue,
                                 guint n);
extern
gint g_queue_index (GQueue *queue,
                                 gconstpointer data);
extern
gboolean g_queue_remove (GQueue *queue,
                                 gconstpointer data);
extern
guint g_queue_remove_all (GQueue *queue,
                                 gconstpointer data);
extern
void g_queue_insert_before (GQueue *queue,
                                 GList *sibling,
                                 gpointer data);
extern
void g_queue_insert_after (GQueue *queue,
                                 GList *sibling,
                                 gpointer data);
extern
void g_queue_insert_sorted (GQueue *queue,
                                 gpointer data,
                                 GCompareDataFunc func,
                                 gpointer user_data);

extern
void g_queue_push_head_link (GQueue *queue,
                                 GList *link_);
extern
void g_queue_push_tail_link (GQueue *queue,
                                 GList *link_);
extern
void g_queue_push_nth_link (GQueue *queue,
                                 gint n,
                                 GList *link_);
extern
GList* g_queue_pop_head_link (GQueue *queue);
extern
GList* g_queue_pop_tail_link (GQueue *queue);
extern
GList* g_queue_pop_nth_link (GQueue *queue,
                                 guint n);
extern
GList* g_queue_peek_head_link (GQueue *queue);
extern
GList* g_queue_peek_tail_link (GQueue *queue);
extern
GList* g_queue_peek_nth_link (GQueue *queue,
                                 guint n);
extern
gint g_queue_link_index (GQueue *queue,
                                 GList *link_);
extern
void g_queue_unlink (GQueue *queue,
                                 GList *link_);
extern
void g_queue_delete_link (GQueue *queue,
                                 GList *link_);

}
# 71 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/grand.h" 1
# 34 "/usr/include/glib-2.0/glib/grand.h"
extern "C" {

typedef struct _GRand GRand;
# 47 "/usr/include/glib-2.0/glib/grand.h"
extern
GRand* g_rand_new_with_seed (guint32 seed);
extern
GRand* g_rand_new_with_seed_array (const guint32 *seed,
        guint seed_length);
extern
GRand* g_rand_new (void);
extern
void g_rand_free (GRand *rand_);
extern
GRand* g_rand_copy (GRand *rand_);
extern
void g_rand_set_seed (GRand *rand_,
          guint32 seed);
extern
void g_rand_set_seed_array (GRand *rand_,
          const guint32 *seed,
          guint seed_length);



extern
guint32 g_rand_int (GRand *rand_);
extern
gint32 g_rand_int_range (GRand *rand_,
          gint32 begin,
          gint32 end);
extern
gdouble g_rand_double (GRand *rand_);
extern
gdouble g_rand_double_range (GRand *rand_,
          gdouble begin,
          gdouble end);
extern
void g_random_set_seed (guint32 seed);



extern
guint32 g_random_int (void);
extern
gint32 g_random_int_range (gint32 begin,
          gint32 end);
extern
gdouble g_random_double (void);
extern
gdouble g_random_double_range (gdouble begin,
          gdouble end);


}
# 72 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gregex.h" 1
# 32 "/usr/include/glib-2.0/glib/gregex.h"
extern "C" {
# 141 "/usr/include/glib-2.0/glib/gregex.h"
typedef enum
{
  G_REGEX_ERROR_COMPILE,
  G_REGEX_ERROR_OPTIMIZE,
  G_REGEX_ERROR_REPLACE,
  G_REGEX_ERROR_MATCH,
  G_REGEX_ERROR_INTERNAL,


  G_REGEX_ERROR_STRAY_BACKSLASH = 101,
  G_REGEX_ERROR_MISSING_CONTROL_CHAR = 102,
  G_REGEX_ERROR_UNRECOGNIZED_ESCAPE = 103,
  G_REGEX_ERROR_QUANTIFIERS_OUT_OF_ORDER = 104,
  G_REGEX_ERROR_QUANTIFIER_TOO_BIG = 105,
  G_REGEX_ERROR_UNTERMINATED_CHARACTER_CLASS = 106,
  G_REGEX_ERROR_INVALID_ESCAPE_IN_CHARACTER_CLASS = 107,
  G_REGEX_ERROR_RANGE_OUT_OF_ORDER = 108,
  G_REGEX_ERROR_NOTHING_TO_REPEAT = 109,
  G_REGEX_ERROR_UNRECOGNIZED_CHARACTER = 112,
  G_REGEX_ERROR_POSIX_NAMED_CLASS_OUTSIDE_CLASS = 113,
  G_REGEX_ERROR_UNMATCHED_PARENTHESIS = 114,
  G_REGEX_ERROR_INEXISTENT_SUBPATTERN_REFERENCE = 115,
  G_REGEX_ERROR_UNTERMINATED_COMMENT = 118,
  G_REGEX_ERROR_EXPRESSION_TOO_LARGE = 120,
  G_REGEX_ERROR_MEMORY_ERROR = 121,
  G_REGEX_ERROR_VARIABLE_LENGTH_LOOKBEHIND = 125,
  G_REGEX_ERROR_MALFORMED_CONDITION = 126,
  G_REGEX_ERROR_TOO_MANY_CONDITIONAL_BRANCHES = 127,
  G_REGEX_ERROR_ASSERTION_EXPECTED = 128,
  G_REGEX_ERROR_UNKNOWN_POSIX_CLASS_NAME = 130,
  G_REGEX_ERROR_POSIX_COLLATING_ELEMENTS_NOT_SUPPORTED = 131,
  G_REGEX_ERROR_HEX_CODE_TOO_LARGE = 134,
  G_REGEX_ERROR_INVALID_CONDITION = 135,
  G_REGEX_ERROR_SINGLE_BYTE_MATCH_IN_LOOKBEHIND = 136,
  G_REGEX_ERROR_INFINITE_LOOP = 140,
  G_REGEX_ERROR_MISSING_SUBPATTERN_NAME_TERMINATOR = 142,
  G_REGEX_ERROR_DUPLICATE_SUBPATTERN_NAME = 143,
  G_REGEX_ERROR_MALFORMED_PROPERTY = 146,
  G_REGEX_ERROR_UNKNOWN_PROPERTY = 147,
  G_REGEX_ERROR_SUBPATTERN_NAME_TOO_LONG = 148,
  G_REGEX_ERROR_TOO_MANY_SUBPATTERNS = 149,
  G_REGEX_ERROR_INVALID_OCTAL_VALUE = 151,
  G_REGEX_ERROR_TOO_MANY_BRANCHES_IN_DEFINE = 154,
  G_REGEX_ERROR_DEFINE_REPETION = 155,
  G_REGEX_ERROR_INCONSISTENT_NEWLINE_OPTIONS = 156,
  G_REGEX_ERROR_MISSING_BACK_REFERENCE = 157,
  G_REGEX_ERROR_INVALID_RELATIVE_REFERENCE = 158,
  G_REGEX_ERROR_BACKTRACKING_CONTROL_VERB_ARGUMENT_FORBIDDEN = 159,
  G_REGEX_ERROR_UNKNOWN_BACKTRACKING_CONTROL_VERB = 160,
  G_REGEX_ERROR_NUMBER_TOO_BIG = 161,
  G_REGEX_ERROR_MISSING_SUBPATTERN_NAME = 162,
  G_REGEX_ERROR_MISSING_DIGIT = 163,
  G_REGEX_ERROR_INVALID_DATA_CHARACTER = 164,
  G_REGEX_ERROR_EXTRA_SUBPATTERN_NAME = 165,
  G_REGEX_ERROR_BACKTRACKING_CONTROL_VERB_ARGUMENT_REQUIRED = 166,
  G_REGEX_ERROR_INVALID_CONTROL_CHAR = 168,
  G_REGEX_ERROR_MISSING_NAME = 169,
  G_REGEX_ERROR_NOT_SUPPORTED_IN_CLASS = 171,
  G_REGEX_ERROR_TOO_MANY_FORWARD_REFERENCES = 172,
  G_REGEX_ERROR_NAME_TOO_LONG = 175,
  G_REGEX_ERROR_CHARACTER_VALUE_TOO_LARGE = 176
} GRegexError;
# 215 "/usr/include/glib-2.0/glib/gregex.h"
extern
GQuark g_regex_error_quark (void);
# 297 "/usr/include/glib-2.0/glib/gregex.h"
typedef enum
{
  G_REGEX_CASELESS = 1 << 0,
  G_REGEX_MULTILINE = 1 << 1,
  G_REGEX_DOTALL = 1 << 2,
  G_REGEX_EXTENDED = 1 << 3,
  G_REGEX_ANCHORED = 1 << 4,
  G_REGEX_DOLLAR_ENDONLY = 1 << 5,
  G_REGEX_UNGREEDY = 1 << 9,
  G_REGEX_RAW = 1 << 11,
  G_REGEX_NO_AUTO_CAPTURE = 1 << 12,
  G_REGEX_OPTIMIZE = 1 << 13,
  G_REGEX_FIRSTLINE = 1 << 18,
  G_REGEX_DUPNAMES = 1 << 19,
  G_REGEX_NEWLINE_CR = 1 << 20,
  G_REGEX_NEWLINE_LF = 1 << 21,
  G_REGEX_NEWLINE_CRLF = G_REGEX_NEWLINE_CR | G_REGEX_NEWLINE_LF,
  G_REGEX_NEWLINE_ANYCRLF = G_REGEX_NEWLINE_CR | 1 << 22,
  G_REGEX_BSR_ANYCRLF = 1 << 23,
  G_REGEX_JAVASCRIPT_COMPAT = 1 << 25
} GRegexCompileFlags;
# 387 "/usr/include/glib-2.0/glib/gregex.h"
typedef enum
{
  G_REGEX_MATCH_ANCHORED = 1 << 4,
  G_REGEX_MATCH_NOTBOL = 1 << 7,
  G_REGEX_MATCH_NOTEOL = 1 << 8,
  G_REGEX_MATCH_NOTEMPTY = 1 << 10,
  G_REGEX_MATCH_PARTIAL = 1 << 15,
  G_REGEX_MATCH_NEWLINE_CR = 1 << 20,
  G_REGEX_MATCH_NEWLINE_LF = 1 << 21,
  G_REGEX_MATCH_NEWLINE_CRLF = G_REGEX_MATCH_NEWLINE_CR | G_REGEX_MATCH_NEWLINE_LF,
  G_REGEX_MATCH_NEWLINE_ANY = 1 << 22,
  G_REGEX_MATCH_NEWLINE_ANYCRLF = G_REGEX_MATCH_NEWLINE_CR | G_REGEX_MATCH_NEWLINE_ANY,
  G_REGEX_MATCH_BSR_ANYCRLF = 1 << 23,
  G_REGEX_MATCH_BSR_ANY = 1 << 24,
  G_REGEX_MATCH_PARTIAL_SOFT = G_REGEX_MATCH_PARTIAL,
  G_REGEX_MATCH_PARTIAL_HARD = 1 << 27,
  G_REGEX_MATCH_NOTEMPTY_ATSTART = 1 << 28
} GRegexMatchFlags;
# 414 "/usr/include/glib-2.0/glib/gregex.h"
typedef struct _GRegex GRegex;
# 423 "/usr/include/glib-2.0/glib/gregex.h"
typedef struct _GMatchInfo GMatchInfo;
# 442 "/usr/include/glib-2.0/glib/gregex.h"
typedef gboolean (*GRegexEvalCallback) (const GMatchInfo *match_info,
       GString *result,
       gpointer user_data);


extern
GRegex *g_regex_new (const gchar *pattern,
       GRegexCompileFlags compile_options,
       GRegexMatchFlags match_options,
       GError **error);
extern
GRegex *g_regex_ref (GRegex *regex);
extern
void g_regex_unref (GRegex *regex);
extern
const gchar *g_regex_get_pattern (const GRegex *regex);
extern
gint g_regex_get_max_backref (const GRegex *regex);
extern
gint g_regex_get_capture_count (const GRegex *regex);
extern
gboolean g_regex_get_has_cr_or_lf (const GRegex *regex);
extern
gint g_regex_get_max_lookbehind (const GRegex *regex);
extern
gint g_regex_get_string_number (const GRegex *regex,
       const gchar *name);
extern
gchar *g_regex_escape_string (const gchar *string,
       gint length);
extern
gchar *g_regex_escape_nul (const gchar *string,
       gint length);

extern
GRegexCompileFlags g_regex_get_compile_flags (const GRegex *regex);
extern
GRegexMatchFlags g_regex_get_match_flags (const GRegex *regex);


extern
gboolean g_regex_match_simple (const gchar *pattern,
       const gchar *string,
       GRegexCompileFlags compile_options,
       GRegexMatchFlags match_options);
extern
gboolean g_regex_match (const GRegex *regex,
       const gchar *string,
       GRegexMatchFlags match_options,
       GMatchInfo **match_info);
extern
gboolean g_regex_match_full (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       GRegexMatchFlags match_options,
       GMatchInfo **match_info,
       GError **error);
extern
gboolean g_regex_match_all (const GRegex *regex,
       const gchar *string,
       GRegexMatchFlags match_options,
       GMatchInfo **match_info);
extern
gboolean g_regex_match_all_full (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       GRegexMatchFlags match_options,
       GMatchInfo **match_info,
       GError **error);


extern
gchar **g_regex_split_simple (const gchar *pattern,
       const gchar *string,
       GRegexCompileFlags compile_options,
       GRegexMatchFlags match_options);
extern
gchar **g_regex_split (const GRegex *regex,
       const gchar *string,
       GRegexMatchFlags match_options);
extern
gchar **g_regex_split_full (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       GRegexMatchFlags match_options,
       gint max_tokens,
       GError **error);


extern
gchar *g_regex_replace (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       const gchar *replacement,
       GRegexMatchFlags match_options,
       GError **error);
extern
gchar *g_regex_replace_literal (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       const gchar *replacement,
       GRegexMatchFlags match_options,
       GError **error);
extern
gchar *g_regex_replace_eval (const GRegex *regex,
       const gchar *string,
       gssize string_len,
       gint start_position,
       GRegexMatchFlags match_options,
       GRegexEvalCallback eval,
       gpointer user_data,
       GError **error);
extern
gboolean g_regex_check_replacement (const gchar *replacement,
       gboolean *has_references,
       GError **error);


extern
GRegex *g_match_info_get_regex (const GMatchInfo *match_info);
extern
const gchar *g_match_info_get_string (const GMatchInfo *match_info);

extern
GMatchInfo *g_match_info_ref (GMatchInfo *match_info);
extern
void g_match_info_unref (GMatchInfo *match_info);
extern
void g_match_info_free (GMatchInfo *match_info);
extern
gboolean g_match_info_next (GMatchInfo *match_info,
       GError **error);
extern
gboolean g_match_info_matches (const GMatchInfo *match_info);
extern
gint g_match_info_get_match_count (const GMatchInfo *match_info);
extern
gboolean g_match_info_is_partial_match (const GMatchInfo *match_info);
extern
gchar *g_match_info_expand_references(const GMatchInfo *match_info,
       const gchar *string_to_expand,
       GError **error);
extern
gchar *g_match_info_fetch (const GMatchInfo *match_info,
       gint match_num);
extern
gboolean g_match_info_fetch_pos (const GMatchInfo *match_info,
       gint match_num,
       gint *start_pos,
       gint *end_pos);
extern
gchar *g_match_info_fetch_named (const GMatchInfo *match_info,
       const gchar *name);
extern
gboolean g_match_info_fetch_named_pos (const GMatchInfo *match_info,
       const gchar *name,
       gint *start_pos,
       gint *end_pos);
extern
gchar **g_match_info_fetch_all (const GMatchInfo *match_info);

}
# 73 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gscanner.h" 1
# 35 "/usr/include/glib-2.0/glib/gscanner.h"
extern "C" {

typedef struct _GScanner GScanner;
typedef struct _GScannerConfig GScannerConfig;
typedef union _GTokenValue GTokenValue;

typedef void (*GScannerMsgFunc) (GScanner *scanner,
       gchar *message,
       gboolean error);
# 62 "/usr/include/glib-2.0/glib/gscanner.h"
typedef enum
{
  G_ERR_UNKNOWN,
  G_ERR_UNEXP_EOF,
  G_ERR_UNEXP_EOF_IN_STRING,
  G_ERR_UNEXP_EOF_IN_COMMENT,
  G_ERR_NON_DIGIT_IN_CONST,
  G_ERR_DIGIT_RADIX,
  G_ERR_FLOAT_RADIX,
  G_ERR_FLOAT_MALFORMED
} GErrorType;


typedef enum
{
  G_TOKEN_EOF = 0,

  G_TOKEN_LEFT_PAREN = '(',
  G_TOKEN_RIGHT_PAREN = ')',
  G_TOKEN_LEFT_CURLY = '{',
  G_TOKEN_RIGHT_CURLY = '}',
  G_TOKEN_LEFT_BRACE = '[',
  G_TOKEN_RIGHT_BRACE = ']',
  G_TOKEN_EQUAL_SIGN = '=',
  G_TOKEN_COMMA = ',',

  G_TOKEN_NONE = 256,

  G_TOKEN_ERROR,

  G_TOKEN_CHAR,
  G_TOKEN_BINARY,
  G_TOKEN_OCTAL,
  G_TOKEN_INT,
  G_TOKEN_HEX,
  G_TOKEN_FLOAT,
  G_TOKEN_STRING,

  G_TOKEN_SYMBOL,
  G_TOKEN_IDENTIFIER,
  G_TOKEN_IDENTIFIER_NULL,

  G_TOKEN_COMMENT_SINGLE,
  G_TOKEN_COMMENT_MULTI,


  G_TOKEN_LAST
} GTokenType;

union _GTokenValue
{
  gpointer v_symbol;
  gchar *v_identifier;
  gulong v_binary;
  gulong v_octal;
  gulong v_int;
  guint64 v_int64;
  gdouble v_float;
  gulong v_hex;
  gchar *v_string;
  gchar *v_comment;
  guchar v_char;
  guint v_error;
};

struct _GScannerConfig
{


  gchar *cset_skip_characters;
  gchar *cset_identifier_first;
  gchar *cset_identifier_nth;
  gchar *cpair_comment_single;



  guint case_sensitive : 1;




  guint skip_comment_multi : 1;
  guint skip_comment_single : 1;
  guint scan_comment_multi : 1;
  guint scan_identifier : 1;
  guint scan_identifier_1char : 1;
  guint scan_identifier_NULL : 1;
  guint scan_symbols : 1;
  guint scan_binary : 1;
  guint scan_octal : 1;
  guint scan_float : 1;
  guint scan_hex : 1;
  guint scan_hex_dollar : 1;
  guint scan_string_sq : 1;
  guint scan_string_dq : 1;
  guint numbers_2_int : 1;
  guint int_2_float : 1;
  guint identifier_2_string : 1;
  guint char_2_token : 1;
  guint symbol_2_token : 1;
  guint scope_0_fallback : 1;
  guint store_int64 : 1;


  guint padding_dummy;
};

struct _GScanner
{

  gpointer user_data;
  guint max_parse_errors;


  guint parse_errors;


  const gchar *input_name;


  GData *qdata;


  GScannerConfig *config;


  GTokenType token;
  GTokenValue value;
  guint line;
  guint position;


  GTokenType next_token;
  GTokenValue next_value;
  guint next_line;
  guint next_position;



  GHashTable *symbol_table;
  gint input_fd;
  const gchar *text;
  const gchar *text_end;
  gchar *buffer;
  guint scope_id;



  GScannerMsgFunc msg_handler;
};

extern
GScanner* g_scanner_new (const GScannerConfig *config_templ);
extern
void g_scanner_destroy (GScanner *scanner);
extern
void g_scanner_input_file (GScanner *scanner,
       gint input_fd);
extern
void g_scanner_sync_file_offset (GScanner *scanner);
extern
void g_scanner_input_text (GScanner *scanner,
       const gchar *text,
       guint text_len);
extern
GTokenType g_scanner_get_next_token (GScanner *scanner);
extern
GTokenType g_scanner_peek_next_token (GScanner *scanner);
extern
GTokenType g_scanner_cur_token (GScanner *scanner);
extern
GTokenValue g_scanner_cur_value (GScanner *scanner);
extern
guint g_scanner_cur_line (GScanner *scanner);
extern
guint g_scanner_cur_position (GScanner *scanner);
extern
gboolean g_scanner_eof (GScanner *scanner);
extern
guint g_scanner_set_scope (GScanner *scanner,
       guint scope_id);
extern
void g_scanner_scope_add_symbol (GScanner *scanner,
       guint scope_id,
       const gchar *symbol,
       gpointer value);
extern
void g_scanner_scope_remove_symbol (GScanner *scanner,
       guint scope_id,
       const gchar *symbol);
extern
gpointer g_scanner_scope_lookup_symbol (GScanner *scanner,
       guint scope_id,
       const gchar *symbol);
extern
void g_scanner_scope_foreach_symbol (GScanner *scanner,
       guint scope_id,
       GHFunc func,
       gpointer user_data);
extern
gpointer g_scanner_lookup_symbol (GScanner *scanner,
       const gchar *symbol);
extern
void g_scanner_unexp_token (GScanner *scanner,
       GTokenType expected_token,
       const gchar *identifier_spec,
       const gchar *symbol_spec,
       const gchar *symbol_name,
       const gchar *message,
       gint is_error);
extern
void g_scanner_error (GScanner *scanner,
       const gchar *format,
       ...) __attribute__((__format__ (__printf__, 2, 3)));
extern
void g_scanner_warn (GScanner *scanner,
       const gchar *format,
       ...) __attribute__((__format__ (__printf__, 2, 3)));
# 301 "/usr/include/glib-2.0/glib/gscanner.h"
}
# 74 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gsequence.h" 1
# 28 "/usr/include/glib-2.0/glib/gsequence.h"
extern "C" {

typedef struct _GSequence GSequence;
typedef struct _GSequenceNode GSequenceIter;

typedef gint (* GSequenceIterCompareFunc) (GSequenceIter *a,
                                           GSequenceIter *b,
                                           gpointer data);



extern
GSequence * g_sequence_new (GDestroyNotify data_destroy);
extern
void g_sequence_free (GSequence *seq);
extern
gint g_sequence_get_length (GSequence *seq);
extern
void g_sequence_foreach (GSequence *seq,
                                              GFunc func,
                                              gpointer user_data);
extern
void g_sequence_foreach_range (GSequenceIter *begin,
                                              GSequenceIter *end,
                                              GFunc func,
                                              gpointer user_data);
extern
void g_sequence_sort (GSequence *seq,
                                              GCompareDataFunc cmp_func,
                                              gpointer cmp_data);
extern
void g_sequence_sort_iter (GSequence *seq,
                                              GSequenceIterCompareFunc cmp_func,
                                              gpointer cmp_data);
extern
gboolean g_sequence_is_empty (GSequence *seq);



extern
GSequenceIter *g_sequence_get_begin_iter (GSequence *seq);
extern
GSequenceIter *g_sequence_get_end_iter (GSequence *seq);
extern
GSequenceIter *g_sequence_get_iter_at_pos (GSequence *seq,
                                              gint pos);
extern
GSequenceIter *g_sequence_append (GSequence *seq,
                                              gpointer data);
extern
GSequenceIter *g_sequence_prepend (GSequence *seq,
                                              gpointer data);
extern
GSequenceIter *g_sequence_insert_before (GSequenceIter *iter,
                                              gpointer data);
extern
void g_sequence_move (GSequenceIter *src,
                                              GSequenceIter *dest);
extern
void g_sequence_swap (GSequenceIter *a,
                                              GSequenceIter *b);
extern
GSequenceIter *g_sequence_insert_sorted (GSequence *seq,
                                              gpointer data,
                                              GCompareDataFunc cmp_func,
                                              gpointer cmp_data);
extern
GSequenceIter *g_sequence_insert_sorted_iter (GSequence *seq,
                                              gpointer data,
                                              GSequenceIterCompareFunc iter_cmp,
                                              gpointer cmp_data);
extern
void g_sequence_sort_changed (GSequenceIter *iter,
                                              GCompareDataFunc cmp_func,
                                              gpointer cmp_data);
extern
void g_sequence_sort_changed_iter (GSequenceIter *iter,
                                              GSequenceIterCompareFunc iter_cmp,
                                              gpointer cmp_data);
extern
void g_sequence_remove (GSequenceIter *iter);
extern
void g_sequence_remove_range (GSequenceIter *begin,
                                              GSequenceIter *end);
extern
void g_sequence_move_range (GSequenceIter *dest,
                                              GSequenceIter *begin,
                                              GSequenceIter *end);
extern
GSequenceIter *g_sequence_search (GSequence *seq,
                                              gpointer data,
                                              GCompareDataFunc cmp_func,
                                              gpointer cmp_data);
extern
GSequenceIter *g_sequence_search_iter (GSequence *seq,
                                              gpointer data,
                                              GSequenceIterCompareFunc iter_cmp,
                                              gpointer cmp_data);
extern
GSequenceIter *g_sequence_lookup (GSequence *seq,
                                              gpointer data,
                                              GCompareDataFunc cmp_func,
                                              gpointer cmp_data);
extern
GSequenceIter *g_sequence_lookup_iter (GSequence *seq,
                                              gpointer data,
                                              GSequenceIterCompareFunc iter_cmp,
                                              gpointer cmp_data);



extern
gpointer g_sequence_get (GSequenceIter *iter);
extern
void g_sequence_set (GSequenceIter *iter,
                                              gpointer data);


extern
gboolean g_sequence_iter_is_begin (GSequenceIter *iter);
extern
gboolean g_sequence_iter_is_end (GSequenceIter *iter);
extern
GSequenceIter *g_sequence_iter_next (GSequenceIter *iter);
extern
GSequenceIter *g_sequence_iter_prev (GSequenceIter *iter);
extern
gint g_sequence_iter_get_position (GSequenceIter *iter);
extern
GSequenceIter *g_sequence_iter_move (GSequenceIter *iter,
                                              gint delta);
extern
GSequence * g_sequence_iter_get_sequence (GSequenceIter *iter);



extern
gint g_sequence_iter_compare (GSequenceIter *a,
                                              GSequenceIter *b);
extern
GSequenceIter *g_sequence_range_get_midpoint (GSequenceIter *begin,
                                              GSequenceIter *end);

}
# 75 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gshell.h" 1
# 30 "/usr/include/glib-2.0/glib/gshell.h"
extern "C" {



typedef enum
{

  G_SHELL_ERROR_BAD_QUOTING,

  G_SHELL_ERROR_EMPTY_STRING,
  G_SHELL_ERROR_FAILED
} GShellError;

extern
GQuark g_shell_error_quark (void);

extern
gchar* g_shell_quote (const gchar *unquoted_string);
extern
gchar* g_shell_unquote (const gchar *quoted_string,
                             GError **error);
extern
gboolean g_shell_parse_argv (const gchar *command_line,
                             gint *argcp,
                             gchar ***argvp,
                             GError **error);

}
# 76 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gslice.h" 1
# 27 "/usr/include/glib-2.0/glib/gslice.h"
extern "C" {



extern
gpointer g_slice_alloc (gsize block_size) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
extern
gpointer g_slice_alloc0 (gsize block_size) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
extern
gpointer g_slice_copy (gsize block_size,
                                         gconstpointer mem_block) __attribute__((__malloc__)) __attribute__((__alloc_size__(1)));
extern
void g_slice_free1 (gsize block_size,
      gpointer mem_block);
extern
void g_slice_free_chain_with_offset (gsize block_size,
      gpointer mem_chain,
      gsize next_offset);
# 76 "/usr/include/glib-2.0/glib/gslice.h"
typedef enum {
  G_SLICE_CONFIG_ALWAYS_MALLOC = 1,
  G_SLICE_CONFIG_BYPASS_MAGAZINES,
  G_SLICE_CONFIG_WORKING_SET_MSECS,
  G_SLICE_CONFIG_COLOR_INCREMENT,
  G_SLICE_CONFIG_CHUNK_SIZES,
  G_SLICE_CONFIG_CONTENTION_COUNTER
} GSliceConfig;

__attribute__((__deprecated__)) extern
void g_slice_set_config (GSliceConfig ckey, gint64 value);
__attribute__((__deprecated__)) extern
gint64 g_slice_get_config (GSliceConfig ckey);
__attribute__((__deprecated__)) extern
gint64* g_slice_get_config_state (GSliceConfig ckey, gint64 address, guint *n_values);






}
# 77 "/usr/include/glib-2.0/glib.h" 2

# 1 "/usr/include/glib-2.0/glib/gspawn.h" 1
# 30 "/usr/include/glib-2.0/glib/gspawn.h"
extern "C" {
# 70 "/usr/include/glib-2.0/glib/gspawn.h"
typedef enum
{
  G_SPAWN_ERROR_FORK,
  G_SPAWN_ERROR_READ,
  G_SPAWN_ERROR_CHDIR,
  G_SPAWN_ERROR_ACCES,
  G_SPAWN_ERROR_PERM,
  G_SPAWN_ERROR_TOO_BIG,

  G_SPAWN_ERROR_2BIG = G_SPAWN_ERROR_TOO_BIG,

  G_SPAWN_ERROR_NOEXEC,
  G_SPAWN_ERROR_NAMETOOLONG,
  G_SPAWN_ERROR_NOENT,
  G_SPAWN_ERROR_NOMEM,
  G_SPAWN_ERROR_NOTDIR,
  G_SPAWN_ERROR_LOOP,
  G_SPAWN_ERROR_TXTBUSY,
  G_SPAWN_ERROR_IO,
  G_SPAWN_ERROR_NFILE,
  G_SPAWN_ERROR_MFILE,
  G_SPAWN_ERROR_INVAL,
  G_SPAWN_ERROR_ISDIR,
  G_SPAWN_ERROR_LIBBAD,
  G_SPAWN_ERROR_FAILED


} GSpawnError;
# 142 "/usr/include/glib-2.0/glib/gspawn.h"
typedef void (* GSpawnChildSetupFunc) (gpointer user_data);
# 172 "/usr/include/glib-2.0/glib/gspawn.h"
typedef enum
{
  G_SPAWN_DEFAULT = 0,
  G_SPAWN_LEAVE_DESCRIPTORS_OPEN = 1 << 0,
  G_SPAWN_DO_NOT_REAP_CHILD = 1 << 1,

  G_SPAWN_SEARCH_PATH = 1 << 2,

  G_SPAWN_STDOUT_TO_DEV_NULL = 1 << 3,
  G_SPAWN_STDERR_TO_DEV_NULL = 1 << 4,
  G_SPAWN_CHILD_INHERITS_STDIN = 1 << 5,
  G_SPAWN_FILE_AND_ARGV_ZERO = 1 << 6,
  G_SPAWN_SEARCH_PATH_FROM_ENVP = 1 << 7,
  G_SPAWN_CLOEXEC_PIPES = 1 << 8
} GSpawnFlags;

extern
GQuark g_spawn_error_quark (void);
extern
GQuark g_spawn_exit_error_quark (void);

extern
gboolean g_spawn_async (const gchar *working_directory,
                        gchar **argv,
                        gchar **envp,
                        GSpawnFlags flags,
                        GSpawnChildSetupFunc child_setup,
                        gpointer user_data,
                        GPid *child_pid,
                        GError **error);





extern
gboolean g_spawn_async_with_pipes (const gchar *working_directory,
                                   gchar **argv,
                                   gchar **envp,
                                   GSpawnFlags flags,
                                   GSpawnChildSetupFunc child_setup,
                                   gpointer user_data,
                                   GPid *child_pid,
                                   gint *standard_input,
                                   gint *standard_output,
                                   gint *standard_error,
                                   GError **error);






extern
gboolean g_spawn_sync (const gchar *working_directory,
                               gchar **argv,
                               gchar **envp,
                               GSpawnFlags flags,
                               GSpawnChildSetupFunc child_setup,
                               gpointer user_data,
                               gchar **standard_output,
                               gchar **standard_error,
                               gint *exit_status,
                               GError **error);

extern
gboolean g_spawn_command_line_sync (const gchar *command_line,
                                     gchar **standard_output,
                                     gchar **standard_error,
                                     gint *exit_status,
                                     GError **error);
extern
gboolean g_spawn_command_line_async (const gchar *command_line,
                                     GError **error);

extern
gboolean g_spawn_check_exit_status (gint exit_status,
        GError **error);

extern
void g_spawn_close_pid (GPid pid);
# 307 "/usr/include/glib-2.0/glib/gspawn.h"
}
# 79 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gstrfuncs.h" 1
# 36 "/usr/include/glib-2.0/glib/gstrfuncs.h"
extern "C" {


typedef enum {
  G_ASCII_ALNUM = 1 << 0,
  G_ASCII_ALPHA = 1 << 1,
  G_ASCII_CNTRL = 1 << 2,
  G_ASCII_DIGIT = 1 << 3,
  G_ASCII_GRAPH = 1 << 4,
  G_ASCII_LOWER = 1 << 5,
  G_ASCII_PRINT = 1 << 6,
  G_ASCII_PUNCT = 1 << 7,
  G_ASCII_SPACE = 1 << 8,
  G_ASCII_UPPER = 1 << 9,
  G_ASCII_XDIGIT = 1 << 10
} GAsciiType;

extern const guint16 * const g_ascii_table;
# 88 "/usr/include/glib-2.0/glib/gstrfuncs.h"
extern
gchar g_ascii_tolower (gchar c) __attribute__((__const__));
extern
gchar g_ascii_toupper (gchar c) __attribute__((__const__));

extern
gint g_ascii_digit_value (gchar c) __attribute__((__const__));
extern
gint g_ascii_xdigit_value (gchar c) __attribute__((__const__));





extern
gchar* g_strdelimit (gchar *string,
     const gchar *delimiters,
     gchar new_delimiter);
extern
gchar* g_strcanon (gchar *string,
     const gchar *valid_chars,
     gchar substitutor);
extern
const gchar * g_strerror (gint errnum) __attribute__((__const__));
extern
const gchar * g_strsignal (gint signum) __attribute__((__const__));
extern
gchar * g_strreverse (gchar *string);
extern
gsize g_strlcpy (gchar *dest,
     const gchar *src,
     gsize dest_size);
extern
gsize g_strlcat (gchar *dest,
     const gchar *src,
     gsize dest_size);
extern
gchar * g_strstr_len (const gchar *haystack,
     gssize haystack_len,
     const gchar *needle);
extern
gchar * g_strrstr (const gchar *haystack,
     const gchar *needle);
extern
gchar * g_strrstr_len (const gchar *haystack,
     gssize haystack_len,
     const gchar *needle);

extern
gboolean g_str_has_suffix (const gchar *str,
     const gchar *suffix);
extern
gboolean g_str_has_prefix (const gchar *str,
     const gchar *prefix);



extern
gdouble g_strtod (const gchar *nptr,
     gchar **endptr);
extern
gdouble g_ascii_strtod (const gchar *nptr,
     gchar **endptr);
extern
guint64 g_ascii_strtoull (const gchar *nptr,
     gchar **endptr,
     guint base);
extern
gint64 g_ascii_strtoll (const gchar *nptr,
     gchar **endptr,
     guint base);




extern
gchar * g_ascii_dtostr (gchar *buffer,
     gint buf_len,
     gdouble d);
extern
gchar * g_ascii_formatd (gchar *buffer,
     gint buf_len,
     const gchar *format,
     gdouble d);


extern
gchar* g_strchug (gchar *string);

extern
gchar* g_strchomp (gchar *string);



extern
gint g_ascii_strcasecmp (const gchar *s1,
        const gchar *s2);
extern
gint g_ascii_strncasecmp (const gchar *s1,
        const gchar *s2,
        gsize n);
extern
gchar* g_ascii_strdown (const gchar *str,
        gssize len) __attribute__((__malloc__));
extern
gchar* g_ascii_strup (const gchar *str,
        gssize len) __attribute__((__malloc__));

extern
gboolean g_str_is_ascii (const gchar *str);

__attribute__((__deprecated__)) extern
gint g_strcasecmp (const gchar *s1,
                                        const gchar *s2);
__attribute__((__deprecated__)) extern
gint g_strncasecmp (const gchar *s1,
                                        const gchar *s2,
                                        guint n);
__attribute__((__deprecated__)) extern
gchar* g_strdown (gchar *string);
__attribute__((__deprecated__)) extern
gchar* g_strup (gchar *string);





extern
gchar* g_strdup (const gchar *str) __attribute__((__malloc__));
extern
gchar* g_strdup_printf (const gchar *format,
     ...) __attribute__((__format__ (__printf__, 1, 2))) __attribute__((__malloc__));
extern
gchar* g_strdup_vprintf (const gchar *format,
     va_list args) __attribute__((__format__ (__printf__, 1, 0))) __attribute__((__malloc__));
extern
gchar* g_strndup (const gchar *str,
     gsize n) __attribute__((__malloc__));
extern
gchar* g_strnfill (gsize length,
     gchar fill_char) __attribute__((__malloc__));
extern
gchar* g_strconcat (const gchar *string1,
     ...) __attribute__((__malloc__)) __attribute__((__sentinel__));
extern
gchar* g_strjoin (const gchar *separator,
     ...) __attribute__((__malloc__)) __attribute__((__sentinel__));





extern
gchar* g_strcompress (const gchar *source) __attribute__((__malloc__));
# 251 "/usr/include/glib-2.0/glib/gstrfuncs.h"
extern
gchar* g_strescape (const gchar *source,
     const gchar *exceptions) __attribute__((__malloc__));

extern
gpointer g_memdup (gconstpointer mem,
     guint byte_size) __attribute__((__malloc__)) __attribute__((__alloc_size__(2)));
# 268 "/usr/include/glib-2.0/glib/gstrfuncs.h"
typedef gchar** GStrv;
extern
gchar** g_strsplit (const gchar *string,
     const gchar *delimiter,
     gint max_tokens) __attribute__((__malloc__));
extern
gchar ** g_strsplit_set (const gchar *string,
     const gchar *delimiters,
     gint max_tokens) __attribute__((__malloc__));
extern
gchar* g_strjoinv (const gchar *separator,
     gchar **str_array) __attribute__((__malloc__));
extern
void g_strfreev (gchar **str_array);
extern
gchar** g_strdupv (gchar **str_array) __attribute__((__malloc__));
extern
guint g_strv_length (gchar **str_array);

extern
gchar* g_stpcpy (gchar *dest,
                                        const char *src);

extern
gchar * g_str_to_ascii (const gchar *str,
                                                                         const gchar *from_locale);

extern
gchar ** g_str_tokenize_and_fold (const gchar *string,
                                                                         const gchar *translit_locale,
                                                                         gchar ***ascii_alternates);

extern
gboolean g_str_match_string (const gchar *search_term,
                                                                         const gchar *potential_hit,
                                                                         gboolean accept_alternates);

extern
gboolean g_strv_contains (const gchar * const *strv,
                                        const gchar *str);

}
# 80 "/usr/include/glib-2.0/glib.h" 2

# 1 "/usr/include/glib-2.0/glib/gstringchunk.h" 1
# 34 "/usr/include/glib-2.0/glib/gstringchunk.h"
extern "C" {

typedef struct _GStringChunk GStringChunk;

extern
GStringChunk* g_string_chunk_new (gsize size);
extern
void g_string_chunk_free (GStringChunk *chunk);
extern
void g_string_chunk_clear (GStringChunk *chunk);
extern
gchar* g_string_chunk_insert (GStringChunk *chunk,
                                           const gchar *string);
extern
gchar* g_string_chunk_insert_len (GStringChunk *chunk,
                                           const gchar *string,
                                           gssize len);
extern
gchar* g_string_chunk_insert_const (GStringChunk *chunk,
                                           const gchar *string);

}
# 82 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gtestutils.h" 1
# 31 "/usr/include/glib-2.0/glib/gtestutils.h"
extern "C" {

typedef struct GTestCase GTestCase;
typedef struct GTestSuite GTestSuite;
typedef void (*GTestFunc) (void);
typedef void (*GTestDataFunc) (gconstpointer user_data);
typedef void (*GTestFixtureFunc) (gpointer fixture,
                                  gconstpointer user_data);
# 122 "/usr/include/glib-2.0/glib/gtestutils.h"
extern
int g_strcmp0 (const char *str1,
                                         const char *str2);


extern
void g_test_minimized_result (double minimized_quantity,
                                         const char *format,
                                         ...) __attribute__((__format__ (__printf__, 2, 3)));
extern
void g_test_maximized_result (double maximized_quantity,
                                         const char *format,
                                         ...) __attribute__((__format__ (__printf__, 2, 3)));


extern
void g_test_init (int *argc,
                                         char ***argv,
                                         ...) __attribute__((__sentinel__));
# 150 "/usr/include/glib-2.0/glib/gtestutils.h"
extern
gboolean g_test_subprocess (void);


extern
int g_test_run (void);

extern
void g_test_add_func (const char *testpath,
                                         GTestFunc test_func);

extern
void g_test_add_data_func (const char *testpath,
                                         gconstpointer test_data,
                                         GTestDataFunc test_func);

extern
void g_test_add_data_func_full (const char *testpath,
                                         gpointer test_data,
                                         GTestDataFunc test_func,
                                         GDestroyNotify data_free_func);


extern
void g_test_fail (void);
extern
void g_test_incomplete (const gchar *msg);
extern
void g_test_skip (const gchar *msg);
extern
gboolean g_test_failed (void);
extern
void g_test_set_nonfatal_assertions (void);
# 198 "/usr/include/glib-2.0/glib/gtestutils.h"
extern
void g_test_message (const char *format,
                                         ...) __attribute__((__format__ (__printf__, 1, 2)));
extern
void g_test_bug_base (const char *uri_pattern);
extern
void g_test_bug (const char *bug_uri_snippet);

extern
void g_test_timer_start (void);
extern
double g_test_timer_elapsed (void);
extern
double g_test_timer_last (void);


extern
void g_test_queue_free (gpointer gfree_pointer);
extern
void g_test_queue_destroy (GDestroyNotify destroy_func,
                                         gpointer destroy_data);


typedef enum {
  G_TEST_TRAP_SILENCE_STDOUT = 1 << 7,
  G_TEST_TRAP_SILENCE_STDERR = 1 << 8,
  G_TEST_TRAP_INHERIT_STDIN = 1 << 9
} GTestTrapFlags;

__attribute__((__deprecated__("Use '" "g_test_trap_subprocess" "' instead"))) extern
gboolean g_test_trap_fork (guint64 usec_timeout,
                                         GTestTrapFlags test_trap_flags);

typedef enum {
  G_TEST_SUBPROCESS_INHERIT_STDIN = 1 << 0,
  G_TEST_SUBPROCESS_INHERIT_STDOUT = 1 << 1,
  G_TEST_SUBPROCESS_INHERIT_STDERR = 1 << 2
} GTestSubprocessFlags;

extern
void g_test_trap_subprocess (const char *test_path,
                                         guint64 usec_timeout,
                                         GTestSubprocessFlags test_flags);

extern
gboolean g_test_trap_has_passed (void);
extern
gboolean g_test_trap_reached_timeout (void);
# 255 "/usr/include/glib-2.0/glib/gtestutils.h"
extern
gint32 g_test_rand_int (void);
extern
gint32 g_test_rand_int_range (gint32 begin,
                                         gint32 end);
extern
double g_test_rand_double (void);
extern
double g_test_rand_double_range (double range_start,
                                         double range_end);






extern
GTestCase* g_test_create_case (const char *test_name,
                                         gsize data_size,
                                         gconstpointer test_data,
                                         GTestFixtureFunc data_setup,
                                         GTestFixtureFunc data_test,
                                         GTestFixtureFunc data_teardown);
extern
GTestSuite* g_test_create_suite (const char *suite_name);
extern
GTestSuite* g_test_get_root (void);
extern
void g_test_suite_add (GTestSuite *suite,
                                         GTestCase *test_case);
extern
void g_test_suite_add_suite (GTestSuite *suite,
                                         GTestSuite *nestedsuite);
extern
int g_test_run_suite (GTestSuite *suite);

extern
void g_test_trap_assertions (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         guint64 assertion_flags,
                                         const char *pattern);
extern
void g_assertion_message (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *message);
extern
void g_assertion_message_expr (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *expr) __attribute__((__noreturn__));
extern
void g_assertion_message_cmpstr (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *expr,
                                         const char *arg1,
                                         const char *cmp,
                                         const char *arg2);
extern
void g_assertion_message_cmpnum (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *expr,
                                         long double arg1,
                                         const char *cmp,
                                         long double arg2,
                                         char numtype);
extern
void g_assertion_message_error (const char *domain,
                                         const char *file,
                                         int line,
                                         const char *func,
                                         const char *expr,
                                         const GError *error,
                                         GQuark error_domain,
                                         int error_code);
extern
void g_test_add_vtable (const char *testpath,
                                         gsize data_size,
                                         gconstpointer test_data,
                                         GTestFixtureFunc data_setup,
                                         GTestFixtureFunc data_test,
                                         GTestFixtureFunc data_teardown);
typedef struct {
  gboolean test_initialized;
  gboolean test_quick;
  gboolean test_perf;
  gboolean test_verbose;
  gboolean test_quiet;
  gboolean test_undefined;
} GTestConfig;
extern const GTestConfig * const g_test_config_vars;


typedef enum {
  G_TEST_LOG_NONE,
  G_TEST_LOG_ERROR,
  G_TEST_LOG_START_BINARY,
  G_TEST_LOG_LIST_CASE,
  G_TEST_LOG_SKIP_CASE,
  G_TEST_LOG_START_CASE,
  G_TEST_LOG_STOP_CASE,
  G_TEST_LOG_MIN_RESULT,
  G_TEST_LOG_MAX_RESULT,
  G_TEST_LOG_MESSAGE,
  G_TEST_LOG_START_SUITE,
  G_TEST_LOG_STOP_SUITE
} GTestLogType;

typedef struct {
  GTestLogType log_type;
  guint n_strings;
  gchar **strings;
  guint n_nums;
  long double *nums;
} GTestLogMsg;
typedef struct {

  GString *data;
  GSList *msgs;
} GTestLogBuffer;

extern
const char* g_test_log_type_name (GTestLogType log_type);
extern
GTestLogBuffer* g_test_log_buffer_new (void);
extern
void g_test_log_buffer_free (GTestLogBuffer *tbuffer);
extern
void g_test_log_buffer_push (GTestLogBuffer *tbuffer,
                                         guint n_bytes,
                                         const guint8 *bytes);
extern
GTestLogMsg* g_test_log_buffer_pop (GTestLogBuffer *tbuffer);
extern
void g_test_log_msg_free (GTestLogMsg *tmsg);
# 412 "/usr/include/glib-2.0/glib/gtestutils.h"
typedef gboolean (*GTestLogFatalFunc) (const gchar *log_domain,
                                                 GLogLevelFlags log_level,
                                                 const gchar *message,
                                                 gpointer user_data);
extern
void
g_test_log_set_fatal_handler (GTestLogFatalFunc log_func,
                                         gpointer user_data);

extern
void g_test_expect_message (const gchar *log_domain,
                                                  GLogLevelFlags log_level,
                                                  const gchar *pattern);
extern
void g_test_assert_expected_messages_internal (const char *domain,
                                                  const char *file,
                                                  int line,
                                                  const char *func);

typedef enum
{
  G_TEST_DIST,
  G_TEST_BUILT
} GTestFileType;

extern
gchar * g_test_build_filename (GTestFileType file_type,
                                                  const gchar *first_path,
                                                  ...) __attribute__((__sentinel__));
extern
const gchar *g_test_get_dir (GTestFileType file_type);
extern
const gchar *g_test_get_filename (GTestFileType file_type,
                                                  const gchar *first_path,
                                                  ...) __attribute__((__sentinel__));



}
# 83 "/usr/include/glib-2.0/glib.h" 2

# 1 "/usr/include/glib-2.0/glib/gthreadpool.h" 1
# 34 "/usr/include/glib-2.0/glib/gthreadpool.h"
extern "C" {

typedef struct _GThreadPool GThreadPool;




struct _GThreadPool
{
  GFunc func;
  gpointer user_data;
  gboolean exclusive;
};

extern
GThreadPool * g_thread_pool_new (GFunc func,
                                                 gpointer user_data,
                                                 gint max_threads,
                                                 gboolean exclusive,
                                                 GError **error);
extern
void g_thread_pool_free (GThreadPool *pool,
                                                 gboolean immediate,
                                                 gboolean wait_);
extern
gboolean g_thread_pool_push (GThreadPool *pool,
                                                 gpointer data,
                                                 GError **error);
extern
guint g_thread_pool_unprocessed (GThreadPool *pool);
extern
void g_thread_pool_set_sort_function (GThreadPool *pool,
                                                 GCompareDataFunc func,
                                                 gpointer user_data);
extern
gboolean g_thread_pool_move_to_front (GThreadPool *pool,
                                                 gpointer data);

extern
gboolean g_thread_pool_set_max_threads (GThreadPool *pool,
                                                 gint max_threads,
                                                 GError **error);
extern
gint g_thread_pool_get_max_threads (GThreadPool *pool);
extern
guint g_thread_pool_get_num_threads (GThreadPool *pool);

extern
void g_thread_pool_set_max_unused_threads (gint max_threads);
extern
gint g_thread_pool_get_max_unused_threads (void);
extern
guint g_thread_pool_get_num_unused_threads (void);
extern
void g_thread_pool_stop_unused_threads (void);
extern
void g_thread_pool_set_max_idle_time (guint interval);
extern
guint g_thread_pool_get_max_idle_time (void);

}
# 85 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gtimer.h" 1
# 34 "/usr/include/glib-2.0/glib/gtimer.h"
extern "C" {





typedef struct _GTimer GTimer;



extern
GTimer* g_timer_new (void);
extern
void g_timer_destroy (GTimer *timer);
extern
void g_timer_start (GTimer *timer);
extern
void g_timer_stop (GTimer *timer);
extern
void g_timer_reset (GTimer *timer);
extern
void g_timer_continue (GTimer *timer);
extern
gdouble g_timer_elapsed (GTimer *timer,
      gulong *microseconds);

extern
void g_usleep (gulong microseconds);

extern
void g_time_val_add (GTimeVal *time_,
                                  glong microseconds);
extern
gboolean g_time_val_from_iso8601 (const gchar *iso_date,
      GTimeVal *time_);
extern
gchar* g_time_val_to_iso8601 (GTimeVal *time_) __attribute__((__malloc__));

}
# 86 "/usr/include/glib-2.0/glib.h" 2

# 1 "/usr/include/glib-2.0/glib/gtrashstack.h" 1
# 34 "/usr/include/glib-2.0/glib/gtrashstack.h"
extern "C" {

typedef struct _GTrashStack GTrashStack;
struct _GTrashStack
{
  GTrashStack *next;
};

__attribute__((__deprecated__)) extern
void g_trash_stack_push (GTrashStack **stack_p,
                                gpointer data_p);
__attribute__((__deprecated__)) extern
gpointer g_trash_stack_pop (GTrashStack **stack_p);
__attribute__((__deprecated__)) extern
gpointer g_trash_stack_peek (GTrashStack **stack_p);
__attribute__((__deprecated__)) extern
guint g_trash_stack_height (GTrashStack **stack_p);

}
# 88 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/gtree.h" 1
# 34 "/usr/include/glib-2.0/glib/gtree.h"
extern "C" {

typedef struct _GTree GTree;

typedef gboolean (*GTraverseFunc) (gpointer key,
                                   gpointer value,
                                   gpointer data);



extern
GTree* g_tree_new (GCompareFunc key_compare_func);
extern
GTree* g_tree_new_with_data (GCompareDataFunc key_compare_func,
                                 gpointer key_compare_data);
extern
GTree* g_tree_new_full (GCompareDataFunc key_compare_func,
                                 gpointer key_compare_data,
                                 GDestroyNotify key_destroy_func,
                                 GDestroyNotify value_destroy_func);
extern
GTree* g_tree_ref (GTree *tree);
extern
void g_tree_unref (GTree *tree);
extern
void g_tree_destroy (GTree *tree);
extern
void g_tree_insert (GTree *tree,
                                 gpointer key,
                                 gpointer value);
extern
void g_tree_replace (GTree *tree,
                                 gpointer key,
                                 gpointer value);
extern
gboolean g_tree_remove (GTree *tree,
                                 gconstpointer key);
extern
gboolean g_tree_steal (GTree *tree,
                                 gconstpointer key);
extern
gpointer g_tree_lookup (GTree *tree,
                                 gconstpointer key);
extern
gboolean g_tree_lookup_extended (GTree *tree,
                                 gconstpointer lookup_key,
                                 gpointer *orig_key,
                                 gpointer *value);
extern
void g_tree_foreach (GTree *tree,
                                 GTraverseFunc func,
                                 gpointer user_data);

__attribute__((__deprecated__)) extern
void g_tree_traverse (GTree *tree,
                                 GTraverseFunc traverse_func,
                                 GTraverseType traverse_type,
                                 gpointer user_data);

extern
gpointer g_tree_search (GTree *tree,
                                 GCompareFunc search_func,
                                 gconstpointer user_data);
extern
gint g_tree_height (GTree *tree);
extern
gint g_tree_nnodes (GTree *tree);

}
# 89 "/usr/include/glib-2.0/glib.h" 2


# 1 "/usr/include/glib-2.0/glib/gurifuncs.h" 1
# 30 "/usr/include/glib-2.0/glib/gurifuncs.h"
extern "C" {
# 67 "/usr/include/glib-2.0/glib/gurifuncs.h"
extern
char * g_uri_unescape_string (const char *escaped_string,
          const char *illegal_characters);
extern
char * g_uri_unescape_segment (const char *escaped_string,
          const char *escaped_string_end,
          const char *illegal_characters);
extern
char * g_uri_parse_scheme (const char *uri);
extern
char * g_uri_escape_string (const char *unescaped,
          const char *reserved_chars_allowed,
          gboolean allow_utf8);

}
# 92 "/usr/include/glib-2.0/glib.h" 2



# 1 "/usr/include/glib-2.0/glib/gversion.h" 1
# 34 "/usr/include/glib-2.0/glib/gversion.h"
extern "C" {

extern const guint glib_major_version;
extern const guint glib_minor_version;
extern const guint glib_micro_version;
extern const guint glib_interface_age;
extern const guint glib_binary_age;

extern
const gchar * glib_check_version (guint required_major,
                                  guint required_minor,
                                  guint required_micro);







}
# 96 "/usr/include/glib-2.0/glib.h" 2






# 1 "/usr/include/glib-2.0/glib/deprecated/gallocator.h" 1
# 25 "/usr/include/glib-2.0/glib/deprecated/gallocator.h"
extern "C" {

typedef struct _GAllocator GAllocator;
typedef struct _GMemChunk GMemChunk;
# 42 "/usr/include/glib-2.0/glib/deprecated/gallocator.h"
__attribute__((__deprecated__)) extern
GMemChunk * g_mem_chunk_new (const gchar *name,
                                         gint atom_size,
                                         gsize area_size,
                                         gint type);
__attribute__((__deprecated__)) extern
void g_mem_chunk_destroy (GMemChunk *mem_chunk);
__attribute__((__deprecated__)) extern
gpointer g_mem_chunk_alloc (GMemChunk *mem_chunk);
__attribute__((__deprecated__)) extern
gpointer g_mem_chunk_alloc0 (GMemChunk *mem_chunk);
__attribute__((__deprecated__)) extern
void g_mem_chunk_free (GMemChunk *mem_chunk,
                                         gpointer mem);
__attribute__((__deprecated__)) extern
void g_mem_chunk_clean (GMemChunk *mem_chunk);
__attribute__((__deprecated__)) extern
void g_mem_chunk_reset (GMemChunk *mem_chunk);
__attribute__((__deprecated__)) extern
void g_mem_chunk_print (GMemChunk *mem_chunk);
__attribute__((__deprecated__)) extern
void g_mem_chunk_info (void);
__attribute__((__deprecated__)) extern
void g_blow_chunks (void);


__attribute__((__deprecated__)) extern
GAllocator * g_allocator_new (const gchar *name,
                                         guint n_preallocs);
__attribute__((__deprecated__)) extern
void g_allocator_free (GAllocator *allocator);
__attribute__((__deprecated__)) extern
void g_list_push_allocator (GAllocator *allocator);
__attribute__((__deprecated__)) extern
void g_list_pop_allocator (void);
__attribute__((__deprecated__)) extern
void g_slist_push_allocator (GAllocator *allocator);
__attribute__((__deprecated__)) extern
void g_slist_pop_allocator (void);
__attribute__((__deprecated__)) extern
void g_node_push_allocator (GAllocator *allocator);
__attribute__((__deprecated__)) extern
void g_node_pop_allocator (void);

}
# 103 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/deprecated/gcache.h" 1
# 34 "/usr/include/glib-2.0/glib/deprecated/gcache.h"
extern "C" {



typedef struct _GCache GCache;

typedef gpointer (*GCacheNewFunc) (gpointer key);
typedef gpointer (*GCacheDupFunc) (gpointer value);
typedef void (*GCacheDestroyFunc) (gpointer value);



__attribute__((__deprecated__)) extern
GCache* g_cache_new (GCacheNewFunc value_new_func,
                                GCacheDestroyFunc value_destroy_func,
                                GCacheDupFunc key_dup_func,
                                GCacheDestroyFunc key_destroy_func,
                                GHashFunc hash_key_func,
                                GHashFunc hash_value_func,
                                GEqualFunc key_equal_func);
__attribute__((__deprecated__)) extern
void g_cache_destroy (GCache *cache);
__attribute__((__deprecated__)) extern
gpointer g_cache_insert (GCache *cache,
                                gpointer key);
__attribute__((__deprecated__)) extern
void g_cache_remove (GCache *cache,
                                gconstpointer value);
__attribute__((__deprecated__)) extern
void g_cache_key_foreach (GCache *cache,
                                GHFunc func,
                                gpointer user_data);
__attribute__((__deprecated__)) extern
void g_cache_value_foreach (GCache *cache,
                                GHFunc func,
                                gpointer user_data);



}
# 104 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/deprecated/gcompletion.h" 1
# 34 "/usr/include/glib-2.0/glib/deprecated/gcompletion.h"
extern "C" {

typedef struct _GCompletion GCompletion;

typedef gchar* (*GCompletionFunc) (gpointer);




typedef gint (*GCompletionStrncmpFunc) (const gchar *s1,
                                        const gchar *s2,
                                        gsize n);

struct _GCompletion
{
  GList* items;
  GCompletionFunc func;

  gchar* prefix;
  GList* cache;
  GCompletionStrncmpFunc strncmp_func;
};

__attribute__((__deprecated__)) extern
GCompletion* g_completion_new (GCompletionFunc func);
__attribute__((__deprecated__)) extern
void g_completion_add_items (GCompletion* cmp,
                                         GList* items);
__attribute__((__deprecated__)) extern
void g_completion_remove_items (GCompletion* cmp,
                                         GList* items);
__attribute__((__deprecated__)) extern
void g_completion_clear_items (GCompletion* cmp);
__attribute__((__deprecated__)) extern
GList* g_completion_complete (GCompletion* cmp,
                                         const gchar* prefix,
                                         gchar** new_prefix);
__attribute__((__deprecated__)) extern
GList* g_completion_complete_utf8 (GCompletion *cmp,
                                         const gchar* prefix,
                                         gchar** new_prefix);
__attribute__((__deprecated__)) extern
void g_completion_set_compare (GCompletion *cmp,
                                         GCompletionStrncmpFunc strncmp_func);
__attribute__((__deprecated__)) extern
void g_completion_free (GCompletion* cmp);

}
# 105 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/deprecated/gmain.h" 1
# 34 "/usr/include/glib-2.0/glib/deprecated/gmain.h"
extern "C" {
# 137 "/usr/include/glib-2.0/glib/deprecated/gmain.h"
}
# 106 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/deprecated/grel.h" 1
# 34 "/usr/include/glib-2.0/glib/deprecated/grel.h"
extern "C" {

typedef struct _GRelation GRelation;
typedef struct _GTuples GTuples;

struct _GTuples
{
  guint len;
};
# 67 "/usr/include/glib-2.0/glib/deprecated/grel.h"
__attribute__((__deprecated__)) extern
GRelation* g_relation_new (gint fields);
__attribute__((__deprecated__)) extern
void g_relation_destroy (GRelation *relation);
__attribute__((__deprecated__)) extern
void g_relation_index (GRelation *relation,
                               gint field,
                               GHashFunc hash_func,
                               GEqualFunc key_equal_func);
__attribute__((__deprecated__)) extern
void g_relation_insert (GRelation *relation,
                               ...);
__attribute__((__deprecated__)) extern
gint g_relation_delete (GRelation *relation,
                               gconstpointer key,
                               gint field);
__attribute__((__deprecated__)) extern
GTuples* g_relation_select (GRelation *relation,
                               gconstpointer key,
                               gint field);
__attribute__((__deprecated__)) extern
gint g_relation_count (GRelation *relation,
                               gconstpointer key,
                               gint field);
__attribute__((__deprecated__)) extern
gboolean g_relation_exists (GRelation *relation,
                               ...);
__attribute__((__deprecated__)) extern
void g_relation_print (GRelation *relation);
__attribute__((__deprecated__)) extern
void g_tuples_destroy (GTuples *tuples);
__attribute__((__deprecated__)) extern
gpointer g_tuples_index (GTuples *tuples,
                               gint index_,
                               gint field);

}
# 107 "/usr/include/glib-2.0/glib.h" 2
# 1 "/usr/include/glib-2.0/glib/deprecated/gthread.h" 1
# 34 "/usr/include/glib-2.0/glib/deprecated/gthread.h"
extern "C" {



typedef enum
{
  G_THREAD_PRIORITY_LOW,
  G_THREAD_PRIORITY_NORMAL,
  G_THREAD_PRIORITY_HIGH,
  G_THREAD_PRIORITY_URGENT
} GThreadPriority;



struct _GThread
{

  GThreadFunc func;
  gpointer data;
  gboolean joinable;
  GThreadPriority priority;
};



typedef struct _GThreadFunctions GThreadFunctions;
struct _GThreadFunctions
{
  GMutex* (*mutex_new) (void);
  void (*mutex_lock) (GMutex *mutex);
  gboolean (*mutex_trylock) (GMutex *mutex);
  void (*mutex_unlock) (GMutex *mutex);
  void (*mutex_free) (GMutex *mutex);
  GCond* (*cond_new) (void);
  void (*cond_signal) (GCond *cond);
  void (*cond_broadcast) (GCond *cond);
  void (*cond_wait) (GCond *cond,
                                   GMutex *mutex);
  gboolean (*cond_timed_wait) (GCond *cond,
                                   GMutex *mutex,
                                   GTimeVal *end_time);
  void (*cond_free) (GCond *cond);
  GPrivate* (*private_new) (GDestroyNotify destructor);
  gpointer (*private_get) (GPrivate *private_key);
  void (*private_set) (GPrivate *private_key,
                                   gpointer data);
  void (*thread_create) (GThreadFunc func,
                                   gpointer data,
                                   gulong stack_size,
                                   gboolean joinable,
                                   gboolean bound,
                                   GThreadPriority priority,
                                   gpointer thread,
                                   GError **error);
  void (*thread_yield) (void);
  void (*thread_join) (gpointer thread);
  void (*thread_exit) (void);
  void (*thread_set_priority)(gpointer thread,
                                   GThreadPriority priority);
  void (*thread_self) (gpointer thread);
  gboolean (*thread_equal) (gpointer thread1,
                                   gpointer thread2);
};

extern GThreadFunctions g_thread_functions_for_glib_use;
extern gboolean g_thread_use_default_impl;

extern guint64 (*g_thread_gettime) (void);

__attribute__((__deprecated__("Use '" "g_thread_new" "' instead"))) extern
GThread *g_thread_create (GThreadFunc func,
                                gpointer data,
                                gboolean joinable,
                                GError **error);

__attribute__((__deprecated__("Use '" "g_thread_new" "' instead"))) extern
GThread *g_thread_create_full (GThreadFunc func,
                                gpointer data,
                                gulong stack_size,
                                gboolean joinable,
                                gboolean bound,
                                GThreadPriority priority,
                                GError **error);

__attribute__((__deprecated__)) extern
void g_thread_set_priority (GThread *thread,
                                GThreadPriority priority);

__attribute__((__deprecated__)) extern
void g_thread_foreach (GFunc thread_func,
                                gpointer user_data);
# 133 "/usr/include/glib-2.0/glib/deprecated/gthread.h"
typedef struct
{
  GMutex *mutex;


  pthread_mutex_t unused;

} GStaticMutex;
# 149 "/usr/include/glib-2.0/glib/deprecated/gthread.h"
__attribute__((__deprecated__("Use '" "g_mutex_init" "' instead"))) extern
void g_static_mutex_init (GStaticMutex *mutex);
__attribute__((__deprecated__("Use '" "g_mutex_clear" "' instead"))) extern
void g_static_mutex_free (GStaticMutex *mutex);
__attribute__((__deprecated__("Use '" "GMutex" "' instead"))) extern
GMutex *g_static_mutex_get_mutex_impl (GStaticMutex *mutex);

typedef struct _GStaticRecMutex GStaticRecMutex;
struct _GStaticRecMutex
{

  GStaticMutex mutex;
  guint depth;


  union {



    pthread_t owner;

    gdouble dummy;
  } unused;
};


__attribute__((__deprecated__("Use '" "g_rec_mutex_init" "' instead"))) extern
void g_static_rec_mutex_init (GStaticRecMutex *mutex);

__attribute__((__deprecated__("Use '" "g_rec_mutex_lock" "' instead"))) extern
void g_static_rec_mutex_lock (GStaticRecMutex *mutex);

__attribute__((__deprecated__("Use '" "g_rec_mutex_try_lock" "' instead"))) extern
gboolean g_static_rec_mutex_trylock (GStaticRecMutex *mutex);

__attribute__((__deprecated__("Use '" "g_rec_mutex_unlock" "' instead"))) extern
void g_static_rec_mutex_unlock (GStaticRecMutex *mutex);

__attribute__((__deprecated__)) extern
void g_static_rec_mutex_lock_full (GStaticRecMutex *mutex,
                                         guint depth);

__attribute__((__deprecated__)) extern
guint g_static_rec_mutex_unlock_full (GStaticRecMutex *mutex);

__attribute__((__deprecated__("Use '" "g_rec_mutex_free" "' instead"))) extern
void g_static_rec_mutex_free (GStaticRecMutex *mutex);

typedef struct _GStaticRWLock GStaticRWLock;
struct _GStaticRWLock
{

  GStaticMutex mutex;
  GCond *read_cond;
  GCond *write_cond;
  guint read_counter;
  gboolean have_writer;
  guint want_to_read;
  guint want_to_write;
};



__attribute__((__deprecated__("Use '" "g_rw_lock_init" "' instead"))) extern
void g_static_rw_lock_init (GStaticRWLock *lock);

__attribute__((__deprecated__("Use '" "g_rw_lock_reader_lock" "' instead"))) extern
void g_static_rw_lock_reader_lock (GStaticRWLock *lock);

__attribute__((__deprecated__("Use '" "g_rw_lock_reader_trylock" "' instead"))) extern
gboolean g_static_rw_lock_reader_trylock (GStaticRWLock *lock);

__attribute__((__deprecated__("Use '" "g_rw_lock_reader_unlock" "' instead"))) extern
void g_static_rw_lock_reader_unlock (GStaticRWLock *lock);

__attribute__((__deprecated__("Use '" "g_rw_lock_writer_lock" "' instead"))) extern
void g_static_rw_lock_writer_lock (GStaticRWLock *lock);

__attribute__((__deprecated__("Use '" "g_rw_lock_writer_trylock" "' instead"))) extern
gboolean g_static_rw_lock_writer_trylock (GStaticRWLock *lock);

__attribute__((__deprecated__("Use '" "g_rw_lock_writer_unlock" "' instead"))) extern
void g_static_rw_lock_writer_unlock (GStaticRWLock *lock);

__attribute__((__deprecated__("Use '" "g_rw_lock_free" "' instead"))) extern
void g_static_rw_lock_free (GStaticRWLock *lock);

__attribute__((__deprecated__)) extern
GPrivate * g_private_new (GDestroyNotify notify);

typedef struct _GStaticPrivate GStaticPrivate;
struct _GStaticPrivate
{

  guint index;
};


__attribute__((__deprecated__)) extern
void g_static_private_init (GStaticPrivate *private_key);

__attribute__((__deprecated__("Use '" "g_private_get" "' instead"))) extern
gpointer g_static_private_get (GStaticPrivate *private_key);

__attribute__((__deprecated__("Use '" "g_private_set" "' instead"))) extern
void g_static_private_set (GStaticPrivate *private_key,
                                          gpointer data,
                                          GDestroyNotify notify);

__attribute__((__deprecated__)) extern
void g_static_private_free (GStaticPrivate *private_key);

__attribute__((__deprecated__)) extern
gboolean g_once_init_enter_impl (volatile gsize *location);

__attribute__((__deprecated__)) extern
void g_thread_init (gpointer vtable);
__attribute__((__deprecated__)) extern
void g_thread_init_with_errorcheck_mutexes (gpointer vtable);

__attribute__((__deprecated__)) extern
gboolean g_thread_get_initialized (void);

extern gboolean g_threads_got_initialized;



__attribute__((__deprecated__)) extern
GMutex * g_mutex_new (void);
__attribute__((__deprecated__)) extern
void g_mutex_free (GMutex *mutex);
__attribute__((__deprecated__)) extern
GCond * g_cond_new (void);
__attribute__((__deprecated__)) extern
void g_cond_free (GCond *cond);
__attribute__((__deprecated__)) extern
gboolean g_cond_timed_wait (GCond *cond,
                                         GMutex *mutex,
                                         GTimeVal *timeval);



}
# 108 "/usr/include/glib-2.0/glib.h" 2


# 1 "/usr/include/glib-2.0/glib/glib-autocleanups.h" 1
# 24 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
static inline void
g_autoptr_cleanup_generic_gfree (void *p)
{
  void **pp = (void**)p;
  g_free (*pp);
}

static inline void
g_autoptr_cleanup_gstring_free (GString *string)
{
  if (string)
    g_string_free (string, 1);
}




typedef GAsyncQueue *GAsyncQueue_autoptr;
# 41 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 41 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 41 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 41 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GAsyncQueue (GAsyncQueue **_ptr) { if (*_ptr) (g_async_queue_unref) (*_ptr); }
# 41 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 41 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GBookmarkFile *GBookmarkFile_autoptr;
# 42 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 42 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 42 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 42 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GBookmarkFile (GBookmarkFile **_ptr) { if (*_ptr) (g_bookmark_file_free) (*_ptr); }
# 42 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 42 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GBytes *GBytes_autoptr;
# 43 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 43 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 43 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 43 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GBytes (GBytes **_ptr) { if (*_ptr) (g_bytes_unref) (*_ptr); }
# 43 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 43 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GChecksum *GChecksum_autoptr;
# 44 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 44 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 44 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 44 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GChecksum (GChecksum **_ptr) { if (*_ptr) (g_checksum_free) (*_ptr); }
# 44 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 44 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GDateTime *GDateTime_autoptr;
# 45 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 45 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 45 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 45 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GDateTime (GDateTime **_ptr) { if (*_ptr) (g_date_time_unref) (*_ptr); }
# 45 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 45 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GDir *GDir_autoptr;
# 46 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 46 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 46 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 46 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GDir (GDir **_ptr) { if (*_ptr) (g_dir_close) (*_ptr); }
# 46 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 46 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GError *GError_autoptr;
# 47 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 47 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 47 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 47 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GError (GError **_ptr) { if (*_ptr) (g_error_free) (*_ptr); }
# 47 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 47 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GHashTable *GHashTable_autoptr;
# 48 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 48 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 48 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 48 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GHashTable (GHashTable **_ptr) { if (*_ptr) (g_hash_table_unref) (*_ptr); }
# 48 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 48 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GHmac *GHmac_autoptr;
# 49 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 49 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 49 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 49 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GHmac (GHmac **_ptr) { if (*_ptr) (g_hmac_unref) (*_ptr); }
# 49 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 49 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GIOChannel *GIOChannel_autoptr;
# 50 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 50 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 50 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 50 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GIOChannel (GIOChannel **_ptr) { if (*_ptr) (g_io_channel_unref) (*_ptr); }
# 50 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 50 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GKeyFile *GKeyFile_autoptr;
# 51 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 51 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 51 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 51 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GKeyFile (GKeyFile **_ptr) { if (*_ptr) (g_key_file_unref) (*_ptr); }
# 51 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 51 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GList *GList_autoptr;
# 52 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 52 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 52 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 52 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GList (GList **_ptr) { if (*_ptr) (g_list_free) (*_ptr); }
# 52 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 52 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GArray *GArray_autoptr;
# 53 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 53 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 53 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 53 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GArray (GArray **_ptr) { if (*_ptr) (g_array_unref) (*_ptr); }
# 53 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 53 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GPtrArray *GPtrArray_autoptr;
# 54 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 54 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 54 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 54 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GPtrArray (GPtrArray **_ptr) { if (*_ptr) (g_ptr_array_unref) (*_ptr); }
# 54 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 54 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GByteArray *GByteArray_autoptr;
# 55 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 55 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 55 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 55 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GByteArray (GByteArray **_ptr) { if (*_ptr) (g_byte_array_unref) (*_ptr); }
# 55 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 55 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GMainContext *GMainContext_autoptr;
# 56 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 56 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 56 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 56 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GMainContext (GMainContext **_ptr) { if (*_ptr) (g_main_context_unref) (*_ptr); }
# 56 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 56 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GMainLoop *GMainLoop_autoptr;
# 57 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 57 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 57 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 57 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GMainLoop (GMainLoop **_ptr) { if (*_ptr) (g_main_loop_unref) (*_ptr); }
# 57 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 57 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GSource *GSource_autoptr;
# 58 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 58 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 58 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 58 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GSource (GSource **_ptr) { if (*_ptr) (g_source_unref) (*_ptr); }
# 58 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 58 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GMappedFile *GMappedFile_autoptr;
# 59 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 59 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 59 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 59 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GMappedFile (GMappedFile **_ptr) { if (*_ptr) (g_mapped_file_unref) (*_ptr); }
# 59 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 59 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GMarkupParseContext *GMarkupParseContext_autoptr;
# 60 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 60 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 60 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 60 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GMarkupParseContext (GMarkupParseContext **_ptr) { if (*_ptr) (g_markup_parse_context_unref) (*_ptr); }
# 60 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 60 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GNode *GNode_autoptr;
# 61 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 61 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 61 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 61 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GNode (GNode **_ptr) { if (*_ptr) (g_node_destroy) (*_ptr); }
# 61 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 61 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GOptionContext *GOptionContext_autoptr;
# 62 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 62 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 62 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 62 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GOptionContext (GOptionContext **_ptr) { if (*_ptr) (g_option_context_free) (*_ptr); }
# 62 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 62 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GOptionGroup *GOptionGroup_autoptr;
# 63 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 63 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 63 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 63 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GOptionGroup (GOptionGroup **_ptr) { if (*_ptr) (g_option_group_unref) (*_ptr); }
# 63 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 63 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GPatternSpec *GPatternSpec_autoptr;
# 64 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 64 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 64 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 64 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GPatternSpec (GPatternSpec **_ptr) { if (*_ptr) (g_pattern_spec_free) (*_ptr); }
# 64 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 64 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GQueue *GQueue_autoptr;
# 65 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 65 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 65 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 65 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GQueue (GQueue **_ptr) { if (*_ptr) (g_queue_free) (*_ptr); }
# 65 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 65 "/usr/include/glib-2.0/glib/glib-autocleanups.h"


# 66 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 66 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 66 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 66 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_auto_cleanup_GQueue (GQueue *_ptr) { (g_queue_clear) (_ptr); }
# 66 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 66 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GRand *GRand_autoptr;
# 67 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 67 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 67 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 67 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GRand (GRand **_ptr) { if (*_ptr) (g_rand_free) (*_ptr); }
# 67 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 67 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GRegex *GRegex_autoptr;
# 68 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 68 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 68 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 68 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GRegex (GRegex **_ptr) { if (*_ptr) (g_regex_unref) (*_ptr); }
# 68 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 68 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GMatchInfo *GMatchInfo_autoptr;
# 69 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 69 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 69 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 69 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GMatchInfo (GMatchInfo **_ptr) { if (*_ptr) (g_match_info_unref) (*_ptr); }
# 69 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 69 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GScanner *GScanner_autoptr;
# 70 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 70 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 70 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 70 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GScanner (GScanner **_ptr) { if (*_ptr) (g_scanner_destroy) (*_ptr); }
# 70 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 70 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GSequence *GSequence_autoptr;
# 71 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 71 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 71 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 71 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GSequence (GSequence **_ptr) { if (*_ptr) (g_sequence_free) (*_ptr); }
# 71 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 71 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GSList *GSList_autoptr;
# 72 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 72 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 72 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 72 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GSList (GSList **_ptr) { if (*_ptr) (g_slist_free) (*_ptr); }
# 72 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 72 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GString *GString_autoptr;
# 73 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 73 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 73 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 73 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GString (GString **_ptr) { if (*_ptr) (g_autoptr_cleanup_gstring_free) (*_ptr); }
# 73 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 73 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GStringChunk *GStringChunk_autoptr;
# 74 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 74 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 74 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 74 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GStringChunk (GStringChunk **_ptr) { if (*_ptr) (g_string_chunk_free) (*_ptr); }
# 74 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 74 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GThread *GThread_autoptr;
# 75 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 75 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 75 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 75 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GThread (GThread **_ptr) { if (*_ptr) (g_thread_unref) (*_ptr); }
# 75 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 75 "/usr/include/glib-2.0/glib/glib-autocleanups.h"


# 76 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 76 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 76 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 76 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_auto_cleanup_GMutex (GMutex *_ptr) { (g_mutex_clear) (_ptr); }
# 76 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 76 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GMutexLocker *GMutexLocker_autoptr;
# 77 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 77 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 77 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 77 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GMutexLocker (GMutexLocker **_ptr) { if (*_ptr) (g_mutex_locker_free) (*_ptr); }
# 77 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 77 "/usr/include/glib-2.0/glib/glib-autocleanups.h"


# 78 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 78 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 78 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 78 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_auto_cleanup_GCond (GCond *_ptr) { (g_cond_clear) (_ptr); }
# 78 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 78 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GTimer *GTimer_autoptr;
# 79 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 79 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 79 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 79 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GTimer (GTimer **_ptr) { if (*_ptr) (g_timer_destroy) (*_ptr); }
# 79 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 79 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GTimeZone *GTimeZone_autoptr;
# 80 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 80 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 80 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 80 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GTimeZone (GTimeZone **_ptr) { if (*_ptr) (g_time_zone_unref) (*_ptr); }
# 80 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 80 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GTree *GTree_autoptr;
# 81 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 81 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 81 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 81 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GTree (GTree **_ptr) { if (*_ptr) (g_tree_unref) (*_ptr); }
# 81 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 81 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GVariant *GVariant_autoptr;
# 82 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 82 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 82 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 82 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GVariant (GVariant **_ptr) { if (*_ptr) (g_variant_unref) (*_ptr); }
# 82 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 82 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GVariantBuilder *GVariantBuilder_autoptr;
# 83 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 83 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 83 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 83 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GVariantBuilder (GVariantBuilder **_ptr) { if (*_ptr) (g_variant_builder_unref) (*_ptr); }
# 83 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 83 "/usr/include/glib-2.0/glib/glib-autocleanups.h"


# 84 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 84 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 84 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 84 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_auto_cleanup_GVariantBuilder (GVariantBuilder *_ptr) { (g_variant_builder_clear) (_ptr); }
# 84 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 84 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GVariantIter *GVariantIter_autoptr;
# 85 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 85 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 85 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 85 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GVariantIter (GVariantIter **_ptr) { if (*_ptr) (g_variant_iter_free) (*_ptr); }
# 85 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 85 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GVariantDict *GVariantDict_autoptr;
# 86 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 86 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 86 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 86 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GVariantDict (GVariantDict **_ptr) { if (*_ptr) (g_variant_dict_unref) (*_ptr); }
# 86 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 86 "/usr/include/glib-2.0/glib/glib-autocleanups.h"


# 87 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 87 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 87 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 87 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_auto_cleanup_GVariantDict (GVariantDict *_ptr) { (g_variant_dict_clear) (_ptr); }
# 87 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 87 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

typedef GVariantType *GVariantType_autoptr;
# 88 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 88 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 88 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 88 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_autoptr_cleanup_GVariantType (GVariantType **_ptr) { if (*_ptr) (g_variant_type_free) (*_ptr); }
# 88 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 88 "/usr/include/glib-2.0/glib/glib-autocleanups.h"


# 89 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic push
# 89 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 89 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
# 89 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
 static inline void glib_auto_cleanup_GStrv (GStrv *_ptr) { if (*_ptr != 
# 89 "/usr/include/glib-2.0/glib/glib-autocleanups.h" 3 4
__null
# 89 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
) (g_strfreev) (*_ptr); }
# 89 "/usr/include/glib-2.0/glib/glib-autocleanups.h"
#pragma GCC diagnostic pop
# 89 "/usr/include/glib-2.0/glib/glib-autocleanups.h"

# 111 "/usr/include/glib-2.0/glib.h" 2
# 33 "gdbus.h" 2

enum GDBusMethodFlags : unsigned int;
enum GDBusSignalFlags : unsigned int;
enum GDBusPropertyFlags : unsigned int;
enum GDBusSecurityFlags : unsigned int;

typedef struct GDBusArgInfo GDBusArgInfo;
typedef struct GDBusMethodTable GDBusMethodTable;
typedef struct GDBusSignalTable GDBusSignalTable;
typedef struct GDBusPropertyTable GDBusPropertyTable;
typedef struct GDBusSecurityTable GDBusSecurityTable;

typedef void (* GDBusWatchFunction) (DBusConnection *connection,
       void *user_data);

typedef void (* GDBusMessageFunction) (DBusConnection *connection,
      DBusMessage *message, void *user_data);

typedef gboolean (* GDBusSignalFunction) (DBusConnection *connection,
     DBusMessage *message, void *user_data);

DBusConnection *g_dbus_setup_bus(DBusBusType type, const char *name,
       DBusError *error);

DBusConnection *g_dbus_setup_private(DBusBusType type, const char *name,
       DBusError *error);

gboolean g_dbus_request_name(DBusConnection *connection, const char *name,
       DBusError *error);

gboolean g_dbus_set_disconnect_function(DBusConnection *connection,
    GDBusWatchFunction function,
    void *user_data, DBusFreeFunction destroy);

typedef void (* GDBusDestroyFunction) (void *user_data);

typedef DBusMessage * (* GDBusMethodFunction) (DBusConnection *connection,
     DBusMessage *message, void *user_data);

typedef gboolean (*GDBusPropertyGetter)(const GDBusPropertyTable *property,
     DBusMessageIter *iter, void *data);

typedef guint32 GDBusPendingPropertySet;

typedef void (*GDBusPropertySetter)(const GDBusPropertyTable *property,
   DBusMessageIter *value, GDBusPendingPropertySet id,
   void *data);

typedef gboolean (*GDBusPropertyExists)(const GDBusPropertyTable *property,
        void *data);

typedef guint32 GDBusPendingReply;

typedef void (* GDBusSecurityFunction) (DBusConnection *connection,
      const char *action,
      gboolean interaction,
      GDBusPendingReply pending);

enum GDBusFlags {
 G_DBUS_FLAG_ENABLE_EXPERIMENTAL = (1 << 0),
};

enum GDBusMethodFlags : unsigned int {
 G_DBUS_METHOD_FLAG_DEPRECATED = (1 << 0),
 G_DBUS_METHOD_FLAG_NOREPLY = (1 << 1),
 G_DBUS_METHOD_FLAG_ASYNC = (1 << 2),
 G_DBUS_METHOD_FLAG_EXPERIMENTAL = (1 << 3),
};

enum GDBusSignalFlags : unsigned int {
 G_DBUS_SIGNAL_FLAG_DEPRECATED = (1 << 0),
 G_DBUS_SIGNAL_FLAG_EXPERIMENTAL = (1 << 1),
};

enum GDBusPropertyFlags : unsigned int {
 G_DBUS_PROPERTY_FLAG_DEPRECATED = (1 << 0),
 G_DBUS_PROPERTY_FLAG_EXPERIMENTAL = (1 << 1),
};

enum GDBusSecurityFlags : unsigned int {
 G_DBUS_SECURITY_FLAG_DEPRECATED = (1 << 0),
 G_DBUS_SECURITY_FLAG_BUILTIN = (1 << 1),
 G_DBUS_SECURITY_FLAG_ALLOW_INTERACTION = (1 << 2),
};

struct GDBusArgInfo {
 const char *name;
 const char *signature;
};

struct GDBusMethodTable {
 const char *name;
 GDBusMethodFunction function;
 GDBusMethodFlags flags;
 unsigned int privilege;
 const GDBusArgInfo *in_args;
 const GDBusArgInfo *out_args;
};

struct GDBusSignalTable {
 const char *name;
 GDBusSignalFlags flags;
 const GDBusArgInfo *args;
};

struct GDBusPropertyTable {
 const char *name;
 const char *type;
 GDBusPropertyGetter get;
 GDBusPropertySetter set;
 GDBusPropertyExists exists;
 GDBusPropertyFlags flags;
};

struct GDBusSecurityTable {
 unsigned int privilege;
 const char *action;
 GDBusSecurityFlags flags;
 GDBusSecurityFunction function;
};
# 218 "gdbus.h"
void g_dbus_set_flags(int flags);

gboolean g_dbus_register_interface(DBusConnection *connection,
     const char *path, const char *name,
     const GDBusMethodTable *methods,
     const GDBusSignalTable *signals,
     const GDBusPropertyTable *properties,
     void *user_data,
     GDBusDestroyFunction destroy);
gboolean g_dbus_unregister_interface(DBusConnection *connection,
     const char *path, const char *name);

gboolean g_dbus_register_security(const GDBusSecurityTable *security);
gboolean g_dbus_unregister_security(const GDBusSecurityTable *security);

void g_dbus_pending_success(DBusConnection *connection,
     GDBusPendingReply pending);
void g_dbus_pending_error(DBusConnection *connection,
    GDBusPendingReply pending,
    const char *name, const char *format, ...)
     __attribute__((format(printf, 4, 5)));
void g_dbus_pending_error_valist(DBusConnection *connection,
    GDBusPendingReply pending, const char *name,
     const char *format, va_list args);

DBusMessage *g_dbus_create_error(DBusMessage *message, const char *name,
      const char *format, ...)
     __attribute__((format(printf, 3, 4)));
DBusMessage *g_dbus_create_error_valist(DBusMessage *message, const char *name,
     const char *format, va_list args);
DBusMessage *g_dbus_create_reply(DBusMessage *message, int type, ...);
DBusMessage *g_dbus_create_reply_valist(DBusMessage *message,
      int type, va_list args);

gboolean g_dbus_send_message(DBusConnection *connection, DBusMessage *message);
gboolean g_dbus_send_message_with_reply(DBusConnection *connection,
     DBusMessage *message,
     DBusPendingCall **call, int timeout);
gboolean g_dbus_send_error(DBusConnection *connection, DBusMessage *message,
    const char *name, const char *format, ...)
      __attribute__((format(printf, 4, 5)));
gboolean g_dbus_send_error_valist(DBusConnection *connection,
     DBusMessage *message, const char *name,
     const char *format, va_list args);
gboolean g_dbus_send_reply(DBusConnection *connection,
    DBusMessage *message, int type, ...);
gboolean g_dbus_send_reply_valist(DBusConnection *connection,
    DBusMessage *message, int type, va_list args);

gboolean g_dbus_emit_signal(DBusConnection *connection,
    const char *path, const char *interface,
    const char *name, int type, ...);
gboolean g_dbus_emit_signal_valist(DBusConnection *connection,
    const char *path, const char *interface,
    const char *name, int type, va_list args);

guint g_dbus_add_service_watch(DBusConnection *connection, const char *name,
    GDBusWatchFunction connect,
    GDBusWatchFunction disconnect,
    void *user_data, GDBusDestroyFunction destroy);
guint g_dbus_add_disconnect_watch(DBusConnection *connection, const char *name,
    GDBusWatchFunction function,
    void *user_data, GDBusDestroyFunction destroy);
guint g_dbus_add_signal_watch(DBusConnection *connection,
    const char *sender, const char *path,
    const char *interface, const char *member,
    GDBusSignalFunction function, void *user_data,
    GDBusDestroyFunction destroy);
guint g_dbus_add_properties_watch(DBusConnection *connection,
    const char *sender, const char *path,
    const char *interface,
    GDBusSignalFunction function, void *user_data,
    GDBusDestroyFunction destroy);
gboolean g_dbus_remove_watch(DBusConnection *connection, guint tag);
void g_dbus_remove_all_watches(DBusConnection *connection);

void g_dbus_pending_property_success(GDBusPendingPropertySet id);
void g_dbus_pending_property_error_valist(GDBusPendingReply id,
   const char *name, const char *format, va_list args);
void g_dbus_pending_property_error(GDBusPendingReply id, const char *name,
      const char *format, ...);
void g_dbus_emit_property_changed(DBusConnection *connection,
    const char *path, const char *interface,
    const char *name);
gboolean g_dbus_get_properties(DBusConnection *connection, const char *path,
    const char *interface, DBusMessageIter *iter);

gboolean g_dbus_attach_object_manager(DBusConnection *connection);
gboolean g_dbus_detach_object_manager(DBusConnection *connection);

typedef struct GDBusClient GDBusClient;
typedef struct GDBusProxy GDBusProxy;

GDBusProxy *g_dbus_proxy_new(GDBusClient *client, const char *path,
       const char *interface);

GDBusProxy *g_dbus_proxy_ref(GDBusProxy *proxy);
void g_dbus_proxy_unref(GDBusProxy *proxy);

const char *g_dbus_proxy_get_path(GDBusProxy *proxy);
const char *g_dbus_proxy_get_interface(GDBusProxy *proxy);

gboolean g_dbus_proxy_get_property(GDBusProxy *proxy, const char *name,
       DBusMessageIter *iter);

gboolean g_dbus_proxy_refresh_property(GDBusProxy *proxy, const char *name);

typedef void (* GDBusResultFunction) (const DBusError *error, void *user_data);

gboolean g_dbus_proxy_set_property_basic(GDBusProxy *proxy,
    const char *name, int type, const void *value,
    GDBusResultFunction function, void *user_data,
    GDBusDestroyFunction destroy);

gboolean g_dbus_proxy_set_property_array(GDBusProxy *proxy,
    const char *name, int type, const void *value,
    size_t size, GDBusResultFunction function,
    void *user_data, GDBusDestroyFunction destroy);

typedef void (* GDBusSetupFunction) (DBusMessageIter *iter, void *user_data);
typedef void (* GDBusReturnFunction) (DBusMessage *message, void *user_data);

gboolean g_dbus_proxy_method_call(GDBusProxy *proxy, const char *method,
    GDBusSetupFunction setup,
    GDBusReturnFunction function, void *user_data,
    GDBusDestroyFunction destroy);

typedef void (* GDBusClientFunction) (GDBusClient *client, void *user_data);
typedef void (* GDBusProxyFunction) (GDBusProxy *proxy, void *user_data);
typedef void (* GDBusPropertyFunction) (GDBusProxy *proxy, const char *name,
     DBusMessageIter *iter, void *user_data);

gboolean g_dbus_proxy_set_property_watch(GDBusProxy *proxy,
   GDBusPropertyFunction function, void *user_data);

gboolean g_dbus_proxy_set_removed_watch(GDBusProxy *proxy,
   GDBusProxyFunction destroy, void *user_data);

GDBusClient *g_dbus_client_new(DBusConnection *connection,
     const char *service, const char *path);

GDBusClient *g_dbus_client_ref(GDBusClient *client);
void g_dbus_client_unref(GDBusClient *client);

gboolean g_dbus_client_set_connect_watch(GDBusClient *client,
    GDBusWatchFunction function, void *user_data);
gboolean g_dbus_client_set_disconnect_watch(GDBusClient *client,
    GDBusWatchFunction function, void *user_data);
gboolean g_dbus_client_set_signal_watch(GDBusClient *client,
    GDBusMessageFunction function, void *user_data);
gboolean g_dbus_client_set_ready_watch(GDBusClient *client,
    GDBusClientFunction ready, void *user_data);
gboolean g_dbus_client_set_proxy_handlers(GDBusClient *client,
     GDBusProxyFunction proxy_added,
     GDBusProxyFunction proxy_removed,
     GDBusPropertyFunction property_changed,
     void *user_data);


}
# 4 "bluetooth.h" 2

namespace Bluetooth
{
 void defaultAgent();
 void setAgentEnabled(bool enabled);
 void setDiscoverable(bool discoverable);
 void setPairable(bool pairable);

 void onDeviceLoaded(GDBusProxy* proxy);
 void onAdapterLoaded(GDBusProxy* proxy);
 void onAgentManagerLoaded(GDBusProxy* proxy);
 void onDeviceUnloaded(GDBusProxy* proxy);
 void onAdapterUnloaded(GDBusProxy* proxy);
 void onAgentManagerUnloaded(GDBusProxy* proxy);
 void onDevicePropertyChanged(GDBusProxy* proxy, const char* name, DBusMessageIter* iter);
 void onAdapterPropertyChanged(GDBusProxy* proxy, const char* name, DBusMessageIter* iter);
}
# 3 "bluetooth.cpp" 2
# 1 "glibsetup.h" 1
       




namespace Glib
{
 void setup();
 DBusConnection* getDbusConnection();
 void processIter(std::string name, DBusMessageIter* iter, void (*callback)(std::string, int, void*));
}
# 4 "bluetooth.cpp" 2

using namespace std;




namespace Bluetooth
{
 GDBusProxy* device = 
# 12 "bluetooth.cpp" 3 4
                     __null
# 12 "bluetooth.cpp"
                         ;
 GDBusProxy* adapter = 
# 13 "bluetooth.cpp" 3 4
                      __null
# 13 "bluetooth.cpp"
                          ;
 GDBusProxy* agentManager = 
# 14 "bluetooth.cpp" 3 4
                           __null
# 14 "bluetooth.cpp"
                               ;
 bool agentRegistered = false;
 bool discoverable = false;
 bool pairable = false;


 static DBusMessage *release_agent(DBusConnection *conn, DBusMessage *msg, void *user_data)
 {
  agentRegistered = false;

  printf("Agent released\n");

  g_dbus_unregister_interface(conn, "/org/bluez/agent", "org.bluez.Agent1");

  return dbus_message_new_method_return(msg);
 }

 static DBusMessage *request_pincode(DBusConnection *conn, DBusMessage *msg, void *user_data)
 {
  const char *device;

  printf("Request PIN code\n");

  dbus_message_get_args(msg, 
# 37 "bluetooth.cpp" 3 4
                            __null
# 37 "bluetooth.cpp"
                                , ((int) 'o'), &device, ((int) '\0'));

  return 
# 39 "bluetooth.cpp" 3 4
        __null
# 39 "bluetooth.cpp"
            ;
 }

 static DBusMessage *display_pincode(DBusConnection *conn, DBusMessage *msg, void *user_data)
 {
  const char *device;
  const char *pincode;

  dbus_message_get_args(msg, 
# 47 "bluetooth.cpp" 3 4
                            __null
# 47 "bluetooth.cpp"
                                , ((int) 'o'), &device, ((int) 's'), &pincode, ((int) '\0'));

  printf("PIN code: %s\n", pincode);

  return dbus_message_new_method_return(msg);
 }

 static DBusMessage *request_passkey(DBusConnection *conn,
      DBusMessage *msg, void *user_data)
 {
  const char *device;

  printf("Request passkey\n");

  dbus_message_get_args(msg, 
# 61 "bluetooth.cpp" 3 4
                            __null
# 61 "bluetooth.cpp"
                                , ((int) 'o'), &device, ((int) '\0'));





  return 
# 67 "bluetooth.cpp" 3 4
        __null
# 67 "bluetooth.cpp"
            ;
 }

 static DBusMessage *display_passkey(DBusConnection *conn, DBusMessage *msg, void *user_data)
 {
  const char *device;
  dbus_uint32_t passkey;
  dbus_uint16_t entered;
  char passkey_full[7];

  dbus_message_get_args(msg, 
# 77 "bluetooth.cpp" 3 4
                            __null
# 77 "bluetooth.cpp"
                                , ((int) 'o'), &device, ((int) 'u'), &passkey, ((int) 'q'), &entered, ((int) '\0'));



  return dbus_message_new_method_return(msg);
 }

 static DBusMessage *request_confirmation(DBusConnection *conn, DBusMessage *msg, void *user_data)
 {
  const char *device;
  dbus_uint32_t passkey;
  char *str;

  printf("Request confirmation\n");

  dbus_message_get_args(msg, 
# 92 "bluetooth.cpp" 3 4
                            __null
# 92 "bluetooth.cpp"
                                , ((int) 'o'), &device,((int) 'u'), &passkey, ((int) '\0'));







  return 
# 100 "bluetooth.cpp" 3 4
        __null
# 100 "bluetooth.cpp"
            ;
 }

 static DBusMessage *request_authorization(DBusConnection *conn, DBusMessage *msg, void *user_data)
 {
  const char *device;

  printf("Request authorization\n");

  dbus_message_get_args(msg, 
# 109 "bluetooth.cpp" 3 4
                            __null
# 109 "bluetooth.cpp"
                                , ((int) 'o'), &device, ((int) '\0'));





  return 
# 115 "bluetooth.cpp" 3 4
        __null
# 115 "bluetooth.cpp"
            ;
 }

 static DBusMessage* authorize_service(DBusConnection *conn, DBusMessage *msg, void *user_data)
 {
  printf("Authorize service\n");


  return 
# 123 "bluetooth.cpp" 3 4
        __null
# 123 "bluetooth.cpp"
            ;
 }

 DBusMessage* cancel_request(DBusConnection *conn, DBusMessage *msg, void *user_data)
 {
  printf("Request canceled\n");

  return dbus_message_new_method_return(msg);
 }


 const GDBusMethodTable methods[] = {
  { .name = "Release", .in_args = 
# 135 "bluetooth.cpp" 3 4
   __null
# 135 "bluetooth.cpp"
   , .out_args = 
# 135 "bluetooth.cpp" 3 4
   __null
# 135 "bluetooth.cpp"
   , .function = release_agent },
  { .name = "RequestPinCode", .in_args = (const GDBusArgInfo[]) { { "device", "o" }, { } }, .out_args = (const GDBusArgInfo[]) { { "pincode", "s" }, { } }, .function = request_pincode, .flags = G_DBUS_METHOD_FLAG_ASYNC },
  { .name = "DisplayPinCode", .in_args = (const GDBusArgInfo[]) { { "device", "o" }, { "pincode", "s" }, { } }, .out_args = 
# 137 "bluetooth.cpp" 3 4
   __null
# 137 "bluetooth.cpp"
   , .function = display_pincode },
  { .name = "RequestPasskey", .in_args = (const GDBusArgInfo[]) { { "device", "o" }, { } }, .out_args = (const GDBusArgInfo[]) { { "passkey", "u" }, { } }, .function = request_passkey, .flags = G_DBUS_METHOD_FLAG_ASYNC },
  { .name = "DisplayPasskey", .in_args = (const GDBusArgInfo[]) { { "device", "o" }, { "passkey", "u" }, { "entered", "q" }, { } }, .out_args = 
# 139 "bluetooth.cpp" 3 4
   __null
# 139 "bluetooth.cpp"
   , .function = display_passkey },
  { .name = "RequestConfirmation", .in_args = (const GDBusArgInfo[]) { { "device", "o" }, { "passkey", "u" }, { } }, .out_args = 
# 140 "bluetooth.cpp" 3 4
   __null
# 140 "bluetooth.cpp"
   , .function = request_confirmation, .flags = G_DBUS_METHOD_FLAG_ASYNC },
  { .name = "RequestAuthorization", .in_args = (const GDBusArgInfo[]) { { "device", "o" }, { } }, .out_args = 
# 141 "bluetooth.cpp" 3 4
   __null
# 141 "bluetooth.cpp"
   , .function = request_authorization, .flags = G_DBUS_METHOD_FLAG_ASYNC },
  { .name = "AuthorizeService", .in_args = (const GDBusArgInfo[]) { { "device", "o" }, { "uuid", "s" }, { } }, .out_args = 
# 142 "bluetooth.cpp" 3 4
   __null
# 142 "bluetooth.cpp"
   , .function = authorize_service, .flags = G_DBUS_METHOD_FLAG_ASYNC },
  { .name = "Cancel", .in_args = 
# 143 "bluetooth.cpp" 3 4
   __null
# 143 "bluetooth.cpp"
   , .out_args = 
# 143 "bluetooth.cpp" 3 4
   __null
# 143 "bluetooth.cpp"
   , .function = cancel_request },
  { }
 };

 void generic_callback(const DBusError* error, void* userData)
 {
  char* str = (char*) userData;

  if (dbus_error_is_set(error))
   printf("Failed to set %s: %s\n", str, error->name);
  else
   printf("Changing %s succeeded\n", str);
 }

 void register_agent_setup(DBusMessageIter* iter, void* userData)
 {
  const char* path = "/org/bluez/agent";
  const char* capability = "";

  dbus_message_iter_append_basic(iter, ((int) 'o'), &path);
  dbus_message_iter_append_basic(iter, ((int) 's'), &capability);
 }

 void register_agent_reply(DBusMessage *message, void* userData)
 {
  DBusConnection* conn = Glib::getDbusConnection();
  DBusError error;

  dbus_error_init(&error);

  if (dbus_set_error_from_message(&error, message) == 0)
  {
   agentRegistered = true;
   printf("Agent registered\n");

   defaultAgent();
   setDiscoverable(true);
  }
  else
  {
   printf("Failed to register agent: %s\n", error.name);
   dbus_error_free(&error);

   if (g_dbus_unregister_interface(conn, "/org/bluez/agent", "org.bluez.Agent1") == 0)
    printf("Failed to unregister agent object\n");
  }
 }

 void unregister_agent_setup(DBusMessageIter* iter, void* userData)
 {
  const char* path = "/org/bluez/agent";
  dbus_message_iter_append_basic(iter, ((int) 'o'), &path);
 }

 void unregister_agent_reply(DBusMessage* message, void* userData)
 {
  DBusConnection* conn = Glib::getDbusConnection();
  DBusError error;

  dbus_error_init(&error);

  if (dbus_set_error_from_message(&error, message) == 0)
  {
   agentRegistered = false;
   printf("Agent unregistered\n");

   if (g_dbus_unregister_interface(conn, "/org/bluez/agent", "org.bluez.Agent1") == 0)
    printf("Failed to unregister agent object\n");
  }
  else
  {
   printf("Failed to unregister agent: %s\n", error.name);
   dbus_error_free(&error);
  }
 }

 void setAgentEnabled(bool enabled)
 {
  DBusConnection* connection = Glib::getDbusConnection();

  if (connection != 
# 223 "bluetooth.cpp" 3 4
                   __null 
# 223 "bluetooth.cpp"
                        && agentManager != 
# 223 "bluetooth.cpp" 3 4
                                           __null
# 223 "bluetooth.cpp"
                                               )
  {
   if (enabled)
   {
    if (g_dbus_register_interface(connection, "/org/bluez/agent", "org.bluez.Agent1", methods, 
# 227 "bluetooth.cpp" 3 4
                                                                                   __null
# 227 "bluetooth.cpp"
                                                                                       , 
# 227 "bluetooth.cpp" 3 4
                                                                                         __null
# 227 "bluetooth.cpp"
                                                                                             , 
# 227 "bluetooth.cpp" 3 4
                                                                                               __null
# 227 "bluetooth.cpp"
                                                                                                   , 
# 227 "bluetooth.cpp" 3 4
                                                                                                     __null
# 227 "bluetooth.cpp"
                                                                                                         ) == 0)
    {
     printf("Failed to register agent object\n");
     return;
    }

    if (g_dbus_proxy_method_call(agentManager, "RegisterAgent", register_agent_setup, register_agent_reply, 
# 233 "bluetooth.cpp" 3 4
                                                                                                           __null
# 233 "bluetooth.cpp"
                                                                                                               , 
# 233 "bluetooth.cpp" 3 4
                                                                                                                 __null
# 233 "bluetooth.cpp"
                                                                                                                     ) == 0)
    {
     printf("Failed to call register agent method\n");
     return;
    }
   }
   else
   {
    if (g_dbus_proxy_method_call(agentManager, "UnregisterAgent", unregister_agent_setup, unregister_agent_reply, 
# 241 "bluetooth.cpp" 3 4
                                                                                                                 __null
# 241 "bluetooth.cpp"
                                                                                                                     , 
# 241 "bluetooth.cpp" 3 4
                                                                                                                       __null
# 241 "bluetooth.cpp"
                                                                                                                           ) == 0)
    {
     printf("Failed to call unregister agent method\n");
     return;
    }
   }
  }
 }

 void request_default_setup(DBusMessageIter* iter, void* userData)
 {
  const char* path = "/org/bluez/agent";

  dbus_message_iter_append_basic(iter, ((int) 'o'), &path);
 }

 void request_default_reply(DBusMessage* message, void* userData)
 {
  DBusError error;

  dbus_error_init(&error);

  if (dbus_set_error_from_message(&error, message) == 1)
  {
   printf("Failed to request default agent: %s\n", error.name);
   dbus_error_free(&error);
   return;
  }

  printf("Default agent request successful\n");
 }

 void defaultAgent()
 {
  if (!agentRegistered)
  {
   printf("No agent is registered\n");
   return;
  }

  if (g_dbus_proxy_method_call(agentManager, "RequestDefaultAgent", request_default_setup, request_default_reply, 
# 281 "bluetooth.cpp" 3 4
                                                                                                                 __null
# 281 "bluetooth.cpp"
                                                                                                                     , 
# 281 "bluetooth.cpp" 3 4
                                                                                                                       __null
# 281 "bluetooth.cpp"
                                                                                                                           ) == 0)
  {
   printf("Failed to call request default agent method\n");
   return;
  }
 }

 void setDiscoverable(bool discoverable)
 {
  dbus_bool_t d = 1;

  if (g_dbus_proxy_set_property_basic(adapter, "Discoverable", ((int) 'b'), &d, generic_callback, (void*) "discoverable", 
# 292 "bluetooth.cpp" 3 4
                                                                                                                               __null
# 292 "bluetooth.cpp"
                                                                                                                                   ) == 1)
   return;
 }

 void onDevicePropertyChangedCallback(string name, int type, void* value)
 {
  if (type == ((int) 's'))
  {

  }
 }

 void onAdapterPropertyChangedCallback(string name, int type, void* value)
 {
  if (type == ((int) 's'))
  {

  }
 }

 void onDevicePropertyChanged(GDBusProxy* proxy, const char* name, DBusMessageIter* iter) { Glib::processIter(string(name), iter, onDevicePropertyChangedCallback); }
 void onAdapterPropertyChanged(GDBusProxy* proxy, const char* name, DBusMessageIter* iter) { Glib::processIter(string(name), iter, onAdapterPropertyChangedCallback); }
 void onDeviceLoaded(GDBusProxy* proxy) { device = proxy; }
 void onAdapterLoaded(GDBusProxy* proxy) { adapter = proxy; }
 void onAgentManagerLoaded(GDBusProxy* proxy) { agentManager = proxy; setAgentEnabled(true); }
 void onDeviceUnloaded(GDBusProxy* proxy) { device = 
# 317 "bluetooth.cpp" 3 4
                                                    __null
# 317 "bluetooth.cpp"
                                                        ; }
 void onAdapterUnloaded(GDBusProxy* proxy) { adapter = 
# 318 "bluetooth.cpp" 3 4
                                                      __null
# 318 "bluetooth.cpp"
                                                          ; }
 void onAgentManagerUnloaded(GDBusProxy* proxy) { agentManager = 
# 319 "bluetooth.cpp" 3 4
                                                                __null
# 319 "bluetooth.cpp"
                                                                    ; }
}
