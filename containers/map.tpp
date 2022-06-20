#include "map.hpp"

/**********************************           MAIN           **********************************/

template <class Key, class T, class Compare, class Allocator>
ft::map<Key, T, Compare, Allocator>::map (const Compare& comp, const Allocator& alloc):
    _rbtree(alloc, comp),
	_key_comp(comp),
	_alloc(alloc) {}

template <class Key, class T, class Compare, class Allocator>
template <class InputIterator>
ft::map<Key, T, Compare, Allocator>::map (InputIterator first, InputIterator last, const Compare& comp, const Allocator& alloc):
    _rbtree(alloc, comp),
	_key_comp(comp),
	_alloc(alloc)
{
    this->insert(first, last);
}

template <class Key, class T, class Compare, class Allocator>
ft::map<Key, T, Compare, Allocator>::map (const ft::map<Key, T, Compare, Allocator>& other):
	_rbtree(other.get_allocator(), other.key_comp()),
	_key_comp(other.key_comp()),
	_alloc(other.get_allocator())
{
    this->insert(other.begin(), other.end());
}

template <class Key, class T, class Compare, class Allocator>
ft::map<Key, T, Compare, Allocator>::~map()
{}

template <class Key, class T, class Compare, class Allocator>
ft::map<Key, T, Compare, Allocator>&    ft::map<Key, T, Compare, Allocator>::operator= (const ft::map<Key, T, Compare, Allocator>& other)
{
	if (this != &other)
	{
		this->_rbtree = other._rbtree;
		this->_key_comp = other._key_comp;
		this->_alloc = other._alloc;
	}
	return (*this);
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::allocator_type ft::map<Key, T, Compare, Allocator>::get_allocator() const
{
    return (this->_alloc);
}

/**********************************    CLASS VALUE_COMPARE         **********************************/

template <class Key, class T, class Compare, class Allocator>
ft::map<Key, T, Compare, Allocator>::value_compare::value_compare(Compare c): comp(c) {}

template <class Key, class T, class Compare, class Allocator>
bool ft::map<Key, T, Compare, Allocator>::value_compare::operator()(
	const typename ft::map<Key, T, Compare, Allocator>::value_type& lhs, const typename ft::map<Key, T, Compare, Allocator>::value_type& rhs) const
{
    return (comp(lhs.first, rhs.first));
}

/**********************************        ITERATORS         ***************************************/

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::iterator	ft::map<Key, T, Compare, Allocator>::begin()
{
    return (this->_rbtree.begin());
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::const_iterator	ft::map<Key, T, Compare, Allocator>::begin() const
{
    return (this->_rbtree.begin());
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::iterator	ft::map<Key, T, Compare, Allocator>::end()
{
    return (this->_rbtree.end());
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::const_iterator	ft::map<Key, T, Compare, Allocator>::end() const
{
    return (this->_rbtree.end());
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::reverse_iterator		ft::map<Key, T, Compare, Allocator>::rbegin()
{
    return (this->_rbtree.rbegin());
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::const_reverse_iterator	ft::map<Key, T, Compare, Allocator>::rbegin() const
{
    return (this->_rbtree.rbegin());
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::reverse_iterator	ft::map<Key, T, Compare, Allocator>::rend()
{
    return (this->_rbtree.rend());
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::const_reverse_iterator	ft::map<Key, T, Compare, Allocator>::rend() const
{
    return (this->_rbtree.rend());
}


/**********************************         CAPACITY         **********************************/

template <class Key, class T, class Compare, class Allocator>
bool	ft::map<Key, T, Compare, Allocator>::empty() const
{
    if (this->size())
    	return (false);
    return (true);
}

template <class Key, class T, class Compare, class Allocator>
size_t	ft::map<Key, T, Compare, Allocator>::size() const
{
    return (this->_rbtree.size());
}

template <class Key, class T, class Compare, class Allocator>
size_t	ft::map<Key, T, Compare, Allocator>::max_size() const
{
    return (this->_rbtree.max_size());
}

/**********************************      ELEMENT ACCESS       *********************************/

/* Returns a reference to the value that is mapped to a key equivalent to key,
performing an insertion if such key does not already exist */
template <class Key, class T, class Compare, class Allocator>
T&	ft::map<Key, T, Compare, Allocator>::operator[] (const Key& key)
{
	typedef typename ft::map<Key, T, Compare, Allocator>::iterator	iterator;

	ft::pair<iterator, bool>	insert_pair;

	insert_pair = this->insert(ft::make_pair(key, mapped_type()));
	return (insert_pair.first->second);
}

/**********************************        MODIFIERS         **********************************/

template <class Key, class T, class Compare, class Allocator>
ft::pair<typename ft::map<Key, T, Compare, Allocator>::iterator,bool>   ft::map<Key, T, Compare, Allocator>::insert (
	const typename ft::map<Key, T, Compare, Allocator>::value_type& val)
{
	typedef typename ft::map<Key, T, Compare, Allocator>::iterator	iterator;

	ft::pair<iterator,bool>		pair;

	pair = this->_rbtree.insert(val);
	return (pair);
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::iterator	ft::map<Key, T, Compare, Allocator>::insert (
	typename ft::map<Key, T, Compare, Allocator>::iterator position, const typename ft::map<Key, T, Compare, Allocator>::value_type& val)
{
	typedef typename ft::map<Key, T, Compare, Allocator>::iterator	iterator;

	iterator	it;

	it = this->_rbtree.insert(position, val);
	return (it);
}

template <class Key, class T, class Compare, class Allocator>
template <class InputIterator>
void	ft::map<Key, T, Compare, Allocator>::insert (InputIterator first, InputIterator last)
{
	for (; first != last; first++)
		this->_rbtree.insert(*first);
}

template <class Key, class T, class Compare, class Allocator>
void	ft::map<Key, T, Compare, Allocator>::erase (
	typename ft::map<Key, T, Compare, Allocator>::iterator position)
{
	this->_rbtree.erase(position);
}

template <class Key, class T, class Compare, class Allocator>
size_t	ft::map<Key, T, Compare, Allocator>::erase (const Key& key)
{
	return (this->_rbtree.erase(this->_get_value_type(key)));
}

template <class Key, class T, class Compare, class Allocator>
void	ft::map<Key, T, Compare, Allocator>::erase (
	typename ft::map<Key, T, Compare, Allocator>::iterator first, typename ft::map<Key, T, Compare, Allocator>::iterator last)
{
	typedef typename ft::map<Key, T, Compare, Allocator>::iterator	iterator;

	iterator	to_erase;

	while (first != last)
	{
		to_erase = first;
		first++;
		this->_rbtree.erase(to_erase);
	}
}

template <class Key, class T, class Compare, class Allocator>
void	ft::map<Key, T, Compare, Allocator>::swap (ft::map<Key, T, Compare, Allocator>& other)
{
    this->_rbtree.swap(other._rbtree);
}

template <class Key, class T, class Compare, class Allocator>
void	ft::map<Key, T, Compare, Allocator>::clear()
{
    this->_rbtree.clear();
}

/*****************************        OBSERVERS         *****************************/

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::key_compare   ft::map<Key, T, Compare, Allocator>::key_comp() const
{
    return (this->_key_comp);
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::value_compare		ft::map<Key, T, Compare, Allocator>::value_comp() const
{
    return (ft::map<Key, T, Compare, Allocator>::value_compare());
}

/*****************************        OPERATIONS        *****************************/

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::iterator  ft::map<Key, T, Compare, Allocator>::find (Key const& key)
{
	typedef typename ft::map<Key, T, Compare, Allocator>::iterator	iterator;

	iterator	node_position;

	node_position = this->_rbtree.search_node(this->_get_value_type(key));
	return (node_position);
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::const_iterator	ft::map<Key, T, Compare, Allocator>::find (Key const& key) const
{
	typedef typename ft::map<Key, T, Compare, Allocator>::const_iterator	const_iterator;

	const_iterator	node_position;

	node_position = this->_rbtree.search_node(this->_get_value_type(key));
	return (node_position);
}

template <class Key, class T, class Compare, class Allocator>
size_t  ft::map<Key, T, Compare, Allocator>::count (const Key& key) const
{
	typedef typename ft::map<Key, T, Compare, Allocator>::const_iterator	const_iterator;

	const_iterator	node_position = this->find(key);
	if (node_position == this->end())
		return (0);
	return (1);
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::iterator	ft::map<Key, T, Compare, Allocator>::lower_bound (const Key& key)
{
    return (this->_rbtree.lower_bound(this->_get_value_type(key)));
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::const_iterator	ft::map<Key, T, Compare, Allocator>::lower_bound (const Key& key) const
{
    return (this->_rbtree.lower_bound(this->_get_value_type(key)));
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::iterator	ft::map<Key, T, Compare, Allocator>::upper_bound (const Key& key)
{
    return (this->_rbtree.upper_bound(this->_get_value_type(key)));
}

template <class Key, class T, class Compare, class Allocator>
typename ft::map<Key, T, Compare, Allocator>::const_iterator	ft::map<Key, T, Compare, Allocator>::upper_bound (const Key& key) const
{
    return (this->_rbtree.upper_bound(this->_get_value_type(key)));
}

template <class Key, class T, class Compare, class Allocator>
ft::pair<typename ft::map<Key, T, Compare, Allocator>::const_iterator,typename ft::map<Key, T, Compare, Allocator>::const_iterator>		ft::map<Key, T, Compare, Allocator>::equal_range (const Key& key) const
{
    return (this->_rbtree.equal_range(this->_get_value_type(key)));
}

template <class Key, class T, class Compare, class Allocator>
ft::pair<typename ft::map<Key, T, Compare, Allocator>::iterator,typename ft::map<Key, T, Compare, Allocator>::iterator>		ft::map<Key, T, Compare, Allocator>::equal_range (const Key& key)
{
    return (this->_rbtree.equal_range(this->_get_value_type(key)));
}

/***************************    NON-MEMBER FUNCTION OVERLOADS     ***************************/

template <class Key, class T, class Compare, class Allocator>
bool	ft::operator==(const ft::map<Key,T,Compare,Allocator>& lhs, const ft::map<Key,T,Compare,Allocator>& rhs)
{
	if (lhs.size() == rhs.size())
		return (ft::equal(lhs.begin(), lhs.end(), rhs.begin()));
	return (false);
}

template <class Key, class T, class Compare, class Allocator>
bool	ft::operator!=(const ft::map<Key,T,Compare,Allocator>& lhs, const ft::map<Key,T,Compare,Allocator>& rhs)
{
	return (!(lhs == rhs));
}

template <class Key, class T, class Compare, class Allocator>
bool	ft::operator<(const ft::map<Key,T,Compare,Allocator>& lhs, const ft::map<Key,T,Compare,Allocator>& rhs)
{
	return (ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
}

template <class Key, class T, class Compare, class Allocator>
bool	ft::operator<=(const ft::map<Key,T,Compare,Allocator>& lhs, const ft::map<Key,T,Compare,Allocator>& rhs)
{
	return (lhs < rhs || lhs == rhs);
}

template <class Key, class T, class Compare, class Allocator>
bool	ft::operator>(const ft::map<Key,T,Compare,Allocator>& lhs, const ft::map<Key,T,Compare,Allocator>& rhs)
{
	return (rhs < lhs);
}

template <class Key, class T, class Compare, class Allocator>
bool	ft::operator>=(const ft::map<Key,T,Compare,Allocator>& lhs, const ft::map<Key,T,Compare,Allocator>& rhs)
{
	return (lhs > rhs || lhs == rhs);
}

template <class Key, class T, class Compare, class Allocator>
void	ft::swap(ft::map<Key,T,Compare,Allocator>& lhs, ft::map<Key,T,Compare,Allocator>& rhs)
{
	lhs.swap(rhs);
}

/***************************          PRIVATE FUNCTION          ***************************/

template <class Key, class T, class Compare, class Allocator>
ft::pair<const Key, T>	ft::map<Key, T, Compare, Allocator>::_get_value_type(const Key& key) const
{
	typedef typename ft::map<Key, T, Compare, Allocator>::mapped_type	mapped_type;
 
	return (ft::make_pair(key, mapped_type()));
}

/*********************************         PRINT        **********************************/

template <class Key, class T, class Compare, class Allocator>
void	ft::map<Key, T, Compare, Allocator>::_print(void)
{
	this->_rbtree.print();
}
