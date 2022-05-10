#include "vector.hpp"

/****************           MAIN           ****************/

template <typename T, typename Alloc>
explicit	vector<T, Alloc>::vector (const allocator_type& alloc = allocator_type())
{
	(void)alloc;
}

template <typename T, typename Alloc>
explicit	vector<T, Alloc>::vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
{
	(void)n;
	(void)val;
	(void)alloc;
}

template <class InputIterator>
template <typename T, typename Alloc>
vector<T, Alloc>::vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type())
{
	(void)first;
	(void)last;
	(void)alloc;
}

template <typename T, typename Alloc>
vector<T, Alloc>::vector (const vector& x)
{
	(void)x;
}

template <typename T, typename Alloc>
vector<T, Alloc>::~vector()
{

}

template <typename T, typename Alloc>
vector<T, Alloc>::vector& operator= (const vector& x)
{
	(void)x;
}


/****************        ITERATORS         ****************/

template <typename T, typename Alloc>
iterator	begin()
{

}

template <typename T, typename Alloc>
const_iterator	begin() const
{

}

template <typename T, typename Alloc>
iterator	end()
{

}

template <typename T, typename Alloc>
const_iterato	end() const
{

}

template <typename T, typename Alloc>
reverse_iterat	rbegin()
{

}

template <typename T, typename Alloc>
const_reverse_itera	rbegin() const
{

}

template <typename T, typename Alloc>
reverse_iterator		rend()
{

}

template <typename T, typename Alloc>
const_reverse_iterator	rend() const
{

}


/****************         CAPACITY         ****************/

template <typename T, typename Alloc>
size_typ	vector<T, Alloc>::size() const
{

}

template <typename T, typename Alloc>
size_typ	vector<T, Alloc>::max_size() const
{

}

template <typename T, typename Alloc>
void	vector<T, Alloc>::resize (size_type n, value_type val = value_type())
{
	(void)n;
	(void)val;
}

template <typename T, typename Alloc>
size_type	vector<T, Alloc>::capacity() const
{

}

template <typename T, typename Alloc>
bool 	vector<T, Alloc>::empty() const
{

}

template <typename T, typename Alloc>
void	vector<T, Alloc>::reserve (size_type n)
{
	(void)n;
}


/****************      ELEMENT ACCESS       ***************/

template <typename T, typename Alloc>
reference		vector<T, Alloc>::operator[](size_type pos)
{
	(void)pos;
}

template <typename T, typename Alloc>
const_reference	vector<T, Alloc>::operator[] (size_type n) const
{
	(void)n;
}

template <typename T, typename Alloc>
reference		vector<T, Alloc>::at(size_type pos)
{
	(void)pos;
}

template <typename T, typename Alloc>
const_reference	vector<T, Alloc>::at(size_type pos) const
{
	(void)pos;
}

template <typename T, typename Alloc>
reference		vector<T, Alloc>::front()
{

}

template <typename T, typename Alloc>
const_reference	vector<T, Alloc>::front() const
{

}

template <typename T, typename Alloc>
reference		vector<T, Alloc>::back()
{

}

template <typename T, typename Alloc>
const_reference	vector<T, Alloc>::back() const
{

}
	
/****************        MODIFIERS         ****************/

template <typename T, typename Alloc>
void	vector<T, Alloc>assign(size_type cout, const T& value)
{
	(void)cout;
	(void)value;
}

template <typename T, typename Alloc>
void	vector<T, Alloc>push_back (const value_type& val)
{
	(void)val;
}

template <typename T, typename Alloc>
void	vector<T, Alloc>pop_back()
{

}

template <typename T, typename Alloc>
iterator	vector<T, Alloc>insert (iterator position, const value_type& val);
{
	(void)position;
	(void)val;
}

template <typename T, typename Alloc>
void	vector<T, Alloc>insert (iterator position, size_type n, const value_type& val);
{
	(void)position;
	(void)n;
	(void)val;
}

template <typename T, typename Alloc>
template <class InputIterator>
void	vector<T, Alloc>insert (iterator position, InputIterator first, InputIterator last)
{
	(void)position;
	(void)first;
	(void)last;
}

template <typename T, typename Alloc>
iterator	vector<T, Alloc>erase (iterator position)
{
	(void)position;
}

template <typename T, typename Alloc>
iterator	vector<T, Alloc>erase (iterator first, iterator last)
{
	(void)first;
	(void)last;
}

template <typename T, typename Alloc>
void	vector<T, Alloc>swap (vector& x)
{
	(void)x;
}

template <typename T, typename Alloc>
void	vector<T, Alloc>clear()
{

}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <typename T, typename Alloc>
bool	operator== (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <typename T, typename Alloc>
bool	operator!= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <typename T, typename Alloc>
bool	operator<  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <typename T, typename Alloc>
bool	operator<= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <typename T, typename Alloc>
bool	operator>  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <typename T, typename Alloc>
bool	operator>= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <typename T, typename Alloc>
void	swap (vector<T,Alloc>& x, vector<T,Alloc>& y)
{
	(void)x;
	(void)y;
}
