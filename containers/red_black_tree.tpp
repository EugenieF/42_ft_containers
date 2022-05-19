#include "red_black_tree.hpp"
using namespace ft;

/****************            CLASS NODE           ***************/

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

/****************       CLASS RED BLACK TREE       ***************/

template <class T, class Compare, class Allocator>
red_black_tree<T, Compare, Allocator>::red_black_tree(): _root(NULL), _nil(NULL) {}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::nodePtr		red_black_tree<T, Compare, Allocator>::red_black_tree::get_root()
{
	return (this->_root);
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::red_black_tree::set_root(typename red_black_tree<T, Compare, Allocator>::nodePtr node)
{
	this->_root = node;
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::nodePtr		red_black_tree<T, Compare, Allocator>::red_black_tree::get_nil()
{
	return (this->_nil);
}

/************************        ITERATORS         ************************/

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::iterator	red_black_tree<T, Compare, Allocator>::begin()
{

}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::const_iterator	red_black_tree<T, Compare, Allocator>::begin() const
{

}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::iterator	red_black_tree<T, Compare, Allocator>::end()
{

}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::const_iterator	red_black_tree<T, Compare, Allocator>::end() const
{

}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::reverse_iterator	red_black_tree<T, Compare, Allocator>::rbegin()
{

}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::const_reverse_iterator	red_black_tree<T, Compare, Allocator>::rbegin() const
{

}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::reverse_iterator	red_black_tree<T, Compare, Allocator>::rend()
{

}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::const_reverse_iterator	red_black_tree<T, Compare, Allocator>::rend() const
{

}


/********************        PRIVATE FUNCTIONS         ********************/

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::nodePtr	red_black_tree<T, Compare, Allocator>::_get_minimum(typename red_black_tree<T, Compare, Allocator>::nodePtr node)
{
	typename red_black_tree<T, Compare, Allocator>::nodePtr	current;

	current = node;
	while (current->left != get_nil())
		current = current->left;
	return (current);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::nodePtr	red_black_tree<T, Compare, Allocator>::_get_maximum(typename red_black_tree<T, Compare, Allocator>::nodePtr node)
{
	typename red_black_tree<T, Compare, Allocator>::nodePtr	current;

	current = node;
	while (current->right != get_nil())
		current = current->right;
	return (current);
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::_left_rotate(typename red_black_tree<T, Compare, Allocator>::nodePtr x)
{
	typename red_black_tree<T, Compare, Allocator>::nodePtr y;

	y = x->right;
	x->right = y->left;
	if (y->left)
		y->left->parent = x;
	y->parent = x->parent;
	if (!x->parent)
		this->get_root() = y;
	else if (x == x->parent->left)
		x->parent->left = y;
	else
		x->parent->right = y;
	y->left = x;
	x->parent = y;
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::_right_rotate(typename red_black_tree<T, Compare, Allocator>::nodePtr x)
{
	typename red_black_tree<T, Compare, Allocator>::nodePtr y;

	y = x->left;
	x->left = y->right;
	if (y->right)
		y->right->parent = x;
	y->parent = x->parent;
	if (!x->parent)
		this->get_root() = y;
	else if (x == x->parent->right)
		x->parent->right = y;
	else
		x->parent->left = y;
	y->right = x;
	x->parent = y;
}

/*********************      INSERTION      *********************/

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::_insert_node(nodePtr x)
{
	nodePtr	y = this->get_nil();
	nodePtr tmp = this->get_root();

	while (tmp != this->get_nil())
	{
		y = tmp;
		if (x->data < tmp->data)
			tmp = tmp->left;
		else
			tmp = tmp->right;
	}
	x->parent = y;
	if (y == this->get_nil())
		this->set_root(x);
	else if (x->data < y->data)
		y->left = n;
	else
		y->right = n;
	n->left = this->get_nil();
	n->right = this->get_nil();
	n->color = RED;
	fix_insertion(node);
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::_fix_insertion(nodePtr node)
{
	while (node->parent->color == RED)
	{
		if (node->parent == node->parent->parent->left)		// node->parent is left child
		{
			nodePtr y = node->parent->parent->right			// uncle of node
			if (y->color == RED)							// Case 1
			{
				node->parent->color = BLACK;
				y->color = BLACK;
				node->parent->parent->color = RED;
				node = node->parent->parent;
			}
			else
			{
				if (node == node->parent->right)			//Case 2
				{
					node = node->parent;
					left_rotate(node);
				}
				node->parent->color = BLACK;				//Case 3
				node->parent->parent->color = RED;
				right_rotate(node->parent->parent);
			}
		}
		else												// node->parent is right child
		{
			nodePtr y = node->parent->parent->left			// uncle of node
			if (y->color == RED)							// Case 1
			{
				node->parent->color = BLACK;
				y->color = BLACK;
				node->parent->parent->color = RED;
				node = node->parent->parent;
			}
			else
			{
				if (node == node->parent->left)				//Case 2
				{
					node = node->parent;
					right_rotate(node);
				}
				node->parent->color = BLACK;				//Case 3
				node->parent->parent->color = RED;
				left_rotate(node->parent->parent);
			}
		}
	}
	this->_root->color = BLACK;
}

/***********************      DELETION      ***********************/

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::_transplant(nodePtr node1, nodePtr node2)
{
	if (node1->parent == get_nil())						// node1 is root
		set_root(node2);
	else if (node1 == node1->parent->left)				// node1 is left child
		node1->parent->left = node2;
	else
		node1->parent->right = node2;					// node2 is right chile
	node2->parent = node1->parent;
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::_delete_node(nodePtr z)
{
	nodePtr	x;
	nodePtr	y;
	int		y_origin_color;
	
	y = z;
	y_origin_color = y->color;
	if (z->left == get_nil())							// no left child
	{
		x = z->right;
		transplant(z, z->right);
	}
	else if (z->right == get_nil())						// no right child
	{
		x = z->left;
		transplant(z, z->left);
	}
	else												// has both children
	{
		y = get_minimum(z->right);
		y_origin_color = y->color;
		x = y->right;
		if (y->parent == z)
			x->parent = y;
		else
		{
			transplant(y, y->right);
			y->right = z->right;
			y->right->parent = y;
		}
		transplant(z, y);
		y->left = z->left;
		y->left->parent = y;
		y->color = z->color;
	}
	if (y_origin_color == BLACK)
		fix_deletion(x);
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::_fix_deletion(nodePtr node)
{
	nodePtr	y;

	while (node != get_root() && node->color == BLACK)
	{
		if (node == node->parent->left)
		{
			y = node->parent->right;
			if (y->color == RED)						// Case 1
			{
				y->color = BLACK;
				node->parent->color = RED;
				left_rotate(node->parent);
				y = node->parent->right;
			}
			if (y->left->color == BLACK
				&& y->right->color == BLACK)			// Case 2
			{
				y->color = RED;
				node = node->parent;
			}
			else
			{
				if (y->right->color == BLACK)			// Case 3
				{
					y->left->color = BLACK;
					y->color = RED;
					right_rotate(y);
					y = node->parent->right;
				}
				y->color = node->parent->color;			// Case 4
				node->parent->color = BLACK;
				y->right->color = BLACK;
				left_rotate(node->parent);
				node = get_root();
			}
		}
		else
		{
			y = node->parent->left;
			if (y->color == RED)						// Case 1
			{
				y->color = BLACK;
				node->parent->color = RED;
				right_rotate(node->parent);
				y = node->parent->left;
			}
			if (y->right->color == BLACK
				&& y->left->color == BLACK)				// Case 2
			{
				y->color = RED;
				node = node->parent;
			}
			else
			{
				if (y->left->color == BLACK)			// Case 3
				{
					y->right->color = BLACK;
					y->color = RED;
					left_rotate(y);
					y = node->parent->left;
				}
				y->color = node->parent->color;			// Case 4
				node->parent->color = BLACK;
				y->left->color = BLACK;
				right_rotate(node->parent);
				node = get_root();
			}
		}
	}
	node->color = BLACK;
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::nodePtr		red_black_tree<T, Compare, Allocator>::_search_node(nodePtr node, value_type value)
{

}

