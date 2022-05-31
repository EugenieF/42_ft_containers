#include "iterator.hpp"
using namespace ft;

/****************           MAIN           ****************/

template <class T, class Node>
rbtree_iterator<T, Node>::rbtree_iterator(): current(NULL), _root(NULL), _nil(NULL) {}

template <class T, class Node>
rbtree_iterator<T, Node>::rbtree_iterator (rbtree_iterator<T, Node>::node_ptr ptr, rbtree_iterator<T, Node>::node_ptr root, rbtree_iterator<T, Node>::node_ptr nil):
	current(ptr), _root(root), _nil(nil) {}

template <class T, class Node>
rbtree_iterator<T, Node>::rbtree_iterator (const rbtree_iterator<T, Node>& it):
	current(it.current), _root(it._root), _nil(it._nil) {}

template <class T, class Node>
rbtree_iterator<T, Node>::~rbtree_iterator() {}

template <class T, class Node>
rbtree_iterator<T, Node>&	rbtree_iterator<T, Node>::operator=(const rbtree_iterator<T, Node>& other)
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
typename rbtree_iterator<T, Node>::node_ptr		rbtree_iterator<T, Node>::_get_root() const
{
	return (this->_root);
}

template <class T, class Node>
typename rbtree_iterator<T, Node>::node_ptr		rbtree_iterator<T, Node>::_get_nil() const
{
	return (this->_nil);
}

/****************          ACCESS OPERATORS         ***************/

template <class T, class Node>
typename rbtree_iterator<T, Node>::reference	rbtree_iterator<T, Node>::operator*()
{
	return (this->current->data);
}

template <class T, class Node>
typename rbtree_iterator<T, Node>::const_reference	rbtree_iterator<T, Node>::operator*() const
{
	return (this->current->data);
}

template <class T, class Node>
typename rbtree_iterator<T, Node>::pointer		rbtree_iterator<T, Node>::operator->()
{
	return (&this->operator*());
}

template <class T, class Node>
typename rbtree_iterator<T, Node>::const_pointer		rbtree_iterator<T, Node>::operator->() const
{
	return (&this->operator*());
}

/**************       MEMBER FUNCTION OVERLOADS       **************/

template <class T, class Node>
rbtree_iterator<T, Node>&	rbtree_iterator<T, Node>::operator++()
{
	this->current = this->_successor(this->current);
	return (*this);
}

template <class T, class Node>
rbtree_iterator<T, Node>		rbtree_iterator<T, Node>::operator++(int)
{
	rbtree_iterator<T, Node>	prev(*this);
	this->current = this->_successor(this->current);
	return (prev);
}

template <class T, class Node>
rbtree_iterator<T, Node>& 	rbtree_iterator<T, Node>::operator--()
{
	this->current = this->_predecessor(this->current);
	return (*this);
}

template <class T, class Node>
rbtree_iterator<T, Node>  	rbtree_iterator<T, Node>::operator--(int)
{
	rbtree_iterator<T, Node>	prev(*this);
	this->current = this->_predecessor(this->current);
	return (prev);
}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class Tx, class Ty, class Ux, class Uy>
bool	operator== (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs)
{
	return (lhs.current == rhs.current);
}

template <class Tx, class Ty, class Ux, class Uy>
bool	operator!= (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs)
{
	return (lhs.current != rhs.current);
}

/**************           PRIVATE FUNCTIONS          **************/

template <class T, class Node>
typename rbtree_iterator<T, Node>::node_ptr		rbtree_iterator<T, Node>::_minimum(node_ptr node)
{
	if (node != this->_get_nil())
	{
		while (node->left != this->_get_nil())
			node = node->left;
	}
	return (node);
}

template <class T, class Node>
typename rbtree_iterator<T, Node>::node_ptr		rbtree_iterator<T, Node>::_maximum(typename rbtree_iterator<T, Node>::node_ptr node)
{
	if (node != this->_get_nil())
	{
		while (node->right != this->_get_nil())
			node = node->right;
	}
	return (node);
}

template <class T, class Node>
typename rbtree_iterator<T, Node>::node_ptr		rbtree_iterator<T, Node>::_successor(typename rbtree_iterator<T, Node>::node_ptr node)
{
	typedef typename rbtree_iterator<T, Node>::node_ptr	node_ptr;
	
	node_ptr	successor;

	if (node->right != this->_get_nil())
		return (this->_minimum(node->right));
	successor = node->parent;
	while (successor != this->_get_nil() && node == successor->right)
	{
		node = successor;
		successor = successor->parent;
	}
	return (successor);
}

template <class T, class Node>
typename rbtree_iterator<T, Node>::node_ptr		rbtree_iterator<T, Node>::_predecessor(typename rbtree_iterator<T, Node>::node_ptr node)
{
	typedef typename rbtree_iterator<T, Node>::node_ptr	node_ptr;

	node_ptr	predecessor;

	if (node == this->_get_nil())	
		return (this->_maximum(this->_get_root()));
	if (node->left != this->_get_nil())
		return (this->_maximum(node->left));
	predecessor = node->parent;
	while (predecessor != this->_get_nil() && node == predecessor->left)
	{
		node = predecessor;
		predecessor = predecessor->parent;
	}
	return (predecessor);
}
