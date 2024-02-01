#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0;
	binary_tree_t *temp_left, *temp_right;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	temp_left = tree->left;
	while (temp_left)
	{
		left_height++;
		temp_left = temp_left->left;
	}
	temp_right = tree->right;
	while (temp_right)
	{
		right_height++;
		temp_right = temp_right->right;
	}
	if (right_height >= left_height)
		return (right_height);
	return (left_height);
}

