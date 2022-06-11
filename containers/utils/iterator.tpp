#include "iterator.hpp"
using namespace ft;

/****************           MAIN           ****************/

template <class Iterator>
reverse_iterator<Iterator>::reverse_iterator(): _current() {}

template <class Iterator>
reverse_iterator<Iterator>::reverse_iterator (Iterator it): _current(it) {}

template <class Iterator>
reverse_iterator<Iterator>::reverse_iterator (const reverse_iterator<Iterator>& rev_it):
	_current(rev_it._current) {}

template <class Iterator>
reverse_iterator<Iterator>::~reverse_iterator() {}

template <class Iterator>
reverse_iterator<Iterator>&		reverse_iterator<Iterator>::operator=(const reverse_iterator<Iterator>& other)
{
	if (this != &other)
		this->_current = other._current;
	return (*this);
}

template <class Iterator>
Iterator	reverse_iterator<Iterator>::base() const
{
	return (this->_current);
}

/****************          ACCESS OPERATORS         ***************/

template <class Iterator>
typename reverse_iterator<Iterator>::reference	reverse_iterator<Iterator>::operator*() const
{
	Iterator	tmp;

	tmp = this->_current;
	--tmp;
	return (*tmp);
}

template <class Iterator>
typename reverse_iterator<Iterator>::pointer		reverse_iterator<Iterator>::operator->() const
{
	return (&(this->operator*()));
}

template <class Iterator>
typename reverse_iterator<Iterator>::reference	reverse_iterator<Iterator>::operator[] (
	typename reverse_iterator<Iterator>::difference_type n) const
{
	return (this->base()[-n - 1]);
}

/**************       MEMBER FUNCTION OVERLOADS       **************/

template <class Iterator>
reverse_iterator<Iterator>&	reverse_iterator<Iterator>::operator++()		// ++i : Prefix increment operator
{
	this->_current -= 1;
	return (*this);
}

template <class Iterator>
reverse_iterator<Iterator>	reverse_iterator<Iterator>::operator++(int)		// i++ : Postfix increment operator
{
	reverse_iterator<Iterator> prev = *this;
	this->_current--;
	return (prev);
}

template <class Iterator>
reverse_iterator<Iterator>& 	reverse_iterator<Iterator>::operator+= (
	typename reverse_iterator<Iterator>::difference_type n)
{
	this->_current -= n;
	return (*this);
}

template <class Iterator>
reverse_iterator<Iterator>	reverse_iterator<Iterator>::operator+ (
	typename reverse_iterator<Iterator>::difference_type n) const
{
	return (reverse_iterator<Iterator>(this->_current - n));
}

template <class Iterator>
reverse_iterator<Iterator>& 	reverse_iterator<Iterator>::operator--()		// --i : Prefix decrement operator
{
	this->_current++;
	return (*this);
}

template <class Iterator>
reverse_iterator<Iterator>  	reverse_iterator<Iterator>::operator--(int)		// i-- : Postfix decrement operator
{
	reverse_iterator<Iterator> prev = *this;
	this->_current++;
	return (prev);
}

template <class Iterator>
reverse_iterator<Iterator>&	reverse_iterator<Iterator>::operator-= (
	typename reverse_iterator<Iterator>::difference_type n)
{
	this->_current += n;
	return (*this);
}

template <class Iterator>
reverse_iterator<Iterator> 	reverse_iterator<Iterator>::operator- (
	typename reverse_iterator<Iterator>::difference_type n) const
{
	return (reverse_iterator<Iterator>(this->_current + n));
}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/
	
template <class Iterator1, class Iterator2>
bool	ft::operator== (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs)
{
	return (lhs.base() == rhs.base());
}

template <class Iterator1, class Iterator2>
bool	ft::operator!= (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs)
{
	return (lhs.base() != rhs.base());
}

template <class Iterator1, class Iterator2>
bool	ft::operator<  (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs)
{
	return (lhs.base() > rhs.base());
}

template <class Iterator1, class Iterator2>
bool	ft::operator<= (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs)
{
	return (lhs.base() <= rhs.base());
}

template <class Iterator1, class Iterator2>
bool	ft::operator>  (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs)
{
	return (lhs.base() < rhs.base());
}

template <class Iterator1, class Iterator2>
bool	ft::operator>= (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs)
{
	return (lhs.base() >= rhs.base());
}

template <class Iterator>
reverse_iterator<Iterator> ft::operator+ (typename reverse_iterator<Iterator>::difference_type n, const reverse_iterator<Iterator>& x)
{
	return (reverse_iterator<Iterator>(x.base() - n));
}

template <class Iterator>
typename reverse_iterator<Iterator>::difference_type	ft::operator- (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
{
	return (lhs.base() - rhs.base());
}
