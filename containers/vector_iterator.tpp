#include "vector_iterator.hpp"

/****************           MAIN           ****************/

template <class T>
ft::vector_iterator<T>::vector_iterator(): _current(NULL) {}

template <class T>
ft::vector_iterator<T>::vector_iterator (typename ft::vector_iterator<T>::pointer it): _current(it) {}

template <class T>
ft::vector_iterator<T>::vector_iterator (const ft::vector_iterator<T>& it):
	_current(it._current) {}

template <class T>
ft::vector_iterator<T>::~vector_iterator() {}

template <class T>
ft::vector_iterator<T>&	ft::vector_iterator<T>::operator=(const ft::vector_iterator<T>& other)
{
	if (this != &other)
		this->_current = other._current;
	return (*this);
}

template <class T>
typename ft::vector_iterator<T>::pointer	ft::vector_iterator<T>::base() const
{
	return (this->_current);
}

/****************          ACCESS OPERATORS         ***************/

template <class T>
typename ft::vector_iterator<T>::reference	ft::vector_iterator<T>::operator*() const
{
	return (*this->_current);
}

template <class T>
typename ft::vector_iterator<T>::pointer	ft::vector_iterator<T>::operator->() const
{
	return (this->_current);
}

template <class T>
typename ft::vector_iterator<T>::reference	ft::vector_iterator<T>::operator[] (typename ft::vector_iterator<T>::difference_type n) const
{
	return (this->_current[n]);
}

/**************       MEMBER FUNCTION OVERLOADS       **************/

/*  ++i : Prefix increment operator  */
template <class T>
ft::vector_iterator<T>&		ft::vector_iterator<T>::operator++()
{
	this->_current += 1;
	return (*this);
}

/*  i++ : Postfix increment operator  */
template <class T>
ft::vector_iterator<T>		ft::vector_iterator<T>::operator++(int)
{
	ft::vector_iterator<T> prev = *this;
	this->_current += 1;
	return (prev);
}

template <class T>
ft::vector_iterator<T>& 	ft::vector_iterator<T>::operator+= (typename ft::vector_iterator<T>::difference_type n)
{
	this->_current += n;
	return (*this);
}

template <class T>
ft::vector_iterator<T>		ft::vector_iterator<T>::operator+ (typename ft::vector_iterator<T>::difference_type n) const
{
	return (vector_iterator(this->base() + n));
}

template <class T>
typename ft::vector_iterator<T>::difference_type	ft::vector_iterator<T>::operator+ (const ft::vector_iterator<T>& it) const
{
	return (this->base() + it.base());
}

/*  --i : Prefix decrement operator  */
template <class T>
ft::vector_iterator<T>&		ft::vector_iterator<T>::operator--()
{
	this->_current -= 1;
	return (*this);
}

/*  i-- : Postfix decrement operator  */
template <class T>
ft::vector_iterator<T>		ft::vector_iterator<T>::operator--(int)
{
	ft::vector_iterator<T> prev = *this;
	this->_current -= 1;
	return (prev);
}

template <class T>
ft::vector_iterator<T>&		ft::vector_iterator<T>::operator-= (typename ft::vector_iterator<T>::difference_type n)
{
	this->_current -= n;
	return (*this);
}

template <class T>
ft::vector_iterator<T>		ft::vector_iterator<T>::operator- (typename ft::vector_iterator<T>::difference_type n) const
{
	return (vector_iterator(this->_current - n));
}

template <class T>
typename ft::vector_iterator<T>::difference_type	ft::vector_iterator<T>::operator- (const ft::vector_iterator<T>& it) const
{
	return (this->base() - it.base());
}

/*  Conversion operator const  */
template <class T>
ft::vector_iterator<T>::operator	vector_iterator<const typename ft::vector_iterator<T>::value_type>(void) const
{
	return (vector_iterator<const T>(this->base()));
}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class T, class U>
bool	ft::operator== (const ft::vector_iterator<T>& lhs, const vector_iterator<U>& rhs)
{
	return (lhs.base() == rhs.base());
}

template <class T, class U>
bool	ft::operator!= (const ft::vector_iterator<T>& lhs, const vector_iterator<U>& rhs)
{
	return (lhs.base() != rhs.base());
}

template <class T, class U>
bool	ft::operator<  (const ft::vector_iterator<T>& lhs, const vector_iterator<U>& rhs)
{
	return (lhs.base() < rhs.base());
}

template <class T, class U>
bool	ft::operator<= (const ft::vector_iterator<T>& lhs, const vector_iterator<U>& rhs)
{
	return (lhs.base() <= rhs.base());
}

template <class T, class U>
bool	ft::operator>  (const ft::vector_iterator<T>& lhs, const vector_iterator<U>& rhs)
{
	return (lhs.base() > rhs.base());
}

template <class T, class U>
bool	ft::operator>=	(const ft::vector_iterator<T>& lhs, const vector_iterator<U>& rhs)
{
	return (lhs.base() >= rhs.base());
}

template <class T>
ft::vector_iterator<T> ft::operator+ (typename ft::vector_iterator<T>::difference_type n, const ft::vector_iterator<T>& vec_it)
{
	return (vec_it + n);
}

template <class T>
typename ft::vector_iterator<T>::difference_type	ft::operator+ (const ft::vector_iterator<T>& lhs, const ft::vector_iterator<T>& rhs)
{
	return (lhs.base() + rhs.base());
}

template <class T>
ft::vector_iterator<T> ft::operator- (typename ft::vector_iterator<T>::difference_type n, const ft::vector_iterator<T>& vec_it)
{
	return (vec_it - n);
}

template <class T>
typename ft::vector_iterator<T>::difference_type	ft::operator- (const ft::vector_iterator<T>& lhs, const ft::vector_iterator<T>& rhs)
{
	return (lhs.base() - rhs.base());
}
