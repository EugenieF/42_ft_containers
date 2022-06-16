#ifndef __RBTREE_ITERATOR_HPP__
# define __RBTREE_ITERATOR_HPP__

#include "rbtree_node.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                           RED BLACK TREE ITERATOR                               */
	/***********************************************************************************/

	template <class T, class Node>
	class	rbtree_iterator
	{
		public:
			/********************      MEMBER TYPES     **********************/
			typedef	ptrdiff_t							difference_type;
			typedef T									value_type;
			typedef T*									pointer;
			typedef T const*							const_pointer;
			typedef T&									reference;
			typedef T const&							const_reference;
			typedef std::bidirectional_iterator_tag		iterator_category;
			typedef Node*								node_ptr;

			/*********************    MEMBER VARIABLES   ********************/
			node_ptr									current;

		private:
			node_ptr									_root;
			node_ptr									_nil;

		public:
			/******************      MEMBER FUNCTIONS     ******************/

			rbtree_iterator();
			rbtree_iterator (node_ptr ptr, node_ptr root, node_ptr nil);
  			rbtree_iterator (const rbtree_iterator& rbtree_it);
			~rbtree_iterator();
			rbtree_iterator&							operator=(const rbtree_iterator& other);
			reference									operator*();
			const_reference								operator*() const;
			pointer										operator->();
			const_pointer								operator->() const;
			rbtree_iterator&							operator++();
			rbtree_iterator								operator++(int);
			rbtree_iterator& 							operator--();
			rbtree_iterator  							operator--(int);

			operator									rbtree_iterator<value_type const, Node>(void) const;

		private:
			node_ptr									_get_root() const;
			node_ptr									_get_nil() const;
			node_ptr									_minimum(node_ptr node);		
			node_ptr									_maximum(node_ptr node);		
			node_ptr									_predecessor(node_ptr node);
			node_ptr									_successor(node_ptr node);
	};
	
	/********************     NON-MEMBER FUNCTION OVERLOADS      ********************/

	template <class Tx, class Ty, class Ux, class Uy>
	bool												operator== (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

	template <class Tx, class Ty, class Ux, class Uy>
 	bool												operator!= (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);
}

# include "rbtree_iterator.tpp"

#endif
