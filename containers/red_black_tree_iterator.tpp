#include "red_black_tree_iterator.hpp"
using namespace ft;

/****************           MAIN           ****************/

rbtree_iterator(): current(NULL), _root(NULL), _nil(NULL) {}

rbtree_iterator (nodePtr ptr, nodePtr root, nodePtr nil):
	current(ptr), _root(root), _nil(nil) {}

rbtree_iterator (const rbtree_iterator& rbtree_it):
	current(it.current), _root(it._root), _nil(it._nil) {}

~rbtree_iterator() {}

rbtree_iterator&	operator=( const rbtree_iterator<U>& other )
{
	if (this != &other)
	{
		this->current = other.current;
		this->_root = other._root;
		this->_nil = other._nil;
	}
	return (*this);
}

/****************          ACCESS OPERATORS         ***************/

reference	operator*() const
{
	return (this->current->data);
}

pointer		operator->() const
{
	return (*(this->current->data));
}

/**************       MEMBER FUNCTION OVERLOADS       **************/

rbtree_iterator&	operator++()
{

}

rbtree_iterator		operator++(int)
{

}

rbtree_iterator		operator+ (difference_type n) const
{

}

rbtree_iterator& 	operator+= (difference_type n)
{

}

rbtree_iterator& 	operator--()
{

}

rbtree_iterator  	operator--(int)
{

}

rbtree_iterator 	operator- (difference_type n) const
{

}

rbtree_iterator&	operator-= (difference_type n)
{

}

/**************    NON-MEMBER FUNCTION OVERLOADS     **************/

template <class Tx, class Ty, class Ux, class Uy>
bool	operator== (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

template <class Tx, class Ty, class Ux, class Uy>
bool	operator!= (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

template <class Tx, class Ty, class Ux, class Uy>
bool	operator<  (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

template <class Tx, class Ty, class Ux, class Uy>
bool	operator<= (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

template <class Tx, class Ty, class Ux, class Uy>
bool	operator>  (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

template <class Tx, class Ty, class Ux, class Uy>
bool	operator>= (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Ux, Uy>& rhs);

template <class Tx, class Ty>
rbtree_iterator<Tx, Ty>		operator+ (typename rbtree_iterator<Tx, Ty>::difference_type n, const rbtree_iterator<Tx, Ty>& it);

template <class Tx, class Ty>
typename rbtree_iterator<Tx, Ty>::difference_type	operator- (const rbtree_iterator<Tx, Ty>& lhs, const rbtree_iterator<Tx, Ty>& rhs);
}
