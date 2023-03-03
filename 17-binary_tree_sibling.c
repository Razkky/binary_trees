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

	if (node->parent->right->n == node->n)
		return (node->parent->left);

	if (node->parent->left->n == node->n)
		return (node->parent->right);
	if (node->parent->right == NULL || node->parent->left == NULL)
		return (NULL);

	return (NULL);
}
