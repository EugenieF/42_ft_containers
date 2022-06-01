#include "red_black_tree.hpp"
using namespace ft;

/***********************************************************************************/
/*                              CLASS RED BLACK TREE                               */
/***********************************************************************************/

template <class T, class Allocator, class Compare>
red_black_tree<T, Allocator, Compare>::red_black_tree(const typename red_black_tree<T, Allocator, Compare>::allocator_type& alloc, const Compare& comp):
	_root(NULL), _nil(NULL), _size(0), _alloc(alloc), _key_comp(comp)
{
	typedef typename red_black_tree<T, Allocator, Compare>::value_type	value_type;

	this->_nil = this->_create_node(value_type(), BLACK);
	this->_root = this->_nil;
}

template <class T, class Allocator, class Compare>
red_black_tree<T, Allocator, Compare>::red_black_tree(red_black_tree<T, Allocator, Compare>const& other):
	_size(0), _alloc(other.get_allocator()), _key_comp(other.key_comp())
{
	typedef typename red_black_tree<T, Allocator, Compare>::value_type	value_type;

	this->_nil = this->_create_node(value_type(), BLACK);
	this->_root = this->_nil;
	*this = other;
}

template <class T, class Allocator, class Compare>
red_black_tree<T, Allocator, Compare>::~red_black_tree()
{
	this->clear();
	this->_delete_node(this->_nil);
	std::cout << " *** DEBUG *** " << std::endl;
}

