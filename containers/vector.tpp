#include "vector.hpp"

/****************           MAIN           ****************/

template <class T, class Allocator>
explicit	vector<T, Allocator>::vector (const allocator_type& alloc = allocator_type())
{
	(void)alloc;
}

template <class T, class Allocator>
explicit	vector<T, Allocator>::vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
{
	(void)n;
	(void)val;
	(void)alloc;
}

template <class T, class Allocator, class InputIterator>
vector<T, Allocator>::vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type())
{
	(void)first;
	(void)last;
	(void)alloc;
}

template <class T, class Allocator>
vector<T, Allocator>::vector (const vector& x)
{
	(void)x;
}

template <class T, class Allocator>
vector<T, Allocator>::~vector()
{

}

template <class T, class Allocator>
vector<T, Allocator>::vector& operator= (const vector& x)
{
	(void)x;
}


/****************        ITERATORS         ****************/

template <class T, class Allocator>
iterator	begin()
{

}

template <class T, class Allocator>
const_iterator	begin() const
{

}

template <class T, class Allocator>
iterator	end()
{

}

template <class T, class Allocator>
const_iterato	end() const
{

}

template <class T, class Allocator>
reverse_iterat	rbegin()
{

}

template <class T, class Allocator>
const_reverse_itera	rbegin() const
{

}

template <class T, class Allocator>
reverse_iterator		rend()
{

}

template <class T, class Allocator>
const_reverse_iterator	rend() const
{

}


/****************         CAPACITY         ****************/

template <class T, class Allocator>
size_typ	vector<T, Allocator>::size() const
{

}

template <class T, class Allocator>
size_typ	vector<T, Allocator>::max_size() const
{

}

template <class T, class Allocator>
void	vector<T, Allocator>::resize (size_type n, value_type val = value_type())
{
	(void)n;
	(void)val;
}

template <class T, class Allocator>
size_type	vector<T, Allocator>::capacity() const
{

}

template <class T, class Allocator>
bool 	vector<T, Allocator>::empty() const
{

}

template <class T, class Allocator>
void	vector<T, Allocator>::reserve (size_type n)
{
	(void)n;
}


/****************      ELEMENT ACCESS       ***************/

template <class T, class Allocator>
reference		vector<T, Allocator>::operator[](size_type pos)
{
	(void)pos;
}

template <class T, class Allocator>
const_reference	vector<T, Allocator>::operator[] (size_type n) const
{
	(void)n;
}

template <class T, class Allocator>
reference		vector<T, Allocator>::at(size_type pos)
{
	(void)pos;
}

template <class T, class Allocator>
const_reference	vector<T, Allocator>::at(size_type pos) const
{
	(void)pos;
}

template <class T, class Allocator>
reference		vector<T, Allocator>::front()
{

}

template <class T, class Allocator>
const_reference	vector<T, Allocator>::front() const
{

}

template <class T, class Allocator>
reference		vector<T, Allocator>::back()
{

}

template <class T, class Allocator>
const_reference	vector<T, Allocator>::back() const
{

}
	
/****************        MODIFIERS         ****************/

template <class T, class Allocator>
void	vector<T, Allocator>assign(size_type cout, const T& value)
{
	(void)cout;
	(void)value;
}

template <class T, class Allocator>
void	vector<T, Allocator>push_back (const value_type& val)
{
	(void)val;
}

template <class T, class Allocator>
void	vector<T, Allocator>pop_back()
{

}

template <class T, class Allocator>
iterator	vector<T, Allocator>insert (iterator position, const value_type& val);
{
	(void)position;
	(void)val;
}

template <class T, class Allocator>
void	vector<T, Allocator>insert (iterator position, size_type n, const value_type& val);
{
	(void)position;
	(void)n;
	(void)val;
}

template <class T, class Allocator, class InputIterator>
void	vector<T, Allocator>insert (iterator position, InputIterator first, InputIterator last)
{
	(void)position;
	(void)first;
	(void)last;
}

template <class T, class Allocator>
iterator	vector<T, Allocator>erase (iterator position)
{
	(void)position;
}

template <class T, class Allocator>
iterator	vector<T, Allocator>erase (iterator first, iterator last)
{
	(void)first;
	(void)last;
}

template <class T, class Allocator>
void	vector<T, Allocator>swap (vector& x)
{
	(void)x;
}

template <class T, class Allocator>
void	vector<T, Allocator>clear()
{

}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class T, class Allocator>
bool	operator== (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Allocator>
bool	operator!= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Allocator>
bool	operator<  (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Allocator>
bool	operator<= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Allocator>
bool	operator>  (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Allocator>
bool	operator>= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Allocator>
void	swap (vector<T,Allocator>& x, vector<T,Allocator>& y)
{
	(void)x;
	(void)y;
}
