/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_iterator.tpp                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:56:04 by efrancon          #+#    #+#             */
/*   Updated: 2022/06/21 11:13:20 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbtree_iterator.hpp"

/***************************          MAIN          ***************************/

template <class T, class Node>
ft::rbtree_iterator<T, Node>::rbtree_iterator():
	current(NULL),
	_root(NULL),
	_nil(NULL) 
{}

template <class T, class Node>
ft::rbtree_iterator<T, Node>::rbtree_iterator (typename ft::rbtree_iterator<T, Node>::node_ptr ptr, typename ft::rbtree_iterator<T, Node>::node_ptr root, typename ft::rbtree_iterator<T, Node>::node_ptr nil):
	current(ptr),
	_root(root),
	_nil(nil)
{}

template <class T, class Node>
ft::rbtree_iterator<T, Node>::rbtree_iterator (const ft::rbtree_iterator<T, Node>& it):
	current(it.current),
	_root(it._root),
	_nil(it._nil)
{}

template <class T, class Node>
ft::rbtree_iterator<T, Node>::~rbtree_iterator()
{}

template <class T, class Node>
ft::rbtree_iterator<T, Node>&	ft::rbtree_iterator<T, Node>::operator=(const ft::rbtree_iterator<T, Node>& other)
{
	if (this != &other)
	{
		this->current = other.current;
		this->_root = other._root;
		this->_nil = other._nil;
	}
	return (*this);
}

template <class T, class Node>
typename ft::rbtree_iterator<T, Node>::node_ptr		ft::rbtree_iterator<T, Node>::_get_root() const
{
	return (this->_root);
}

template <class T, class Node>
typename ft::rbtree_iterator<T, Node>::node_ptr		ft::rbtree_iterator<T, Node>::_get_nil() const
{
	return (this->_nil);
}

/**********************          ACCESS OPERATORS        *********************/

template <class T, class Node>
typename ft::rbtree_iterator<T, Node>::reference	ft::rbtree_iterator<T, Node>::operator*()
{
	return (this->current->data);
}

template <class T, class Node>
typename ft::rbtree_iterator<T, Node>::const_reference	ft::rbtree_iterator<T, Node>::operator*() const
{
	return (this->current->data);
}

template <class T, class Node>
typename ft::rbtree_iterator<T, Node>::pointer		ft::rbtree_iterator<T, Node>::operator->()
{
	return (&this->operator*());
}

template <class T, class Node>
typename ft::rbtree_iterator<T, Node>::const_pointer		ft::rbtree_iterator<T, Node>::operator->() const
{
	return (&this->operator*());
}

/*******************       MEMBER FUNCTION OVERLOADS       *******************/

template <class T, class Node>
ft::rbtree_iterator<T, Node>&	ft::rbtree_iterator<T, Node>::operator++()
{
	this->current = this->_successor(this->current);
	return (*this);
}

template <class T, class Node>
ft::rbtree_iterator<T, Node>		ft::rbtree_iterator<T, Node>::operator++(int)
{
	ft::rbtree_iterator<T, Node>	prev(*this);
	this->current = this->_successor(this->current);
	return (prev);
}

template <class T, class Node>
ft::rbtree_iterator<T, Node>& 	ft::rbtree_iterator<T, Node>::operator--()
{
	this->current = this->_predecessor(this->current);
	return (*this);
}

template <class T, class Node>
ft::rbtree_iterator<T, Node>  	ft::rbtree_iterator<T, Node>::operator--(int)
{
	ft::rbtree_iterator<T, Node>	prev(*this);
	this->current = this->_predecessor(this->current);
	return (prev);
}

/*  Conversion operator const  */
template <class T, class Node>
ft::rbtree_iterator<T, Node>::operator	ft::rbtree_iterator<T const, Node>(void) const
{
	return (ft::rbtree_iterator<T const, Node>(this->current, this->_root, this->_nil));
}

/*******************    NON-MEMBER FUNCTION OVERLOADS     *******************/

template <class Tx, class Ty, class Ux, class Uy>
bool	ft::operator== (const ft::rbtree_iterator<Tx, Ty>& lhs, const ft::rbtree_iterator<Ux, Uy>& rhs)
{
	return (lhs.current == rhs.current);
}

template <class Tx, class Ty, class Ux, class Uy>
bool	ft::operator!= (const ft::rbtree_iterator<Tx, Ty>& lhs, const ft::rbtree_iterator<Ux, Uy>& rhs)
{
	return (lhs.current != rhs.current);
}

/*******************           PRIVATE FUNCTIONS          *******************/

template <class T, class Node>
typename ft::rbtree_iterator<T, Node>::node_ptr		ft::rbtree_iterator<T, Node>::_minimum(node_ptr node)
{
	if (node != this->_nil)
	{
		while (node->left != this->_nil)
			node = node->left;
	}
	return (node);
}

template <class T, class Node>
typename ft::rbtree_iterator<T, Node>::node_ptr		ft::rbtree_iterator<T, Node>::_maximum(typename ft::rbtree_iterator<T, Node>::node_ptr node)
{
	if (node != this->_nil)
	{
		while (node->right != this->_nil)
			node = node->right;
	}
	return (node);
}

template <class T, class Node>
typename ft::rbtree_iterator<T, Node>::node_ptr		ft::rbtree_iterator<T, Node>::_successor(typename ft::rbtree_iterator<T, Node>::node_ptr node)
{
	typedef typename ft::rbtree_iterator<T, Node>::node_ptr	node_ptr;
	
	node_ptr	successor;

	if (node->right != this->_nil)
		return (this->_minimum(node->right));
	successor = node->parent;
	while (successor != this->_nil && node == successor->right)
	{
		node = successor;
		successor = successor->parent;
	}
	return (successor);
}

template <class T, class Node>
typename ft::rbtree_iterator<T, Node>::node_ptr		ft::rbtree_iterator<T, Node>::_predecessor(typename ft::rbtree_iterator<T, Node>::node_ptr node)
{
	typedef typename ft::rbtree_iterator<T, Node>::node_ptr	node_ptr;

	node_ptr	predecessor;

	if (node == this->_nil)	
		return (this->_maximum(this->_root));
	if (node->left != this->_nil)
		return (this->_maximum(node->left));
	predecessor = node->parent;
	while (predecessor != this->_nil && node == predecessor->left)
	{
		node = predecessor;
		predecessor = predecessor->parent;
	}
	return (predecessor);
}
