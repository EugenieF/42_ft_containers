/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iterator.tpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:55:34 by efrancon          #+#    #+#             */
/*   Updated: 2022/06/21 10:55:35 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "iterator.hpp"

/****************           MAIN           ****************/

template <class Iterator>
ft::reverse_iterator<Iterator>::reverse_iterator(): _current() {}

template <class Iterator>
ft::reverse_iterator<Iterator>::reverse_iterator (Iterator it): _current(it) {}

template <class Iterator>
template <class U>
ft::reverse_iterator<Iterator>::reverse_iterator (const ft::reverse_iterator<U>& rev_it):
	_current(rev_it.base()) {}

template <class Iterator>
ft::reverse_iterator<Iterator>::~reverse_iterator() {}

template <class Iterator>
template <class U>
ft::reverse_iterator<Iterator>&		ft::reverse_iterator<Iterator>::operator=(const ft::reverse_iterator<U>& other)
{
	this->_current = other.base();
	return (*this);
}

template <class Iterator>
Iterator	ft::reverse_iterator<Iterator>::base() const
{
	return (this->_current);
}

/****************          ACCESS OPERATORS         ***************/

template <class Iterator>
typename ft::reverse_iterator<Iterator>::reference	ft::reverse_iterator<Iterator>::operator*() const
{
	Iterator	tmp;

	tmp = this->_current;
	--tmp;
	return (*tmp);
}

template <class Iterator>
typename ft::reverse_iterator<Iterator>::pointer		ft::reverse_iterator<Iterator>::operator->() const
{
	return (&(this->operator*()));
}

template <class Iterator>
typename ft::reverse_iterator<Iterator>::reference	ft::reverse_iterator<Iterator>::operator[] (
	typename ft::reverse_iterator<Iterator>::difference_type n) const
{
	return (this->base()[-n - 1]);
}

/**************       MEMBER FUNCTION OVERLOADS       **************/

/*  ++i : Prefix increment operator  */
template <class Iterator>
ft::reverse_iterator<Iterator>&	ft::reverse_iterator<Iterator>::operator++()
{
	this->_current--;
	return (*this);
}

/*  i++ : Postfix increment operator  */
template <class Iterator>
ft::reverse_iterator<Iterator>	ft::reverse_iterator<Iterator>::operator++(int)
{
	ft::reverse_iterator<Iterator> prev = *this;
	this->_current--;
	return (prev);
}

template <class Iterator>
ft::reverse_iterator<Iterator>& 	ft::reverse_iterator<Iterator>::operator+= (
	typename ft::reverse_iterator<Iterator>::difference_type n)
{
	this->_current -= n;
	return (*this);
}

template <class Iterator>
ft::reverse_iterator<Iterator>	ft::reverse_iterator<Iterator>::operator+ (
	typename ft::reverse_iterator<Iterator>::difference_type n) const
{
	return (ft::reverse_iterator<Iterator>(this->base() - n));
}

template <class Iterator>
typename ft::reverse_iterator<Iterator>::difference_type	ft::reverse_iterator<Iterator>::operator+ (
	const ft::reverse_iterator<Iterator>& rev_it) const
{
	return (rev_it.base() + this->base());
}

/*  --i : Prefix decrement operator  */
template <class Iterator>
ft::reverse_iterator<Iterator>& 	ft::reverse_iterator<Iterator>::operator--()
{
	this->_current++;
	return (*this);
}

/*  i-- : Postfix decrement operator  */
template <class Iterator>
ft::reverse_iterator<Iterator>  	ft::reverse_iterator<Iterator>::operator--(int)
{
	ft::reverse_iterator<Iterator> prev = *this;
	this->_current++;
	return (prev);
}

template <class Iterator>
ft::reverse_iterator<Iterator>&	ft::reverse_iterator<Iterator>::operator-= (
	typename ft::reverse_iterator<Iterator>::difference_type n)
{
	this->_current += n;
	return (*this);
}

template <class Iterator>
ft::reverse_iterator<Iterator> 	ft::reverse_iterator<Iterator>::operator- (
	typename ft::reverse_iterator<Iterator>::difference_type n) const
{
	return (ft::reverse_iterator<Iterator>(this->base() + n));
}

template <class Iterator>
typename ft::reverse_iterator<Iterator>::difference_type	ft::reverse_iterator<Iterator>::operator- (
	const ft::reverse_iterator<Iterator>& rev_it) const
{
	return (rev_it.base() - this->base());
}

/*  Conversion operator const  */
template <class Iterator>
ft::reverse_iterator<Iterator>::operator	ft::reverse_iterator<const Iterator>(void) const
{
	return (ft::reverse_iterator<const Iterator>(this->base()));
}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/
	
template <class Iterator1, class Iterator2>
bool	ft::operator== (const ft::reverse_iterator<Iterator1>& lhs, const ft::reverse_iterator<Iterator2>& rhs)
{
	return (lhs.base() == rhs.base());
}

template <class Iterator1, class Iterator2>
bool	ft::operator!= (const ft::reverse_iterator<Iterator1>& lhs, const ft::reverse_iterator<Iterator2>& rhs)
{
	return (lhs.base() != rhs.base());
}

template <class Iterator1, class Iterator2>
bool	ft::operator<  (const ft::reverse_iterator<Iterator1>& lhs, const ft::reverse_iterator<Iterator2>& rhs)
{
	return (lhs.base() > rhs.base());
}

template <class Iterator1, class Iterator2>
bool	ft::operator<= (const ft::reverse_iterator<Iterator1>& lhs, const ft::reverse_iterator<Iterator2>& rhs)
{
	return (lhs.base() >= rhs.base());
}

template <class Iterator1, class Iterator2>
bool	ft::operator>  (const ft::reverse_iterator<Iterator1>& lhs, const ft::reverse_iterator<Iterator2>& rhs)
{
	return (lhs.base() < rhs.base());
}

template <class Iterator1, class Iterator2>
bool	ft::operator>= (const ft::reverse_iterator<Iterator1>& lhs, const ft::reverse_iterator<Iterator2>& rhs)
{
	return (lhs.base() <= rhs.base());
}

template <class Iterator>
ft::reverse_iterator<Iterator> ft::operator+ (typename ft::reverse_iterator<Iterator>::difference_type n, const ft::reverse_iterator<Iterator>& rev_it)
{
	return (rev_it + n);
}

template <class Iterator>
typename ft::reverse_iterator<Iterator>::difference_type	ft::operator+ (const ft::reverse_iterator<Iterator>& lhs, const ft::reverse_iterator<Iterator>& rhs)
{
	return (rhs.base() + lhs.base());
}

template <class Iterator>
ft::reverse_iterator<Iterator> ft::operator- (typename ft::reverse_iterator<Iterator>::difference_type n, const ft::reverse_iterator<Iterator>& rev_it)
{
	return (rev_it - n);
}

template <class Iterator>
typename ft::reverse_iterator<Iterator>::difference_type	ft::operator- (const ft::reverse_iterator<Iterator>& lhs, const ft::reverse_iterator<Iterator>& rhs)
{
	return (rhs.base() - lhs.base());
}
