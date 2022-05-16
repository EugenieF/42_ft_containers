#ifndef __STACK_HPP__
# define __STACK_HPP__

#include "main.hpp"
#include <vector>

namespace ft
{
	/***********************************************************************************/
	/*                                     STACK  	                                   */
	/***********************************************************************************/

	// template < class T, class Container = ft::vector<T> >
	template < class T, class Container = std::vector<T> >
	class stack
	{
		public:
			/****************          TYPEDEF         ****************/
			// typedef typename Container::value_type	value_type;
			// typedef typename Container::size_t		size_type;
			typedef T								value_type;
			typedef	size_t							size_type;
			typedef Container						container_type;

		protected:
			Container					c;

		public:
			/****************           MAIN           ****************/
			explicit					stack (const container_type& ctnr = Container());
			// stack						&operator=(const stack& other);

			/****************         CAPACITY         ****************/
			bool						empty() const;
			size_type					size() const;

			/****************      ELEMENT ACCESS       ***************/
			value_type&					top();
			const value_type&			top() const;

			/****************        MODIFIERS         ****************/
			void						push (const value_type& val);
			void						pop();

			template <class T1, class Container1>
			friend bool operator== (const stack<T1, Container1>& lhs, const stack<T1, Container1>& rhs);
	};

	/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

	template <class T, class Container>
	bool operator== (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
	{ return (lhs.c == rhs.c); };

	template <class T, class Container>
	bool operator!= (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
	{ return (lhs.c != rhs.c); };

	template <class T, class Container>
	bool operator<  (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
	{ return (lhs.c < rhs.c); };

	template <class T, class Container>
	bool operator<= (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
	{ return (lhs.c <= rhs.c); };

	template <class T, class Container>
	bool operator>  (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
	{ return (lhs.c > rhs.c); };

	template <class T, class Container>
	bool operator>= (const stack<T,Container>& lhs, const stack<T,Container>& rhs)
	{ return (lhs.c >= rhs.c); };

}

#include "stack.tpp"

#endif