template <class T, class Allocator, class Compare>
red_black_tree<T, Allocator, Compare>&	red_black_tree<T, Allocator, Compare>::operator=(
	red_black_tree<T, Allocator, Compare> const& other)
{
	typedef typename red_black_tree<T, Allocator, Compare>::iterator	iterator;
	
	iterator	ptr;

	if (this != &other)
	{
		this->clear();
		for (ptr = other.begin(); ptr != other.end(); ptr++)
			this->insert(ptr.current->data);
	}
	return (*this);
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::allocator_type	red_black_tree<T, Allocator, Compare>::get_allocator() const
{
	return (this->_alloc);
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::key_compare   red_black_tree<T, Allocator, Compare>::key_comp() const
{
    return (this->_key_comp);
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::node_ptr		red_black_tree<T, Allocator, Compare>::red_black_tree::get_root() const
{
	return (this->_root);
}

template <class T, class Allocator, class Compare>
void	red_black_tree<T, Allocator, Compare>::red_black_tree::set_root(typename red_black_tree<T, Allocator, Compare>::node_ptr node)
{
	this->_root = node;
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::node_ptr		red_black_tree<T, Allocator, Compare>::red_black_tree::get_nil() const
{
	return (this->_nil);
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::node_ptr	red_black_tree<T, Allocator, Compare>::get_minimum() const
{
	return (this->_rbtree_get_minimum(this->get_root()));
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::node_ptr	red_black_tree<T, Allocator, Compare>::get_maximum() const
{
	return (this->_rbtree_get_maximum(this->get_root()));
}

/************************        ITERATORS         ************************/

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::iterator	red_black_tree<T, Allocator, Compare>::begin()
{
	typedef typename red_black_tree<T, Allocator, Compare>::iterator	iterator;

	return (iterator(this->get_minimum(), this->get_root(), this->get_nil()));
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::const_iterator	red_black_tree<T, Allocator, Compare>::begin() const
{
	typedef typename red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;

	return (const_iterator(this->get_minimum(), this->get_root(), this->get_nil()));
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::iterator	red_black_tree<T, Allocator, Compare>::end()
{
	typedef typename red_black_tree<T, Allocator, Compare>::iterator	iterator;

	return (iterator(this->get_nil(), this->get_root(), this->get_nil()));
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::const_iterator	red_black_tree<T, Allocator, Compare>::end() const
{
	typedef typename red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;

	return (const_iterator(this->get_nil(), this->get_root(), this->get_nil()));
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::reverse_iterator	red_black_tree<T, Allocator, Compare>::rbegin()
{
	typedef typename red_black_tree<T, Allocator, Compare>::reverse_iterator	reverse_iterator;

	return (reverse_iterator(this->end()));
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::const_reverse_iterator	red_black_tree<T, Allocator, Compare>::rbegin() const
{
	typedef typename red_black_tree<T, Allocator, Compare>::const_reverse_iterator	const_reverse_iterator;

	return (const_reverse_iterator(this->end()));
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::reverse_iterator	red_black_tree<T, Allocator, Compare>::rend()
{
	typedef typename red_black_tree<T, Allocator, Compare>::reverse_iterator	reverse_iterator;

	return (reverse_iterator(this->begin()));
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::const_reverse_iterator	red_black_tree<T, Allocator, Compare>::rend() const
{
	typedef typename red_black_tree<T, Allocator, Compare>::const_reverse_iterator	const_reverse_iterator;

	return (const_reverse_iterator(this->begin()));
}

/**********************           CAPACITY          **********************/

template <class T, class Allocator, class Compare>
size_t	red_black_tree<T, Allocator, Compare>::size() const
{
	return (this->_size);
}

template <class T, class Allocator, class Compare>
size_t	red_black_tree<T, Allocator, Compare>::max_size() const
{
	return (this->_alloc.max_size());
}

/**********************          MODIFIERS           **********************/

template <class T, class Allocator, class Compare>
ft::pair<typename red_black_tree<T, Allocator, Compare>::iterator,bool>		red_black_tree<T, Allocator, Compare>::insert (const T& value)
{
	typedef typename red_black_tree<T, Allocator, Compare>::iterator	iterator;
	typedef typename red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;

	ft::pair<node_ptr,bool>		insert_pair;
	iterator					node_position;

	insert_pair = _rbtree_get_parent(this->get_root(), value);
	if (insert_pair.second == false)
	{
		node_position = iterator(insert_pair.first, this->get_root(), this->get_nil());
		return (ft::make_pair(node_position, false));
	}
	std::cout << " DEBUG ! " << std::endl;
	node_position = this->_rbtree_insert_node(insert_pair.first, value);
	return (ft::make_pair(node_position, true));
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::iterator	red_black_tree<T, Allocator, Compare>::insert (
	typename red_black_tree<T, Allocator, Compare>::iterator position, const T& value)
{
	typedef typename red_black_tree<T, Allocator, Compare>::iterator	iterator;
	typedef typename red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;

	ft::pair<node_ptr,bool>		insert_pair;
	iterator					node_position;

	insert_pair = _rbtree_get_parent(position.current, value);
	if (insert_pair.second == false)
		node_position = iterator(insert_pair.first, this->get_root(), this->get_nil());		// Key already exist
	else
		node_position = this->_rbtree_insert_node(insert_pair.first, value);				// Node was inserted
	return (node_position);
}

template <class T, class Allocator, class Compare>
void	red_black_tree<T, Allocator, Compare>::erase (
	typename red_black_tree<T, Allocator, Compare>::iterator node_position)
{
	if (node_position != this->end())
		this->_delete_node(node_position.current);
}

template <class T, class Allocator, class Compare>
size_t	red_black_tree<T, Allocator, Compare>::erase (const T& value)
{
	typedef typename red_black_tree<T, Allocator, Compare>::iterator	iterator;

	iterator	node_position;

	node_position = this->search_node(value);
	if (node_position != this->end())
	{
		this->_delete_node(node_position.current);
		return (1);
	}
	return (0);
}

template <class T, class Allocator, class Compare>
void	red_black_tree<T, Allocator, Compare>::swap (red_black_tree<T, Allocator, Compare>& x)
{
	std::swap(this->_root, x._root);
	std::swap(this->_nil, x._nil);
	std::swap(this->_size, x._size);
}

template <class T, class Allocator, class Compare>
void	red_black_tree<T, Allocator, Compare>::clear()
{
	typedef	typename red_black_tree<T, Allocator, Compare>::iterator	iterator;
	
	iterator	ptr;

	ptr = this->begin();
	for (; ptr != this->end(); ptr++)
	{
		this->erase(ptr);
	}
}

/**********************          OPERATIONS          **********************/

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::iterator	red_black_tree<T, Allocator, Compare>::lower_bound (const T& value) // greater or equal >=
{
	typedef typename red_black_tree<T, Allocator, Compare>::iterator	iterator;
	
	iterator	ptr;

	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, value) == false)
			break ;
	}
	return (ptr);
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::const_iterator		red_black_tree<T, Allocator, Compare>::lower_bound (const T& value) const
{
	typedef typename red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;
	
	const_iterator	ptr;

	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, value) == false)
			break ;
	}
	return (ptr);
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::iterator	red_black_tree<T, Allocator, Compare>::upper_bound (const T& value) // greater >
{
	typedef typename red_black_tree<T, Allocator, Compare>::iterator	iterator;
	
	iterator	ptr;

	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, value) == false && this->_key_comp(value, ptr.current->data) == true)
			break ;
	}
	return (ptr);
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::const_iterator	red_black_tree<T, Allocator, Compare>::upper_bound (const T& value) const
{
	typedef typename red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;
	
	const_iterator	ptr;

	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, value) == false && this->_key_comp(value, ptr.current->data) == true)
			break ;
	}
	return (ptr);
}

template <class T, class Allocator, class Compare>
pair<typename red_black_tree<T, Allocator, Compare>::iterator,typename red_black_tree<T, Allocator, Compare>::iterator>		red_black_tree<T, Allocator, Compare>::equal_range (const T& value)
{
	typedef typename red_black_tree<T, Allocator, Compare>::iterator	iterator;

	iterator	lower_bound;
	iterator	upper_bound;

	lower_bound = this->lower_bound(value);
	upper_bound = this->upper_bound(value);
	return (ft::make_pair<iterator, iterator>(lower_bound, upper_bound));
}

template <class T, class Allocator, class Compare>
pair<typename red_black_tree<T, Allocator, Compare>::const_iterator,typename red_black_tree<T, Allocator, Compare>::const_iterator>		red_black_tree<T, Allocator, Compare>::equal_range (const T& value) const
{
	typedef typename red_black_tree<T, Allocator, Compare>::iterator	const_iterator;

	const_iterator	lower_bound;
	const_iterator	upper_bound;

	lower_bound = this->lower_bound(value);
	upper_bound = this->upper_bound(value);
	return (ft::make_pair<const_iterator, const_iterator>(lower_bound, upper_bound));
}


template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::iterator	red_black_tree<T, Allocator, Compare>::search_node(T const &value)
{
	typedef typename red_black_tree<T, Allocator, Compare>::iterator	iterator;

	iterator	node_position;

	node_position = this->_rbtree_search_node(this->get_root(), value);
	return (node_position);
}

template <class T, class Allocator, class Compare>
typename red_black_tree<T, Allocator, Compare>::const_iterator	red_black_tree<T, Allocator, Compare>::search_node(T const &value) const
{
	typedef typename red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;

	const_iterator	node_position;

	node_position = this->_rbtree_search_node(this->get_root(), value);
	return (node_position);
}
