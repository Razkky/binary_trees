#include "binary_trees.h"
/**
 * binary_tree_delete - delete an entire tree
 * @tree: pointer to the node of the tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->right);
	binary_tree_delete(tree->left);
	free(tree);
}
