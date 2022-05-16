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
			Container								c;

		public:
			/****************           MAIN           ****************/
			explicit								stack (const container_type& ctnr = Container());

			/****************         CAPACITY         ****************/
			bool									empty() const;
			size_type								size() const;

			/****************      ELEMENT ACCESS       ***************/
			value_type&								top();
			const value_type&						top() const;

			/****************        MODIFIERS         ****************/
			void									push (const value_type& val);
			void									pop();

			/****************     FRIEND FUNCTIONS     ****************/
			template <class Tn, class ContainerN>
			friend bool operator== (const stack<Tn, ContainerN>& lhs, const stack<Tn, ContainerN>& rhs);

			template <class Tn, class ContainerN>
			friend bool operator!= (const stack<Tn, ContainerN>& lhs, const stack<Tn, ContainerN>& rhs);

			template <class Tn, class ContainerN>
			friend bool operator< (const stack<Tn, ContainerN>& lhs, const stack<Tn, ContainerN>& rhs);

			template <class Tn, class ContainerN>
			friend bool operator<= (const stack<Tn, ContainerN>& lhs, const stack<Tn, ContainerN>& rhs);

			template <class Tn, class ContainerN>
			friend bool operator> (const stack<Tn, ContainerN>& lhs, const stack<Tn, ContainerN>& rhs);

			template <class Tn, class ContainerN>
			friend bool operator>= (const stack<Tn, ContainerN>& lhs, const stack<Tn, ContainerN>& rhs);
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
