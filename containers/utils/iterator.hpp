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
		typedef	typename Iterator::difference_type				difference_type;
		typedef typename Iterator::value_type					value_type;
		typedef typename Iterator::pointer						pointer;
		typedef typename Iterator::reference					reference;
		typedef typename Iterator::iterator_category			iterator_category;
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
		typedef T const *										pointer;
		typedef T const &										reference;
		typedef std::random_access_iterator_tag					iterator_category;
	};


	/***********************************************************************************/
	/*                                 REVERSE ITERATOR  	                           */
	/***********************************************************************************/

	template <class Iterator>
	class reverse_iterator
	{
		/****************          TYPEDEF         ****************/
		public:
			typedef Iterator												iterator_type;
			typedef typename iterator_traits<Iterator>::iterator_category	iterator_category;
			typedef typename iterator_traits<Iterator>::value_type			value_type;
			typedef typename iterator_traits<Iterator>::difference_type		difference_type;
			typedef typename iterator_traits<Iterator>::pointer				pointer;
			typedef typename iterator_traits<Iterator>::reference			reference;

		protected:
			Iterator														_current;

		/****************           MAIN           ****************/
		public:
			reverse_iterator();
			explicit reverse_iterator (iterator_type it);
  			reverse_iterator (const reverse_iterator& rev_it);
			~reverse_iterator();
			reverse_iterator&												operator=( const reverse_iterator& other );
			iterator_type													base() const;
			reference														operator*() const;
			pointer															operator->() const;
			reference														operator[] (difference_type n) const;
			reverse_iterator&												operator++();
			reverse_iterator												operator++(int);
			reverse_iterator& 												operator+= (difference_type n);
			reverse_iterator												operator+ (difference_type n) const;
			reverse_iterator& 												operator--();
			reverse_iterator  												operator--(int);
			reverse_iterator&												operator-= (difference_type n);
			reverse_iterator 												operator- (difference_type n) const;
	};

	/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

	template <class Iterator1, class Iterator2>
	bool																	operator== (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
 	bool																	operator!= (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
	bool																	operator<  (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
	bool																	operator<= (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
	bool																	operator>  (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
	bool																	operator>= (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator>
	reverse_iterator<Iterator>												operator+ (typename reverse_iterator<Iterator>::difference_type n, const reverse_iterator<Iterator>& rev_it);

	template <class Iterator>
	typename reverse_iterator<Iterator>::difference_type					operator- (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs);
}

#endif
