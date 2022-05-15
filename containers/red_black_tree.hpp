#ifndef __RED_BLACK_TREE__
# define __RED_BLACK_TREE__

#include "main.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                  RED BLACK TREE                                 */
	/***********************************************************************************/

	/*	Properties:
			- Every node is colored either red or black.
			- Root of the tree is black.
			- All leaves are black.
			- Both children of a red node are black i.e., there can't be consecutive red nodes.
			- All the simple paths from a node to descendant leaves contain the same number of black nodes. */

	typedef enum e_color
	{
		RED		= 0,
		BLACK	= 1,
	}	t_color;

	template <class T>
	class	Node
	{
		public:
			typedef T		value_type;
			typedef Node*	pointer;
			typedef Node&	reference;

			value_type	data;
			pointer		left;
			pointer		right;
			pointer		parent;
			int		color;

			node();
			node(data);
			~node();
			node(reference copy);
			reference	operator=(reference rhs);
	};

	template <class T, class Compare = std::less<T>, class Allocator = std::allocator<T>>
	class	red_black_tree
	{
		public:
			typedef T				value_type
			typedef Node<T>			node;
			typedef node*			nodePtr;
			typedef node&			nodeRef;
			typedef Compare			key_compare;
			typedef Allocator		allocator_type;
		private:
			nodePtr	_root;
			nodePtr	_NIL;

		public:
			nodePtr		get_root();
			nodePtr		get_NIL();
			void		set_root(nodePtr node);
			nodePtr		get_minimum(nodePtr node)
			nodePtr		get_maximum(nodePtr node)
			void		left_rotate(nodePtr node);
			void		right_rotate(nodePtr node);
			void		insert_node(nodePtr x);
			void		fix_insertion(nodePtr node);
			void		delete_node(nodePtr x);
			void		fix_deletion(nodePtr node);
			void		transplant(nodePtr u, nodePtr v);
			nodePtr		search_node(nodePtr node, int key);
	};

}

#endif

