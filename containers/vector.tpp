#include "vector.hpp"
using namespace ft;

/****************           MAIN           ****************/

template <class T, class Allocator>
vector<T, Allocator>::vector (const Allocator& alloc):
	_alloc(alloc), _data(NULL), _size(0), _capacity(0) {}

template <class T, class Allocator>
vector<T, Allocator>::vector (size_t n, const T& value, const Allocator& alloc):
	_alloc(alloc), _data(NULL), _size(0), _capacity(0)
{
	this->assign(n, value);
}

template <class T, class Allocator, class InputIterator>
vector<T, Allocator>::vector (InputIterator first, InputIterator last, const Allocator& alloc):
	_alloc(alloc), _data(NULL), _size(0), _capacity(0)
{
	this->assign(first, last);
}

template <class T, class Allocator>
vector<T, Allocator>::vector (const vector<T, Allocator>& x):
	_alloc(alloc), _data(NULL), _size(0), _capacity(0)
{
	*this = x;
}

template <class T, class Allocator>
vector<T, Allocator>::~vector()
{
	if (!this->_data)
		return ;
	this->clear();
	this->_alloc.deallocate(this->_data, this->_capacity);
}

template <class T, class Allocator>
vector<T, Allocator>::vector& operator= (const vector<T, Allocator>& x)
{
	if (this != &x)
		this->assign(x.begin(), x.end());
	return (*this);
}

template <class T, class Allocator>
void	vector<T, Allocator>::assign(size_t count, const T& value)
{
	this->clear();
	this->insert(this->begin(), count, value);
}

template <class T, class Allocator, class InputIt>
void	vector<T, Allocator>::assign(InputIt first, InputIt last)
{
	this->clear();
	this->insert(this->begin(), first, last);
}

template <class T, class Allocator>
Allocator	vector<T, Allocator>::get_allocator() const
{
	return (this->_alloc);
}

/****************        ITERATORS         ****************/

