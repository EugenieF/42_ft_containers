#include "vector.hpp"

/****************           MAIN           ****************/

template <typename T, typename Alloc>
explicit	vector (const allocator_type& alloc = allocator_type())
{

}

template <typename T, typename Alloc>
explicit	vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
{

}

template <class InputIterator>
template <typename T, typename Alloc>
vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type())
{

}

template <typename T, typename Alloc>
vector (const vector& x)
{

}

template <typename T, typename Alloc>
~vector()
{

}

template <typename T, typename Alloc>
vector& operator= (const vector& x)
{

}


/****************        ITERATORS         ****************/

template <typename T, typename Alloc>
iterator	begin()
{

}

template <typename T, typename Alloc>
const_iterato	begin() const
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
size_typ	size() const
{

}

template <typename T, typename Alloc>
size_typ	max_size() const
{

}

template <typename T, typename Alloc>
void	resize (size_type n, value_type val = value_type())
{

}

template <typename T, typename Alloc>
size_type	capacity() const
{

}

template <typename T, typename Alloc>
bool 	empty() const
{

}

template <typename T, typename Alloc>
void	reserve (size_type n)
{

}


/****************      ELEMENT ACCESS       ***************/

template <typename T, typename Alloc>
reference		operator[](size_type pos)
{

}

template <typename T, typename Alloc>
const_reference	operator[] (size_type n) const
{

}

template <typename T, typename Alloc>
reference		at(size_type pos)
{

}

template <typename T, typename Alloc>
const_reference	at(size_type pos) const
{

}

template <typename T, typename Alloc>
reference		front()
{

}

template <typename T, typename Alloc>
const_reference	front() const
{

}

template <typename T, typename Alloc>
reference		back()
{

}

template <typename T, typename Alloc>
const_reference	back() const
{

}

			
/****************        MODIFIERS         ****************/

template <typename T, typename Alloc>
void	assign(size_type cout, const T& value)
{

}

template <typename T, typename Alloc>
void	push_back (const value_type& val)
{

}

template <typename T, typename Alloc>
void	pop_back()
{

}

template <typename T, typename Alloc>
iterator	insert (iterator position, const value_type& val);
{

}

template <typename T, typename Alloc>
void	insert (iterator position, size_type n, const value_type& val);
{

}

template <typename T, typename Alloc>
template <class InputIterator>
void	insert (iterator position, InputIterator first, InputIterator last)
{

}

template <typename T, typename Alloc>
iterator	erase (iterator position)
{

}

template <typename T, typename Alloc>
iterator	erase (iterator first, iterator last)
{

}

template <typename T, typename Alloc>
void	swap (vector& x)
{

}

template <typename T, typename Alloc>
void	clear()
{

}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <typename T, typename Alloc>
bool	operator== (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
{

}

template <typename T, typename Alloc>
bool	operator!= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
{

}

template <typename T, typename Alloc>
bool	operator<  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
{

}

template <typename T, typename Alloc>
bool	operator<= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
{

}

template <typename T, typename Alloc>
bool	operator>  (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
{

}

template <typename T, typename Alloc>
bool	operator>= (const vector<T,Alloc>& lhs, const vector<T,Alloc>& rhs)
{

}

template <typename T, typename Alloc>
void	swap (vector<T,Alloc>& x, vector<T,Alloc>& y)
{

}
