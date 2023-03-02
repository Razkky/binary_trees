#include "binary_trees.h"
/**
 * binary_tree_preorder - goes through a tree using pre_order traversal
 * @tree: pointer ato the root node of the tree to traverse
 * @fucn: a pointer to a fucntion to call for each node
 * if tree or func is NULL do nothing
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*fucn)(int))
{
	if (!tree || !fucn)
		return;

	fucn(tree->n);
	binary_tree_preorder(tree->left, fucn);
	binary_tree_preorder(tree->right, fucn);
}
