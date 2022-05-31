#include "node.hpp"
using namespace ft;

/***********************************************************************************/
/*                                    CLASS NODE                                   */
/***********************************************************************************/

template <class T>
node<T>::node():
	data(NULL), color(RED), left(NULL), right(NULL), parent(NULL) {}

template <class T>
node<T>::node(const typename node<T>::value_type &value):
	data(value), color(RED), left(NULL), right(NULL), parent(NULL) {}

template <class T>
node<T>::~node() {}

template <class T>
node<T>::node(typename node<T>::const_reference other):
	data(other.data), color(other.color), left(other.left), right(other.right), parent(other.parent) {}

template <class T>
typename node<T>::reference	node<T>::operator=(typename node<T>::const_reference rhs)
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
