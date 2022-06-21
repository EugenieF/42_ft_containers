/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   vector.tpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:09:48 by efrancon          #+#    #+#             */
/*   Updated: 2022/06/21 17:24:09 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "vector.hpp"

/****************           MAIN           ****************/

template <class T, class Allocator>
ft::vector<T, Allocator>::vector (const Allocator& alloc):
	_data(NULL),
	_size(0),
	_capacity(0),
	_alloc(alloc)
{}

template <class T, class Allocator>
ft::vector<T, Allocator>::vector (size_t n, const T& value, const Allocator& alloc):
	_data(NULL),
	_size(0),
	_capacity(0),
	_alloc(alloc)
{
	this->assign(n, value);
}

template <class T, class Allocator>
template <class InputIterator>
ft::vector<T, Allocator>::vector (InputIterator first, InputIterator last, const Allocator& alloc, typename ft::enable_if<!(ft::is_integral<InputIterator>::value)>::type*):
	_data(NULL),
	_size(0),
	_capacity(0),
	_alloc(alloc)
{
	this->assign(first, last);
}

template <class T, class Allocator>
ft::vector<T, Allocator>::vector (const ft::vector<T, Allocator>& x):
	_data(NULL),
	_size(0),
	_capacity(0),
	_alloc(x._alloc)
{
	*this = x;
}

template <class T, class Allocator>
ft::vector<T, Allocator>::~vector()
{
	if (!this->_data)
		return ;
	this->clear();
	this->_alloc.deallocate(this->_data, this->_capacity);
}

template <class T, class Allocator>
ft::vector<T, Allocator>	&ft::vector<T, Allocator>::operator= (const ft::vector<T, Allocator>& x)
{
	if (this != &x)
		this->assign(x.begin(), x.end());
	return (*this);
}

template <class T, class Allocator>
void	ft::vector<T, Allocator>::assign(size_t count, const T& value)
{
	this->clear();
	this->insert(this->begin(), count, value);
}

template <class T, class Allocator>
template <class InputIterator>
typename ft::enable_if<!(ft::is_integral<InputIterator>::value), void>::type
		ft::vector<T, Allocator>::assign(InputIterator first, InputIterator last)
{
	this->clear();
	this->insert(this->begin(), first, last);
}

template <class T, class Allocator>
Allocator	ft::vector<T, Allocator>::get_allocator() const
{
	return (this->_alloc);
}

/****************        ITERATORS         ****************/

