#include "map.hpp"
using namespace ft;

/****************           MAIN           ****************/

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>::map (const Compare& comp, const Allocator& alloc)
{

}

template <class Key, class T, class Compare, class Allocator>
template <class InputIterator>
map<Key, T, Compare, Allocator>::map (InputIterator first, InputIterator last, const Compare& comp, const Allocator& alloc)
{

}

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>::map (const map& x)
{
    *this x;
}

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>::~map()
{

}

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>&    map<Key, T, Compare, Allocator>::operator= (const map<Key, T, Compare, Allocator>& x)
{
    if (this != &x)
    {

    }
    return (*this);
}


/****************        ITERATORS         ****************/

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


/****************         CAPACITY         ****************/

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
    return (this->_size);
}

template <class Key, class T, class Compare, class Allocator>
size_t	map<Key, T, Compare, Allocator>::max_size() const
{
    return (this->_alloc.max_size());
}


/****************      ELEMENT ACCESS       ***************/

template <class Key, class T, class Compare, class Allocator>
T&	map<Key, T, Compare, Allocator>::operator[] (const Key& k)
{

}

/****************        MODIFIERS         ****************/

template <class Key, class T, class Compare, class Allocator>
pair<iterator,bool>		map<Key, T, Compare, Allocator>::insert (const typename map<Key, T, Compare, Allocator>::value_type& val)
{

}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::iterator	map<Key, T, Compare, Allocator>::insert (typename map<Key, T, Compare, Allocator>::iterator position, const typename map<Key, T, Compare, Allocator>::value_type& val)
{

}

template <class Key, class T, class Compare, class Allocator>
template <class InputIterator>
void	map<Key, T, Compare, Allocator>::insert (InputIterator first, InputIterator last)
{

}

template <class Key, class T, class Compare, class Allocator>
void	map<Key, T, Compare, Allocator>::erase (typename map<Key, T, Compare, Allocator>::iterator position)
{

}

template <class Key, class T, class Compare, class Allocator>
size_t	map<Key, T, Compare, Allocator>::erase (const Key& k)
{

}

template <class Key, class T, class Compare, class Allocator>
void	map<Key, T, Compare, Allocator>::erase (typename map<Key, T, Compare, Allocator>::iterator first, typename map<Key, T, Compare, Allocator>::iterator last)
{

}

template <class Key, class T, class Compare, class Allocator>
void	map<Key, T, Compare, Allocator>::swap (map<Key, T, Compare, Allocator>& x)
{

}

template <class Key, class T, class Compare, class Allocator>
void	map<Key, T, Compare, Allocator>::clear()
{

}


/****************        OBSERVERS         ****************/

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::key_compare       map<Key, T, Compare, Allocator>::key_comp() const
{

}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::value_compare     map<Key, T, Compare, Allocator>::value_comp() const
{

}


/****************        OPERATIONS        ****************/

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::iterator	map<Key, T, Compare, Allocator>::find (const Key& k)
{

}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::const_iterator	map<Key, T, Compare, Allocator>::find (const Key& k) const
{

}

template <class Key, class T, class Compare, class Allocator>
size_t  map<Key, T, Compare, Allocator>::count (const Key& k) const
{

}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::iterator	map<Key, T, Compare, Allocator>::lower_bound (const Key& k)
{

}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::const_iterator	map<Key, T, Compare, Allocator>::lower_bound (const Key& k) const
{

}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::iterator	map<Key, T, Compare, Allocator>::upper_bound (const Key& k)
{

}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::const_iterator	map<Key, T, Compare, Allocator>::upper_bound (const Key& k) const
{

}

template <class Key, class T, class Compare, class Allocator>
pair<const_iterator,const_iterator>	map<Key, T, Compare, Allocator>::equal_range (const Key& k) const
{

}

template <class Key, class T, class Compare, class Allocator>
pair<iterator,iterator> 	map<Key, T, Compare, Allocator>::equal_range (const Key& k)
{

}


/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class Key, class T, class Compare, class Allocator>
bool ft::operator==( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs )
{

}

template <class Key, class T, class Compare, class Allocator>
bool ft::operator!=( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs )
{

}

template <class Key, class T, class Compare, class Allocator>
bool ft::operator<( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs )
{

}

template <class Key, class T, class Compare, class Allocator>
bool ft::operator<=( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs )
{

}

template <class Key, class T, class Compare, class Allocator>
bool ft::operator>( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs )
{

}

template <class Key, class T, class Compare, class Allocator>
bool ft::operator>=( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs )
{

}

template <class Key, class T, class Compare, class Allocator>
void ft::swap( map<Key,T,Compare,Allocator>& lhs, map<Key,T,Compare,Allocator>& rhs )
{

}
