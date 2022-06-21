/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_public.tpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:57:38 by efrancon          #+#    #+#             */
/*   Updated: 2022/06/21 10:58:13 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rbtree.hpp"

/******************************************************************************/
/*                            CLASS RED-BLACK TREE                            */
/*                               Public functions                             */
/******************************************************************************/

template <class T, class Allocator, class Compare>
ft::red_black_tree<T, Allocator, Compare>::red_black_tree():
	_root(NULL),
	_nil(NULL),
	_size(0),
	_alloc(Allocator()),
	_key_comp(Compare())
{
	this->_init_nil();
	this->_root = this->_nil;
}

template <class T, class Allocator, class Compare>
ft::red_black_tree<T, Allocator, Compare>::red_black_tree(const typename ft::red_black_tree<T, Allocator, Compare>::allocator_type& alloc, const Compare& comp):
	_root(NULL),
	_nil(NULL),
	_size(0),
	_alloc(alloc),
	_key_comp(comp)
{
	this->_init_nil();
	this->_root = this->_nil;
}

template <class T, class Allocator, class Compare>
ft::red_black_tree<T, Allocator, Compare>::red_black_tree(ft::red_black_tree<T, Allocator, Compare>const& other):
	_size(0),
	_alloc(other.get_allocator()),
	_key_comp(other.key_comp())
{
	this->_init_nil();
	this->_root = this->_nil;
	*this = other;
}

template <class T, class Allocator, class Compare>
ft::red_black_tree<T, Allocator, Compare>::~red_black_tree()
{
	this->clear();
	this->_delete_node(this->_nil);
}

template <class T, class Allocator, class Compare>
ft::red_black_tree<T, Allocator, Compare>&	ft::red_black_tree<T, Allocator, Compare>::operator=(
	ft::red_black_tree<T, Allocator, Compare> const& other)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;
	
	const_iterator	ptr;

	if (this != &other)
	{
		this->clear();
		for (ptr = other.begin(); ptr != other.end(); ptr++)
			this->insert(ptr.current->data);
	}
	return (*this);
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::allocator_type	ft::red_black_tree<T, Allocator, Compare>::get_allocator() const
{
	return (this->_alloc);
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::key_compare   ft::red_black_tree<T, Allocator, Compare>::key_comp() const
{
    return (this->_key_comp);
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	ft::red_black_tree<T, Allocator, Compare>::red_black_tree::get_root() const
{
	return (this->_root);
}

template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::red_black_tree::set_root(typename ft::red_black_tree<T, Allocator, Compare>::node_ptr node)
{
	this->_root = node;
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	ft::red_black_tree<T, Allocator, Compare>::red_black_tree::get_nil() const
{
	return (this->_nil);
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	ft::red_black_tree<T, Allocator, Compare>::get_minimum() const
{
	return (this->_rbtree_get_minimum(this->get_root()));
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	ft::red_black_tree<T, Allocator, Compare>::get_maximum() const
{
	return (this->_rbtree_get_maximum(this->get_root()));
}

/************************        ITERATORS         ************************/

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::iterator	ft::red_black_tree<T, Allocator, Compare>::begin()
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::iterator	iterator;

	return (iterator(this->get_minimum(), this->get_root(), this->get_nil()));
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	ft::red_black_tree<T, Allocator, Compare>::begin() const
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;

	return (const_iterator(this->get_minimum(), this->get_root(), this->get_nil()));
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::iterator	ft::red_black_tree<T, Allocator, Compare>::end()
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::iterator	iterator;

	return (iterator(this->get_nil(), this->get_root(), this->get_nil()));
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	ft::red_black_tree<T, Allocator, Compare>::end() const
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;

	return (const_iterator(this->get_nil(), this->get_root(), this->get_nil()));
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::reverse_iterator	ft::red_black_tree<T, Allocator, Compare>::rbegin()
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::reverse_iterator	reverse_iterator;

	return (reverse_iterator(this->end()));
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::const_reverse_iterator	ft::red_black_tree<T, Allocator, Compare>::rbegin() const
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::const_reverse_iterator	const_reverse_iterator;

	return (const_reverse_iterator(this->end()));
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::reverse_iterator	ft::red_black_tree<T, Allocator, Compare>::rend()
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::reverse_iterator	reverse_iterator;

	return (reverse_iterator(this->begin()));
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::const_reverse_iterator	ft::red_black_tree<T, Allocator, Compare>::rend() const
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::const_reverse_iterator	const_reverse_iterator;

	return (const_reverse_iterator(this->begin()));
}

/**********************           CAPACITY          **********************/

template <class T, class Allocator, class Compare>
size_t	ft::red_black_tree<T, Allocator, Compare>::size() const
{
	return (this->_size);
}

template <class T, class Allocator, class Compare>
size_t	ft::red_black_tree<T, Allocator, Compare>::max_size() const
{
	return (this->_alloc.max_size());
}

/**********************          MODIFIERS           **********************/

template <class T, class Allocator, class Compare>
ft::pair<typename ft::red_black_tree<T, Allocator, Compare>::iterator,bool>		ft::red_black_tree<T, Allocator, Compare>::insert (const T& value)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::iterator	iterator;
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;

	ft::pair<node_ptr,bool>		insert_pair;
	iterator					node_position;

	insert_pair = _get_parent(this->get_root(), value);
	if (insert_pair.second == false)
	{
		node_position = iterator(insert_pair.first, this->get_root(), this->get_nil());
		return (ft::make_pair(node_position, false));
	}
	node_position = this->_rbtree_insert_node(insert_pair.first, value);
	return (ft::make_pair(node_position, true));
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::iterator	ft::red_black_tree<T, Allocator, Compare>::insert (
	typename ft::red_black_tree<T, Allocator, Compare>::iterator position, const T& value)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::iterator	iterator;
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr	node_ptr;

	ft::pair<node_ptr,bool>		insert_pair;
	iterator					node_position;

	insert_pair = _get_parent(position.current, value);
	if (insert_pair.second == false)
		node_position = iterator(insert_pair.first, this->get_root(), this->get_nil());		/*  Key already exist  */
	else
		node_position = this->_rbtree_insert_node(insert_pair.first, value);				/*  Node was inserted  */
	return (node_position);
}


template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	ft::red_black_tree<T, Allocator, Compare>::insert (
	typename ft::red_black_tree<T, Allocator, Compare>::const_iterator position, const T& value)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;
	typedef typename ft::red_black_tree<T, Allocator, Compare>::node_ptr		node_ptr;

	ft::pair<node_ptr,bool>		insert_pair;
	const_iterator				node_position;

	insert_pair = _get_parent(position.current, value);
	if (insert_pair.second == false)
		node_position = iterator(insert_pair.first, this->get_root(), this->get_nil());		/*  Key already exist  */
	else
		node_position = this->_rbtree_insert_node(insert_pair.first, value);				/*  Node was inserted  */
	return (node_position);
}

template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::erase (
	typename ft::red_black_tree<T, Allocator, Compare>::iterator node_position)
{
	if (node_position != this->end())
		this->_delete_node(node_position.current);
}

template <class T, class Allocator, class Compare>
size_t	ft::red_black_tree<T, Allocator, Compare>::erase (const T& value)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::iterator	iterator;

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
void	ft::red_black_tree<T, Allocator, Compare>::swap (ft::red_black_tree<T, Allocator, Compare>& x)
{
	std::swap(this->_root, x._root);
	std::swap(this->_nil, x._nil);
	std::swap(this->_size, x._size);
}

template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::clear()
{
	while (this->get_root() != this->get_nil())
		this->_delete_node(this->get_root());
}

/**********************          OPERATIONS          **********************/

/*  Returns an iterator pointing to the first element that is not less than (i.e. greater or equal to) key */
template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::iterator	ft::red_black_tree<T, Allocator, Compare>::lower_bound (const T& value)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::iterator	iterator;
	
	iterator	ptr;

	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, value) == false)
			break ;
	}
	return (ptr);
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::const_iterator		ft::red_black_tree<T, Allocator, Compare>::lower_bound (const T& value) const
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;
	
	const_iterator	ptr;

	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, value) == false)
			break ;
	}
	return (ptr);
}

