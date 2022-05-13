#ifndef __VECTOR_ITERATOR_HPP__
# define __VECTOR_ITERATOR_HPP__

#include "main.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                  VECTOR ITERATOR                                */
	/***********************************************************************************/

	template <class T>
	class vector_iterator
	{
		private:

		public:
			/****************          TYPEDEF         ****************/
			typedef	ptrdiff_t							difference_type;
			typedef T									value_type;
			typedef T*									pointer;
			typedef T&									reference;
			typedef std::random_access_iterator_tag		iterator_category;

			/****************           MAIN           ****************/
			vector_iterator();
			vector_iterator (iterator_type it);
			template <class Iterator>
  			vector_iterator (const vector_iterator<Iter>& it);
			template <class Iter>
			vector_iterator (const vector_iterator<Iter>& it);
			iterator_type							base() const;
			reference								operator*() const;
			vector_iterator							operator+ (difference_type n) const;
			vector_iterator							operator++(int);
			vector_iterator& 						operator+= (difference_type n);
			vector_iterator 						operator- (difference_type n) const;
			vector_iterator& 						operator--();
			vector_iterator  						operator--(int);
			vector_iterator&						operator-= (difference_type n);
			pointer									operator->() const;
			reference								operator[] (difference_type n) const;
	};
	
	/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

	template <class T, class U>
	bool											operator== (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs);

	template <class T, class U>
 	bool											operator!= (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs);

	template <class T, class U>
	bool											operator<  (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs);

	template <class T, class U>
	bool											operator<= (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs);

	template <class T, class U>
	bool											operator>  (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs);

	template <class T, class U>
	bool											operator>= (const vector_iterator<T>& lhs, const vector_iterator<U>& rhs);

	template <class T>
	vector_iterator<T>								operator+ (typename vector_iterator<T>::difference_type n, const vector_iterator<T>& it);

	template <class T>
	typename vector_iterator<T>::difference_type	operator- (const vector_iterator<T>& lhs, const vector_iterator<T>& rhs);
}

#include "vector_iterator.tpp"

#endif