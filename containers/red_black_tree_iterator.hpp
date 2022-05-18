#ifndef __RED_BLACK_TREE_ITERATOR__
# define __RED_BLACK_TREE_ITERATOR__

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
			rbtree_iterator (iterator_type it);
  			rbtree_iterator (const rbtree_iterator& rbtree_it);
			~rbtree_iterator();
			rbtree_iterator&							operator=( const rbtree_iterator<U>& other );
			reference									operator*() const;
			const_reference								operator*() const;
			pointer										operator->() const;
			const_pointer								operator->() const;
			rbtree_iterator&							operator++();
			rbtree_iterator								operator++(int);
			rbtree_iterator								operator+ (difference_type n) const;
			rbtree_iterator& 							operator+= (difference_type n);
			rbtree_iterator& 							operator--();
			rbtree_iterator  							operator--(int);
			rbtree_iterator 							operator- (difference_type n) const;
			rbtree_iterator&							operator-= (difference_type n);
	};
	
	template <class Tx, class Ty, class Ux, class Uy>
	bool												operator== (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

	template <class Tx, class Ty, class Ux, class Uy>
 	bool												operator!= (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

	template <class Tx, class Ty, class Ux, class Uy>
	bool												operator<  (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

	template <class Tx, class Ty, class Ux, class Uy>
	bool												operator<= (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

	template <class Tx, class Ty, class Ux, class Uy>
	bool												operator>  (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

	template <class Tx, class Ty, class Ux, class Uy>
	bool												operator>= (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

	template <class Tx, class Ty>
	rbtree_iterator<Tx, Ty>								operator+ (typename rbtree_iterator<Tx, Ty>::difference_type n, const rbtree_iterator<Tx, Ty>& it);

	template <class Tx, class Ty>
	typename rbtree_iterator<Tx, Ty>::difference_type	operator- (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Tx, Ty>& rhs);
}

#endif
