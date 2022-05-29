#include "set.hpp"
using namespace ft;

/****************           MAIN           ****************/

template< class Key, class Compare, class Allocator >
explicit set<Key, Compare, Allocator>::set (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type())
{

}

template< class Key, class Compare, class Allocator, class InputIterator>
set<Key, Compare, Allocator>::set (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type())
{

}

template< class Key, class Compare, class Allocator >
set<Key, Compare, Allocator>::set (const set& x)
{

}

template< class Key, class Compare, class Allocator >
set<Key, Compare, Allocator>::~set()
{

}

template< class Key, class Compare, class Allocator >
set<Key, Compare, Allocator>::set& operator= (const set& x)
{

}


/****************        ITERATORS         ****************/

template< class Key, class Compare, class Allocator >
iterator	set<Key, Compare, Allocator>::begin()
{
    return (this->_rbtree.begin());
}

template< class Key, class Compare, class Allocator >
const_iterato	set<Key, Compare, Allocator>::begin() const
{
    return (this->_rbtree.begin());
}

template< class Key, class Compare, class Allocator >
iterator	set<Key, Compare, Allocator>::end()
{
    return (this->_rbtree.end());
}

template< class Key, class Compare, class Allocator >
const_iterator	set<Key, Compare, Allocator>::end() const
{
    return (this->_rbtree.end());
}

template< class Key, class Compare, class Allocator >
reverse_iterator	set<Key, Compare, Allocator>::rbegin()
{
    return (this->_rbtree.rbegin());
}

template< class Key, class Compare, class Allocator >
const_reverse_iterator	set<Key, Compare, Allocator>::rbegin() const
{
    return (this->_rbtree.rbegin());
}

template< class Key, class Compare, class Allocator >
reverse_iterator	set<Key, Compare, Allocator>::rend()
{
    return (this->_rbtree.rend());
}

template< class Key, class Compare, class Allocator >
const_reverse_iterator	set<Key, Compare, Allocator>::rend() const
{
    return (this->_rbtree.rend());
}


/****************         CAPACITY         ****************/

template< class Key, class Compare, class Allocator >
bool	set<Key, Compare, Allocator>::empty() const
{

}

template< class Key, class Compare, class Allocator >
size_type	set<Key, Compare, Allocator>::size() const
{

}

template< class Key, class Compare, class Allocator >
size_type	set<Key, Compare, Allocator>::max_size() const
{

}


/****************        MODIFIERS         ****************/

template< class Key, class Compare, class Allocator >
pair<iterator,bool>		set<Key, Compare, Allocator>::insert (const value_type& val)
{

}

template< class Key, class Compare, class Allocator >
iterator	set<Key, Compare, Allocator>::insert (iterator position, const value_type& val)
{

}

template< class Key, class Compare, class Allocator, class InputIterator>
void	set<Key, Compare, Allocator>::insert (InputIterator first, InputIterator last)
{

}

template< class Key, class Compare, class Allocator >
void	set<Key, Compare, Allocator>::erase (iterator position)
{

}

template< class Key, class Compare, class Allocator >
size_type	set<Key, Compare, Allocator>::erase (const value_type& val)
{

}

template< class Key, class Compare, class Allocator >
void	set<Key, Compare, Allocator>::erase (iterator first, iterator last)
{

}

template< class Key, class Compare, class Allocator >
void	set<Key, Compare, Allocator>::swap (set& x)
{

}

template< class Key, class Compare, class Allocator >
void	set<Key, Compare, Allocator>::clear()
{

}


/****************        OBSERVERS         ****************/

template< class Key, class Compare, class Allocator >
key_compare		set<Key, Compare, Allocator>::key_comp() const
{

}

template< class Key, class Compare, class Allocator >
value_compare	set<Key, Compare, Allocator>::value_comp() const
{

}


/****************        OPERATIONS        ****************/

template< class Key, class Compare, class Allocator >
iterator	set<Key, Compare, Allocator>::find (const value_type& val) const
{

}

template< class Key, class Compare, class Allocator >
size_type	set<Key, Compare, Allocator>::count (const value_type& val) const
{

}

template< class Key, class Compare, class Allocator >
iterator	set<Key, Compare, Allocator>::lower_bound (const value_type& val) const
{

}

template< class Key, class Compare, class Allocator >
iterator	set<Key, Compare, Allocator>::upper_bound (const value_type& val) const
{

}

template< class Key, class Compare, class Allocator >
pair<iterator,iterator>		set<Key, Compare, Allocator>::equal_range (const value_type& val) const
{

}


/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template< class Key, class Compare, class Allocator >
bool operator==( const set<Key,Compare,Allocator>& lhs, const set<Key,Compare,Allocator>& rhs )
{

}

template< class Key, class Compare, class Allocator >
bool operator!=( const set<Key,Compare,Allocator>& lhs, const set<Key,Compare,Allocator>& rhs )
{

}

template< class Key, class Compare, class Allocator >
bool operator<( const set<Key,Compare,Allocator>& lhs, const set<Key,Compare,Allocator>& rhs )
{

}

template< class Key, class Compare, class Allocator >
bool operator<=( const set<Key,Compare,Allocator>& lhs, const set<Key,Compare,Allocator>& rhs )
{

}

template< class Key, class Compare, class Allocator >
bool operator>( const set<Key,Compare,Allocator>& lhs, const set<Key,Compare,Allocator>& rhs )
{

}

template< class Key, class Compare, class Allocator >
bool operator>=( const set<Key,Compare,Allocator>& lhs, const set<Key,Compare,Allocator>& rhs )
{

}

template< class Key, class Compare, class Allocator >
void swap( set<Key,Compare,Allocator>& lhs, set<Key,Compare,Allocator>& rhs )
{

}
