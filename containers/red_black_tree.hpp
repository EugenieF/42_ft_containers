#ifndef __RED_BLACK_TREE__
# define __RED_BLACK_TREE__

#include "main.hpp"

namespace ft
{
	typedef enum e_color
	{
		RED		= 0,
		BLACK	= 1,
	}	t_color;

	typedef struct	node
	{
		node	*left;
		node	*right;
		node	*parent;
		int		color;
	} node;

	typedef node	*nodePtr;

	class	red_black_tree
	{
		private:
			nodePtr	root;
			nodePtr	NIL;

		public:
			void		left_rotate(nodePtr node);
			void		right_rotate(nodePtr node);
			void		insert_node(int key);
			void		fix_insertion(nodePtr node);
			void		delete_node(int key);
			void		fix_deletion(nodePtr node);
			nodePtr		get_root();
			void		transplant(nodePtr u, nodePtr v);
			nodePtr		search_node(nodePtr node, int key);
	}

}

#endif

