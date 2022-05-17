#include "iterator.hpp"

/****************           MAIN           ****************/

template <class Iterator>
ft::reverse_iterator<Iterator>::reverse_iterator()
{

}

template <class Iterator>
ft::reverse_iterator<Iterator>::reverse_iterator (iterator_type it)
{

}

template <class Iterator>
ft::reverse_iterator<Iterator>::reverse_iterator (const reverse_iterator<Iter>& rev_it)
{

}

template <class Iterator>
iterator_type	ft::reverse_iterator<Iterator>::base() const
{
	return (this->_current);
}

template <class Iterator>
reference	ft::reverse_iterator<Iterator>::operator*() const
{

}

template <class Iterator>
reverse_iterator	ft::reverse_iterator<Iterator>::operator+ (difference_type n) const
{
	return (*this);
}

template <class Iterator>
reverse_iterator	ft::reverse_iterator<Iterator>::operator++()		// ++i : Prefix increment operator
{
	this->_current += 1;
	return (*this);
}

template <class Iterator>
reverse_iterator	ft::reverse_iterator<Iterator>::operator++(int)		// i++ : Postfix increment operator
{
	ft::vector_iterator<T> prev = *this;
	this->_current += 1;
	return (prev);
}

template <class Iterator>
reverse_iterator& 	ft::reverse_iterator<Iterator>::operator--()		// --i : Prefix decrement operator
{
	this->_current -= 1;
	return (*this);
}

template <class Iterator>
reverse_iterator  	ft::reverse_iterator<Iterator>::operator--(int)		// i-- : Postfix decrement operator
{
	ft::vector_iterator<T> prev = *this;
	this->_current -= 1;
	return (prev);
}

template <class Iterator>
reverse_iterator& 	ft::reverse_iterator<Iterator>::operator+= (difference_type n)
{

}

template <class Iterator>
reverse_iterator 	ft::reverse_iterator<Iterator>::operator- (difference_type n) const
{

}

template <class Iterator>
reverse_iterator&	ft::reverse_iterator<Iterator>::operator-= (difference_type n)
{

}

template <class Iterator>
pointer		ft::reverse_iterator<Iterator>::operator->() const
{

}

template <class Iterator>
reference	ft::reverse_iterator<Iterator>::operator[] (difference_type n) const
{

}


/**************    NON-MEMBER FUNCTION OVERLOADS     **************/
	
template <class Iterator>
bool	operator== (const ft::reverse_iterator<Iterator>& lhs, const ft::reverse_iterator<Iterator>& rhs)
{

}

template <class Iterator>
bool	operator!= (const ft::reverse_iterator<Iterator>& lhs, const ft::reverse_iterator<Iterator>& rhs)
{

}

template <class Iterator>
bool	operator<  (const ft::reverse_iterator<Iterator>& lhs, const ft::reverse_iterator<Iterator>& rhs)
{

}

template <class Iterator>
bool	operator<= (const ft::reverse_iterator<Iterator>& lhs, const ft::reverse_iterator<Iterator>& rhs)
{

}

template <class Iterator>
bool	operator>  (const ft::reverse_iterator<Iterator>& lhs, const ft::reverse_iterator<Iterator>& rhs)
{

}

template <class Iterator>
bool	operator>= (const ft::reverse_iterator<Iterator>& lhs, const ft::reverse_iterator<Iterator>& rhs)
{

}

template <class Iterator>
ft::reverse_iterator<Iterator> operator+ (typename ft::reverse_iterator<Iterator>::difference_type n, const ft::reverse_iterator<Iterator>& rev_it)
{

}

template <class Iterator>
typename reverse_iterator<Iterator>::difference_type	operator- (const ft::reverse_iterator<Iterator>& lhs, const ft::reverse_iterator<Iterator>& rhs)
{

}
