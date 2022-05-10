#include "stack.hpp"

/****************           MAIN           ****************/

template <typename T, typename Container>
explicit	stack<T, Container>::stack (const container_type& ctnr = container_type())
{
	(void)ctnr;
}

/****************         CAPACITY         ****************/

template <typename T, typename Container>
bool	stack<T, Container>::empty() const
{

}

template <typename T, typename Container>
size_type	stack<T, Container>::size() const
{

}

/****************      ELEMENT ACCESS       ***************/

template <typename T, typename Container>
value_type&		stack<T, Container>::top()
{

}

template <typename T, typename Container>
const value_type&	stack<T, Container>::top() const
{

}

/****************        MODIFIERS         ****************/

template <typename T, typename Container>
void	stack<T, Container>::push (const value_type& val)
{
	(void)val;
}

template <typename T, typename Container>
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
