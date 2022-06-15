#ifndef __STACK_HPP__
# define __STACK_HPP__

#include "vector.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                     STACK  	                                   */
	/***********************************************************************************/

	template < class T, class Container = ft::vector<T> >
	class stack
	{
		public:
			/****************          TYPEDEF         ****************/
			typedef typename Container::value_type	value_type;
			typedef typename Container::size_type	size_type;
			typedef Container						container_type;

		protected:
			Container								c;

		public:
			/****************           MAIN           ****************/
			explicit								stack (const container_type& cont = Container());
			stack&									operator=(const stack& other);
			~stack();

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
			template <class Tx, class ContainerX>
			friend bool operator== (const stack<Tx, ContainerX>& lhs, const stack<Tx, ContainerX>& rhs);

			template <class Tx, class ContainerX>
			friend bool operator< (const stack<Tx, ContainerX>& lhs, const stack<Tx, ContainerX>& rhs);

			/*********************         TO DEBUG         *********************/
			void											print(void);
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
