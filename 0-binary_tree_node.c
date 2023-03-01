#include "binary_trees.h"
/**
 * binary_tree_node - creates a binary tree
 * parent: pointer to the parent node
 * vale: value to be inserted in a binary tree
 * Return: pointer to node of the binary tree]
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return NULL;
	node->n = value;
	node->parent = node;
	node->right = NULL;
	node->left = NULL;

	return node;
}
