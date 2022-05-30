#include "map.hpp"
using namespace ft;

/**********************************           MAIN           **********************************/

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>::map (const Compare& comp, const Allocator& alloc):
    _rbtree(comp, alloc), _key_comp(comp), _alloc(alloc) {}

template <class Key, class T, class Compare, class Allocator>
template <class InputIterator>
map<Key, T, Compare, Allocator>::map (InputIterator first, InputIterator last, const Compare& comp, const Allocator& alloc):
    _rbtree(comp, alloc), _key_comp(comp), _alloc(alloc)
{
    this->insert(first, last);
}

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>::map (const map<Key, T, Compare, Allocator>& other):
	_rbtree(other.key_comp(), other.get_allocator()), _key_comp(other.key_comp()), _alloc(other.get_allocator())
{
    this->insert(other.begin(), other.end());
}

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>::~map() {}

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>&    map<Key, T, Compare, Allocator>::operator= (const map<Key, T, Compare, Allocator>& other)
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
typename map<Key, T, Compare, Allocator>::allocator_type map<Key, T, Compare, Allocator>::get_allocator() const
{
    return (this->_alloc);
}

/**********************************    CLASS VALUE_COMPARE         **********************************/

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>::value_compare::value_compare(Compare c): comp(c) {}

template <class Key, class T, class Compare, class Allocator>
bool map<Key, T, Compare, Allocator>::value_compare::operator()(
	const typename map<Key, T, Compare, Allocator>::value_type& lhs, const typename map<Key, T, Compare, Allocator>::value_type& rhs) const
{
    return (comp(lhs.first, rhs.first));
};

