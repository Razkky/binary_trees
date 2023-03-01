#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert node as the left child of another node
 * @parent: pointer to the node to insert the left-child
 * @value: value to store in the node
 * Return: pointer to new node
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (!parent)
		return (NULL);
	if (!node)
		return (NULL);
	node->n = value;
	node->left = parent->left;
	node->right = NULL;
	node->parent = parent;
	parent->left = node;
	if (node->left)
		node->left->parent = node;
	return (node);
}
