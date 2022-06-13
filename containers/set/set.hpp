#ifndef __SET_HPP__
# define __SET_HPP__

// #include "main.hpp"

# include <memory>
# include <iostream>
# include <sstream>
# include <string>
# include <limits>
# include <stddef.h>
# include "../utils/iterator.hpp"
# include "../utils/algorithm.hpp"
# include "../utils/utility.hpp"
# include "../rbtree/red_black_tree.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                      SET  	                                   */
	/***********************************************************************************/

	template < class Key, class Compare = std::less<Key>, class Allocator = std::allocator<Key> >
	class set
	{
		public:
			/********************      MEMBER TYPES     **************************/
			typedef Key										key_type;
			typedef Key										value_type;
			typedef Compare									key_compare;
			typedef Compare									value_compare;
			typedef Allocator								allocator_type;
			typedef	size_t									size_type;
			typedef	ptrdiff_t								difference_type;

		private:
			typedef red_black_tree<value_type, allocator_type, value_compare>	tree_type;

		public:
			typedef	typename Allocator::reference				reference;
			typedef typename Allocator::const_reference			const_reference;
			typedef	typename Allocator::pointer					pointer;
			typedef	typename Allocator::const_pointer			const_pointer;

			// typedef typename tree_type::iterator				iterator;
			typedef typename tree_type::const_iterator			iterator;
			typedef typename tree_type::const_iterator			const_iterator;
			typedef ft::reverse_iterator<iterator>				reverse_iterator;
			typedef ft::reverse_iterator<const_iterator>		const_reverse_iterator;

		private:
			tree_type										_rbtree;
			key_compare										_key_comp;
			allocator_type									_alloc;

		public:
			/*******************      MEMBER FUNCTIONS     *******************/
							/*-----------   MAIN   -----------*/
			explicit set (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
			template <class InputIterator>
			set (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
			set (const set& x);
			~set();
			set& operator= (const set& x);
			allocator_type get_allocator() const;

							/*---------  ITERATORS  ----------*/
			iterator 										begin();
			const_iterator									begin() const;
			iterator										end();
			const_iterator									end() const;
			reverse_iterator								rbegin();
			const_reverse_iterator							rbegin() const;
			reverse_iterator								rend();
			const_reverse_iterator							rend() const;

							/*----------  CAPACITY  ----------*/
			bool											empty() const;
			size_type										size() const;
			size_type										max_size() const;

							/*----------  MODIFIERS  ---------*/
			ft::pair<iterator,bool>							insert (const value_type& val);
			iterator										insert (iterator position, const value_type& val);
			template <class InputIterator>
			void											insert (InputIterator first, InputIterator last);
			void											erase (iterator position);
			size_type										erase (const value_type& val);
			void											erase (iterator first, iterator last);
			void											swap (set& other);
			void											clear();

							/*---------  OBSERVERS  ----------*/
			key_compare										key_comp() const;
			value_compare									value_comp() const;

							/*---------  OPERATIONS  ---------*/
			iterator										find (const key_type& key);
			const_iterator									find (const key_type& key) const;
			size_type										count (const key_type& key) const;
			iterator										lower_bound (const key_type& key);
			const_iterator									lower_bound (const key_type& key) const;
			iterator										upper_bound (const key_type& key);
			const_iterator									upper_bound (const key_type& key) const;
			ft::pair<iterator,iterator>						equal_range (const key_type& key);
			ft::pair<const_iterator,const_iterator>			equal_range (const key_type& key) const;

			/*********************         TO DEBUG         *********************/
		public:
			void											print(void);
	};

	/**************    NON-MEMBER FUNCTION OVERLOADS     **************/
	template< class Key, class Compare, class Allocator >
	bool operator==( const set<Key,Compare,Allocator>& lhs, const set<Key,Compare,Allocator>& rhs );

	template< class Key, class Compare, class Allocator >
	bool operator!=( const set<Key,Compare,Allocator>& lhs, const set<Key,Compare,Allocator>& rhs );

	template< class Key, class Compare, class Allocator >
	bool operator<( const set<Key,Compare,Allocator>& lhs, const set<Key,Compare,Allocator>& rhs );

	template< class Key, class Compare, class Allocator >
	bool operator<=( const set<Key,Compare,Allocator>& lhs, const set<Key,Compare,Allocator>& rhs );

	template< class Key, class Compare, class Allocator >
	bool operator>( const set<Key,Compare,Allocator>& lhs, const set<Key,Compare,Allocator>& rhs );

	template< class Key, class Compare, class Allocator >
	bool operator>=( const set<Key,Compare,Allocator>& lhs, const set<Key,Compare,Allocator>& rhs );

	template< class Key, class Compare, class Allocator >
	void swap( set<Key,Compare,Allocator>& lhs, set<Key,Compare,Allocator>& rhs );

}

# include "set.tpp"

#endif
