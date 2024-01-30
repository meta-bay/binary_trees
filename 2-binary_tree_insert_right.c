#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts newNode at the right side
 * @parent: the root
 * @value: the value
 * Return: the newNode on success and NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (!parent)
		return NULL;
	binary_tree_t *newNode = malloc(sizeof(binary_tree_t));
	newNode->n = value;
	newNode->parent = parent;
	newNode->left = NULL;
	newNode->right = NULL;
	if (parent->right)
	{
		newNode->right = parent->right;
		parent->right = newNode;
		return newNode;
	}
	parent->right = newNode;
	return newNode;
}