template <class T, class Allocator>
typename vector<T, Allocator>::iterator	vector<T, Allocator>::begin()
{
	return (iterator(this->_data));
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_iterator	vector<T, Allocator>::begin() const
{
	return (const_iterator(this->_data));
}

template <class T, class Allocator>
typename vector<T, Allocator>::iterator	vector<T, Allocator>::end()
{
	return (iterator(&this->_data[this->_size]));
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_iterator	vector<T, Allocator>::end() const
{
	return (const_iterator(&this->_data[this->_size]));
}

template <class T, class Allocator>
typename vector<T, Allocator>::reverse_iterator	vector<T, Allocator>::rbegin()
{
	return (reverse_iterator(this->end()));
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_reverse_iterator	vector<T, Allocator>::rbegin() constc
{
	return (const_reverse_iterator(this->end()));
}

template <class T, class Allocator>
typename vector<T, Allocator>::reverse_iterator	vector<T, Allocator>::rend()
{
	return (reverse_iterator(this->begin()));
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_reverse_iterator	vector<T, Allocator>::rend() const
{
	return (const_reverse_iterator(this->begin());
}


/****************         CAPACITY         ****************/

template <class T, class Allocator>
typename vector<T, Allocator>::size_type	vector<T, Allocator>::size() const
{
	return (this->_size);
}

template <class T, class Allocator>
typename vector<T, Allocator>::size_type	vector<T, Allocator>::max_size() const
{
	return (this->_alloc.max_size());
}

template <class T, class Allocator>
void	vector<T, Allocator>::resize (typename vector<T, Allocator>::size_type n, T value)
{
	(void)n;
	(void)val;
}

template <class T, class Allocator>
typename vector<T, Allocator>::size_type	vector<T, Allocator>::capacity() const
{
	return (this->_capacity);
}

template <class T, class Allocator>
bool 	vector<T, Allocator>::empty() const
{
	if (!this->_size)
		return (true);
	return (false);
}

template <class T, class Allocator>
void	vector<T, Allocator>::reserve (typename vector<T, Allocator>::size_type new_cap)
{
	typename vector<T, Allocator>::pointer	new_data;

	if (new_cap > this->max_size())
		throw(std::length_error("vector::reserve"));
	if (new_cap <= this->_capacity)
		return ;
	new_data = this->_alloc.allocate(new_cap);

	if (this->_data)
	{

	}

	this->_data = new_data;
	this->_capacity = new_cap;
}


/****************      ELEMENT ACCESS       ***************/

template <class T, class Allocator>
typename vector<T, Allocator>::reference	vector<T, Allocator>::operator[](typename vector<T, Allocator>::size_type pos)
{
	return (this->_data[pos]);						// No bounds checking is performed
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_reference		vector<T, Allocator>::operator[] (typename vector<T, Allocator>::size_type n) const
{
	return (this->_data[pos]);
}

template <class T, class Allocator>
typename vector<T, Allocator>::reference	vector<T, Allocator>::at(typename vector<T, Allocator>::size_type pos)
{
	if (pos >= this->size())						// Bounds checking
		throw(std::out_of_range("vector::at"));
	return (this->_data[pos]);
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_reference		vector<T, Allocator>::at(typename vector<T, Allocator>::size_type pos) const
{
	if (pos >= this->size())
		throw(std::out_of_range("vector::at"));
	return (this->_data[pos]);
}

template <class T, class Allocator>
typename vector<T, Allocator>::reference		vector<T, Allocator>::front()
{
	return (*this->begin());
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_reference	vector<T, Allocator>::front() const
{
	return (*this->begin());
}

template <class T, class Allocator>
typename vector<T, Allocator>::reference		vector<T, Allocator>::back()
{
	return (*(this->end() - 1));
}

template <class T, class Allocator>
typename vector<T, Allocator>::const_reference	vector<T, Allocator>::back() const
{
	return (*(this->end() - 1));
}
	
/****************        MODIFIERS         ****************/

template <class T, class Allocator>
void	vector<T, Allocator>::push_back (const typename vector<T, Allocator>::value_type& value)
{
	this->assign(this->end(), value);		// Insert value before position
}

template <class T, class Allocator>
void	vector<T, Allocator>::pop_back()
{
	this->erase(this->end() - 1);			// Removes the element at position
}

template <class T, class Allocator>
typename vector<T, Allocator>::iterator		vector<T, Allocator>::insert (typename vector<T, Allocator>::iterator position, T& value);
{
	this->insert(position, 1, value);
	typename vector<T, Allocator>::difference_type index = std::distance(this->begin(), position);
	return (&this->_data[distance]);
}

template <class T, class Allocator>
void	vector<T, Allocator>::insert (typename vector<T, Allocator>::iterator position, typename vector<T, Allocator>::size_type n, T& value);
{
	typename vector<T, Allocator>::difference_type	index;
	typename vector<T, Allocator>::iterator			ptr;

	this->_manage_capacity(n);

	index = std::distance(this->begin(), position);
	ptr = typename vector<T, Allocator>::iterator(&this->_data[index]);

	this->_relocate_range(ptr, ptr + n);
	for (size_t i = 0; i < n; i++, ptr++)
		this->_alloc.construct(&(*ptr), value);

	this->_size += n;
}

template <class T, class Allocator, class InputIterator>
void	vector<T, Allocator>::insert (typename vector<T, Allocator>::iterator position, InputIterator first, InputIterator last)
{
	typename vector<T, Allocator>::difference_type 	index;
	typename vector<T, Allocator>::iterator			ptr;
	typename vector<T, Allocator>::difference_type	insert_size;

	insert_size = std::distance(first, last);
	this->_manage_capacity(insert_size);

	index = std::distance(this->begin(), position);
	ptr = typename vector<T, Allocator>::iterator(&this->_data[index]);

	this->_relocate_range(ptr, ptr + insert_size);
	for (; first != last; first++, ptr++)
		this->_alloc.construct(&(*ptr), *first);

	this->_size += insert_size;
}

template <class T, class Allocator>
typename vector<T, Allocator>::iterator	vector<T, Allocator>::erase (typename vector<T, Allocator>::iterator position)
{
	return (this->erase(position, position + 1));
}

template <class T, class Allocator>
typename vector<T, Allocator>::iterator	vector<T, Allocator>::erase (typename vector<T, Allocator>::iterator first, typename vector<T, Allocator>::iterator last)
{
	typename vector<T, Allocator>::difference_type 	index;
	typename vector<T, Allocator>::iterator			ptr;
	typename vector<T, Allocator>::difference_type	erase_size;

	// if (first == last)
	// 	return (first);    ???

	erase_size = std::distance(first, last);
	index = std::distance(this->begin(), position);
	ptr = typename vector<T, Allocator>::iterator(&this->_data[index]);

	this->_relocate_range(ptr, ptr - erase_size);
	this->_size -= erase_size;
	return (first);
}

template <class T, class Allocator>
void	vector<T, Allocator>::swap (vector<T, Allocator>& x)
{
	std::swap(this->_data, x._data);
	std::swap(this->_size, x._size);
	std::swap(this->_capacity, x._capacity);
}

template <class T, class Allocator>
void	vector<T, Allocator>::clear()
{
	this->erase(this->begin(), this->end());
}

/**************          PRIVATE FUNCTIONS           **************/

void	vector<T, Allocator>::_destroy_range(typename vector<T, Allocator>::iterator first, typename vector<T, Allocator>::iterator last)
{
	typename vector<T, Allocator>::iterator		ptr;

	for (ptr = first; ptr != last; ptr++)
		this->_alloc.destroy(&(*ptr));
}

template <class T, class Allocator>
size_t	vector<T, Allocator>::_manage_capacity(size_t insert_size)
{
	typename vector<T, Allocator>::size_type	new_capacity;

	if (this->_size + insert_size < this->_capacity)
		return ;
	new_capacity = this->_capacity;
	while (this->_size + insert_size >= new_capacity)
	{
		if (!new_capacity)
			new_capacity++;
		else
			new_capacity *= 2;
	}	
	this->reserve(new_capacity);
}

// template <class T, class Allocator>
// void	vector<T, Allocator>::_relocate_range(typename vector<T, Allocator>::iterator ptr, typename vector<T, Allocator>::iterator prev_end)
// {
// 	typename vector<T, Allocator>::pointer			elem_to_relocate;
// 	typename vector<T, Allocator>::const_reference	new_position;

// 	if (ptr == prev_end)
// 		return ;
// 	for (int i = 0; this->end() - i != ptr; i++)
// 	{
// 		elem_to_relocate = *(prev_end - i - 1);
// 		new_position = &(*(this->end() - i - 1));
// 		this->_alloc.construct(new_position, elem_to_relocate);
// 	}
// }

template <class T, class Allocator>
void	vector<T, Allocator>::_relocate_range(typename vector<T, Allocator>::iterator position, typename vector<T, Allocator>::iterator relocation)
{
	typename vector<T, Allocator>::iterator		ptr;

	if (this->empty() || position == prev_end)
		return ;
	vector<T, Allocator>::vector	tmp(position, prev_end);
	this->_destroy_range(position, prev_end);

	for (ptr = tmp.begin(); ptr != tmp.end(); ptr++, relocation++)
		this->_alloc.construct(&(*relocation), *ptr);
}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class T, class Allocator>
bool	ft:operator== (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	if (lhs.size() == rhs.size())
		return (ft::equal(lhs.begin(), lhs.end(), rhs.begin()));
	return (false);
}

template <class T, class Allocator>
bool	ft:operator!= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	return (!(lhs == rhs));
}

template <class T, class Allocator>
bool	ft:operator<  (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	ft::lexicographical_compare(lhs.begin(), lhs.end(), rhs.begin(), rhs.end());
}

template <class T, class Allocator>
bool	ft:operator<= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	return (lhs < rhs || lhs == rhs));
}

template <class T, class Allocator>
bool	ft:operator>  (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	return (rhs < lhs);
}

template <class T, class Allocator>
bool	ft:operator>= (const vector<T,Allocator>& lhs, const vector<T,Allocator>& rhs)
{
	return (lhs > rhs || lhs == rhs);
}

template <class T, class Allocator>
void	ft:swap (vector<T,Allocator>& x, vector<T,Allocator>& y)
{
	x.swap(y);
}
