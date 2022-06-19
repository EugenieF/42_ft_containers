#ifndef __ITERATOR_HPP__
# define __ITERATOR_HPP__

# include <string>
# include <cstddef>
# include "type_traits.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                    ITERATOR 	                                   */
	/***********************************************************************************/

	template <class Category, class T, class Distance = std::ptrdiff_t, class Pointer = T*, class Reference = T& >
	struct iterator
	{
			/********************      MEMBER TYPES     **********************/
		typedef T															value_type;
		typedef Distance													difference_type;
		typedef Pointer														pointer;
		typedef Reference													reference;
		typedef Category													iterator_category;
	};


	/***********************************************************************************/
	/*                                  ITERATOR TRAITS 	                           */
	/***********************************************************************************/

	template <class Iterator>
	struct iterator_traits
	{
			/********************      MEMBER TYPES     **********************/
		typedef	typename Iterator::difference_type							difference_type;
		typedef typename Iterator::value_type								value_type;
		typedef typename Iterator::pointer									pointer;
		typedef typename Iterator::reference								reference;
		typedef typename Iterator::iterator_category						iterator_category;
	};

	template <class T>
	struct iterator_traits <T*>
	{
			/********************      MEMBER TYPES     **********************/
		typedef	ptrdiff_t													difference_type;
		typedef T															value_type;
		typedef T*															pointer;
		typedef T&															reference;
		typedef std::random_access_iterator_tag								iterator_category;
	};

	template <class T>
	struct iterator_traits <const T*>
	{
			/********************      MEMBER TYPES     **********************/
		typedef	ptrdiff_t													difference_type;
		typedef T															value_type;
		typedef T const *													pointer;
		typedef T const &													reference;
		typedef std::random_access_iterator_tag								iterator_category;
	};


	/***********************************************************************************/
	/*                                 REVERSE ITERATOR  	                           */
	/***********************************************************************************/

	template <class Iterator>
	class reverse_iterator
	{
		public:
			/********************      MEMBER TYPES     **********************/
			typedef Iterator												iterator_type;
			typedef typename iterator_traits<Iterator>::iterator_category	iterator_category;
			typedef typename iterator_traits<Iterator>::value_type			value_type;
			typedef typename iterator_traits<Iterator>::difference_type		difference_type;
			typedef typename iterator_traits<Iterator>::pointer				pointer;
			typedef typename iterator_traits<Iterator>::reference			reference;

		protected:
			/********************     MEMBER VARIABLES     *******************/
			Iterator														_current;

		public:
			/*******************      MEMBER FUNCTIONS     *******************/
			reverse_iterator();
			explicit reverse_iterator (iterator_type it);
			template <class U>
  			reverse_iterator (const reverse_iterator<U>& rev_it);
			~reverse_iterator();
			template <class U>
			reverse_iterator&												operator=(const reverse_iterator<U>& other);
			iterator_type													base() const;
			reference														operator*() const;
			pointer															operator->() const;
			reference														operator[] (difference_type n) const;
			reverse_iterator&												operator++();
			reverse_iterator												operator++(int);
			reverse_iterator& 												operator+= (difference_type n);
			reverse_iterator												operator+ (difference_type n) const;
			difference_type													operator+ (const reverse_iterator<Iterator>& rev_it) const;
			reverse_iterator& 												operator--();
			reverse_iterator  												operator--(int);
			reverse_iterator&												operator-= (difference_type n);
			reverse_iterator 												operator- (difference_type n) const;
			difference_type													operator- (const reverse_iterator<Iterator>& rev_it) const;

			operator														reverse_iterator<iterator_type const>(void) const;
	};

	/********************       NON-MEMBER FUNCTION OVERLOADS       ********************/

	template <class Iterator1, class Iterator2>
	bool													operator== (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
 	bool													operator!= (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
	bool													operator<  (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
	bool													operator<= (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
	bool													operator>  (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator1, class Iterator2>
	bool													operator>= (const reverse_iterator<Iterator1>& lhs, const reverse_iterator<Iterator2>& rhs);

	template <class Iterator>
	reverse_iterator<Iterator>								operator+ (typename reverse_iterator<Iterator>::difference_type n, const reverse_iterator<Iterator>& rev_it);

	template <class Iterator>
	typename reverse_iterator<Iterator>::difference_type	operator+ (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs);

	template <class Iterator>
	reverse_iterator<Iterator>								operator- (typename reverse_iterator<Iterator>::difference_type n, const reverse_iterator<Iterator>& rev_it);

	template <class Iterator>
	typename reverse_iterator<Iterator>::difference_type	operator- (const reverse_iterator<Iterator>& lhs, const reverse_iterator<Iterator>& rhs);
}

# include "iterator.tpp"

#endif
