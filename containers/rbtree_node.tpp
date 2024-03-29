/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_node.tpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:56:13 by efrancon          #+#    #+#             */
/*   Updated: 2022/06/21 10:56:15 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbtree_node.hpp"

template <class T>
ft::node<T>::node():
	data(NULL),
	left(NULL),
	right(NULL),
	parent(NULL), 
	color(RED)
{}

template <class T>
ft::node<T>::node(const typename ft::node<T>::value_type& value):
	data(value),
	left(NULL),
	right(NULL),
	parent(NULL),
	color(RED)
{}

template <class T>
ft::node<T>::node(const typename ft::node<T>::value_type& value, int color,
	typename ft::node<T>::pointer left, typename ft::node<T>::pointer right, typename ft::node<T>::pointer parent):
	data(value),
	left(left),
	right(right),
	parent(parent),
	color(color)
{}

template <class T>
ft::node<T>::node(typename ft::node<T>::const_reference other):
	data(other.data),
	left(other.left),
	right(other.right),
	parent(other.parent),
	color(other.color)
{}

template <class T>
ft::node<T>::~node() {}

template <class T>
typename ft::node<T>::reference	ft::node<T>::operator=(typename ft::node<T>::const_reference rhs)
{
	if (this != &rhs)
	{
		this->data = rhs.data;
		this->color = rhs.color;
		this->left = rhs.left;
		this->right = rhs.right;
		this->parent = rhs.parent;
	}
	return (*this);
}
