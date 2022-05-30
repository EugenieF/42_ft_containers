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
	this->_nil = this->_create_node(value_type());
	this->_nil->color = BLACK;
	this->_root = this->_nil;
}

template <class T, class Compare, class Allocator>
red_black_tree<T, Compare, Allocator>::red_black_tree(red_black_tree<T, Compare, Allocator> const &other):
	_size(0), _key_comp(other.key_comp()), _alloc(other.get_allocator())
{
	this->_nil = this->_create_node(value_type());
	this->_nil->color = BLACK;
	this->_root = this->_nil;
	*this = other;
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
	typename red_black_tree<T, Compare, Allocator>::iterator	ptr;

	if (this != &other)
	{
		this->clear();
		for (ptr = other.begin(); ptr != other.end(); ptr++)
			this->insert(ptr.current->data);
	}
	return (*this);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::allocator_type	red_black_tree<T, Compare, Allocator>::get_allocator() const
{
	return (this->_alloc);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::key_compare   red_black_tree<T, Compare, Allocator>::key_comp() const
{
    return (this->_key_comp);
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
ft::pair<typename red_black_tree<T, Compare, Allocator>::iterator,bool>		red_black_tree<T, Compare, Allocator>::insert (const T& value)
{
	typedef typename red_black_tree<T, Compare, Allocator>::iterator	iterator;
	typedef typename red_black_tree<T, Compare, Allocator>::node_ptr	node_ptr;

	ft::pair<node_ptr,bool>		insert_pair;
	iterator					node_position;

	insert_pair = _rbtree_get_parent(this->get_root(), value);
	if (insert_pair.second == false)
	{
		node_position = iterator(insert_pair.first, this->get_root(), this->get_nil());
		return (ft::make_pair(node_position, false));
	}
	node_position = this->_rbtree_insert_node(insert_pair.first, value);
	return (ft::make_pair(node_position, true));
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::iterator	red_black_tree<T, Compare, Allocator>::insert (
	typename red_black_tree<T, Compare, Allocator>::iterator position, const T& value)
{
	typedef typename red_black_tree<T, Compare, Allocator>::iterator	iterator;
	typedef typename red_black_tree<T, Compare, Allocator>::node_ptr	node_ptr;

	ft::pair<node_ptr,bool>		insert_pair;
	iterator					node_position;

	insert_pair = _rbtree_get_parent(position.current, value);
	if (insert_pair.second == false)
		node_position = iterator(insert_pair.first, this->get_root(), this->get_nil());		// Key already exist
	else
		node_position = this->_rbtree_insert_node(insert_pair.first, value);				// Node was inserted
	return (node_position);
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::erase (typename red_black_tree<T, Compare, Allocator>::iterator node_position)
{
	if (node_position != this->end())
		this->_delete_node(node_position.current);
}

template <class T, class Compare, class Allocator>
size_t	red_black_tree<T, Compare, Allocator>::erase (const T& value)
{
	typedef typename red_black_tree<T, Compare, Allocator>::iterator	iterator;

	iterator	node_position;

	node_position = this->search_node(value);
	if (node_position != this->end())
	{
		this->_delete_node(node_position.current);
		return (1);
	}
	return (0);
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::swap (red_black_tree<T, Compare, Allocator>& x)
{
	std::swap(this->_root, x._root);
	std::swap(this->_nil, x._nil);
	std::swap(this->_size, x._size);
}

template <class T, class Compare, class Allocator>
void	red_black_tree<T, Compare, Allocator>::clear()
{
	typename red_black_tree<T, Compare, Allocator>::iterator	ptr;

	for (ptr = this->begin(); ptr != this->end(); ptr++)
		this->erase(ptr);
}

/**********************          OPERATIONS          **********************/

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::iterator	red_black_tree<T, Compare, Allocator>::lower_bound (const T& value) // greater or equal >=
{
	typename red_black_tree<T, Compare, Allocator>::iterator	ptr;
	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, value) == false)
			break ;
	}
	return (ptr);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::const_iterator		red_black_tree<T, Compare, Allocator>::lower_bound (const T& value) const
{
	typename red_black_tree<T, Compare, Allocator>::const_iterator	ptr;
	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, value) == false)
			break ;
	}
	return (ptr);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::iterator	red_black_tree<T, Compare, Allocator>::upper_bound (const T& value) // greater >
{
	typename red_black_tree<T, Compare, Allocator>::iterator	ptr;
	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, value) == false && this->_key_comp(k, ptr.current->data) == true)
			break ;
	}
	return (ptr);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::const_iterator	red_black_tree<T, Compare, Allocator>::upper_bound (const T& value) const
{
	typename red_black_tree<T, Compare, Allocator>::const_iterator	ptr;
	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, value) == false && this->_key_comp(k, ptr.current->data) == true)
			break ;
	}
	return (ptr);
}

template <class T, class Compare, class Allocator>
pair<typename red_black_tree<T, Compare, Allocator>::iterator,typename red_black_tree<T, Compare, Allocator>::iterator>		red_black_tree<T, Compare, Allocator>::equal_range (const T& value)
{
	typedef typename red_black_tree<T, Compare, Allocator>::iterator	iterator;
	iterator	lower_bound;
	iterator	upper_bound;

	lower_bound = this->lower_bound(value);
	upper_bound = this->upper_bound(value);
	return (ft::make_pair<iterator, iterator>(lower_bound, upper_bound));
}

template <class T, class Compare, class Allocator>
pair<typename red_black_tree<T, Compare, Allocator>::const_iterator,typename red_black_tree<T, Compare, Allocator>::const_iterator>		red_black_tree<T, Compare, Allocator>::equal_range (const T& value) const
{
	typedef typename red_black_tree<T, Compare, Allocator>::iterator	const_iterator;
	const_iterator	lower_bound;
	const_iterator	upper_bound;

	lower_bound = this->lower_bound(value);
	upper_bound = this->upper_bound(value);
	return (ft::make_pair<const_iterator, const_iterator>(lower_bound, upper_bound));
}


template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::iterator	red_black_tree<T, Compare, Allocator>::search_node(T const &value)
{
	typedef typename red_black_tree<T, Compare, Allocator>::iterator	iterator;

	iterator	node_position;

	node_position = this->_rbtree_search_node(this->get_root(), value);
	return (node_position);
}

template <class T, class Compare, class Allocator>
typename red_black_tree<T, Compare, Allocator>::const_iterator	red_black_tree<T, Compare, Allocator>::search_node(T const &value)
{
	typedef typename red_black_tree<T, Compare, Allocator>::const_iterator	const_iterator;

	const_iterator	node_position;

	node_position = this->_rbtree_search_node(this->get_root(), value);
	return (node_position);
}
