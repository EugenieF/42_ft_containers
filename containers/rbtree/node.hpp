#ifndef __RBTREE_NODE__
# define __RBTREE_NODE__

#include "main.hpp"

namespace ft
{
	/***********************************************************************************/
	/*                                   CLASS NODE                                    */
	/***********************************************************************************/

	typedef enum e_color
	{
		RED		= 0,
		BLACK	= 1,
	}	t_color;

	template <class T>
	class	node
	{
		public:
			typedef T										value_type;
			typedef node*									pointer;
			typedef node const*								const_pointer;
			typedef node&									reference;
			typedef node const&								const_reference;

			value_type										data;
			int												color;
			pointer											left;
			pointer											right;
			pointer											parent;

			node();
			node(value_type const &value);
			~node();
			node(const_reference other);
			reference	operator=(const_reference rhs);
	};
}

# include "node.tpp"

#endif

