#include "rbtree.hpp"

/******************************************************************************************/
/*                                   PRIVATE FUNCTIONS                                    */
/******************************************************************************************/

template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::_init_nil()
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::value_type	value_type;

	this->_nil = this->_alloc.allocate(1);
	this->_alloc.construct(this->_nil, node(value_type(), BLACK, this->_nil, this->_nil, this->_nil));
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	ft::red_black_tree<T, Allocator, Compare>::_create_node(
	const typename ft::red_black_tree<T, Allocator, Compare>::value_type& value, int color)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;
	
	node_ptr	new_node;

	new_node = this->_alloc.allocate(1);
	this->_alloc.construct(new_node, node(value, color, this->_nil, this->_nil, this->_nil));
	return (new_node);
}

template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::_delete_node(
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr node)
{
	if (node != this->get_nil())
		this->_rbtree_delete_node(node);
	this->_alloc.destroy(node);
	this->_alloc.deallocate(node, 1);
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	ft::red_black_tree<T, Allocator, Compare>::_rbtree_get_minimum(
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr node) const
{
	if (node != this->get_nil())
	{
		while (node->left != this->get_nil())
			node = node->left;
	}
	return (node);
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	ft::red_black_tree<T, Allocator, Compare>::_rbtree_get_maximum(
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr node) const
{
	if (node != this->get_nil())
	{
		while (node->right != this->get_nil())
			node = node->right;
	}
	return (node);
}

/************************************      ROTATION      ************************************/

/*	Rotation doesn't violate the property of binary search trees

					Y		right rotation		X
				   / \		-------------->	   / \
				  X	  C						  A   Y
				 / \		<--------------	     / \
				A   B		 left rotation		B   C
*/

template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::_rbtree_left_rotate(
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr x)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;
	
	node_ptr	y;

	y = x->right;
	x->right = y->left;
	if (y->left != this->get_nil())
		y->left->parent = x;
	y->parent = x->parent;
	if (x->parent == this->get_nil())
		this->_root = y;
	else if (x == x->parent->left)
		x->parent->left = y;
	else
		x->parent->right = y;
	y->left = x;
	x->parent = y;
}

template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::_rbtree_right_rotate(
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr x)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;
	
	node_ptr	y;

	y = x->left;
	x->left = y->right;
	if (y->right != this->get_nil())
		y->right->parent = x;
	y->parent = x->parent;
	if (x->parent == this->get_nil())
		this->_root = y;
	else if (x == x->parent->right)
		x->parent->right = y;
	else
		x->parent->left = y;
	y->right = x;
	x->parent = y;
}

/************************************       INSERTION       ************************************/

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	ft::red_black_tree<T, Allocator, Compare>::_check_hint(
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr hint, const T& value)
{
	if (hint == this->get_nil()
		|| (this->_key_comp(hint->left->data, value) && this->_key_comp(value, hint->parent->data))	== false	/*  <-- lower than left and parent  */
		|| (this->_key_comp(value, hint->right->data) && this->_key_comp(hint->parent->data, value)) == false)	/*  <-- higher than right and parent  */
		return (this->_root);
	return (hint);
}

template <class T, class Allocator, class Compare>
ft::pair<typename ft::red_black_tree<T, Allocator, Compare>::node_ptr,bool>		ft::red_black_tree<T, Allocator, Compare>::_get_parent (
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr hint, const T& value)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;

	node_ptr	parent = this->get_nil();
	node_ptr	current;

	current = this->_check_hint(hint, value);
	while (current != this->get_nil())
	{
		parent = current;
		if (this->_key_comp(value, current->data))
			current = current->left;
		else if (this->_key_comp(current->data, value))
			current = current->right;
		else
			return (ft::make_pair(current, false));		/*  <-- Key already exist  */
	}
	return (ft::make_pair(parent, true));
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::iterator	ft::red_black_tree<T, Allocator, Compare>::_rbtree_insert_node (
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr parent, const T& value)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;
	typedef typename ft::red_black_tree<T, Allocator, Compare>::iterator	iterator;

	node_ptr	insert_node;
	iterator	node_iterator;

	insert_node = this->_create_node(value, RED);
	insert_node->parent = parent;
	if (parent == this->get_nil())
		this->set_root(insert_node);
	else if (this->_key_comp(insert_node->data, parent->data))
		parent->left = insert_node;
	else
		parent->right = insert_node;
	this->_rbtree_fix_insertion(insert_node);
	this->_size++;
	node_iterator = iterator(insert_node, this->get_root(), this->get_nil());
	return (node_iterator);
}

