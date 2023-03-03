#include "binary_trees.h"
/**
 * binary_tree_sibling - find the siblings of a node
 * @node: pointer to the node of a tree
 * Return: a pointer to the node sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);

	return (node->parent->left);
}
