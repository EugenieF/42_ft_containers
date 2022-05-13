#include "red_black_tree.hpp"

node::node(): data(NULL), left(NULL), right(NULL), parent(NULL), color(RED) {}

node::node(): {}

node::~node(): {}

node::node(node const &copy) {}

node	&node::operator() {}

red_black_tree::red_black_tree(): _root(NULL), _NIL(NULL) {}

nodePtr		red_black_tree::get_root()
{
	return (this->_root);
}

void	red_black_tree::set_root(nodePtr node)
{
	this->_root = node;
}

nodePtr		red_black_tree::get_NIL()
{
	return (this->_NIL);
}

void	red_black_tree::left_rotate(nodePtr x)
{
	nodePtr y;

	y = x->right;
	x->right = y->left;
	if (y->left)
		y->left->parent = x;
	y->parent = x->parent;
	if (!x->parent)
		this->get_root() = y;
	else if (x == x->parent->left)
		x->parent->left = y;
	else
		x->parent->right = y;
	y->left = x;
	x->parent = y;
}

void		red_black_tree::right_rotate(nodePtr x)
{
	nodePtr y;

	y = x->left;
	x->left = y->right;
	if (y->right)
		y->right->parent = x;
	y->parent = x->parent;
	if (!x->parent)
		this->get_root() = y;
	else if (x == x->parent->right)
		x->parent->right = y;
	else
		x->parent->left = y;
	y->right = x;
	x->parent = y;
}

void		red_black_tree::insert_node(nodePtr x)
{
	nodePtr	y = this->get_NIL();
	nodePtr tmp = this->get_root();

	while (tmp != this->get_NIL())
	{
		y = tmp;
		if (x->data < tmp->data)
			tmp = tmp->left;
		else
			tmp = tmp->right;
	}
	x->parent = y;
	if (y == this->get_NIL())
		this->set_root(x);
	else if (x->data < y->data)
		y->left = n;
	else
		y->right = n;
	n->left = this->get_NIL();
	n->right = this->get_NIL();
	n->color = RED;
	fix_insertion(node);
}

void		red_black_tree::insert_fixup(nodePtr node)
{
	while (node->parent->color == RED)
	{
		if (node->parent == node->parent->parent->left)		// node->parent is left child
		{
			nodePtr y = node->parent->parent->right			// uncle of node
			if (y->color == RED)							// Case 1
			{
				node->parent->color = BLACK;
				y->color = BLACK;
				node->parent->parent->color = RED;
				node = node->parent->parent;
			}
			else
			{
				if (node == node->parent->right)			//Case 2
				{
					node = node->parent;
					left_rotate(node);
				}
				node->parent->color = BLACK;				//Case 3
				node->parent->parent->color = RED;
				right_rotate(node->parent->parent);
			}
		}
		else												// node->parent is right child
		{
			nodePtr y = node->parent->parent->left			// uncle of node
			if (y->color == RED)							// Case 1
			{
				node->parent->color = BLACK;
				y->color = BLACK;
				node->parent->parent->color = RED;
				node = node->parent->parent;
			}
			else
			{
				if (node == node->parent->left)				//Case 2
				{
					node = node->parent;
					right_rotate(node);
				}
				node->parent->color = BLACK;				//Case 3
				node->parent->parent->color = RED;
				left_rotate(node->parent->parent);
			}
		}
	}
	this->_root->color = BLACK;
}

void		red_black_tree::delete_node(int key)
{

}

void		red_black_tree::delete_fixup(nodePtr node)
{

}

void		red_black_tree::transplant(nodePtr u, nodePtr v)
{

}

nodePtr		red_black_tree::search_node(nodePtr node, int key)
{

}

