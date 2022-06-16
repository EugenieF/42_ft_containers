/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jraffin <jraffin@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/20 17:33:29 by jraffin           #+#    #+#             */
/*   Updated: 2022/05/11 00:19:54 by jraffin          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef VECTOR_HPP
#define VECTOR_HPP

#include <memory>
#include <iterator>
#include <sstream>
#include <stdexcept>

#include "reverse_iterator.hpp"
#include "iterator_traits.hpp"
#include "enable_if.hpp"
#include "is_integral.hpp"
#include "equal.hpp"
#include "lexicographical_compare.hpp"

namespace ft
{
	//	https://www.cplusplus.com/reference/vector/vector/

	template < class T, class Alloc = std::allocator<T> >
	class vector
	{
		// http://www.cplusplus.com/reference/iterator/RandomAccessIterator/

		template < typename valT >
		class VectIter : public std::iterator<std::random_access_iterator_tag, valT>
		{
			public:
				typedef typename VectIter::difference_type			difference_type;
				typedef typename VectIter::value_type				value_type;
				typedef typename VectIter::pointer					pointer;
				typedef typename VectIter::reference				reference;
				typedef typename VectIter::iterator_category		iterator_category;

				VectIter() : _ptr() {}
				explicit VectIter(pointer ptr) : _ptr(ptr) {}
				VectIter(const VectIter& instance) : _ptr(instance._ptr) {}
				~VectIter() {}
				VectIter&			operator=(const VectIter& rhs) { _ptr = rhs._ptr; return *this; }

				bool				operator==(const VectIter<const valT>& rhs) const { return _ptr==&(*rhs); }
				bool				operator!=(const VectIter<const valT>& rhs) const { return _ptr!=&(*rhs); }

				reference			operator*() const {
					return *_ptr;
				}
				pointer				operator->() const { return _ptr; }

				VectIter&			operator++() { ++_ptr; return *this; }
				VectIter			operator++(int) { VectIter tmp(*this); ++_ptr; return tmp; }
				VectIter&			operator--() { --_ptr;return *this;}
				VectIter			operator--(int) { VectIter tmp(*this); --_ptr; return tmp; }

				VectIter			operator+(difference_type n) const { return VectIter(_ptr+n); }
				friend VectIter		operator+(difference_type n, VectIter& rhs) { return VectIter(rhs._ptr+n); }
				VectIter			operator-(difference_type n) const { return VectIter(_ptr-n); }
				difference_type		operator-(const VectIter<const valT>& rhs) const { return _ptr-&(*rhs); }

				bool				operator<(const VectIter<const valT>& rhs) const { return _ptr<&(*rhs); }
				bool				operator>(const VectIter<const valT>& rhs) const { return _ptr>&(*rhs); }
				bool				operator<=(const VectIter<const valT>& rhs) const { return _ptr<=&(*rhs); }
				bool				operator>=(const VectIter<const valT>& rhs) const { return _ptr>=&(*rhs); }

				VectIter&			operator+=(difference_type n) { _ptr+=n; return *this; }
				VectIter&			operator-=(difference_type n) { _ptr-=n; return *this; }

				reference			operator[](difference_type n) const {return _ptr[n];}

				operator			VectIter<const valT>() const { return VectIter<const valT>(_ptr); }

			private:
				pointer				_ptr;
		};

		public:
			typedef T														value_type;
			typedef Alloc													allocator_type;
			typedef typename Alloc::reference								reference;
			typedef	typename Alloc::const_reference							const_reference;
			typedef	typename Alloc::pointer									pointer;
			typedef	typename Alloc::const_pointer							const_pointer;
			typedef VectIter<T>												iterator;
			typedef VectIter<const T>										const_iterator;
			typedef	typename ft::reverse_iterator<iterator>					reverse_iterator;
			typedef	typename ft::reverse_iterator<const_iterator>			const_reverse_iterator;
			typedef typename ft::iterator_traits<iterator>::difference_type	difference_type;
			typedef size_t													size_type;

			explicit vector(const allocator_type& alloc = allocator_type())
				: _alloc(alloc)
				, _capacity(0)
				, _data()
				, _size(0)
			{}
			explicit vector(size_type n, const value_type& val = value_type(), const allocator_type& alloc = allocator_type())
				: _alloc(alloc)
				, _capacity(n)
				, _data(_alloc.allocate(_capacity))
				, _size(_capacity)
			{
				for (size_type i = 0; i < _size; ++i)
					_alloc.construct(_data + i, val);
			}
			template <class InputIterator>
    		vector(InputIterator first, InputIterator last,
			const typename ft::enable_if<!ft::is_integral<InputIterator>::value, allocator_type>::type& alloc = allocator_type())
				: _alloc(alloc)
				, _capacity(std::distance(first, last))
				, _data(_alloc.allocate(_capacity))
				, _size(_capacity)
			{
				for (size_type i = 0; i < _size; ++i)
				{
					_alloc.construct(_data + i, value_type(*first));
					++first;
				}
			}
			vector(const vector& instance)
				: _alloc(instance._alloc)
				, _capacity(instance._size)
				, _data(_alloc.allocate(_capacity))
				, _size(instance._size)
			{
				for (size_type i = 0; i < _size; ++i)
					_alloc.construct(_data + i, instance._data[i]);
			}
			~vector()
			{
				clear();
				_alloc.deallocate(_data, _capacity);
			}

			vector&					operator= (const vector& rhs)
			{
				if (this != &rhs)
					assign(rhs.begin(), rhs.end());
				return *this;
			}

			//	Iterators:
			iterator				begin() { return iterator(_data); }
			const_iterator			begin() const { return const_iterator(_data); }
			iterator				end() { return iterator(_data + _size); }
			const_iterator			end() const { return const_iterator(_data + _size); }
			reverse_iterator		rbegin() { return reverse_iterator(end()); }
			const_reverse_iterator	rbegin() const { return const_reverse_iterator(end()); }
			reverse_iterator		rend() { return reverse_iterator(begin()); }
			const_reverse_iterator	rend() const { return const_reverse_iterator(begin()); }

			//	Capacity:
			size_type				size() const { return _size; }
			size_type				max_size() const { return _alloc.max_size(); }
			void					resize(size_type n, value_type val = value_type())
			{
				if (n > _capacity)
					reserve(std::max(_size<<1, n));
				size_type	i = n;
				while (i < _size)
					_alloc.destroy(_data + (i++));
				while (i > _size)
					_alloc.construct(_data + (--i), val);
				_size = n;
			}
			size_type				capacity() const { return _capacity; }
			bool					empty() const { return _size==0; }
			void					reserve(size_type n)
			{
				if (n <= _capacity)
					return ;

				if (n > max_size())
					throw std::length_error("vector::reserve");

				T*	newdata = _alloc.allocate(n);

				for (size_type i = 0; i < _size; ++i)
				{
					_alloc.construct(newdata + i, _data[i]);
					_alloc.destroy(_data + i);
				}

				_alloc.deallocate(_data, _capacity);
				_data = newdata;
				_capacity = n;
			}

			//	Element access:
			reference				operator[](size_type n) { return _data[n]; }
			const_reference			operator[](size_type n) const { return _data[n]; }
			reference				at(size_type n)
			{
				std::stringstream	sstm;
				sstm << "ft::vector::at\tn (which is " << n << ") >= this->size() (which is " << _size << ")";
				if (n >= _size) throw std::out_of_range(sstm.str());
				return (*this)[n];
        	}
			const_reference			at(size_type n) const
			{
				std::stringstream	sstm;
				sstm << "ft::vector::at\tn (which is " << n << ") >= this->size() (which is " << _size << ")";
				if (n >= _size) throw std::out_of_range(sstm.str());
				return (*this)[n];
        	}
			reference				front() { return *_data; }
			const_reference			front() const { return *_data; }
			reference				back() { return *(_data + _size - 1); }
			const_reference			back() const { return *(_data + _size - 1); }

			//	Modifiers:
			template <class InputIterator>
			typename ft::enable_if<!ft::is_integral<InputIterator>::value,
			void>::type				assign(InputIterator first, InputIterator last)
			{
				size_type n = std::distance(first, last);
				reserve(n);

				size_type assignable = std::min(_size, n);

				size_type i = 0;
				while (i < assignable)
				{
					_data[i++] = *first;
					++first;
				}

				while (i < n)
				{
					_alloc.construct(_data + (i++), *first);
					++first;
				}

				while (i < _size)
					_alloc.destroy(_data + (i++));

				_size = n;
			}
			void					assign(size_type n, const value_type& val)
			{
				reserve(n);

				size_type assignable = std::min(_size, n);

				size_type i = 0;
				while (i < assignable)
					_data[i++] = val;

				while (i < n)
					_alloc.construct(_data + (i++), val);

				while (i < _size)
					_alloc.destroy(_data + (i++));

				_size = n;
			}
			void					push_back(const value_type& val) { insert(this->end(), val); }
			void					pop_back() { _alloc.destroy(_data + (--_size)); }
			iterator				insert(iterator position, const value_type& val)
			{
				size_type	pos = position - begin();
				insert(position, 1, val);
				return iterator(_data + pos);
			}
			void					insert(iterator position, size_type n, const value_type& val)
			{
				size_type	pos = position - begin();
				size_type	newcapacity = (_size + n > _capacity) ? _size + std::max(_size, n) : 0;
				pointer		dest = _data;

				if (newcapacity)
				{
					dest = _alloc.allocate(_size + std::max(_size, n));
					_move_objs(dest, _data, pos);
				}
				_move_objs(dest + pos + n, _data + pos, _size - pos);

				for (size_type i = 0; i < n; ++i)
					_alloc.construct(dest + pos + i, val);

				_size += n;

				if (newcapacity)
				{
					_alloc.deallocate(_data, _capacity);
					_capacity = newcapacity;
					_data = dest;
				}
			}
			template <class InputIterator>
			typename ft::enable_if<!ft::is_integral<InputIterator>::value,
			void>::type				insert(iterator position, InputIterator first, InputIterator last)
			{
				size_type	n = std::distance(first, last);
				size_type	pos = position - begin();
				size_type	newcapacity = (_size + n > _capacity) ? _size + std::max(_size, n) : 0;
				pointer		dest = _data;

				if (newcapacity)
				{
					dest = _alloc.allocate(_size + std::max(_size, n));
					_move_objs(dest, _data, pos);
				}
				_move_objs(dest + pos + n, _data + pos, _size - pos);

				for (size_type i = 0; i < n; ++i)
				{
					_alloc.construct(dest + pos + i, *first);
					++first;
				}

				_size += n;

				if (newcapacity)
				{
					_alloc.deallocate(_data, _capacity);
					_capacity = newcapacity;
					_data = dest;
				}
			}
			iterator				erase(iterator position) { return erase(position, position + 1); }
			iterator				erase(iterator first, iterator last)
			{
				size_type	n = std::distance(first, last);
				size_type	start = first - begin();
				size_type	stop = last - begin();

				for(size_type i = start; i < stop; ++i)
					_alloc.destroy(_data + i);

				_move_objs(_data + start, _data + stop, _size - stop);

				_size -= n;
				return iterator(first);
			}
  			void					swap(vector& x)
			{
				std::swap(_alloc, x._alloc);
				std::swap(_capacity, x._capacity);
				std::swap(_data, x._data);
				std::swap(_size, x._size);
			}
			void					clear()
			{
				for (size_type i = 0; i < _size; ++i)
					_alloc.destroy(_data + i);
				_size = 0;
			}

			//	Allocator:
			allocator_type			get_allocator() const { return _alloc; }

			//	Relational operators:
			friend bool		operator==(const vector& lhs, const vector& rhs) { return lhs._size == rhs._size && ft::equal(lhs.begin(), lhs.end(), rhs.begin()); }
			friend bool		operator!=(const vector& lhs, const vector& rhs) { return !(lhs == rhs); }
			friend bool		operator<(const vector& lhs, const vector& rhs) { return ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()); }
			friend bool		operator>(const vector& lhs, const vector& rhs) { return rhs < lhs; }
			friend bool		operator<=(const vector& lhs, const vector& rhs) { return !(rhs < lhs); }
			friend bool		operator>=(const vector& lhs, const vector& rhs) { return !(lhs < rhs); }

		private:
			allocator_type		_alloc;
			size_type			_capacity;
			T*					_data;
			size_type			_size;

			void				_move_objs(pointer dst, pointer src, size_type n)
			{
				if (dst < src)
				{
					for (pointer stop = dst + n; dst < stop; dst++, src++)
					{
						_alloc.construct(dst, *src);
						_alloc.destroy(src);
					}
				}
				else if (src < dst)
				{
					pointer stop = dst;
					src += n;
					dst += n;
					while (dst > stop)
					{
						_alloc.construct(--dst, *--src);
						_alloc.destroy(src);
					}
				}
			}
	};
}

//	Overloading std::swap with optimized behavior

namespace std {
	template <class T, class Alloc>
	void	swap(ft::vector<T,Alloc>& x, ft::vector<T,Alloc>& y) { x.swap(y); }
}

#endif