/*  The property 4 will be violated when the parent of the inserted node is red.
There can be six cases in the case of violation of the property 4  */
template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::_rbtree_fix_insertion (
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr node)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;

	node_ptr	y;

	while (node->parent->color == RED)
	{
/*  The parent of the node is a left child of its parent  */
		if (node->parent == node->parent->parent->left)
		{
			y = node->parent->parent->right;
		/*  Case 1 : the uncle of node is red  */
			if (y->color == RED)
			{
				node->parent->color = BLACK;
				y->color = BLACK;
				node->parent->parent->color = RED;
				node = node->parent->parent;
			}
			else
			{
		/*  Case 2 : the uncle of node is black and the node is the right child  */
				if (node == node->parent->right)
				{
					node = node->parent;
					this->_rbtree_left_rotate(node);
				}
		/*  Case 3 : the uncle of node is black and the node is the left child  */
				node->parent->color = BLACK;
				node->parent->parent->color = RED;
				this->_rbtree_right_rotate(node->parent->parent);
			}
		}
/*  The parent of the node is a right child of its parent  */
		else
		{
			y = node->parent->parent->left;
		/*  Case 1 : the uncle of node is red  */
			if (y->color == RED)
			{
				node->parent->color = BLACK;
				y->color = BLACK;
				node->parent->parent->color = RED;
				node = node->parent->parent;
			}
			else
			{
		/*  Case 2 : the uncle of node is black and the node is the left child  */
				if (node == node->parent->left)
				{
					node = node->parent;
					this->_rbtree_right_rotate(node);
				}
		/*  Case 3 : the uncle of node is black and the node is the right child  */
				node->parent->color = BLACK;
				node->parent->parent->color = RED;
				this->_rbtree_left_rotate(node->parent->parent);
			}
		}
	}
	this->_root->color = BLACK;
}

/************************************      DELETION      ************************************/

template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::_rbtree_transplant(
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr node1, typename ft::red_black_tree<T, Allocator, Compare>::node_ptr node2)
{
	/*  node1 is root  */
	if (node1->parent == this->get_nil())
		this->_root = node2;
	/*  node1 is left child  */
	else if (node1 == node1->parent->left)
		node1->parent->left = node2;
	/*  node2 is right child  */
	else
		node1->parent->right = node2;
	node2->parent = node1->parent;
}

template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::_rbtree_delete_node(
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr node)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;

	node_ptr	x;
	node_ptr	y;
	int			node_origin_color;
	
	y = node;
	node_origin_color = node->color;
	/*  Has no left child  */
	if (node->left == this->get_nil())
	{
		x = node->right;
		this->_rbtree_transplant(node, node->right);
	}
	/*  Has no right child  */
	else if (node->right == this->get_nil())
	{
		x = node->left;
		this->_rbtree_transplant(node, node->left);
	}
	/*  Has both children  */
	else
	{
		y = this->_rbtree_get_minimum(node->right);
		node_origin_color = y->color;
		x = y->right;
		if (y->parent == node)
			x->parent = y;
		else
		{
			this->_rbtree_transplant(y, y->right);
			y->right = node->right;
			y->right->parent = y;
		}
		this->_rbtree_transplant(node, y);
		y->left = node->left;
		y->left->parent = y;
		y->color = node->color;
	}
	this->_size--;
	if (node_origin_color == BLACK)
		this->_rbtree_fix_deletion(x);
}

