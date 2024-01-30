#include "binary_trees.h"

/**
 * binary_tree_node - creates new binarty tree node
 * @parent: the root node
 * @value: the value
 * Return: the newNode on success and NULL on failure
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return NULL;
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;
	return newNode;
}

