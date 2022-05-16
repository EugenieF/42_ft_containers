#include "stack.hpp"

/****************           MAIN           ****************/

template <class T, class Container>
ft::stack<T, Container>::stack (const container_type& ctnr)
{
	(void)ctnr;
}

/****************         CAPACITY         ****************/

template <class T, class Container>
bool	ft::stack<T, Container>::empty() const
{

}

template <class T, class Container>
typename ft::stack<T, Container>::size_type	ft::stack<T, Container>::size() const
{

}

/****************      ELEMENT ACCESS       ***************/

template <class T, class Container>
typename ft::stack<T, Container>::value_type&		ft::stack<T, Container>::top()
{

}

template <class T, class Container>
const typename ft::stack<T, Container>::value_type&	ft::stack<T, Container>::top() const
{

}

/****************        MODIFIERS         ****************/

template <class T, class Container>
void	ft::stack<T, Container>::push (const ft::stack<T, Container>::value_type& val)
{
	(void)val;
}

template <class T, class Container>
void	ft::stack<T, Container>::pop()
{

}

/*********     NON-MEMBER FUNCTION OVERLOADS     **********/

template <class T, class Container>
bool operator== (const ft::stack<T,Container>& lhs, const ft::stack<T,Container>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Container>
bool operator!= (const ft::stack<T,Container>& lhs, const ft::stack<T,Container>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Container>
bool operator<  (const ft::stack<T,Container>& lhs, const ft::stack<T,Container>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Container>
bool operator<= (const ft::stack<T,Container>& lhs, const ft::stack<T,Container>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Container>
bool operator>  (const ft::stack<T,Container>& lhs, const ft::stack<T,Container>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Container>
bool operator>= (const ft::stack<T,Container>& lhs, const ft::stack<T,Container>& rhs)
{
	(void)lhs;
	(void)rhs;
}
