#include "binary_trees.h"
/**
 * binary_tree_depth - measures depth of a node in a binary tree
 * @tree: pointer to the node of a tree
 * Return: the depth of the tree
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);

	depth = tree->parent ? 1 + binary_tree_depth(tree->parent) : 0;
	return (depth);
}
