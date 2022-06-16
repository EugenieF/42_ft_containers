#ifndef __RBTREE_NODE_HPP__
# define __RBTREE_NODE_HPP__

#include <iostream>

namespace ft
{
	/***********************************************************************************/
	/*                                   CLASS NODE                                    */
	/***********************************************************************************/

	typedef enum e_color
	{
		RED		= false,
		BLACK	= true,
	}	t_color;

	template <class T>
	struct	node
	{
		public:
			typedef T										value_type;
			typedef node*									pointer;
			typedef node&									reference;
			typedef node const&								const_reference;

			value_type										data;
			pointer											left;
			pointer											right;
			pointer											parent;
			bool											color;
			
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

