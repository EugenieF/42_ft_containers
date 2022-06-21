/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack.tpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:04:51 by efrancon          #+#    #+#             */
/*   Updated: 2022/06/21 11:04:53 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "stack.hpp"

/****************           MAIN           ****************/

template <class T, class Container>
ft::stack<T, Container>::stack (const typename ft::stack<T, Container>::container_type& cont): c(cont) {}

template <class T, class Container>
ft::stack<T, Container>&	ft::stack<T, Container>::operator=(const ft::stack<T, Container>& other)
{
	if (this != &other)
		this->c = other.c;
	return (*this);
}

template <class T, class Container>
ft::stack<T, Container>::~stack()
{}

/****************         CAPACITY         ****************/

template <class T, class Container>
bool	ft::stack<T, Container>::empty() const
{
	return (this->c.empty());
}

template <class T, class Container>
 typename ft::stack<T, Container>::size_type		ft::stack<T, Container>::size() const
{
	return (this->c.size());
}

/****************      ELEMENT ACCESS       ***************/

template <class T, class Container>
typename ft::stack<T, Container>::value_type&	ft::stack<T, Container>::top()
{
	return (this->c.back());
}

template <class T, class Container>
const typename ft::stack<T, Container>::value_type&		ft::stack<T, Container>::top() const
{
	return (this->c.back());
}

/****************        MODIFIERS         ****************/

template <class T, class Container>
void	ft::stack<T, Container>::push (const ft::stack<T, Container>::value_type& val)
{
	this->c.push_back(val);
}

template <class T, class Container>
void	ft::stack<T, Container>::pop()
{
	this->c.pop_back();
}

/*********     NON-MEMBER FUNCTION OVERLOADS     **********/

template <class T, class Container>
bool ft::operator== (const ft::stack<T, Container>& lhs, const ft::stack<T, Container>& rhs)
{
	return (lhs.c == rhs.c);
}

template <class T, class Container>
bool ft::operator!= (const ft::stack<T,Container>& lhs, const ft::stack<T,Container>& rhs)
{
	return (!(lhs == rhs));
}

template <class T, class Container>
bool ft::operator<  (const ft::stack<T,Container>& lhs, const ft::stack<T,Container>& rhs)
{
	return (lhs.c < rhs.c);
}

template <class T, class Container>
bool ft::operator<= (const ft::stack<T,Container>& lhs, const ft::stack<T,Container>& rhs)
{
	return (lhs < rhs || lhs == rhs);
}

template <class T, class Container>
bool ft::operator>  (const ft::stack<T,Container>& lhs, const ft::stack<T,Container>& rhs)
{
	return (rhs < lhs);
}

template <class T, class Container>
bool ft::operator>= (const ft::stack<T,Container>& lhs, const ft::stack<T,Container>& rhs)
{
	return (lhs > rhs || lhs == rhs);
}
