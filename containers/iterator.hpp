#ifndef __ITERATOR_HPP__
# define __ITERATOR_HPP__

# include "main.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                    ITERATOR 	                                   */
	/***********************************************************************************/

	template <class Category, class T, class Distance = std::ptrdiff_t, class Pointer = T*, class Reference = T& >
	struct iterator
	{
		/***********************          TYPEDEF         ***********************/
		typedef T												value_type;
		typedef Distance										difference_type;
		typedef Pointer											pointer;
		typedef Reference										reference;
		typedef Category										iterator_category;
	};


	/***********************************************************************************/
	/*                                  ITERATOR TRAITS 	                           */
	/***********************************************************************************/

	template< class Iterator >
	struct iterator_traits
	{
		/***********************          TYPEDEF         ***********************/
		typedef	Iterator::difference_type						difference_type;
		typedef Iterator::value_type							value_type;
		typedef Iterator::pointer								pointer;
		typedef Iterator::reference								reference;
		typedef Iterator::iterator_category						iterator_category;
	};

	template< class T >
	struct iterator_traits < T* >
	{
		/***********************          TYPEDEF         ***********************/
		typedef	ptrdiff_t										difference_type;
		typedef T												value_type;
		typedef T*												pointer;
		typedef T&												reference;
		typedef std::random_access_iterator_tag					iterator_category;
	};

	template< class T >
	struct iterator_traits < const T* >
	{
		/***********************          TYPEDEF         ***********************/
		typedef	ptrdiff_t										difference_type;
		typedef T												value_type;
		typedef T* const										pointer;
		typedef T& const										reference;
		typedef std::random_access_iterator_tag					iterator_category;
	};


	/***********************************************************************************/
	/*                                 REVERSE ITERATOR  	                           */
	/***********************************************************************************/

	template <class Iterator>
	class reverse_iterator
	{
		public:

		/****************          TYPEDEF         ****************/
		typedef Iterator										iterator_type;
		typedef iterator_traits<Iterator>::iterator_category	iterator_category;
		typedef iterator_traits<Iterator>::value_type			value_type;
		typedef iterator_traits<Iterator>::difference_type		difference_type;
		typedef iterator_traits<Iterator>::pointer				pointer;
		typedef iterator_traits<Iterator>::reference			reference;

		/****************           MAIN           ****************/
		reverse_iterator();
		explicit reverse_iterator (iterator_type it);
		template <class Iterator>
  		reverse_iterator (const reverse_iterator<Iter>& rev_it);
		template <class Iter>
		reverse_iterator (const reverse_iterator<Iter>& rev_it);
		iterator_type											base() const;
		reference												operator*() const;
		reverse_iterator										operator+ (difference_type n) const;
		reverse_iterator										operator++(int);
		reverse_iterator& 										operator+= (difference_type n);
		reverse_iterator 										operator- (difference_type n) const;
		reverse_iterator& 										operator--();
		reverse_iterator  										operator--(int);
		reverse_iterator&										operator-= (difference_type n);
		pointer													operator->() const;
		reference												operator[] (difference_type n) const;
	};

	/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

	template <class Iterator1, class Iterator2>
	bool														operator== (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
 	bool														operator!= (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
	bool														operator<  (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
	bool														operator<= (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
	bool														operator>  (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
	bool														operator>= (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator>
	reverse_iterator<Iterator>									operator+ (typename reverse_iterator<Iterator>::difference_type n, const reverse_iterator<Iterator>& rev_it);

	template <class Iterator>
	typename reverse_iterator<Iterator>::difference_type		operator- (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs);
}

#endif
