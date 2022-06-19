#include "set.hpp"

/****************           MAIN           ****************/

template< class Key, class Compare, class Allocator >
ft::set<Key, Compare, Allocator>::set (const Compare& comp, const Allocator& alloc):
	_rbtree(alloc, comp),
	_key_comp(comp),
	_alloc(alloc)
{}

template< class Key, class Compare, class Allocator >
template< class InputIterator >
ft::set<Key, Compare, Allocator>::set (InputIterator first, InputIterator last, const Compare& comp, const Allocator& alloc):
	_rbtree(alloc, comp),
	_key_comp(comp),
	_alloc(alloc)
{
	this->insert(first, last);
}

template< class Key, class Compare, class Allocator >
ft::set<Key, Compare, Allocator>::set (const ft::set<Key, Compare, Allocator>& other):
	_rbtree(other.get_allocator(), other.key_comp()),
	_key_comp(other.key_comp()),
	_alloc(other.get_allocator())
{
	this->insert(other.begin(), other.end());
}

template< class Key, class Compare, class Allocator >
ft::set<Key, Compare, Allocator>::~set()
{}

template< class Key, class Compare, class Allocator >
ft::set<Key, Compare, Allocator>&	ft::set<Key, Compare, Allocator>::operator= (const ft::set<Key, Compare, Allocator>& other)
{
	if (this != &other)
	{
		this->_rbtree = other._rbtree;
		this->_key_comp = other._key_comp;
		this->_alloc = other._alloc;
	}
	return (*this);
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::allocator_type	ft::set<Key, Compare, Allocator>::get_allocator() const
{
	return (this->_alloc);
}

/****************        ITERATORS         ****************/

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::iterator	ft::set<Key, Compare, Allocator>::begin()
{
    return (this->_rbtree.begin());
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::const_iterator	ft::set<Key, Compare, Allocator>::begin() const
{
    return (this->_rbtree.begin());
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::iterator	ft::set<Key, Compare, Allocator>::end()
{
    return (this->_rbtree.end());
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::const_iterator	ft::set<Key, Compare, Allocator>::end() const
{
    return (this->_rbtree.end());
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::reverse_iterator	ft::set<Key, Compare, Allocator>::rbegin()
{
    return (this->_rbtree.rbegin());
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::const_reverse_iterator	ft::set<Key, Compare, Allocator>::rbegin() const
{
    return (this->_rbtree.rbegin());
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::reverse_iterator	ft::set<Key, Compare, Allocator>::rend()
{
    return (this->_rbtree.rend());
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::const_reverse_iterator	ft::set<Key, Compare, Allocator>::rend() const
{
    return (this->_rbtree.rend());
}


/****************         CAPACITY         ****************/

template< class Key, class Compare, class Allocator >
bool	ft::set<Key, Compare, Allocator>::empty() const
{
    if (this->size())
    	return (false);
    return (true);
}

template< class Key, class Compare, class Allocator >
size_t	ft::set<Key, Compare, Allocator>::size() const
{
    return (this->_rbtree.size());
}

template< class Key, class Compare, class Allocator >
size_t	ft::set<Key, Compare, Allocator>::max_size() const
{
    return (this->_rbtree.max_size());
}

/****************        MODIFIERS         ****************/

template< class Key, class Compare, class Allocator >
ft::pair<typename ft::set<Key, Compare, Allocator>::iterator,bool>		ft::set<Key, Compare, Allocator>::insert (
	const typename ft::set<Key, Compare, Allocator>::value_type& value)
{
	typedef typename ft::set<Key, Compare, Allocator>::iterator		iterator;

	ft::pair<iterator, bool>	pair;

	pair = this->_rbtree.insert(value);
	return (pair);
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::iterator	ft::set<Key, Compare, Allocator>::insert (
	typename ft::set<Key, Compare, Allocator>::iterator position, const typename ft::set<Key, Compare, Allocator>::value_type& value)
{
	typedef typename ft::set<Key, Compare, Allocator>::iterator		iterator;

	iterator	it;

	it = this->_rbtree.insert(position, value);
	return (it);
}

template< class Key, class Compare, class Allocator >
template< class InputIterator >
void	ft::set<Key, Compare, Allocator>::insert (InputIterator first, InputIterator last)
{
	for (; first != last; first++)
		this->_rbtree.insert(*first);
}

template< class Key, class Compare, class Allocator >
void	ft::set<Key, Compare, Allocator>::erase (typename ft::set<Key, Compare, Allocator>::iterator position)
{
	this->_rbtree.erase(*position);
}

template< class Key, class Compare, class Allocator >
size_t	ft::set<Key, Compare, Allocator>::erase (const typename ft::set<Key, Compare, Allocator>::value_type& value)
{
	return (this->_rbtree.erase(value));
}

template< class Key, class Compare, class Allocator >
void	ft::set<Key, Compare, Allocator>::erase (
	typename ft::set<Key, Compare, Allocator>::iterator first, typename ft::set<Key, Compare, Allocator>::iterator last)
{
	typedef typename ft::set<Key, Compare, Allocator>::iterator	iterator;

	iterator	to_erase;

	while (first != last)
	{
		to_erase = first;
		first++;
		this->_rbtree.erase(*to_erase);
	}
}

template< class Key, class Compare, class Allocator >
void	ft::set<Key, Compare, Allocator>::swap (ft::set<Key, Compare, Allocator>& other)
{
    this->_rbtree.swap(other._rbtree);
}

template< class Key, class Compare, class Allocator >
void	ft::set<Key, Compare, Allocator>::clear()
{
    this->_rbtree.clear();
}

/****************        OBSERVERS         ****************/

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::key_compare		ft::set<Key, Compare, Allocator>::key_comp() const
{
	return (this->_key_comp);
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::value_compare	ft::set<Key, Compare, Allocator>::value_comp() const
{
	return (this->_key_comp);
}

/****************        OPERATIONS        ****************/

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::iterator		ft::set<Key, Compare, Allocator>::find (const Key& key)
{
	typedef typename ft::set<Key, Compare, Allocator>::iterator	iterator;

	iterator	node_position;

	node_position = this->_rbtree.search_node(key);
	return (node_position);
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::const_iterator	ft::set<Key, Compare, Allocator>::find (const Key& key) const
{
	typedef typename ft::set<Key, Compare, Allocator>::const_iterator	const_iterator;

	const_iterator	node_position;

	node_position = this->_rbtree.search_node(key);
	return (node_position);
}

template< class Key, class Compare, class Allocator >
size_t	ft::set<Key, Compare, Allocator>::count (const Key& key) const
{
	typedef typename ft::set<Key, Compare, Allocator>::const_iterator	const_iterator;

	const_iterator	node_position;

	node_position = this->find(key);
	if (node_position == this->end())
		return (0);
	return (1);
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::iterator	ft::set<Key, Compare, Allocator>::lower_bound (const Key& key)
{
    return (this->_rbtree.lower_bound(key));
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::const_iterator	ft::set<Key, Compare, Allocator>::lower_bound (const Key& key) const
{
    return (this->_rbtree.lower_bound(key));
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::iterator	ft::set<Key, Compare, Allocator>::upper_bound (const Key& key)
{
    return (this->_rbtree.upper_bound(key));
}

template< class Key, class Compare, class Allocator >
typename ft::set<Key, Compare, Allocator>::const_iterator	ft::set<Key, Compare, Allocator>::upper_bound (const Key& key) const
{
    return (this->_rbtree.upper_bound(key));
}

template< class Key, class Compare, class Allocator >
ft::pair<typename ft::set<Key, Compare, Allocator>::iterator,typename ft::set<Key, Compare, Allocator>::iterator>	ft::set<Key, Compare, Allocator>::equal_range (const Key& key)
{
    return (this->_rbtree.equal_range(key));
}

template< class Key, class Compare, class Allocator >
ft::pair<typename ft::set<Key, Compare, Allocator>::const_iterator,typename ft::set<Key, Compare, Allocator>::const_iterator>	ft::set<Key, Compare, Allocator>::equal_range (const Key& key) const
{
    return (this->_rbtree.equal_range(key));
}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template< class Key, class Compare, class Allocator >
bool	ft::operator==(const ft::set<Key,Compare,Allocator>& lhs, const ft::set<Key,Compare,Allocator>& rhs)
{
	if (lhs.size() == rhs.size())
		return (ft::equal(lhs.begin(), lhs.end(), rhs.begin()));
	return (false);
}

template< class Key, class Compare, class Allocator >
bool	ft::operator!=(const ft::set<Key,Compare,Allocator>& lhs, const ft::set<Key,Compare,Allocator>& rhs)
{
	return (!(lhs == rhs));
}

template< class Key, class Compare, class Allocator >
bool	ft::operator<(const ft::set<Key,Compare,Allocator>& lhs, const ft::set<Key,Compare,Allocator>& rhs)
{
	return (ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
}

template< class Key, class Compare, class Allocator >
bool	ft::operator<=(const ft::set<Key,Compare,Allocator>& lhs, const ft::set<Key,Compare,Allocator>& rhs)
{
	return (lhs < rhs || lhs == rhs);
}

template< class Key, class Compare, class Allocator >
bool	ft::operator>(const ft::set<Key,Compare,Allocator>& lhs, const ft::set<Key,Compare,Allocator>& rhs)
{
	return (rhs < lhs);
}

template< class Key, class Compare, class Allocator >
bool	ft::operator>=(const ft::set<Key,Compare,Allocator>& lhs, const ft::set<Key,Compare,Allocator>& rhs)
{
	return (lhs > rhs || lhs == rhs);
}

template< class Key, class Compare, class Allocator >
void	ft::swap(ft::set<Key,Compare,Allocator>& lhs, ft::set<Key,Compare,Allocator>& rhs)
{
	lhs.swap(rhs);
}

/************************************        PRINT        ************************************/

template< class Key, class Compare, class Allocator >
void	ft::set<Key, Compare, Allocator>::_print(void)
{
	this->_rbtree.print();
}
