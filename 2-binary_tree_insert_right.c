#include "binary_trees.h"
/**
 * binary_tree_insert_right - add node at the right end of a tree
 *@parent: pointer to the parent node
 *@value: value to store in the new node
 *Return: pointer to newly created node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	if (!node)
		return (NULL);

	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = parent->right;
	parent->right = node;
	if (node->right)
		node->right->parent = node;
	return (node);
}
