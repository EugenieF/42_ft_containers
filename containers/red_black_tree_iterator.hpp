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
			typedef T&									reference;
			typedef std::random_access_iterator_tag		iterator_category;
			typedef Node<T>								node;
			typedef node*								nodePtr;
			typedef node&								nodeRef;

			/****************           MAIN           ****************/
			rbtree_iterator();
			rbtree_iterator (iterator_type it);
			template <class Iterator>
  			rbtree_iterator (const rbtree_iterator<Iter>& it);
			template <class Iter>
			rbtree_iterator (const rbtree_iterator<Iter>& it);
			iterator_type							base() const;
			reference								operator*() const;
			rbtree_iterator							operator+ (difference_type n) const;
			rbtree_iterator							operator++(int);
			rbtree_iterator& 						operator+= (difference_type n);
			rbtree_iterator 						operator- (difference_type n) const;
			rbtree_iterator& 						operator--();
			rbtree_iterator  						operator--(int);
			rbtree_iterator&						operator-= (difference_type n);
			pointer									operator->() const;
			reference								operator[] (difference_type n) const;
	};
	
	template <class T, class U>
	bool											operator== (const rbtree_iterator<T>& lhs, const rbtree_iterator<U>& rhs);

	template <class T, class U>
 	bool											operator!= (const rbtree_iterator<T>& lhs, const rbtree_iterator<U>& rhs);

	template <class T, class U>
	bool											operator<  (const rbtree_iterator<T>& lhs, const rbtree_iterator<U>& rhs);

	template <class T, class U>
	bool											operator<= (const rbtree_iterator<T>& lhs, const rbtree_iterator<U>& rhs);

	template <class T, class U>
	bool											operator>  (const rbtree_iterator<T>& lhs, const rbtree_iterator<U>& rhs);

	template <class T, class U>
	bool											operator>= (const rbtree_iterator<T>& lhs, const rbtree_iterator<U>& rhs);

	template <class T>
	rbtree_iterator<T>								operator+ (typename rbtree_iterator<T>::difference_type n, const rbtree_iterator<T>& it);

	template <class T>
	typename rbtree_iterator<T>::difference_type	operator- (const rbtree_iterator<T>& lhs, const rbtree_iterator<T>& rhs);
}

#endif
