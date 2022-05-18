#include "red_black_tree_iterator.hpp"
using namespace ft;

/****************           MAIN           ****************/

template <class T, class Node>
rbtree_iterator<T, Node>::rbtree_iterator(): current(NULL), _root(NULL), _nil(NULL) {}

template <class T, class Node>
rbtree_iterator<T, Node>::rbtree_iterator (nodePtr ptr, nodePtr root, nodePtr nil):
	current(ptr), _root(root), _nil(nil) {}

template <class T, class Node>
rbtree_iterator<T, Node>::rbtree_iterator (const rbtree_iterator<T, Node>& it):
	current(it.current), _root(it._root), _nil(it._nil) {}

template <class T, class Node>
rbtree_iterator<T, Node>::~rbtree_iterator() {}

template <class T, class Node>
rbtree_iterator<T, Node>&	rbtree_iterator<T, Node>::operator=( const rbtree_iterator<T, Node>& other )
{
	if (this != &other)
	{
		this->current = other.current;
		this->_root = other._root;
		this->_nil = other._nil;
	}
	return (*this);
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
	this->current += 1;		// to adapt
	return (*this);
}

template <class T, class Node>
rbtree_iterator<T, Node>		rbtree_iterator<T, Node>::operator++(int)
{
	rbtree_iterator<T, Node> prev(*this);
	this->current += 1;		// to adapt
	return (prev);
}

template <class T, class Node>
rbtree_iterator<T, Node>& 	rbtree_iterator<T, Node>::operator--()
{
	this->current -= 1;		// to adapt
	return (*this);
}

template <class T, class Node>
rbtree_iterator<T, Node>  	rbtree_iterator<T, Node>::operator--(int)
{
	rbtree_iterator<T, Node> prev(*this);
	this->current -= 1;		// to adapt
	return (prev);
}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class Tx, class Ty, class Ux, class Uy>
bool	operator== (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs)
{
	return (lhs.current == rhs.current)
}

template <class Tx, class Ty, class Ux, class Uy>
bool	operator!= (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs)
{
	return (lhs.current != rhs.current)
}
