#include "map.hpp"
using namespace ft;

/**********************************           MAIN           **********************************/

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>::map (const Compare& comp, const Allocator& alloc):
    _rbtree(NULL), _key_comp(comp), _alloc(alloc)
{

}

template <class Key, class T, class Compare, class Allocator>
template <class InputIterator>
map<Key, T, Compare, Allocator>::map (InputIterator first, InputIterator last, const Compare& comp, const Allocator& alloc):
    _key_comp(comp), _alloc(alloc)
{
    while (first !=last)
    {
        this->insert(first++);
    }
}

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>::map (const map<Key, T, Compare, Allocator>& x): _rbtree(x._rbtree), _key_comp(x.key_comp()), _alloc(x.get_allocator())
{
    *this = x;
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

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::allocator_type map<Key, T, Compare, Allocator>::get_allocator() const
{
    return (this->_alloc);
}

/**********************************    CLASS VALUE_COMPARE         **********************************/

template <class Key, class T, class Compare, class Allocator>
map<Key, T, Compare, Allocator>::value_compare::value_compare(Compare c): comp(c) {}

template <class Key, class T, class Compare, class Allocator>
bool map<Key, T, Compare, Allocator>::value_compare::operator()(const typename map<Key, T, Compare, Allocator>::value_type& lhs, const typename map<Key, T, Compare, Allocator>::value_type& rhs) const
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

template <class Key, class T, class Compare, class Allocator>
T&	map<Key, T, Compare, Allocator>::operator[] (const Key& k)
{

}

/**********************************        MODIFIERS         **********************************/

template <class Key, class T, class Compare, class Allocator>
pair<typename map<Key, T, Compare, Allocator>::iterator,bool>   map<Key, T, Compare, Allocator>::insert (const typename map<Key, T, Compare, Allocator>::value_type& val)
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
    this->_rbtree.swap(x._rbtree);
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
    return (value_compare());
}

/*****************************        OPERATIONS        *****************************/

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::iterator  map<Key, T, Compare, Allocator>::find (const Key& k)
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
    return (this->_rbtree.lower_bound());
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::const_iterator	map<Key, T, Compare, Allocator>::lower_bound (const Key& k) const
{
    return (this->_rbtree.lower_bound());
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::iterator	map<Key, T, Compare, Allocator>::upper_bound (const Key& k)
{
    return (this->_rbtree.upper_bound());
}

template <class Key, class T, class Compare, class Allocator>
typename map<Key, T, Compare, Allocator>::const_iterator	map<Key, T, Compare, Allocator>::upper_bound (const Key& k) const
{
    return (this->_rbtree.upper_bound());
}

template <class Key, class T, class Compare, class Allocator>
pair<typename map<Key, T, Compare, Allocator>::const_iterator,typename map<Key, T, Compare, Allocator>::const_iterator>		map<Key, T, Compare, Allocator>::equal_range (const Key& k) const
{
    return (this->_rbtree.equal_range());
}

template <class Key, class T, class Compare, class Allocator>
pair<typename map<Key, T, Compare, Allocator>::iterator,typename map<Key, T, Compare, Allocator>::iterator>		map<Key, T, Compare, Allocator>::equal_range (const Key& k)
{
    return (this->_rbtree.equal_range());
}


/***************************    NON-MEMBER FUNCTION OVERLOADS     ***************************/

template <class Key, class T, class Compare, class Allocator>
bool ft::operator==(const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs)
{

}

template <class Key, class T, class Compare, class Allocator>
bool ft::operator!=(const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs)
{

}

template <class Key, class T, class Compare, class Allocator>
bool ft::operator<(const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs)
{

}

template <class Key, class T, class Compare, class Allocator>
bool ft::operator<=(const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs)
{

}

template <class Key, class T, class Compare, class Allocator>
bool ft::operator>(const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs)
{

}

template <class Key, class T, class Compare, class Allocator>
bool ft::operator>=(const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs)
{

}

template <class Key, class T, class Compare, class Allocator>
void ft::swap(map<Key,T,Compare,Allocator>& lhs, map<Key,T,Compare,Allocator>& rhs)
{

}
