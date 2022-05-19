#ifndef __VECTOR_HPP__
# define __VECTOR_HPP__

#include "main.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                      VECTOR                                     */
	/***********************************************************************************/

	template < class T, class Allocator = std::allocator<T> >
	class	vector
	{
		public:
			/****************          TYPEDEF         ****************/
			typedef T										value_type;
			typedef Allocator								allocator_type;
			typedef	size_t									size_type;
			typedef	ptrdiff_t								difference_type;
			typedef	value_type&								reference;
			typedef const value_type&						const_reference;
			typedef	value_type*								pointer;
			typedef	const value_type*						const_pointer;
			typedef vector_iterator<T>						iterator;
			typedef vector_iterator<T const>				const_iterator;
			typedef reverse_iterator<iterator>				reverse_iterator;
			typedef reverse_iterator<const_iterator>		const_reverse_iterator;

		private:
			iterator										_begin;
			iterator										_end;
			allocator_type									_alloc;

		public:
			/****************           MAIN           ****************/
			explicit 				vector (const allocator_type& alloc = allocator_type());
			explicit 				vector (size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type());
			template <class InputIterator>
			vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type());
			vector (const vector& x);
			~vector();
			vector& operator=(const vector& x);

			/****************        ITERATORS         ****************/
			iterator				begin();
			const_iterator			begin() const;
			iterator				end();
			const_iterator			end() const;
			reverse_iterator		rbegin();
			const_reverse_iterator	rbegin() const;
			reverse_iterator		rend();
			const_reverse_iterator	rend() const;

			/****************         CAPACITY         ****************/
			size_type				size() const;
			size_type				max_size() const;
			void					resize (size_type n, value_type val = value_type());
			size_type	 			capacity() const;
			bool 					empty() const;
			void					reserve (size_type n);

			/****************      ELEMENT ACCESS       ***************/
			reference				operator[](size_type pos);
			const_reference			operator[] (size_type n) const;
			reference				at(size_type pos);
			const_reference			at(size_type pos) const;
			reference				front();
			const_reference			front() const;
			reference				back();
			const_reference			back() const;
			
			/****************        MODIFIERS         ****************/
			void					assign(size_type cout, const T& value);
			void					push_back (const value_type& val);
			void					pop_back();
			iterator				insert (iterator position, const value_type& val);	
    		void					insert (iterator position, size_type n, const value_type& val);	
			template <class InputIterator>
    		void					insert (iterator position, InputIterator first, InputIterator last);
			iterator				erase (iterator position);
			iterator				erase (iterator first, iterator last);
			void					swap (vector& x);
			void					clear();
	};

	/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

	template <typename T, typename Allocator>
	bool	operator== (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs);

	template <typename T, typename Allocator>
	bool	operator!= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs);

	template <typename T, typename Allocator>
	bool	operator<  (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs);

	template <typename T, typename Allocator>
	bool	operator<= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs);

	template <typename T, typename Allocator>
	bool	operator>  (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs);

	template <typename T, typename Allocator>
	bool	operator>= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs);

	template <typename T, typename Allocator>
	void	swap (vector<T,Allocator>& x, vector<T,Allocator>& y);

}

#include "vector.tpp"

#endif
