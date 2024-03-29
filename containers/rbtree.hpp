/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 11:00:54 by efrancon          #+#    #+#             */
/*   Updated: 2022/06/21 11:01:41 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RBTREE_HPP__
# define __RBTREE_HPP__

# include <memory>
# include <string>
# include <sstream>
# include "utility.hpp"
# include "type_traits.hpp"
# include "iterator.hpp"
# include "rbtree_iterator.hpp"

namespace ft
{
	/***************************************************************************/
	/*                             RED-BLACK TREE                              */
	/***************************************************************************/

	/*	
		Definition : 
			-	Red-black tree is a self-balamcing binary search tree

		Properties :
			-	Every node is colored either red or black
			-	Root of the tree is black
			-	All leaves (NIL) are black
			-	Both children of a red node are black i.e., there can't be consecutive red nodes
			-	All the simple paths from a node to descendant leaves contain the same number of black nodes

		Complexity :
			-	Time complexity Search / Insert / Delete = O(log n)
			-	Space complexity = O(n)
	*/

	template <class T,  class Allocator, class Compare = std::less<T> >
	class	red_black_tree
	{
		public:
			/********************      MEMBER TYPES     **********************/
			typedef T																	value_type;
			typedef ft::node<T>															node;
			typedef ft::node<T>*														node_ptr;
			typedef Compare																key_compare;
			typedef typename Allocator::template rebind<ft::node<value_type> >::other	allocator_type;
			typedef	std::size_t															size_type;
			typedef typename ft::rbtree_iterator<T, node>								iterator;
			typedef typename ft::rbtree_iterator<T const, node>							const_iterator;
			typedef ft::reverse_iterator<iterator>										reverse_iterator;
			typedef ft::reverse_iterator<const_iterator>								const_reverse_iterator;

		private:
			/*********************    MEMBER VARIABLES   ********************/
			node_ptr									_root;
			node_ptr									_nil;
			size_type									_size;
			allocator_type								_alloc;
			key_compare									_key_comp;

		public:
			/*******************      MEMBER FUNCTIONS     *******************/

							/*-----------   MAIN   -----------*/

			red_black_tree();
			explicit red_black_tree(const allocator_type& alloc = allocator_type(), const key_compare& comp = key_compare());
			red_black_tree(red_black_tree const& other);
			~red_black_tree();
			red_black_tree&								operator=(red_black_tree const& other);
			allocator_type								get_allocator() const;
			key_compare									key_comp() const;
			node_ptr									get_root() const;
			node_ptr									get_nil() const;
			void										set_root(node_ptr node);
			node_ptr									get_minimum() const;
			node_ptr									get_maximum() const;

							/*---------  ITERATORS  ----------*/
			iterator									begin();
			const_iterator								begin() const;
			iterator									end();
			const_iterator								end() const;
			reverse_iterator							rbegin();
			const_reverse_iterator						rbegin() const;
			reverse_iterator							rend();
			const_reverse_iterator						rend() const;

							/*----------  CAPACITY  ----------*/
			size_type									size() const;
			size_type									max_size() const;

							/*----------  MODIFIERS  ---------*/
			ft::pair<iterator,bool>						insert (const value_type& value);
			iterator									insert (iterator position, const value_type& value);
			const_iterator								insert (const_iterator position, const value_type& value);
			void										erase (iterator position);
			size_type									erase (const value_type& value);
			void										swap (red_black_tree& x);
			void										clear();

							/*---------  OPERATIONS  ---------*/
			iterator									search_node(const value_type& value);
			const_iterator								search_node(const value_type& value) const;
			iterator									lower_bound (const value_type& value);
			const_iterator								lower_bound (const value_type& value) const;
			iterator									upper_bound (const value_type& value);
			const_iterator								upper_bound (const value_type& value) const;
			ft::pair<const_iterator,const_iterator>		equal_range (const value_type& value) const;
			ft::pair<iterator,iterator>             	equal_range (const value_type& value);

		private:
			/*******************       PRIVATE FUNCTIONS      *******************/
			void										_init_nil();
			node_ptr									_create_node(const value_type& value = value_type(), int color = RED);
			void										_delete_node(node_ptr node);
			node_ptr									_check_hint(node_ptr position, const value_type& value);
			ft::pair<node_ptr,bool>						_get_parent(node_ptr hint, const value_type& value);

			void										_rbtree_left_rotate(node_ptr node);
			void										_rbtree_right_rotate(node_ptr node);
			iterator									_rbtree_insert_node(node_ptr parent, const value_type& value);
			void										_rbtree_fix_insertion(node_ptr node);
			void										_rbtree_delete_node(node_ptr x);
			void										_rbtree_fix_deletion(node_ptr node);
			node_ptr									_rbtree_get_minimum(node_ptr node) const;
			node_ptr									_rbtree_get_maximum(node_ptr node) const;
			void										_rbtree_transplant(node_ptr u, node_ptr v);
			iterator									_rbtree_search_node(node_ptr node, const value_type& value);
			const_iterator								_rbtree_search_node(node_ptr node, const value_type& value) const;


			/*******************             PRINT            *******************/
			void										_print(node_ptr node, std::stringstream &buffer, bool is_tail, std::string prefix);

		public:
			void										print(void);
	};
}

# include "rbtree_public.tpp"
# include "rbtree_private.tpp"

#endif

