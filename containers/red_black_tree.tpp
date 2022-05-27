#include "red_black_tree.hpp"
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

/***********************************************************************************/
/*                              CLASS RED BLACK TREE                               */
/***********************************************************************************/

template <class T, class Compare, class Allocator>
red_black_tree<T, Compare, Allocator>::red_black_tree(const key_compare& comp, const allocator_type& alloc):
	_root(NULL), _nil(NULL), _size(0), _key_comp(comp), _alloc(alloc)
{
	this->_create_node(this->_nil);
	this->root = this->_nil;
}

template <class T, class Compare, class Allocator>
red_black_tree<T, Compare, Allocator>::red_black_tree(red_black_tree<T, Compare, Allocator> const &other):
	_size(other.size()), _key_comp(other._key_comp), _alloc(other._alloc)
{
	
}

template <class T, class Compare, class Allocator>
red_black_tree<T, Compare, Allocator>::~red_black_tree()
{
	this->clear();
	this->_remove_node(this->_nil);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::reference	red_black_tree<T, Compare, Allocator>::operator=(typename red_black_tree<T, Compare, Allocator>::reference const other)
{
	if (this != &other)
	{
		this->clear();
		for ()
	}
	return (*this);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::allocator_type	red_black_tree<T, Compare, Allocator>::get_allocator() const
{
	return (this->_alloc);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::node_ptr		red_black_tree<T, Compare, Allocator>::red_black_tree::get_root()
{
	return (this->_root);
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::red_black_tree::set_root(typename red_black_tree<T, Compare, Allocator>::node_ptr node)
{
	this->_root = node;
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::node_ptr		red_black_tree<T, Compare, Allocator>::red_black_tree::get_nil()
{
	return (this->_nil);
}


template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::node_ptr	red_black_tree<T, Compare, Allocator>::get_minimum() const
{
	return (this->_rbtree_get_minimum(this->get_root()));
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::node_ptr	red_black_tree<T, Compare, Allocator>::get_maximum() const
{
	return (this->_rbtree_get_maximum(this->get_root()));
}

/************************        ITERATORS         ************************/

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::iterator	red_black_tree<T, Compare, Allocator>::begin()
{
	return (iterator(this->get_minimum(), this->get_root(), this->get_nil()));
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::const_iterator	red_black_tree<T, Compare, Allocator>::begin() const
{
	return (const_iterator(this->get_minimum(), this->get_root(), this->get_nil()));
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::iterator	red_black_tree<T, Compare, Allocator>::end()
{
	return (iterator(this->get_nil(), this->get_root(), this->get_nil()));
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::const_iterator	red_black_tree<T, Compare, Allocator>::end() const
{
	return (const_iterator(this->get_nil(), this->get_root(), this->get_nil()));
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::reverse_iterator	red_black_tree<T, Compare, Allocator>::rbegin()
{
	return (reverse_iterator(this->end()));
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::const_reverse_iterator	red_black_tree<T, Compare, Allocator>::rbegin() const
{
	return (const_reverse_iterator(this->end()));
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::reverse_iterator	red_black_tree<T, Compare, Allocator>::rend()
{
	return (reverse_iterator(this->begin()));
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::const_reverse_iterator	red_black_tree<T, Compare, Allocator>::rend() const
{
	return (const_reverse_iterator(this->begin()));
}

/**********************           CAPACITY          **********************/

template <class T, class Compare, class Allocator>
size_t	red_black_tree<T, Compare, Allocator>::size() const
{
	return (this->_size);
}

template <class T, class Compare, class Allocator>
size_t	red_black_tree<T, Compare, Allocator>::max_size() const
{
	return (this->_alloc.max_size());
}

/**********************          MODIFIERS           **********************/

template <class T, class Compare, class Allocator>
pair<typename red_black_tree<T, Compare, Allocator>::iterator,bool>		red_black_tree<T, Compare, Allocator>::insert (const T& val)
{

}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::iterator	red_black_tree<T, Compare, Allocator>::insert (typename red_black_tree<T, Compare, Allocator>::iterator position, const T& val)
{

}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::erase (typename red_black_tree<T, Compare, Allocator>::iterator position)
{

}

template <class T, class Compare, class Allocator>
size_t	red_black_tree<T, Compare, Allocator>::erase (const T& k)
{
	this->_delete_node();
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::swap (red_black_tree<T, Compare, Allocator>& x)
{

}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::clear()
{
	typename red_black_tree<T, Compare, Allocator>::iterator	ptr;

	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		this->_remove_node(ptr.current);
	}
}

/**********************          OPERATIONS          **********************/

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::iterator	red_black_tree<T, Compare, Allocator>::lower_bound (const T& k) // greater or equal >=
{
	typename red_black_tree<T, Compare, Allocator>::iterator	ptr;
	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, k) == false)
			break ;
	}
	return (ptr);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::const_iterator		red_black_tree<T, Compare, Allocator>::lower_bound (const T& k) const
{
	typename red_black_tree<T, Compare, Allocator>::const_iterator	ptr;
	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, k) == false)
			break ;
	}
	return (ptr);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::iterator	red_black_tree<T, Compare, Allocator>::upper_bound (const T& k) // greater >
{
	typename red_black_tree<T, Compare, Allocator>::iterator	ptr;
	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, k) == false && this->_key_comp(k, ptr.current->data) == true)
			break ;
	}
	return (ptr);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::const_iterator	red_black_tree<T, Compare, Allocator>::upper_bound (const T& k) const
{
	typename red_black_tree<T, Compare, Allocator>::const_iterator	ptr;
	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, k) == false && this->_key_comp(k, ptr.current->data) == true)
			break ;
	}
	return (ptr);
}

template <class T, class Compare, class Allocator>
pair<typename red_black_tree<T, Compare, Allocator>::iterator,typename red_black_tree<T, Compare, Allocator>::iterator>		red_black_tree<T, Compare, Allocator>::equal_range (const T& k)
{
	typedef typename red_black_tree<T, Compare, Allocator>::iterator	iterator;
	iterator	lower_bound;
	iterator	upper_bound;

	lower_bound = this->lower_bound(k);
	upper_bound = this->upper_bound(k);
	return (ft::make_pair<iterator, iterator>(lower_bound, upper_bound));
}

template <class T, class Compare, class Allocator>
pair<typename red_black_tree<T, Compare, Allocator>::const_iterator,typename red_black_tree<T, Compare, Allocator>::const_iterator>		red_black_tree<T, Compare, Allocator>::equal_range (const T& k) const
{
	typedef typename red_black_tree<T, Compare, Allocator>::iterator	const_iterator;
	const_iterator	lower_bound;
	const_iterator	upper_bound;

	lower_bound = this->lower_bound(k);
	upper_bound = this->upper_bound(k);
	return (ft::make_pair<const_iterator, const_iterator>(lower_bound, upper_bound));
}

/******************************************************************************************/
/*                                   PRIVATE FUNCTIONS                                    */
/******************************************************************************************/


template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::node_ptr	red_black_tree<T, Compare, Allocator>::_create_node(T data)
{
	typename red_black_tree<T, Compare, Allocator>::node_ptr	new_node;

	new_node = this->_alloc.allocate(1);
	this->_alloc.construct(new_node, node(data));
	return (new_node);
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::_remove_node(typename red_black_tree<T, Compare, Allocator>::node_ptr node)
{
	this->_alloc.destroy(node);
	this->_alloc.deallocate(node, 1);
	node = NULL;
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
void	red_black_tree<T, Compare, Allocator>::_rbtree_insert_node(node_ptr x)
{
	node_ptr	y = this->get_nil();
	node_ptr tmp = this->get_root();

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
	this->_rbtree_fix_insertion(node);
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
typename red_black_tree<T, Compare, Allocator>::node_ptr		red_black_tree<T, Compare, Allocator>::_rbtree_search_node(
	typename red_black_tree<T, Compare, Allocator>::node_ptr node, T value)
{
	if (node == this->get_nil() || value == node->data)
		return (node);
	if (value < node->data)
		return (this->_rbtree_search_node(node->left, value));
	return (this->_rbtree_search_node(node->right, value));
}
