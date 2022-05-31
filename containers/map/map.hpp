#ifndef __MAP_HPP__
# define __MAP_HPP__

#include "main.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                      MAP 	                                   */
	/***********************************************************************************/

	template < class Key, class T, class Compare = std::less<Key>, class Allocator = std::allocator<ft::pair<const Key,T> > >
	class map
	{
		public:
			/********************      MEMBER TYPES     **************************/
			typedef Key										key_type;
			typedef T										mapped_type;
			typedef ft::pair<const Key, T>					value_type;
			typedef Compare									key_compare;
			typedef Allocator								allocator_type;
			typedef	size_t									size_type;
			typedef	ptrdiff_t								difference_type;

			/*********************      MEMBER CLASS     *********************/
			class	value_compare: public std::binary_function<value_type, value_type, bool>
			{
				private:
					friend class map;				// to investigate...

				protected:
					key_compare		comp;
					value_compare(key_compare c);

				public:
					bool operator()(const value_type& lhs, const value_type& rhs) const;
			};

		private:
			typedef red_black_tree<value_type, allocator_type, value_compare>	tree_type;
	
		public:
			typedef	typename Allocator::reference			reference;
			typedef typename Allocator::const_reference		const_reference;
			typedef	typename Allocator::pointer				pointer;
			typedef	typename Allocator::const_pointer		const_pointer;
			typedef typename tree_type::iterator			iterator;
			typedef typename tree_type::const_iterator		const_iterator;
			typedef ft::reverse_iterator<iterator>			reverse_iterator;
			typedef ft::reverse_iterator<const_iterator>	const_reverse_iterator;

		private:
			tree_type										_rbtree;
			key_compare										_key_comp;
			allocator_type									_alloc;

		public:
			/*******************      MEMBER FUNCTIONS     *******************/

							/*-----------   MAIN   -----------*/

			explicit map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
			template <class InputIterator>
  			map (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
			map (const map& other);
			~map();
			map& operator= (const map& other);
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

							/*-------  ELEMENT ACCESS  -------*/
			mapped_type&									operator[] (const key_type& key);

							/*----------  MODIFIERS  ---------*/
			pair<iterator,bool>								insert (const value_type& val);
			iterator										insert (iterator position, const value_type& val);
			template <class InputIterator>
			void											insert (InputIterator first, InputIterator last);
			void											erase (iterator position);
			size_type										erase (const key_type& key);
			void											erase (iterator first, iterator last);
			void											swap (map& other);
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
			ft::pair<iterator,iterator>             		equal_range (const key_type& key);
			ft::pair<const_iterator,const_iterator>			equal_range (const key_type& key) const;
			
		private:
			/*******************       PRIVATE FUNCTIONS      *******************/
			ft::pair<const key_type, mapped_type>			_get_value_type(const key_type& key) const;

	};

	/********************         NON-MEMBER FUNCTION OVERLOADS          ********************/
	template< class Key, class T, class Compare, class Allocator >
	bool operator==( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs );

	template< class Key, class T, class Compare, class Allocator >
	bool operator!=( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs );

	template< class Key, class T, class Compare, class Allocator >
	bool operator<( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs );

	template< class Key, class T, class Compare, class Allocator >
	bool operator<=( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs );

	template< class Key, class T, class Compare, class Allocator >
	bool operator>( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs );

	template< class Key, class T, class Compare, class Allocator >
	bool operator>=( const map<Key,T,Compare,Allocator>& lhs, const map<Key,T,Compare,Allocator>& rhs );

	template< class Key, class T, class Compare, class Allocator >
	void swap( map<Key,T,Compare,Allocator>& lhs, map<Key,T,Compare,Allocator>& rhs );

}

# include "map.tpp"

#endif
