#ifndef __STACK_HPP__
# define __STACK_HPP__

#include "main.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                     STACK  	                                   */
	/***********************************************************************************/

	template < class T, class Container = vector<T> >
	class stack
	{
		public:
			/****************          TYPEDEF         ****************/
			typename T			value_type;
			typename Container	container_type;
			typename size_t		size_type;

			/****************           MAIN           ****************/
			explicit			stack (const container_type& ctnr = container_type());

			/****************         CAPACITY         ****************/
			bool				empty() const;
			size_type			size() const;

			/****************      ELEMENT ACCESS       ***************/
			value_type&			top();
			const value_type&	top() const;

			/****************        MODIFIERS         ****************/
			void				push (const value_type& val);
			void				pop();
	};

	/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

	template <class T, class Container>
	bool operator== (const stack<T,Container>& lhs, const stack<T,Container>& rhs);

	template <class T, class Container>
	bool operator!= (const stack<T,Container>& lhs, const stack<T,Container>& rhs);

	template <class T, class Container>
	bool operator<  (const stack<T,Container>& lhs, const stack<T,Container>& rhs);

	template <class T, class Container>
	bool operator<= (const stack<T,Container>& lhs, const stack<T,Container>& rhs);

	template <class T, class Container>
	bool operator>  (const stack<T,Container>& lhs, const stack<T,Container>& rhs);

	template <class T, class Container>
	bool operator>= (const stack<T,Container>& lhs, const stack<T,Container>& rhs);

}

#include "stack.tpp"

#endif
