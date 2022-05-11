#include "stack.hpp"

/****************           MAIN           ****************/

template <class T, class Container>
explicit	stack<T, Container>::stack (const container_type& ctnr = container_type())
{
	(void)ctnr;
}

/****************         CAPACITY         ****************/

template <class T, class Container>
bool	stack<T, Container>::empty() const
{

}

template <class T, class Container>
size_type	stack<T, Container>::size() const
{

}

/****************      ELEMENT ACCESS       ***************/

template <class T, class Container>
value_type&		stack<T, Container>::top()
{

}

template <class T, class Container>
const value_type&	stack<T, Container>::top() const
{

}

/****************        MODIFIERS         ****************/

template <class T, class Container>
void	stack<T, Container>::push (const value_type& val)
{
	(void)val;
}

template <class T, class Container>
void	stack<T, Container>::pop()
{

}

/*********     NON-MEMBER FUNCTION OVERLOADS     **********/

template <class T, class Container>
bool operator== (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Container>
bool operator!= (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Container>
bool operator<  (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Container>
bool operator<= (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Container>
bool operator>  (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
{
	(void)lhs;
	(void)rhs;
}

template <class T, class Container>
bool operator>= (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
{
	(void)lhs;
	(void)rhs;
}
