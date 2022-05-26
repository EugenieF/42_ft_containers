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
	class	node
	{
		public:
			typedef T								value_type;
			typedef node*							pointer;
			typedef node const *					const_pointer;
			typedef node&							reference;
			typedef node const&						const_reference;

			value_type								data;
			value_type								color;
			pointer									left;
			pointer									right;
			pointer									parent;

			node();
			node(value_type const &value);
			~node();
			node(const_reference other);
			reference	operator=(const_reference rhs);
	};

	template <class T, class Compare = std::less<T>, class Allocator = std::allocator<T>>
	class	red_black_tree
	{
		public:
			typedef T									value_type;
			typedef node<T>								node;
			typedef node*								nodePtr;
			typedef node&								nodeRef;
			typedef red_black_tree&						reference;
			typedef red_black_tree*						pointer;
			typedef Compare								key_compare;
			typedef Allocator							allocator_type;
			typedef	size_t								size_type;
			typedef rbtree_iterator<T, node>			iterator;
			typedef rbtree_iterator<T const, node>		const_iterator;
			typedef reverse_iterator<iterator>			reverse_iterator;
			typedef reverse_iterator<const_iterator>	const_reverse_iterator;

		private:
			size_type									_size;		
			nodePtr										_root;
			nodePtr										_nil;
			allocator_type								_alloc;

		public:
		/****************           MAIN           ****************/
			red_black_tree();
			~red_black_tree();
			red_black_tree(red_black_tree const &other);
			reference									operator=(reference const rhs);
			nodePtr										get_root();
			nodePtr										get_nil();
			void										set_root(nodePtr node);
			nodePtr										get_minimum() const;
			nodePtr										get_maximum() const;

		/****************        ITERATORS         ****************/
			iterator									begin();
			const_iterator								begin() const;
			iterator									end();
			const_iterator								end() const;
			reverse_iterator							rbegin();
			const_reverse_iterator						rbegin() const;
			reverse_iterator							rend();
			const_reverse_iterator						rend() const;

		/****************         CAPACITY         ****************/
			size_type									size() const;
			size_type									max_size() const;

		/****************        MODIFIERS         ****************/
			pair<iterator,bool>								insert (const value_type& val);
			iterator										insert (iterator position, const value_type& val);
			void											erase (iterator position);
			size_type										erase (const value_type& k);
			void											swap (map& x);
			void											clear();

		private:
		/****************     PRIVATE FUNCTIONS     ****************/
			nodePtr										_get_minimum(nodePtr node)
			nodePtr										_get_maximum(nodePtr node)
			void										_left_rotate(nodePtr node);
			void										_right_rotate(nodePtr node);
			void										_insert_node(nodePtr x);
			void										_fix_insertion(nodePtr node);
			void										_delete_node(nodePtr x);
			void										_fix_deletion(nodePtr node);
			void										_transplant(nodePtr u, nodePtr v);
			nodePtr										_search_node(nodePtr node, value_type value);
	};

}

#endif

