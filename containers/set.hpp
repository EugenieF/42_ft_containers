#ifndef __SET_HPP__
# define __SET_HPP__

#include "main.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                      SET  	                                   */
	/***********************************************************************************/

	template < class T, class Compare = std::less<Key>, class Allocator = std::allocator<T> >
	class set
	{
		private:

		public:
			/****************          TYPEDEF         ****************/
			typedef T						key_type;
			typedef Compare					key_compare;
			typedef Allocator				allocator_type;

			/****************           MAIN           ****************/
			explicit set (const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
			template <class InputIterator>
			set (InputIterator first, InputIterator last, const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
			set (const set& x);
			~set();
			set& operator= (const set& x);

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

			/****************        MODIFIERS         ****************/
			pair<iterator,bool>					insert (const value_type& val);
			iterator							insert (iterator position, const value_type& val);
			template <class InputIterator>
			void								insert (InputIterator first, InputIterator last);
			void								erase (iterator position);
			size_type							erase (const value_type& val);
			void								erase (iterator first, iterator last);
			void								swap (set& x);
			void								clear();

			/****************        OBSERVERS         ****************/
			key_compare							key_comp() const;
			value_compare						value_comp() const;

			/****************        OPERATIONS        ****************/
			iterator							find (const value_type& val) const;
			size_type							count (const value_type& val) const;
			iterator							lower_bound (const value_type& val) const;
			iterator							upper_bound (const value_type& val) const;
			pair<iterator,iterator>				equal_range (const value_type& val) const;
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

#endif
