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
			int										color;
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
			typedef node*								node_ptr;
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
			node_ptr									_root;
			node_ptr									_nil;
			size_type									_size;
			key_compare									_key_comp;
			allocator_type								_alloc;

		public:
		/****************           MAIN           ****************/
			explicit red_black_tree(const key_compare& comp = key_compare(), const allocator_type& alloc = allocator_type());
			red_black_tree(reference const other);
			~red_black_tree();
			reference									operator=(reference const other);
			allocator_type								get_allocator() const;
			key_compare									key_comp() const;
			node_ptr									get_root();
			node_ptr									get_nil();
			void										set_root(node_ptr node);
			node_ptr									get_minimum() const;
			node_ptr									get_maximum() const;

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
			pair<iterator,bool>							insert (const value_type& value);
			iterator									insert (iterator position, const value_type& value);
			void										erase (iterator position);
			size_type									erase (const value_type& value);
			void										swap (red_black_tree& x);
			void										clear();

		/****************        OPERATIONS        ****************/
			iterator									search_node(const value_type& value);
			const_iterator								search_node(const value_type& value) const;
			iterator									lower_bound (const value_type& value);
			const_iterator								lower_bound (const value_type& value) const;
			iterator									upper_bound (const value_type& value);
			const_iterator								upper_bound (const value_type& value) const;
			pair<const_iterator,const_iterator>			equal_range (const value_type& value) const;
			pair<iterator,iterator>             		equal_range (const value_type& value);

		private:
		/****************     PRIVATE FUNCTIONS     ****************/
			node_ptr									_create_node(const value_type& value);
			void										_delete_node(node_ptr node);

			void										_rbtree_left_rotate(node_ptr node);
			void										_rbtree_right_rotate(node_ptr node);
			iterator									_rbtree_get_parent(node_ptr position, const value_type& value);
			iterator									_rbtree_insert_node(iterator node_position, node_ptr insert_node);
			void										_rbtree_fix_insertion(node_ptr node);
			void										_rbtree_delete_node(node_ptr x);
			void										_rbtree_fix_deletion(node_ptr node);
			node_ptr									_rbtree_get_minimum(node_ptr node);
			node_ptr									_rbtree_get_maximum(node_ptr node);
			void										_rbtree_transplant(node_ptr u, node_ptr v);
			iterator									_rbtree_search_node(node_ptr node, const value_type& value);
			const iterator								_rbtree_search_node(node_ptr node, const value_type& value) const;
	};
}

# include "rbtree_public.tpp"
# include "rbtree_private.tpp"

#endif