template <class T, class Allocator>
typename ft::vector<T, Allocator>::iterator	ft::vector<T, Allocator>::begin()
{
	return (iterator(this->_data));
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::const_iterator	ft::vector<T, Allocator>::begin() const
{
	return (const_iterator(this->_data));
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::iterator	ft::vector<T, Allocator>::end()
{
	return (iterator(&this->_data[this->_size]));
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::const_iterator	ft::vector<T, Allocator>::end() const
{
	return (const_iterator(&this->_data[this->_size]));
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::reverse_iterator	ft::vector<T, Allocator>::rbegin()
{
	return (reverse_iterator(this->end()));
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::const_reverse_iterator	ft::vector<T, Allocator>::rbegin() const
{
	return (const_reverse_iterator(this->end()));
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::reverse_iterator	ft::vector<T, Allocator>::rend()
{
	return (reverse_iterator(this->begin()));
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::const_reverse_iterator	ft::vector<T, Allocator>::rend() const
{
	return (const_reverse_iterator(this->begin()));
}


/****************         CAPACITY         ****************/

template <class T, class Allocator>
typename ft::vector<T, Allocator>::size_type	ft::vector<T, Allocator>::size() const
{
	return (this->_size);
}

template <class T, class Allocator>
typename	ft::vector<T, Allocator>::size_type	ft::vector<T, Allocator>::max_size() const
{
	return (this->_alloc.max_size());
}

/* Resizes the container to contain count elements */
template <class T, class Allocator>
void	ft::vector<T, Allocator>::resize (typename ft::vector<T, Allocator>::size_type count, T value)
{
	typename ft::vector<T, Allocator>::difference_type	size_diff;

	size_diff = count - this->size();
	if (!size_diff)
		return ;
	if (size_diff < 0)
		this->erase(this->begin() + count, this->end());
	else
		this->insert(this->end(), size_diff, value);
}

template <class T, class Allocator>
typename	ft::vector<T, Allocator>::size_type	ft::vector<T, Allocator>::capacity() const
{
	return (this->_capacity);
}

template <class T, class Allocator>
bool 	ft::vector<T, Allocator>::empty() const
{
	if (!this->_size)
		return (true);
	return (false);
}

/* Request a change in capacity : must be at least enough to contain n elements*/
template <class T, class Allocator>
void	ft::vector<T, Allocator>::reserve (typename ft::vector<T, Allocator>::size_type new_cap)
{
	typename ft::vector<T, Allocator>::pointer	new_data = NULL;

	if (new_cap > this->max_size())
		throw(std::length_error("vector::reserve"));
	if (new_cap <= this->_capacity)
		return ;
	new_data = this->_alloc.allocate(new_cap);
	if (this->_data)
	{
		for (size_t i = 0; i < this->_size; i++)
			this->_alloc.construct(&new_data[i], this->_data[i]);
		this->_destroy_range(this->begin(), this->end());
		this->_alloc.deallocate(this->_data, this->_capacity);
	}
	this->_data = new_data;
	this->_capacity = new_cap;
}


/****************      ELEMENT ACCESS       ***************/

/* No bounds checking is performed */
template <class T, class Allocator>
typename ft::vector<T, Allocator>::reference	ft::vector<T, Allocator>::operator[](typename ft::vector<T, Allocator>::size_type pos)
{
	return (this->_data[pos]);
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::const_reference		ft::vector<T, Allocator>::operator[] (typename ft::vector<T, Allocator>::size_type pos) const
{
	return (this->_data[pos]);
}

/* Bounds checking is performed */
template <class T, class Allocator>
typename ft::vector<T, Allocator>::reference	ft::vector<T, Allocator>::at(typename ft::vector<T, Allocator>::size_type pos)
{
	if (pos >= this->size())
		throw(std::out_of_range("vector::at"));
	return (this->_data[pos]);
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::const_reference		ft::vector<T, Allocator>::at(typename ft::vector<T, Allocator>::size_type pos) const
{
	if (pos >= this->size())
		throw(std::out_of_range("vector::at"));
	return (this->_data[pos]);
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::reference		ft::vector<T, Allocator>::front()
{
	return (*this->_data);
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::const_reference	ft::vector<T, Allocator>::front() const
{
	return (*this->_data);
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::reference		ft::vector<T, Allocator>::back()
{
	return (this->_data[this->_size - 1]);
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::const_reference	ft::vector<T, Allocator>::back() const
{
	return (this->_data[this->_size - 1]);
}
	
/****************        MODIFIERS         ****************/

/* Insert value before position */
template <class T, class Allocator>
void	ft::vector<T, Allocator>::push_back (typename ft::vector<T, Allocator>::value_type const &value)
{
	this->insert(this->end(), value);
}

/* Removes the element at position */
template <class T, class Allocator>
void	ft::vector<T, Allocator>::pop_back()
{
	this->erase(this->end() - 1);
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::iterator		ft::vector<T, Allocator>::insert (typename ft::vector<T, Allocator>::iterator position, const T& value)
{
	typename ft::vector<T, Allocator>::difference_type index = position - this->begin();
	this->insert(position, 1, value);
	return (&this->_data[index]);
}

template <class T, class Allocator>
void	ft::vector<T, Allocator>::insert (typename ft::vector<T, Allocator>::iterator position, typename ft::vector<T, Allocator>::size_type n, const T& value)
{
	typename ft::vector<T, Allocator>::difference_type	index;
	typename ft::vector<T, Allocator>::iterator			ptr;

	index = position - this->begin();
	this->_manage_capacity(n);
	ptr = typename ft::vector<T, Allocator>::iterator(&this->_data[index]);

	this->_relocate_range(ptr, ptr + n);
	this->_size += n;

	for (size_t i = 0; i < n; i++, ptr++)
		this->_alloc.construct(&(*ptr), value);
}

template <class T, class Allocator>
template <class InputIterator>
typename ft::enable_if<!(ft::is_integral<InputIterator>::value), void>::type
		ft::vector<T, Allocator>::insert (typename ft::vector<T, Allocator>::iterator position, InputIterator first, InputIterator last)
{
	typename ft::vector<T, Allocator>::difference_type 	index;
	typename ft::vector<T, Allocator>::iterator			ptr;
	typename ft::vector<T, Allocator>::difference_type	insert_size;

	index = std::distance(this->begin(), position);
	insert_size = std::distance(first, last);
	this->_manage_capacity(insert_size);

	ptr = typename ft::vector<T, Allocator>::iterator(&this->_data[index]);

	this->_relocate_range(ptr, ptr + insert_size);
	this->_size += insert_size;

	for (; first != last; first++, ptr++)
		this->_alloc.construct(&(*ptr), *first);

}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::iterator	ft::vector<T, Allocator>::erase (typename ft::vector<T, Allocator>::iterator position)
{
	return (this->erase(position, position + 1));
}

template <class T, class Allocator>
typename ft::vector<T, Allocator>::iterator	ft::vector<T, Allocator>::erase (typename ft::vector<T, Allocator>::iterator first, typename ft::vector<T, Allocator>::iterator last)
{
	typename ft::vector<T, Allocator>::difference_type	erase_size;

	erase_size = std::distance(first, last);
	if (erase_size > 0)
	{
		this->_destroy_range(first, last);
		this->_relocate_range(last, last - erase_size);
		this->_size -= erase_size;
	}
	return (first);
}

template <class T, class Allocator>
void	ft::vector<T, Allocator>::swap (ft::vector<T, Allocator>& x)
{
	std::swap(this->_data, x._data);
	std::swap(this->_size, x._size);
	std::swap(this->_capacity, x._capacity);
}

template <class T, class Allocator>
void	ft::vector<T, Allocator>::clear()
{
	this->erase(this->begin(), this->end());
}

/**************          PRIVATE FUNCTIONS           **************/

template <class T, class Allocator>
void	ft::vector<T, Allocator>::_destroy_range(typename ft::vector<T, Allocator>::iterator first, typename ft::vector<T, Allocator>::iterator last)
{
	typename ft::vector<T, Allocator>::iterator		ptr;

	for (ptr = first; ptr != last; ptr++)
		this->_alloc.destroy(&(*ptr));
}

template <class T, class Allocator>
void	ft::vector<T, Allocator>::_manage_capacity(size_t extra_size)
{
	typename ft::vector<T, Allocator>::size_type	new_capacity;
	typename ft::vector<T, Allocator>::size_type	total_size;

	total_size = this->size() + extra_size;
	if (total_size < this->capacity())
		return ;
	new_capacity = this->capacity();
	if (new_capacity < total_size)
	{
		if (!new_capacity)
			new_capacity = 1;
		else
			new_capacity = this->size() * 2;
		if (new_capacity < total_size)
			new_capacity = total_size;
	}
	this->reserve(new_capacity);
}

template <class T, class Allocator>
void	ft::vector<T, Allocator>::_relocate_range(typename ft::vector<T, Allocator>::iterator position, typename ft::vector<T, Allocator>::iterator relocation)
{
	typename ft::vector<T, Allocator>::iterator		ptr;

	if (this->empty() || position == this->end())
		return ;
	ft::vector<T>	tmp(position, this->end());
	this->_destroy_range(position, this->end());
	for (ptr = tmp.begin(); ptr != tmp.end(); ptr++, relocation++)
		this->_alloc.construct(&(*relocation), *ptr);
}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class T, class Allocator>
bool	ft::operator== (const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
{
	if (lhs.size() == rhs.size())
		return (ft::equal(lhs.begin(), lhs.end(), rhs.begin()));
	return (false);
}

template <class T, class Allocator>
bool	ft::operator!= (const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
{
	return (!(lhs == rhs));
}

template <class T, class Allocator>
bool	ft::operator<  (const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
{
	return (ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end()));
}

template <class T, class Allocator>
bool	ft::operator<= (const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
{
	return (lhs < rhs || lhs == rhs);
}

template <class T, class Allocator>
bool	ft::operator>  (const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
{
	return (rhs < lhs);
}

template <class T, class Allocator>
bool	ft::operator>= (const ft::vector<T,Allocator>& lhs, const ft::vector<T,Allocator>& rhs)
{
	return (lhs > rhs || lhs == rhs);
}

template <class T, class Allocator>
void	ft::swap (ft::vector<T,Allocator>& x, ft::vector<T,Allocator>& y)
{
	x.swap(y);
}

/*********************           PRINT           *********************/

template <class T, class Allocator>
void	ft::vector<T, Allocator>::_print(void)
{
	std::stringstream	buffer;
	size_t				i;

	buffer << "[ ";
	for (i = 0; i < this->size(); i++)
	{
		buffer << this->at(i);
		if (i < this->size() - 1)
			buffer << ", ";
	}
	buffer << " ]";
	std::cout << buffer.str() << std::endl;
}
