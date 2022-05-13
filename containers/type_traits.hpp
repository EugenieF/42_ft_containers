#ifndef __TYPE_TRAITS_HPP__
# define __TYPE_TRAITS_HPP__

#include "main.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                     ENABLE_IF                                   */
	/***********************************************************************************/

	template< bool B, class T = void >
	struct enable_if
	{

	};

	template<class T>
	struct enable_if<true, T>
	{
		typedef T type;
	};

	/***********************************************************************************/
	/*                                    IS_INTEGRAL                                  */
	/***********************************************************************************/

	template <class T>
	struct is_integral
	{
		
	};

	template <>
	struct is_integral<bool>
	{
		
	};

	template <>
	struct is_integral<char>
	{
		
	};

	template <>
	struct is_integral<unsigned char>
	{
		
	};

	template <>
	struct is_integral<short>
	{
		
	};

	template <>
	struct is_integral<unsigned short>
	{
		
	};

	template <>
	struct is_integral<int>
	{
		
	};

	template <>
	struct is_integral<unsigned int>
	{
		
	};

	template <>
	struct is_integral<long>
	{
		
	};

	template <>
	struct is_integral<unsigned long>
	{
		
	};

	template <>
	struct is_integral<long long>
	{
		
	};

	template <>
	struct is_integral<unsigned long long>
	{
		
	};
}

#endif
