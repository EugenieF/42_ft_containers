#include "rbtree_node.hpp"

/***********************************************************************************/
/*                                    CLASS NODE                                   */
/***********************************************************************************/

template <class T>
ft::node<T>::node():
	data(NULL), color(RED), left(NULL), right(NULL), parent(NULL) {}

// template <class T>
// ft::node<T>::node(const typename ft::node<T>::value_type &value):
// 	data(value), color(RED), left(NULL), right(NULL), parent(NULL) {}


template <class T>
ft::node<T>::node(const typename ft::node<T>::value_type& value):
	data(value), color(RED), left(NULL), right(NULL), parent(NULL)
{
	// data = value;
}

template <class T>
ft::node<T>::node(const typename ft::node<T>::value_type& value, int color,
	typename ft::node<T>::pointer left, typename ft::node<T>::pointer right, typename ft::node<T>::pointer parent):
	data(value), color(color), left(left), right(right), parent(parent)
{
	// data = value;
}

template <class T>
ft::node<T>::~node() {}

template <class T>
ft::node<T>::node(typename ft::node<T>::const_reference other):
	data(other.data), color(other.color), left(other.left), right(other.right), parent(other.parent) {}

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
