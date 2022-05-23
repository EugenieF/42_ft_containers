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
			typedef	Allocator::reference					reference;
			typedef Allocator::const_reference				const_reference;
			typedef	Allocator::pointer						pointer;
			typedef	Allocator::const_pointer				const_pointer;
			typedef ft::vector_iterator<T>					iterator;
			typedef ft::vector_iterator<T const>			const_iterator;
		//	typedef T *										iterator;
		//	typedef T const *								const_iterator;
			typedef ft::reverse_iterator<iterator>			reverse_iterator;
			typedef ft::reverse_iterator<const_iterator>	const_reverse_iterator;

		private:
			allocator_type									_alloc;
			pointer											_data;
			size_type										_size;
			size_type										_capacity;

		public:
			/****************           MAIN           ****************/
			explicit 				vector (const allocator_type& alloc = allocator_type());
			explicit 				vector (size_type n, const value_type& value = value_type(), const allocator_type& alloc = allocator_type());
			template <class InputIterator>
			vector (InputIterator first, InputIterator last, const allocator_type& alloc = allocator_type());
			vector (const vector& x);
			~vector();
			vector& operator=(const vector& x);
			void					assign(size_type count, const T& value);
			template <class InputIt>
			void					assign(InputIt first, InputIt last);
			allocator_type			get_allocator() const;

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

		private:
			/****************    PRIVATE FUNCTIONS    ****************/
			size_t					_manage_capacity(size_type insert_size)
			void					_destroy_range(iterator first, iterator last)
			void					_relocate_range(iterator position, iterator relocation)
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
