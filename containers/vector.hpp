/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:08:32 by efrancon          #+#    #+#             */
/*   Updated: 2022/06/21 11:09:41 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __VECTOR_HPP__
# define __VECTOR_HPP__

# include <iostream>
# include <sstream>
# include <string>
# include <limits>
#include "vector_iterator.hpp"
#include "iterator.hpp"
#include "algorithm.hpp"

namespace ft
{
	/**************************************************************************/
	/*                                  VECTOR                                */
	/**************************************************************************/

	template < class T, class Allocator = std::allocator<T> >
	class	vector
	{
		public:
			/********************      MEMBER TYPES     **********************/
			typedef T										value_type;
			typedef Allocator								allocator_type;
			typedef	size_t									size_type;
			typedef	ptrdiff_t								difference_type;
			typedef	typename Allocator::reference			reference;
			typedef typename Allocator::const_reference		const_reference;
			typedef	typename Allocator::pointer				pointer;
			typedef	typename Allocator::const_pointer		const_pointer;
			typedef ft::vector_iterator<T>					iterator;
			typedef ft::vector_iterator<T const>			const_iterator;
			typedef ft::reverse_iterator<iterator>			reverse_iterator;
			typedef ft::reverse_iterator<const_iterator>	const_reverse_iterator;

		private:
			/*********************    MEMBER VARIABLES    *********************/
			pointer											_data;
			size_type										_size;
			size_type										_capacity;
			allocator_type									_alloc;

		public:
			/*******************      MEMBER FUNCTIONS     ********************/

							/*-----------   MAIN   -----------*/
			explicit 										vector (const allocator_type& alloc = allocator_type());
			explicit 										vector (size_type n, const value_type& value = value_type(), const allocator_type& alloc = allocator_type());
			template <class InputIterator>
			vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type(), typename ft::enable_if<!(ft::is_integral<InputIterator>::value)>::type* = NULL);
			vector (const vector& x);
			~vector();
			vector& operator=(const vector& x);
			void											assign(size_type count, const T& value);
			template <class InputIterator>
			typename ft::enable_if<!(ft::is_integral<InputIterator>::value), void>::type
															assign(InputIterator first, InputIterator last);
			allocator_type									get_allocator() const;

							/*---------  ITERATORS  ----------*/
			iterator										begin();
			const_iterator									begin() const;
			iterator										end();
			const_iterator									end() const;
			reverse_iterator								rbegin();
			const_reverse_iterator							rbegin() const;
			reverse_iterator								rend();
			const_reverse_iterator							rend() const;
			size_type										size() const;

							/*----------  CAPACITY  ----------*/
			size_type										max_size() const;
			void											resize (size_type n, value_type val = value_type());
			size_type	 									capacity() const;
			bool 											empty() const;
			void											reserve (size_type n);

							/*-------  ELEMENT ACCESS  -------*/
			reference										operator[](size_type pos);
			const_reference									operator[] (size_type pos) const;
			reference										at(size_type pos);
			const_reference									at(size_type pos) const;
			reference										front();
			const_reference									front() const;
			reference										back();
			const_reference									back() const;
			
							/*----------  MODIFIERS  ---------*/
			void											push_back (const value_type& val);
			void											pop_back();
			iterator										insert (iterator position, const value_type& val);	
    		void											insert (iterator position, size_type n, const value_type& val);	
			template <typename InputIterator>
    		typename ft::enable_if<!(ft::is_integral<InputIterator>::value), void>::type
															insert (iterator position, InputIterator first, InputIterator last);
			iterator										erase (iterator position);
			iterator										erase (iterator first, iterator last);
			void											swap (vector& x);
			void											clear();

		private:
			/*******************       PRIVATE FUNCTIONS      *******************/
			void											_manage_capacity(size_type insert_size);
			void											_destroy_range(iterator first, iterator last);
			void											_relocate_range(iterator position, iterator relocation);

			/*********************           PRINT          *********************/
			void											_print(void);
	};

	/***********************    NON-MEMBER FUNCTION OVERLOADS     ***********************/

	template <typename T, typename Allocator>
	bool	operator== (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs);

	template <typename T, typename Allocator>
	bool	operator!= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs);

	template <typename T, typename Allocator>
	bool	operator<  (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs);

	template <typename T, typename Allocator>
	bool	operator<= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs);

	template <typename T, typename Allocator>
	bool	operator>  (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs);

	template <typename T, typename Allocator>
	bool	operator>= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs);

	template <typename T, typename Allocator>
	void	swap (vector<T,Allocator>& x, vector<T,Allocator>& y);

}

#include "vector.tpp"

#endif
