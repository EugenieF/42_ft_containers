#ifndef __MAP_HPP__
# define __MAP_HPP__

#include "main.hpp"

namespace ft
{
	template < class Key, class T, class Compare = std::less<Key>, class Allocator = std::allocator<pair<const Key,T> > >
	class map
	{
		private:

		public:
			/****************          TYPEDEF         ****************/
			typedef Key						key_type;
			typedef T						mapped_type;
			typedef std::pair<const Key, T>	value_type;
			typedef Compare					key_compare;
			typedef Allocator				allocator_type;

			/****************           MAIN           ****************/
			explicit map (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
			template <class InputIterator>
  			map (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
			map (const map& x);
			~map();
			map& operator= (const map& x);

			/****************        ITERATORS         ****************/
			iterator 							begin();
			const_iterator						begin() const;
			iterator							end();
			const_iterator						end() const;
			reverse_iterator					rbegin();
			const_reverse_iterator				rbegin() const;
			reverse_iterator					rend();
			const_reverse_iterator				rend() const;

			/****************         CAPACITY         ****************/
			bool								empty() const;
			size_type							size() const;
			size_type							max_size() const;


			/****************      ELEMENT ACCESS       ***************/
			mapped_type&						operator[] (const key_type& k);

			/****************        MODIFIERS         ****************/
			pair<iterator,bool>					insert (const value_type& val);
			iterator							insert (iterator position, const value_type& val);
			template <class InputIterator>
			void								insert (InputIterator first, InputIterator last);
			void								erase (iterator position);
			size_type							erase (const key_type& k);
			void								erase (iterator first, iterator last);
			void								swap (map& x);
			void								clear();

			/****************        OBSERVERS         ****************/
			key_compare							key_comp() const;
			value_compare						value_comp() const;

			/****************        OPERATIONS        ****************/
			iterator							find (const key_type& k);
			const_iterator						find (const key_type& k) const;
			size_type							count (const key_type& k) const;
			iterator							lower_bound (const key_type& k);
			const_iterator						lower_bound (const key_type& k) const;
			iterator							upper_bound (const key_type& k);
			const_iterator						upper_bound (const key_type& k) const;
			pair<const_iterator,const_iterator>	equal_range (const key_type& k) const;
			pair<iterator,iterator>             equal_range (const key_type& k);
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
