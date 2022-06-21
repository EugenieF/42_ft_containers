/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_private.tpp                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:56:22 by efrancon          #+#    #+#             */
/*   Updated: 2022/06/21 10:57:34 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbtree.hpp"

/******************************************************************************/
/*                            CLASS RED-BLACK TREE                            */
/*                              Private functions                             */
/******************************************************************************/

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

/******************************      ROTATION      ******************************/

/*	Rotation doesn't violate the property of binary search trees:

					Y		right rotation		 X
				   / \		-------------->     / \
				  X	  C						   A   Y
				 / \		<--------------	      / \
				A   B		 left rotation		 B   C
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

/*******************************       INSERTION       *******************************/

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

/*  Sources : https://www.codesdope.com/course/data-structures-red-black-trees-insertion/  */

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::iterator	ft::red_black_tree<T, Allocator, Compare>::_rbtree_insert_node (
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr parent, const T& value)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;
	typedef typename ft::red_black_tree<T, Allocator, Compare>::iterator	iterator;

	node_ptr	nodeToInsert;
	iterator	node_iterator;

	nodeToInsert = this->_create_node(value, RED);
	nodeToInsert->parent = parent;
	if (parent == this->get_nil())
		this->set_root(nodeToInsert);
	else if (this->_key_comp(nodeToInsert->data, parent->data))
		parent->left = nodeToInsert;
	else
		parent->right = nodeToInsert;
	this->_rbtree_fix_insertion(nodeToInsert);
	this->_size++;
	node_iterator = iterator(nodeToInsert, this->get_root(), this->get_nil());
	return (node_iterator);
}

/*	Function to fix the violation of properties of red-black trees after an insertion:
(we color any newly inserted node to red)

[ Violation of property 2 ]
- 	Case 0:		current node is root									--> color black

[ Violation of property 4 ]
-	Case 1:		current node's uncle is red 							--> recolor
-	Case 2:		current node's uncle is black and a triangle is formed	--> rotate parent
-	Case 3:		current node's uncle is black and a line is formed		--> rotate grandparent and recolor

*/
template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::_rbtree_fix_insertion (
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr nodeToInsert)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;

	node_ptr	nodeUncle;

	while (nodeToInsert->parent->color == RED)
	{
/*  The current node's parent is a left child  */
		if (nodeToInsert->parent == nodeToInsert->parent->parent->left)
		{
			nodeUncle = nodeToInsert->parent->parent->right;
		/*  Case 1  */
			if (nodeUncle->color == RED)
			{
				nodeToInsert->parent->color = BLACK;
				nodeUncle->color = BLACK;
				nodeToInsert->parent->parent->color = RED;
				nodeToInsert = nodeToInsert->parent->parent;
			}
			else
			{
		/*  Case 2 : current node is the right child  */
				if (nodeToInsert == nodeToInsert->parent->right)
				{
					nodeToInsert = nodeToInsert->parent;
					this->_rbtree_left_rotate(nodeToInsert);
				}
		/*  Case 3 : current node is the left child  */
				nodeToInsert->parent->color = BLACK;
				nodeToInsert->parent->parent->color = RED;
				this->_rbtree_right_rotate(nodeToInsert->parent->parent);
			}
		}
/*  The current node's parent is a right child  */
		else
		{
			nodeUncle = nodeToInsert->parent->parent->left;
		/*  Case 1  */
			if (nodeUncle->color == RED)
			{
				nodeToInsert->parent->color = BLACK;
				nodeUncle->color = BLACK;
				nodeToInsert->parent->parent->color = RED;
				nodeToInsert = nodeToInsert->parent->parent;
			}
			else
			{
		/*  Case 2 : current node is the left child  */
				if (nodeToInsert == nodeToInsert->parent->left)
				{
					nodeToInsert = nodeToInsert->parent;
					this->_rbtree_right_rotate(nodeToInsert);
				}
		/*  Case 3 : current node is the right child  */
				nodeToInsert->parent->color = BLACK;
				nodeToInsert->parent->parent->color = RED;
				this->_rbtree_left_rotate(nodeToInsert->parent->parent);
			}
		}
	}
	/*  Case 0  */
	this->_root->color = BLACK;
}

/*******************************      DELETION      *******************************/

