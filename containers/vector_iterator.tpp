#include "vector_iterator.hpp"

template <class T>
ft::vector_iterator<T>::pointer		ft::vector_iterator<T>::base() const
{
	return (this->_curent);
}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class T, class U>
bool	operator== (const ft::vector_iterator<T>& lhs, const ft::vector_iterator<U>& rhs)
{
	return (lhs.base() == rhs.base());
}

template <class T, class U>
bool	operator!= (const ft::vector_iterator<T>& lhs, const ft::vector_iterator<U>& rhs)
{
	return (lhs.base() != rhs.base());
}

template <class T, class U>
bool	operator<  (const ft::vector_iterator<T>& lhs, const ft::vector_iterator<U>& rhs)
{
	return (lhs.base() < rhs.base());
}

template <class T, class U>
bool	operator<= (const ft::vector_iterator<T>& lhs, const ft::vector_iterator<U>& rhs)
{
	return (lhs.base() <= rhs.base());
}

template <class T, class U>
bool	operator>  (const ft::vector_iterator<T>& lhs, const ft::vector_iterator<U>& rhs)
{
	return (lhs.base() > rhs.base());
}

template <class T, class U>
bool	operator>=	(const ft::vector_iterator<T>& lhs, const ft::vector_iterator<U>& rhs)
{
	return (lhs.base() >= rhs.base());
}

template <class T>
ft::vector_iterator<T>	operator+ (typename ft::vector_iterator<T>::difference_type n, const ft::vector_iterator<T>& it)
{
	return (it.base() + n);
}

template <class T>
ft::vector_iterator<T>	operator- (typename ft::vector_iterator<T>::difference_type n, const ft::vector_iterator<T>& it)
{
	return (it.base() - n);
}

template <class T>
typename ft::vector_iterator<T>::difference_type	operator+ (const ft::vector_iterator<T>& lhs, const ft::vector_iterator<T>& rhs)
{
	return ();
}

template <class T>
typename ft::vector_iterator<T>::difference_type	operator- (const ft::vector_iterator<T>& lhs, const ft::vector_iterator<T>& rhs)
{
	return ();
}
