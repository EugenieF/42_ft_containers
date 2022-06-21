/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   type_traits.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:04:57 by efrancon          #+#    #+#             */
/*   Updated: 2022/06/21 11:05:42 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __TYPE_TRAITS_HPP__
# define __TYPE_TRAITS_HPP__

namespace ft
{
	/**************************************************************************/
	/*                               ENABLE_IF                                */
	/**************************************************************************/

	template < bool B, class T = void >
	struct enable_if
	{

	};

	template <class T>
	struct enable_if<true, T>
	{
		typedef T type;
	};

	/**************************************************************************/
	/*                              IS_INTEGRAL                               */
	/**************************************************************************/

	template <class T>
	struct is_integral
	{
		static const bool value = false;
	};

	/* Template specialization : */

	template <>
	struct is_integral<bool>
	{
		static const bool value = true;
	};

	template <>
	struct is_integral<char>
	{
		static const bool value = true;
	};

	template <>
	struct is_integral<unsigned char>
	{
		static const bool value = true;
	};

	template <>
	struct is_integral<short>
	{
		static const bool value = true;
	};

	template <>
	struct is_integral<unsigned short>
	{
		static const bool value = true;
	};

	template <>
	struct is_integral<int>
	{
		static const bool value = true;
	};

	template <>
	struct is_integral<unsigned int>
	{
		static const bool value = true;
	};

	template <>
	struct is_integral<long>
	{
		static const bool value = true;
	};

	template <>
	struct is_integral<unsigned long>
	{
		static const bool value = true;
	};

	template <>
	struct is_integral<long long>
	{
		static const bool value = true;
	};

	template <>
	struct is_integral<unsigned long long>
	{
		static const bool value = true;
	};
}

#endif
