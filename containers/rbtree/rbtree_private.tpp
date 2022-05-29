#include "red_black_tree.hpp"
using namespace ft;

/******************************************************************************************/
/*                                   PRIVATE FUNCTIONS                                    */
/******************************************************************************************/


template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::node_ptr	red_black_tree<T, Compare, Allocator>::_create_node(const T &value)
{
	typename red_black_tree<T, Compare, Allocator>::node_ptr	new_node;

	new_node = this->_alloc.allocate(1);
	this->_alloc.construct(new_node, node(value));
	return (new_node);
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::_delete_node(typename red_black_tree<T, Compare, Allocator>::node_ptr node)
{
	this->_rbtree_delete_node(node);
	this->_alloc.destroy(node);
	this->_alloc.deallocate(node, 1);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::node_ptr	red_black_tree<T, Compare, Allocator>::_rbtree_get_minimum(typename red_black_tree<T, Compare, Allocator>::node_ptr node)
{
	if (node != get_nil())
	{
		while (node->left != get_nil())
			node = node->left;
	}
	return (node);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::node_ptr	red_black_tree<T, Compare, Allocator>::_rbtree_get_maximum(typename red_black_tree<T, Compare, Allocator>::node_ptr node)
{
	if (node != get_nil())
	{
		while (node->right != get_nil())
			node = node->right;
	}
	return (node);
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::_rbtree_left_rotate(typename red_black_tree<T, Compare, Allocator>::node_ptr x)
{
	typename red_black_tree<T, Compare, Allocator>::node_ptr y;

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
void	red_black_tree<T, Compare, Allocator>::_rbtree_right_rotate(typename red_black_tree<T, Compare, Allocator>::node_ptr x)
{
	typename red_black_tree<T, Compare, Allocator>::node_ptr y;

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

/************************************       INSERTION       ************************************/

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::iterator	red_black_tree<T, Compare, Allocator>::_rbtree_insert_node(
	typename red_black_tree<T, Compare, Allocator>::node_ptr node_position, typename red_black_tree<T, Compare, Allocator>::node_ptr insert_node)
{
	typedef typename red_black_tree<T, Compare, Allocator>::node_ptr	node_ptr;
	typedef typename red_black_tree<T, Compare, Allocator>::iterator	node_iterator;

	node_ptr	parent = this->get_nil();
	node_ptr	current = node_position;

	while (current != this->get_nil())
	{
		parent = current;
		if (this->_key_comp(insert_node->data, current->data))
			current = current->left;
		else if (this->_key_comp(current->data, insert_node->data))
			current = current->right;
		else 
			return (); // Value already exist !
	}
	insert_node->parent = parent;
	if (parent == this->get_nil())
		this->set_root(insert_node);
	else if (insert_node->data < y->data)
		parent->left = node;
	else
		parent->right = node;
	insert_node->left = this->get_nil();
	insert_node->right = this->get_nil();
	insert_node->color = RED;
	this->_rbtree_fix_insertion(insert_node);
	this->_size++;
	node_iterator = iterator(insert_node, this->get_root(), this->get_nil();
	return (node_iterator);
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::_rbtree_fix_insertion(node_ptr node)
{
	while (node->parent->color == RED)
	{
		if (node->parent == node->parent->parent->left)		// node->parent is left child
		{
			node_ptr y = node->parent->parent->right			// uncle of node
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
			node_ptr y = node->parent->parent->left			// uncle of node
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

/************************************      DELETION      ************************************/

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::_rbtree_transplant(node_ptr node1, node_ptr node2)
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
void	red_black_tree<T, Compare, Allocator>::_rbtree_delete_node(node_ptr z)
{
	node_ptr	x;
	node_ptr	y;
	int		y_origin_color;
	
	y = z;
	y_origin_color = y->color;
	if (z->left == get_nil())							// no left child
	{
		x = z->right;
		this->_rbtree_transplant(z, z->right);
	}
	else if (z->right == get_nil())						// no right child
	{
		x = z->left;
		this->_rbtree_transplant(z, z->left);
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
			this->_rbtree_transplant(y, y->right);
			y->right = z->right;
			y->right->parent = y;
		}
		this->_rbtree_transplant(z, y);
		y->left = z->left;
		y->left->parent = y;
		y->color = z->color;
	}
	if (y_origin_color == BLACK)
		this->_rbtree_fix_deletion(x);
	this->_size--;
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::_rbtree_fix_deletion(node_ptr node)
{
	node_ptr	y;

	while (node != get_root() && node->color == BLACK)
	{
		if (node == node->parent->left)
		{
			y = node->parent->right;
			if (y->color == RED)						// Case 1
			{
				y->color = BLACK;
				node->parent->color = RED;
				this->_rbtree_left_rotate(node->parent);
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
					this->_rbtree_right_rotate(y);
					y = node->parent->right;
				}
				y->color = node->parent->color;			// Case 4
				node->parent->color = BLACK;
				y->right->color = BLACK;
				this->_rbtree_left_rotate(node->parent);
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
				this->_rbtree_right_rotate(node->parent);
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
					this->_rbtree_left_rotate(y);
					y = node->parent->left;
				}
				y->color = node->parent->color;			// Case 4
				node->parent->color = BLACK;
				y->left->color = BLACK;
				this->_rbtree_right_rotate(node->parent);
				node = get_root();
			}
		}
	}
	node->color = BLACK;
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::node_ptr	red_black_tree<T, Compare, Allocator>::_search_node(T value)
{
	return (this->_rbtree_search_node(this->get_root(), value));
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::node_ptr	red_black_tree<T, Compare, Allocator>::_rbtree_search_node(
	typename red_black_tree<T, Compare, Allocator>::node_ptr node, T value)
{
	typename red_black_tree<T, Compare, Allocator>::node_ptr	current_node;

	current_node = node;
	while (current_node != this->get_nil())
	{
		if (this->_key_comp(ptr.current, value))
			current_node = current_node->left;
		else if (this->_key_comp(value, current_node->current))
			current_node = current_node->right;
		else
			break ;
	}
	return (current_node);
}
