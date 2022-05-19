#include "vector.hpp"
using namespace ft;

/****************           MAIN           ****************/

template <class T, class Allocator>
vector<T, Allocator>::vector (const typename vector<T, Allocator>::allocator_type& alloc)
{
	(void)alloc;
}

template <class T, class Allocator>
vector<T, Allocator>::vector (typename vector<T, Allocator>::size_type n, const typename vector<T, Allocator>::value_type& val, const typename vector<T, Allocator>::allocator_type& alloc)
{
	(void)n;
	(void)val;
	(void)alloc;
}

template <class T, class Allocator, class InputIterator>
vector<T, Allocator>::vector (InputIterator first, InputIterator last, const typename vector<T, Allocator>::allocator_type& alloc)
{
	(void)first;
	(void)last;
	(void)alloc;
}

template <class T, class Allocator>
vector<T, Allocator>::vector (const vector<T, Allocator>& x)
{
	(void)x;
}

template <class T, class Allocator>
vector<T, Allocator>::~vector()
{

}

template <class T, class Allocator>
vector<T, Allocator>::vector& operator= (const vector<T, Allocator>& x)
{
	(void)x;
}


/****************        ITERATORS         ****************/

template <class T, class Allocator>
typename vector<T, Allocator>::iterator	vector<T, Allocator>::begin()
{
	return (iterator(this->_begin));
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_iterator	vector<T, Allocator>::begin() const
{
	return (const_iterator(this->_begin));
}

template <class T, class Allocator>
typename vector<T, Allocator>::iterator	vector<T, Allocator>::end()
{
	return (iterator(this->_end));
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_iterator	vector<T, Allocator>::end() const
{
	return (const_iterator(this->_end));
}

template <class T, class Allocator>
typename vector<T, Allocator>::reverse_iterator	vector<T, Allocator>::rbegin()
{
	return (reverse_iterator(this->_end));
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_reverse_iterator	vector<T, Allocator>::rbegin() const
{
	return (const_reverse_iterator(this->_end));
}

template <class T, class Allocator>
typename vector<T, Allocator>::reverse_iterator	vector<T, Allocator>::rend()
{
	return (reverse_iterator(this->_begin));
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_reverse_iterator	vector<T, Allocator>::rend() const
{
	return (const_reverse_iterator(this->_begin));
}


/****************         CAPACITY         ****************/

template <class T, class Allocator>
typename vector<T, Allocator>::size_type	vector<T, Allocator>::size() const
{

}

template <class T, class Allocator>
typename vector<T, Allocator>::size_type	vector<T, Allocator>::max_size() const
{

}

template <class T, class Allocator>
void	vector<T, Allocator>::resize (typename vector<T, Allocator>::size_type n, typename vector<T, Allocator>::value_type val)
{
	(void)n;
	(void)val;
}

template <class T, class Allocator>
typename vector<T, Allocator>::size_type	vector<T, Allocator>::capacity() const
{

}

template <class T, class Allocator>
bool 	vector<T, Allocator>::empty() const
{

}

template <class T, class Allocator>
void	vector<T, Allocator>::reserve (typename vector<T, Allocator>::size_type n)
{
	(void)n;
}


/****************      ELEMENT ACCESS       ***************/

template <class T, class Allocator>
typename vector<T, Allocator>::reference	vector<T, Allocator>::operator[](typename vector<T, Allocator>::size_type pos)
{
	(void)pos;
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_reference		vector<T, Allocator>::operator[] (typename vector<T, Allocator>::size_type n) const
{
	(void)n;
}

template <class T, class Allocator>
typename vector<T, Allocator>::reference	vector<T, Allocator>::at(typename vector<T, Allocator>::size_type pos)
{
	(void)pos;
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_reference		vector<T, Allocator>::at(typename vector<T, Allocator>::size_type pos) const
{
	(void)pos;
}

template <class T, class Allocator>
typename vector<T, Allocator>::reference		vector<T, Allocator>::front()
{

}

template <class T, class Allocator>
typename vector<T, Allocator>::const_reference	vector<T, Allocator>::front() const
{

}

template <class T, class Allocator>
typename vector<T, Allocator>::reference		vector<T, Allocator>::back()
{

}

template <class T, class Allocator>
typename vector<T, Allocator>::const_reference	vector<T, Allocator>::back() const
{

}
	
/****************        MODIFIERS         ****************/

template <class T, class Allocator>
void	vector<T, Allocator>assign(typename vector<T, Allocator>::size_type cout, const T& value)
{
	(void)cout;
	(void)value;
}

template <class T, class Allocator>
void	vector<T, Allocator>push_back (const typename vector<T, Allocator>::value_type& val)
{
	(void)val;
}

template <class T, class Allocator>
void	vector<T, Allocator>pop_back()
{

}

template <class T, class Allocator>
typename vector<T, Allocator>::iterator		vector<T, Allocator>insert (typename vector<T, Allocator>::iterator position, const typename vector<T, Allocator>::value_type& val);
{
	(void)position;
	(void)val;
}

template <class T, class Allocator>
void	vector<T, Allocator>insert (typename vector<T, Allocator>::iterator position, typename vector<T, Allocator>::size_type n, const typename vector<T, Allocator>::value_type& val);
{
	(void)position;
	(void)n;
	(void)val;
}

template <class T, class Allocator, class InputIterator>
void	vector<T, Allocator>insert (typename vector<T, Allocator>::iterator position, InputIterator first, InputIterator last)
{
	(void)position;
	(void)first;
	(void)last;
}

template <class T, class Allocator>
typename vector<T, Allocator>::iterator	vector<T, Allocator>erase (typename vector<T, Allocator>::iterator position)
{
	(void)position;
}

template <class T, class Allocator>
typename vector<T, Allocator>::iterator	vector<T, Allocator>erase (typename vector<T, Allocator>::iterator first, typename vector<T, Allocator>::iterator last)
{
	(void)first;
	(void)last;
}

template <class T, class Allocator>
void	vector<T, Allocator>swap (vector<T, Allocator>& x)
{
	(void)x;
}

template <class T, class Allocator>
void	vector<T, Allocator>clear()
{

}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class T, class Allocator>
bool	ft:operator== (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Allocator>
bool	ft:operator!= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Allocator>
bool	ft:operator<  (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Allocator>
bool	ft:operator<= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Allocator>
bool	ft:operator>  (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Allocator>
bool	ft:operator>= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Allocator>
void	ft:swap (vector<T,Allocator>& x, vector<T,Allocator>& y)
{
	(void)x;
	(void)y;
}
