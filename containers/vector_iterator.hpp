/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector_iterator.hpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:06:58 by efrancon          #+#    #+#             */
/*   Updated: 2022/06/21 11:07:49 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __VECTOR_ITERATOR_HPP__
# define __VECTOR_ITERATOR_HPP__

# include <cstddef>
# include <iostream>
# include <memory>

namespace ft
{
	/***************************************************************************/
	/*                              VECTOR ITERATOR                            */
	/***************************************************************************/

	template <class T>
	class vector_iterator : public std::iterator<std::random_access_iterator_tag, T>
	{
		public:
			/********************      MEMBER TYPES     **********************/
			typedef	typename vector_iterator::difference_type	difference_type;
			typedef	typename vector_iterator::value_type		value_type;
			typedef	typename vector_iterator::pointer			pointer;
			typedef	typename vector_iterator::reference			reference;
			typedef	typename vector_iterator::iterator_category	iterator_category;

			/*******************      MEMBER FUNCTIONS     *******************/

							/*-----------   MAIN   -----------*/
			vector_iterator();
			vector_iterator (pointer it);
  			vector_iterator (const vector_iterator& it);
			~vector_iterator();
			vector_iterator&									operator=(const vector_iterator& other);
			pointer												base() const;
			reference											operator*() const;
			pointer												operator->() const;
			reference											operator[] (difference_type n) const;
			vector_iterator&									operator++();
			vector_iterator										operator++(int);
			vector_iterator& 									operator+= (difference_type n);
			vector_iterator										operator+ (difference_type n) const;
			difference_type										operator+ (const vector_iterator<T>& it) const;
			vector_iterator& 									operator--();
			vector_iterator  									operator--(int);
			vector_iterator&									operator-= (difference_type n);
			vector_iterator 									operator- (difference_type n) const;
			difference_type										operator- (const vector_iterator<T>& it) const;

			operator											vector_iterator<const value_type>(void) const;

		private:
			/*********************    MEMBER VARIABLES   *********************/
			pointer												_current;
	};
	
	/***********************    NON-MEMBER FUNCTION OVERLOADS    ***********************/

	template <class T, class U>
	bool											operator== (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs);

	template <class T, class U>
 	bool											operator!= (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs);

	template <class T, class U>
	bool											operator<  (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs);

	template <class T, class U>
	bool											operator<= (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs);

	template <class T, class U>
	bool											operator>  (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs);

	template <class T, class U>
	bool											operator>= (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs);

	template <class T>
	vector_iterator<T>								operator+ (typename vector_iterator<T>::difference_type n, const vector_iterator<T>& vec_it);

	template <class T>
	typename vector_iterator<T>::difference_type	operator+ (const vector_iterator<T>& lhs, const vector_iterator<T>& rhs);

	template <class T>
	vector_iterator<T>								operator- (typename vector_iterator<T>::difference_type n, const vector_iterator<T>& vec_it);

	template <class T>
	typename vector_iterator<T>::difference_type	operator- (const vector_iterator<T>& lhs, const vector_iterator<T>& rhs);
}

#include "vector_iterator.tpp"

#endif
