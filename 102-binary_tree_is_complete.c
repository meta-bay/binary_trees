#include "binary_trees.h"

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: pointer to the root  node of the tree to check
 * Return: 1 or 0
 */

int binary_tree_is_complete(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	return (binary_tree_is_complete(tree->left) &&
		binary_tree_is_complete(tree->right));
}