/**********************************        ITERATORS         ***************************************/

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::iterator	map<Key, T, Compare, Allocator>::begin()
{
    return (this->_rbtree.begin());
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::const_iterator	map<Key, T, Compare, Allocator>::begin() const
{
    return (this->_rbtree.begin());
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::iterator	map<Key, T, Compare, Allocator>::end()
{
    return (this->_rbtree.end());
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::const_iterator	map<Key, T, Compare, Allocator>::end() const
{
    return (this->_rbtree.end());
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::reverse_iterator		map<Key, T, Compare, Allocator>::rbegin()
{
    return (this->_rbtree.rbegin());
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::const_reverse_iterator	map<Key, T, Compare, Allocator>::rbegin() const
{
    return (this->_rbtree.rbegin());
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::reverse_iterator	map<Key, T, Compare, Allocator>::rend()
{
    return (this->_rbtree.rend());
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::const_reverse_iterator	map<Key, T, Compare, Allocator>::rend() const
{
    return (this->_rbtree.rend());
}


/**********************************         CAPACITY         **********************************/

template <class Key, class T, class Compare, class Allocator>
bool	map<Key, T, Compare, Allocator>::empty() const
{
    if (!this->_size)
        return (true);
    return (false);
}

template <class Key, class T, class Compare, class Allocator>
size_t	map<Key, T, Compare, Allocator>::size() const
{
    return (this->_rbtree.size());
}

template <class Key, class T, class Compare, class Allocator>
size_t	map<Key, T, Compare, Allocator>::max_size() const
{
    return (this->_rbtree.max_size());
}


/**********************************      ELEMENT ACCESS       *********************************/

/* Returns a reference to the value that is mapped to a key equivalent to key,
performing an insertion if such key does not already exist */
template <class Key, class T, class Compare, class Allocator>
T&	map<Key, T, Compare, Allocator>::operator[] (const Key& key)
{
	typedef typename map<Key, T, Compare, Allocator>::iterator		iterator;
	typedef typename map<Key, T, Compare, Allocator>::value_type	value_type;

	ft::pair<iterator, bool>	insert_pair;
	value_type					value;

	value = this->_get_value_type(key);
	insert_pair = this->insert(value);
	return (insert_pair.first->second);			// To dig deeper
}

/**********************************        MODIFIERS         **********************************/

template <class Key, class T, class Compare, class Allocator>
ft::pair<typename map<Key, T, Compare, Allocator>::iterator,bool>   map<Key, T, Compare, Allocator>::insert (
	const typename map<Key, T, Compare, Allocator>::value_type& val)
{
	return (this->_rbtree.insert(val));
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::iterator	map<Key, T, Compare, Allocator>::insert (
	typename map<Key, T, Compare, Allocator>::iterator position, const typename map<Key, T, Compare, Allocator>::value_type& val)
{
	return (this->_rbtree.insert(position, val));
}

template <class Key, class T, class Compare, class Allocator>
template <class InputIterator>
void	map<Key, T, Compare, Allocator>::insert (InputIterator first, InputIterator last)
{
	for (; first != last; first++)
		this->_rbtree.insert(*first);
}

template <class Key, class T, class Compare, class Allocator>
void	map<Key, T, Compare, Allocator>::erase (
	typename map<Key, T, Compare, Allocator>::iterator position)
{
	this->_rbtree.erase(position);
}

template <class Key, class T, class Compare, class Allocator>
size_t	map<Key, T, Compare, Allocator>::erase (const Key& key)
{
	return (this->_rbtree.erase(this->_get_value_type(key)));
}

template <class Key, class T, class Compare, class Allocator>
void	map<Key, T, Compare, Allocator>::erase (
	typename map<Key, T, Compare, Allocator>::iterator first, typename map<Key, T, Compare, Allocator>::iterator last)
{
	typedef typename map<Key, T, Compare, Allocator>::iterator	iterator;

	iterator	to_erase;

	while (first != last)
	{
		to_erase = first;
		first++;
		this->_rbtree.erase(to_erase);
	}
	// for (; first != last; first++)
	// {
	// 	to_erase = first;
	// 	this->_rbtree.erase(to_erase);  // <-- does this work ?
	// }
}

template <class Key, class T, class Compare, class Allocator>
void	map<Key, T, Compare, Allocator>::swap (map<Key, T, Compare, Allocator>& other)
{
    this->_rbtree.swap(other._rbtree);
}

template <class Key, class T, class Compare, class Allocator>
void	map<Key, T, Compare, Allocator>::clear()
{
    this->_rbtree.clear();
}

/*****************************        OBSERVERS         *****************************/

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::key_compare   map<Key, T, Compare, Allocator>::key_comp() const
{
    return (this->_key_comp);
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::value_compare		map<Key, T, Compare, Allocator>::value_comp() const
{
    return (map<Key, T, Compare, Allocator>::value_compare());
}

/*****************************        OPERATIONS        *****************************/

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::iterator  map<Key, T, Compare, Allocator>::find (const Key& key)
{
	typedef typename red_black_tree<T, Compare, Allocator>::iterator	iterator;

	iterator	node_position;

	node_position = this->_rbtree.search_node(this->_get_value_type(key));
	return (node_position);
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::const_iterator	map<Key, T, Compare, Allocator>::find (const Key& key) const
{
	typedef typename red_black_tree<T, Compare, Allocator>::const_iterator	const_iterator;

	const_iterator	node_position;

	node_position = this->_rbtree.search_node(this->_get_value_type(key));
	return (node_position);
}

template <class Key, class T, class Compare, class Allocator>
size_t  map<Key, T, Compare, Allocator>::count (const Key& key) const
{
	typedef typename red_black_tree<T, Compare, Allocator>::iterator	iterator;

	iterator	node_position;

	node_position = this->find(key);
	if (node_position == this->end())
		return (0);
	return (1);
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::iterator	map<Key, T, Compare, Allocator>::lower_bound (const Key& key)
{
    return (this->_rbtree.lower_bound(this->_get_value_type(key)));
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::const_iterator	map<Key, T, Compare, Allocator>::lower_bound (const Key& key) const
{
    return (this->_rbtree.lower_bound(this->_get_value_type(key)));
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::iterator	map<Key, T, Compare, Allocator>::upper_bound (const Key& key)
{
    return (this->_rbtree.upper_bound(this->_get_value_type(key)));
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::const_iterator	map<Key, T, Compare, Allocator>::upper_bound (const Key& key) const
{
    return (this->_rbtree.upper_bound(this->_get_value_type(key)));
}

template <class Key, class T, class Compare, class Allocator>
pair<typename map<Key, T, Compare, Allocator>::const_iterator,typename map<Key, T, Compare, Allocator>::const_iterator>		map<Key, T, Compare, Allocator>::equal_range (const Key& key) const
{
    return (this->_rbtree.equal_range(this->_get_value_type(key)));
}

template <class Key, class T, class Compare, class Allocator>
pair<typename map<Key, T, Compare, Allocator>::iterator,typename map<Key, T, Compare, Allocator>::iterator>		map<Key, T, Compare, Allocator>::equal_range (const Key& key)
{
    return (this->_rbtree.equal_range(this->_get_value_type(key)));
}


/***************************    NON-MEMBER FUNCTION OVERLOADS     ***************************/

template <class Key, class T, class Compare, class Allocator>
bool	ft::operator==(const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs)
{
	if (lhs.size() == rhs.size())
		return (ft::equal(lhs.begin(), lhs.end(), rhs.begin()));
	return (false);
}

template <class Key, class T, class Compare, class Allocator>
bool	ft::operator!=(const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs)
{
	return (!(lhs == rhs));
}

template <class Key, class T, class Compare, class Allocator>
bool	ft::operator<(const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs)
{
	return (ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
}

template <class Key, class T, class Compare, class Allocator>
bool	ft::operator<=(const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs)
{
	return (lhs < rhs || lhs == rhs);
}

template <class Key, class T, class Compare, class Allocator>
bool	ft::operator>(const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs)
{
	return (rhs < lhs);
}

template <class Key, class T, class Compare, class Allocator>
bool	ft::operator>=(const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs)
{
	return (lhs > rhs || lhs == rhs);
}

template <class Key, class T, class Compare, class Allocator>
void	ft::swap(map<Key,T,Compare,Allocator>& lhs, map<Key,T,Compare,Allocator>& rhs)
{
	lhs.swap(rhs);
}

/***************************          PRIVATE FUNCTION          ***************************/

template <class Key, class T, class Compare, class Allocator>
ft::pair<const Key, T>	map<Key, T, Compare, Allocator>::_get_value_type(const Key& key) const
{
	typedef typename map<Key, T, Compare, Allocator>::mapped_type	mapped_type;
 
	return (ft::make_pair(key, mapped_type()));
}
