#ifndef __RED_BLACK_TREE_ITERATOR_HPP__
# define __RED_BLACK_TREE_ITERATOR_HPP__

#include "main.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                           RED BLACK TREE ITERATOR                               */
	/***********************************************************************************/

	template <class T, class Node>
	class	rbtree_iterator
	{
		public:
			/****************          TYPEDEF         ****************/
			typedef	ptrdiff_t							difference_type;
			typedef T									value_type;
			typedef T*									pointer;
			typedef T const *							const_pointer;
			typedef T&									reference;
			typedef T const &							const_reference;
			typedef std::bidirectional_iterator_tag		iterator_category;
			typedef Node								node;
			typedef Node*								nodePtr;
			typedef Node&								nodeRef;

			nodePtr										current;

		private:
			nodePtr										_root;
			nodePtr										_nil;

		public:
			/****************           MAIN           ****************/
			rbtree_iterator();
			rbtree_iterator (nodePtr ptr, nodePtr root, nodePtr nil);
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

		private:
			nodePtr										_minimum(nodePtr node);		
			nodePtr										_maximum(nodePtr node);		
			nodePtr										_predecessor(nodePtr node);
			nodePtr										_successor(nodePtr node);
	};
	
	template <class Tx, class Ty, class Ux, class Uy>
	bool												operator== (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

	template <class Tx, class Ty, class Ux, class Uy>
 	bool												operator!= (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);
}

#endif
