#include "vector_iterator.hpp"

/****************           MAIN           ****************/

template <class T>
ft::vector_iterator<T>::vector_iterator();

template <class T>
ft::vector_iterator<T>::vector_iterator (iterator_type it);

template <class T, class Iterator>
ft::vector_iterator<T>::vector_iterator (const vector_iterator<Iter>& it);

template <class T, class Iter>
ft::vector_iterator<T>::vector_iterator (const vector_iterator<Iter>& it);

template <class T>
ft::vector_iterator<T>::pointer		ft::vector_iterator<T>::base() const
{
	return (this->_curent);
}

template <class T>
reference								ft::vector_iterator<T>::operator*() const;

template <class T>
vector_iterator							ft::vector_iterator<T>::operator+ (difference_type n) const;

template <class T>
ft::vector_iterator<T>		ft::vector_iterator<T>::operator++()		// ++i : Prefix increment operator
{
	this->_current += 1;
	return (*this);
}

template <class T>
ft::vector_iterator<T>		ft::vector_iterator<T>::operator++(int)		// i++ : Postfix increment operator
{
	ft::vector_iterator<T> prev = *this;
	this->_current += 1;
	return (prev);
}

template <class T>
ft::vector_iterator<T>		ft::vector_iterator<T>::operator--()		// --i : Prefix decrement operator
{
	this->_current -= 1;
	return (*this);
}

template <class T>
ft::vector_iterator<T>		ft::vector_iterator<T>::operator--(int)		// i-- : Postfix decrement operator
{
	ft::vector_iterator<T> prev = *this;
	this->_current -= 1;
	return (prev);
}

template <class T>
vector_iterator& 						ft::vector_iterator<T>::operator+= (difference_type n);

template <class T>
vector_iterator 						ft::vector_iterator<T>::operator- (difference_type n) const;


template <class T>
vector_iterator&						ft::vector_iterator<T>::operator-= (difference_type n);

template <class T>
pointer									ft::vector_iterator<T>::operator->() const;

template <class T>
reference								ft::vector_iterator<T>::operator[] (difference_type n) const;


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
