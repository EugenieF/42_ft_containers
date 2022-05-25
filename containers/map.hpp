#ifndef __MAP_HPP__
# define __MAP_HPP__

#include "main.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                      MAP 	                                   */
	/***********************************************************************************/

	template < class Key, class T, class Compare = std::less<Key>, class Allocator = std::allocator<pair<const Key,T> > >
	class map
	{
		private:
			typedef red_black_tree<T, Compare, Allocator>	tree_type;

		public:
			/****************          TYPEDEF         ****************/
			typedef Key										key_type;
			typedef T										mapped_type;
			typedef std::pair<const Key, T>					value_type;
			typedef Compare									key_compare;
			typedef Allocator								allocator_type;
			typedef	size_t									size_type;
			typedef	ptrdiff_t								difference_type;
			typedef	typename Allocator::reference			reference;
			typedef typename Allocator::const_reference		const_reference;
			typedef	typename Allocator::pointer				pointer;
			typedef	typename Allocator::const_pointer		const_pointer;
			typedef typename ft::enable_if::iterator		iterator;
			typedef typename ft::enable_if::const_iterator	const_iterator;
			typedef ft::reverse_iterator<iterator>			reverse_iterator;
			typedef ft::reverse_iterator<const_iterator>	const_reverse_iterator;

		private:
			allocator_type									_alloc;
			key_compare										_key_comp;
			tree_type										_rbtree;

		public:
			class	value_compare: public std::binary_function<value_type, value_type, bool>
			{
				protected:
					value_compare(key_compare comp);
					key_compare		_comp;

				public:
					bool operator()(const value_type& lhs, const value_type& rhs) const
					{
						comp(lhs.first, rhs.first);
					};
			};

			/****************           MAIN           ****************/
			explicit map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
			template <class InputIterator>
  			map (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
			map (const map& x);
			~map();
			map& operator= (const map& x);

			/****************        ITERATORS         ****************/
			iterator 										begin();
			const_iterator									begin() const;
			iterator										end();
			const_iterator									end() const;
			reverse_iterator								rbegin();
			const_reverse_iterator							rbegin() const;
			reverse_iterator								rend();
			const_reverse_iterator							rend() const;

			/****************         CAPACITY         ****************/
			bool											empty() const;
			size_type										size() const;
			size_type										max_size() const;


			/****************      ELEMENT ACCESS       ***************/
			mapped_type&									operator[] (const key_type& k);

			/****************        MODIFIERS         ****************/
			pair<iterator,bool>								insert (const value_type& val);
			iterator										insert (iterator position, const value_type& val);
			template <class InputIterator>
			void											insert (InputIterator first, InputIterator last);
			void											erase (iterator position);
			size_type										erase (const key_type& k);
			void											erase (iterator first, iterator last);
			void											swap (map& x);
			void											clear();

			/****************        OBSERVERS         ****************/
			key_compare										key_comp() const;
			value_compare									value_comp() const;

			/****************        OPERATIONS        ****************/
			iterator										find (const key_type& k);
			const_iterator									find (const key_type& k) const;
			size_type										count (const key_type& k) const;
			iterator										lower_bound (const key_type& k);
			const_iterator									lower_bound (const key_type& k) const;
			iterator										upper_bound (const key_type& k);
			const_iterator									upper_bound (const key_type& k) const;
			pair<const_iterator,const_iterator>				equal_range (const key_type& k) const;
			pair<iterator,iterator>             			equal_range (const key_type& k);
	};

	/**************    NON-MEMBER FUNCTION OVERLOADS     **************/
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

#endif
