/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rbtree_node.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: efrancon <efrancon@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/06/21 10:56:08 by efrancon          #+#    #+#             */
/*   Updated: 2022/06/21 10:59:26 by efrancon         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef __RBTREE_NODE_HPP__
# define __RBTREE_NODE_HPP__

#include <iostream>

namespace ft
{
	/**************************************************************************/
	/*                           RED-BLACK TREE NODE                          */
	/**************************************************************************/

	typedef enum e_color
	{
		RED		= false,
		BLACK	= true,
	}	t_color;

	template <class T>
	struct	node
	{
		public:
			/********************      MEMBER TYPES     ***********************/
			typedef T					value_type;
			typedef node*				pointer;
			typedef node&				reference;
			typedef node const&			const_reference;

			/*********************    MEMBER VARIABLES   **********************/
			value_type					data;
			pointer						left;
			pointer						right;
			pointer						parent;
			bool						color;
			
			/********************     MEMBER FUNCTIONS    *********************/
			node();
			node(const value_type& value);
			node(const value_type& value, int color, pointer left, pointer right, pointer parent);
			~node();
			node(const_reference other);
			reference	operator=(const_reference rhs);
	};
}

# include "rbtree_node.tpp"

#endif

