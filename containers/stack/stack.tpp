#include "stack.hpp"
using namespace ft;

/****************           MAIN           ****************/

template <class T, class Container>
stack<T, Container>::stack (const typename stack<T, Container>::container_type& ctnr): c(ctnr) {}

/****************         CAPACITY         ****************/

template <class T, class Container>
bool	stack<T, Container>::empty() const
{
	return (this->c.empty());
}

template <class T, class Container>
 typename stack<T, Container>::size_type		stack<T, Container>::size() const
{
	return (this->c.size());
}

/****************      ELEMENT ACCESS       ***************/

template <class T, class Container>
typename stack<T, Container>::value_type&	stack<T, Container>::top()
{
	return (this->c.back());
}

template <class T, class Container>
const typename stack<T, Container>::value_type&		stack<T, Container>::top() const
{
	return (this->c.back());
}

/****************        MODIFIERS         ****************/

template <class T, class Container>
void	stack<T, Container>::push (const stack<T, Container>::value_type& val)
{
	this->c.push_back(val);
}

template <class T, class Container>
void	stack<T, Container>::pop()
{
	this->c.pop_back();
}

/*********     NON-MEMBER FUNCTION OVERLOADS     **********/

template <class T, class Container>
bool ft::operator== (const stack<T, Container>& lhs, const stack<T, Container>& rhs)
{
	return (lhs.c == rhs.c);
}

template <class T, class Container>
bool ft::operator!= (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
{
	return (lhs.c != rhs.c);
}

template <class T, class Container>
bool ft::operator<  (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
{
	return (lhs.c < rhs.c);
}

template <class T, class Container>
bool ft::operator<= (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
{
	return (lhs.c <= rhs.c);
}

template <class T, class Container>
bool ft::operator>  (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
{
	return (lhs.c > rhs.c);
}

template <class T, class Container>
bool ft::operator>= (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
{
	return (lhs.c >= rhs.c);
}

/*********************         	 PRINT          *********************/

template <class T, class Container>
void	stack<T, Container>::print(void)
{
	this->c.print();
}
