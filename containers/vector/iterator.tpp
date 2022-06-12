#include "iterator.hpp"
using namespace ft;

/****************           MAIN           ****************/

template <class T>
vector_iterator<T>::vector_iterator(): _current(NULL) {}

template <class T>
vector_iterator<T>::vector_iterator (typename vector_iterator<T>::pointer it): _current(it) {}

template <class T>
vector_iterator<T>::vector_iterator (const vector_iterator<T>& it):
	_current(it._current) {}

template <class T>
vector_iterator<T>::~vector_iterator() {}

template <class T>
vector_iterator<T>&	vector_iterator<T>::operator=(const vector_iterator<T>& other)
{
	if (this != &other)
		this->_current = other._current;
	return (*this);
}

template <class T>
typename vector_iterator<T>::pointer	vector_iterator<T>::base() const
{
	return (this->_current);
}

/****************          ACCESS OPERATORS         ***************/

template <class T>
typename vector_iterator<T>::reference	vector_iterator<T>::operator*() const
{
	return (*this->_current);
}

template <class T>
typename vector_iterator<T>::pointer	vector_iterator<T>::operator->() const
{
	return (this->_current);
}

template <class T>
typename vector_iterator<T>::reference	vector_iterator<T>::operator[] (typename vector_iterator<T>::difference_type n) const
{
	return (this->current[n]);
}

/**************       MEMBER FUNCTION OVERLOADS       **************/

template <class T>
vector_iterator<T>&		vector_iterator<T>::operator++()		// ++i : Prefix increment operator
{
	this->_current += 1;
	return (*this);
}

template <class T>
vector_iterator<T>		vector_iterator<T>::operator++(int)		// i++ : Postfix increment operator
{
	vector_iterator<T> prev = *this;
	this->_current += 1;
	return (prev);
}

template <class T>
vector_iterator<T>& 	vector_iterator<T>::operator+= (typename vector_iterator<T>::difference_type n)
{
	this->_current += n;
	return (*this);
}

template <class T>
vector_iterator<T>		vector_iterator<T>::operator+ (typename vector_iterator<T>::difference_type n) const
{
	return (vector_iterator(this->_current + n));
}

template <class T>
vector_iterator<T>&		vector_iterator<T>::operator--()		// --i : Prefix decrement operator
{
	this->_current -= 1;
	return (*this);
}

template <class T>
vector_iterator<T>		vector_iterator<T>::operator--(int)		// i-- : Postfix decrement operator
{
	vector_iterator<T> prev = *this;
	this->_current -= 1;
	return (prev);
}

template <class T>
vector_iterator<T>&		vector_iterator<T>::operator-= (typename vector_iterator<T>::difference_type n)
{
	this->_current -= n;
	return (*this);
}

template <class T>
vector_iterator<T> 		vector_iterator<T>::operator- (typename vector_iterator<T>::difference_type n) const
{
	return (vector_iterator(this->_current - n));
}

template <class T>
vector_iterator<T>::operator	vector_iterator<const T>(void) const
{
	return (vector_iterator<const T>(this->base()));
}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class T, class U>
bool	ft::operator== (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs)
{
	return (lhs.base() == rhs.base());
}

template <class T, class U>
bool	ft::operator!= (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs)
{
	return (lhs.base() != rhs.base());
}

template <class T, class U>
bool	ft::operator<  (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs)
{
	return (lhs.base() < rhs.base());
}

template <class T, class U>
bool	ft::operator<= (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs)
{
	return (lhs.base() <= rhs.base());
}

template <class T, class U>
bool	ft::operator>  (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs)
{
	return (lhs.base() > rhs.base());
}

template <class T, class U>
bool	ft::operator>=	(const vector_iterator<T>& lhs, const vector_iterator<U>& rhs)
{
	return (lhs.base() >= rhs.base());
}

template <class T>
vector_iterator<T> ft::operator+ (typename vector_iterator<T>::difference_type n, const vector_iterator<T>& vec_it)
{
	return (vec_it + n);
}

template <class T>
typename vector_iterator<T>::difference_type	ft::operator- (const vector_iterator<T>& lhs, const vector_iterator<T>& rhs)
{
	return (lhs.base() - rhs.base());
}