template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::_rbtree_fix_deletion(
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr node)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;
	
	node_ptr	y;

	while (node != this->get_root() && node->color == BLACK)
	{
/*  The parent of the node is a left child of its parent  */
		if (node == node->parent->left)
		{
			y = node->parent->right;
		/*  Case 1  */
			if (y->color == RED)
			{
				y->color = BLACK;
				node->parent->color = RED;
				this->_rbtree_left_rotate(node->parent);
				y = node->parent->right;
			}
		/*  Case 2  */
			if (y->left->color == BLACK && y->right->color == BLACK)
			{
				y->color = RED;
				node = node->parent;
			}
			else
			{
		/*  Case 3  */
				if (y->right->color == BLACK)
				{
					y->left->color = BLACK;
					y->color = RED;
					this->_rbtree_right_rotate(y);
					y = node->parent->right;
				}
		/*  Case 4  */
				y->color = node->parent->color;
				node->parent->color = BLACK;
				y->right->color = BLACK;
				this->_rbtree_left_rotate(node->parent);
				node = this->get_root();
			}
		}
/*  The parent of the node is a right child of its parent  */
		else
		{
			y = node->parent->left;
		/*  Case 1  */
			if (y->color == RED)
			{
				y->color = BLACK;
				node->parent->color = RED;
				this->_rbtree_right_rotate(node->parent);
				y = node->parent->left;
			}
		/*  Case 2  */
			if (y->right->color == BLACK && y->left->color == BLACK)
			{
				y->color = RED;
				node = node->parent;
			}
			else
			{
		/*  Case 3  */
				if (y->left->color == BLACK)
				{
					y->right->color = BLACK;
					y->color = RED;
					this->_rbtree_left_rotate(y);
					y = node->parent->left;
				}
		/*  Case 4  */
				y->color = node->parent->color;
				node->parent->color = BLACK;
				y->left->color = BLACK;
				this->_rbtree_right_rotate(node->parent);
				node = this->get_root();
			}
		}
	}
	node->color = BLACK;
}

/************************************       SEARCH       ************************************/

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::iterator	ft::red_black_tree<T, Allocator, Compare>::_rbtree_search_node(
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr node, T const &value)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;
	typedef typename ft::red_black_tree<T, Allocator, Compare>::iterator	iterator;

	node_ptr	current_node;
	iterator	node_position;

	current_node = node;
	while (current_node != this->get_nil())
	{
		if (this->_key_comp(value, current_node->data))
			current_node = current_node->left;
		else if (this->_key_comp(current_node->data, value))
			current_node = current_node->right;
		else
			break ;
	}
	node_position = iterator(current_node, this->get_root(), this->get_nil());
	return (node_position);
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	ft::red_black_tree<T, Allocator, Compare>::_rbtree_search_node(
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr node, T const &value) const
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr		node_ptr;
	typedef typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;

	node_ptr		current_node;
	const_iterator	node_position;

	current_node = node;
	while (current_node != this->get_nil())
	{
		if (this->_key_comp(value, current_node->data))
			current_node = current_node->left;
		else if (this->_key_comp(current_node->data, value))
			current_node = current_node->right;
		else
			break ;
	}
	node_position = const_iterator(current_node, this->get_root(), this->get_nil());
	return (node_position);
}

/************************************       PRINT        ************************************/

template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::_print(
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr node, std::stringstream &buffer, bool is_tail, std::string prefix)
{
	std::cout << "_print " << node->data << std::endl;
	if (node != this->_nil && node->right != this->_nil)
		this->_print(node->right, buffer, false, std::string(prefix).append(is_tail != 0 ? "│   " : "    "));
	buffer << prefix << (is_tail != 0 ? "└── " : "┌── ");
	if (node->color == RED)
		buffer << "\033[31m";
	buffer << node->data << "\033[0m" << std::endl;
	if (node != this->_nil && node->left != this->_nil)
		this->_print(node->left, buffer, true, std::string(prefix).append(is_tail != 0 ? "    " : "│   "));
}