/*  Returns an iterator pointing to the first element that is greater than key  */
template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::iterator	ft::red_black_tree<T, Allocator, Compare>::upper_bound (const T& value)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::iterator	iterator;
	
	iterator	ptr;

	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, value) == false && this->_key_comp(value, ptr.current->data) == true)
			break ;
	}
	return (ptr);
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	ft::red_black_tree<T, Allocator, Compare>::upper_bound (const T& value) const
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;
	
	const_iterator	ptr;

	for (ptr = this->begin(); ptr != this->end(); ptr++)
	{
		if (this->_key_comp(ptr.current->data, value) == false && this->_key_comp(value, ptr.current->data) == true)
			break ;
	}
	return (ptr);
}

/*  Returns a range containing all elements with the given key in the container  */
template <class T, class Allocator, class Compare>
ft::pair<typename ft::red_black_tree<T, Allocator, Compare>::iterator,typename ft::red_black_tree<T, Allocator, Compare>::iterator>		ft::red_black_tree<T, Allocator, Compare>::equal_range (const T& value)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::iterator	iterator;

	iterator	lower_bound;
	iterator	upper_bound;

	lower_bound = this->lower_bound(value);
	upper_bound = this->upper_bound(value);
	return (ft::make_pair<iterator, iterator>(lower_bound, upper_bound));
}

template <class T, class Allocator, class Compare>
ft::pair<typename ft::red_black_tree<T, Allocator, Compare>::const_iterator,typename ft::red_black_tree<T, Allocator, Compare>::const_iterator>		ft::red_black_tree<T, Allocator, Compare>::equal_range (const T& value) const
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;

	const_iterator	lower_bound;
	const_iterator	upper_bound;

	lower_bound = this->lower_bound(value);
	upper_bound = this->upper_bound(value);
	return (ft::make_pair<const_iterator, const_iterator>(lower_bound, upper_bound));
}


template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::iterator	ft::red_black_tree<T, Allocator, Compare>::search_node(T const &value)
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::iterator	iterator;

	iterator	node_position;

	node_position = this->_rbtree_search_node(this->get_root(), value);
	return (node_position);
}

template <class T, class Allocator, class Compare>
typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	ft::red_black_tree<T, Allocator, Compare>::search_node(T const &value) const
{
	typedef typename ft::red_black_tree<T, Allocator, Compare>::const_iterator	const_iterator;

	const_iterator	node_position;

	node_position = this->_rbtree_search_node(this->get_root(), value);
	return (node_position);
}

/******************************       PRINT        ******************************/

template <class T, class Allocator, class Compare>
void	ft::red_black_tree<T, Allocator, Compare>::print(void)
{
	if (this->size() < 1)
		return ;
	std::stringstream	buffer;
	this->_print(this->_root, buffer, true, "");
	std::cout << buffer.str() << std::endl;
}
