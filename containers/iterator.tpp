#include "iterator.hpp"

/****************           MAIN           ****************/

template <class Iterator>
reverse_iterator<Iterator>::reverse_iterator()
{

}

template <class Iterator>
explicit reverse_iterator<Iterator>::reverse_iterator (iterator_type it)
{

}

template <class Iterator>
reverse_iterator<Iterator>::reverse_iterator (const reverse_iterator<Iter>& rev_it)
{

}

template <class Iterator>
iterator_type	reverse_iterator<Iterator>::base() const
{

}

template <class Iterator>
reference	reverse_iterator<Iterator>::operator*() const
{

}

template <class Iterator>
reverse_iterator	reverse_iterator<Iterator>::operator+ (difference_type n) const
{

}

template <class Iterator>
reverse_iterator	reverse_iterator<Iterator>::operator++(int)
{

}

template <class Iterator>
reverse_iterator& 	reverse_iterator<Iterator>::operator+= (difference_type n)
{

}

template <class Iterator>
reverse_iterator 	reverse_iterator<Iterator>::operator- (difference_type n) const
{

}

template <class Iterator>
reverse_iterator& 	reverse_iterator<Iterator>::operator--()
{

}

template <class Iterator>
reverse_iterator  	reverse_iterator<Iterator>::operator--(int)
{

}

template <class Iterator>
reverse_iterator&	reverse_iterator<Iterator>::operator-= (difference_type n)
{

}

template <class Iterator>
pointer		reverse_iterator<Iterator>::operator->() const
{

}

template <class Iterator>
reference	reverse_iterator<Iterator>::operator[] (difference_type n) const
{

}


/**************    NON-MEMBER FUNCTION OVERLOADS     **************/
	
template <class Iterator>
bool	operator== (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
{

}

template <class Iterator>
bool	operator!= (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
{

}

template <class Iterator>
bool	operator<  (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
{

}

template <class Iterator>
bool	operator<= (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
{

}

template <class Iterator>
bool	operator>  (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
{

}

template <class Iterator>
bool	operator>= (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
{

}

template <class Iterator>
reverse_iterator<Iterator> operator+ (typename reverse_iterator<Iterator>::difference_type n, const reverse_iterator<Iterator>& rev_it)
{

}

template <class Iterator>
typename reverse_iterator<Iterator>::difference_type	operator- (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs)
{

}