/*  Source : https://www.codesdope.com/course/data-structures-red-black-trees-deletion/ */

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
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr nodeToDelete)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;

	node_ptr	x;
	node_ptr	y;
	int			node_origin_color;
	
	y = nodeToDelete;
	node_origin_color = nodeToDelete->color;
	/*  Node has no children or only right  */
	if (nodeToDelete->left == this->get_nil())
	{
		x = nodeToDelete->right;
		this->_rbtree_transplant(nodeToDelete, nodeToDelete->right);
	}
	/*  Node has only left child  */
	else if (nodeToDelete->right == this->get_nil())
	{
		x = nodeToDelete->left;
		this->_rbtree_transplant(nodeToDelete, nodeToDelete->left);
	}
	/*  Node has both children  */
	else
	{
		y = this->_rbtree_get_minimum(nodeToDelete->right);
		node_origin_color = y->color;
		x = y->right;
		if (y->parent == nodeToDelete)
			x->parent = y;
		else
		{
			this->_rbtree_transplant(y, y->right);
			y->right = nodeToDelete->right;
			y->right->parent = y;
		}
		this->_rbtree_transplant(nodeToDelete, y);
		y->left = nodeToDelete->left;
		y->left->parent = y;
		y->color = nodeToDelete->color;
	}
	this->_size--;
	if (node_origin_color == BLACK)
		this->_rbtree_fix_deletion(x);
}

/*	Function to fix the violation of properties of red-black trees after a deletion:

[ Violation of property 1 ]
- 	Case 1:		node's sibling is red											-->	 rotate parent and recolor
- 	Case 2:		node's sibling is black and its both children are black			-->  recolor
- 	Case 3:		node's sibling is black and its right child is black(red)
				and left child is red(black)									-->  rotate sibling and recolor
- 	Case 4:		node's sibling is black and its right(left) child is red		-->  rotate parent and recolor

*/

template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::_rbtree_fix_deletion(
	typename ft::red_black_tree<T, Allocator, Compare>::node_ptr node)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;
	
	node_ptr	sibling;

	while (node != this->get_root() && node->color == BLACK)
	{
	/*  Current node's parent is a left child  */
		if (node == node->parent->left)
		{
			sibling = node->parent->right;
		/*  Case 1  */
			if (sibling->color == RED)
			{
				sibling->color = BLACK;
				node->parent->color = RED;
				this->_rbtree_left_rotate(node->parent);
				sibling = node->parent->right;
			}
		/*  Case 2  */
			if (sibling->left->color == BLACK && sibling->right->color == BLACK)
			{
				sibling->color = RED;
				node = node->parent;
			}
			else
			{
		/*  Case 3 : sibling's right child is black and its left child is red  */
				if (sibling->right->color == BLACK)
				{
					sibling->left->color = BLACK;
					sibling->color = RED;
					this->_rbtree_right_rotate(sibling);
					sibling = node->parent->right;
				}
		/*  Case 4 : sibling's right child is red  */
				sibling->color = node->parent->color;
				node->parent->color = BLACK;
				sibling->right->color = BLACK;
				this->_rbtree_left_rotate(node->parent);
				node = this->get_root();
			}
		}
	/*  Current node's parent is a right child  */
		else
		{
			sibling = node->parent->left;
		/*  Case 1  */
			if (sibling->color == RED)
			{
				sibling->color = BLACK;
				node->parent->color = RED;
				this->_rbtree_right_rotate(node->parent);
				sibling = node->parent->left;
			}
		/*  Case 2  */
			if (sibling->right->color == BLACK && sibling->left->color == BLACK)
			{
				sibling->color = RED;
				node = node->parent;
			}
			else
			{
		/*  Case 3 : sibling's right child is red and its left child is black  */
				if (sibling->left->color == BLACK)
				{
					sibling->right->color = BLACK;
					sibling->color = RED;
					this->_rbtree_left_rotate(sibling);
					sibling = node->parent->left;
				}
		/*  Case 4 : sibling's left child is red  */
				sibling->color = node->parent->color;
				node->parent->color = BLACK;
				sibling->left->color = BLACK;
				this->_rbtree_right_rotate(node->parent);
				node = this->get_root();
			}
		}
	}
	node->color = BLACK;
}

/*******************************       SEARCH       *******************************/

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

/*******************************       PRINT        *******************************/

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
