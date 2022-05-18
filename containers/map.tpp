#include "map.hpp"
using namespace ft;

/****************           MAIN           ****************/

template <class Key, class T, class Compare, class Allocator>
explicit map<Key, T, Compare, Allocator>::map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type())
{

}

template <class Key, class T, class Compare, class Allocator, class InputIterator>
map<Key, T, Compare, Allocator>::map (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type())
{

}

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>::map (const map& x)
{

}

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>::~map()
{

}

template <class Key, class T, class Compare, class Allocator>
map& map<Key, T, Compare, Allocator>::operator= (const map& x)
{

}


/****************        ITERATORS         ****************/

template <class Key, class T, class Compare, class Allocator>
iterator	map<Key, T, Compare, Allocator>::begin()
{

}

template <class Key, class T, class Compare, class Allocator>
const_iterator	map<Key, T, Compare, Allocator>::begin() const
{

}

template <class Key, class T, class Compare, class Allocator>
iterator	map<Key, T, Compare, Allocator>::end()
{

}

template <class Key, class T, class Compare, class Allocator>
const_iterator	map<Key, T, Compare, Allocator>::end() const
{

}

template <class Key, class T, class Compare, class Allocator>
reverse_iterator		map<Key, T, Compare, Allocator>::rbegin()
{

}

template <class Key, class T, class Compare, class Allocator>
const_reverse_iterator	map<Key, T, Compare, Allocator>::rbegin() const
{

}

template <class Key, class T, class Compare, class Allocator>
reverse_iterator	map<Key, T, Compare, Allocator>::rend()
{

}

template <class Key, class T, class Compare, class Allocator>
const_reverse_iterator	map<Key, T, Compare, Allocator>::rend() const
{

}


/****************         CAPACITY         ****************/

template <class Key, class T, class Compare, class Allocator>
bool	map<Key, T, Compare, Allocator>::empty() const
{

}

template <class Key, class T, class Compare, class Allocator>
size_type	map<Key, T, Compare, Allocator>::size() const
{

}

template <class Key, class T, class Compare, class Allocator>
size_type	map<Key, T, Compare, Allocator>::max_size() const
{

}


/****************      ELEMENT ACCESS       ***************/

template <class Key, class T, class Compare, class Allocator>
mapped_type&	map<Key, T, Compare, Allocator>::operator[] (const key_type& k)
{

}

/****************        MODIFIERS         ****************/

template <class Key, class T, class Compare, class Allocator>
pair<iterator,bool>		map<Key, T, Compare, Allocator>::insert (const value_type& val)
{

}

template <class Key, class T, class Compare, class Allocator>
iterator	map<Key, T, Compare, Allocator>::insert (iterator position, const value_type& val)
{

}

template <class Key, class T, class Compare, class Allocator, class InputIterator>
void	map<Key, T, Compare, Allocator>::insert (InputIterator first, InputIterator last)
{

}

template <class Key, class T, class Compare, class Allocator>
void	map<Key, T, Compare, Allocator>::erase (iterator position)
{

}

template <class Key, class T, class Compare, class Allocator>
size_type	map<Key, T, Compare, Allocator>::erase (const key_type& k)
{

}

template <class Key, class T, class Compare, class Allocator>
void	map<Key, T, Compare, Allocator>::erase (iterator first, iterator last)
{

}

template <class Key, class T, class Compare, class Allocator>
void	map<Key, T, Compare, Allocator>::swap (map& x)
{

}

template <class Key, class T, class Compare, class Allocator>
void	map<Key, T, Compare, Allocator>::clear()
{

}


/****************        OBSERVERS         ****************/

template <class Key, class T, class Compare, class Allocator>
key_compare		map<Key, T, Compare, Allocator>::key_comp() const
{

}

template <class Key, class T, class Compare, class Allocator>
value_compare	map<Key, T, Compare, Allocator>::value_comp() const
{

}


/****************        OPERATIONS        ****************/

template <class Key, class T, class Compare, class Allocator>
iterator	map<Key, T, Compare, Allocator>::find (const key_type& k)
{

}

template <class Key, class T, class Compare, class Allocator>
const_iterator	map<Key, T, Compare, Allocator>::find (const key_type& k) const
{

}

template <class Key, class T, class Compare, class Allocator>
size_type	map<Key, T, Compare, Allocator>::count (const key_type& k) const
{

}

template <class Key, class T, class Compare, class Allocator>
iterator	map<Key, T, Compare, Allocator>::lower_bound (const key_type& k)
{

}

template <class Key, class T, class Compare, class Allocator>
const_iterator	map<Key, T, Compare, Allocator>::lower_bound (const key_type& k) const
{

}

template <class Key, class T, class Compare, class Allocator>
iterator	map<Key, T, Compare, Allocator>::upper_bound (const key_type& k)
{

}

template <class Key, class T, class Compare, class Allocator>
const_iterator	map<Key, T, Compare, Allocator>::upper_bound (const key_type& k) const
{

}

template <class Key, class T, class Compare, class Allocator>
pair<const_iterator,const_iterator>	map<Key, T, Compare, Allocator>::equal_range (const key_type& k) const
{

}

template <class Key, class T, class Compare, class Allocator>
pair<iterator,iterator> 	map<Key, T, Compare, Allocator>::equal_range (const key_type& k)
{

}


/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class Key, class T, class Compare, class Allocator>
bool operator==( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs )
{

}

template <class Key, class T, class Compare, class Allocator>
bool operator!=( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs )
{

}

template <class Key, class T, class Compare, class Allocator>
bool operator<( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs )
{

}

template <class Key, class T, class Compare, class Allocator>
bool operator<=( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs )
{

}

template <class Key, class T, class Compare, class Allocator>
bool operator>( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs )
{

}

template <class Key, class T, class Compare, class Allocator>
bool operator>=( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs )
{

}

template <class Key, class T, class Compare, class Allocator>
void swap( map<Key,T,Compare,Allocator>& lhs, map<Key,T,Compare,Allocator>& rhs )
{

}
