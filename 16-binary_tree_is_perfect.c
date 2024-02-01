#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0;

	if (!tree)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	binary_tree_is_perfect(tree->left);
	binary_tree_is_perfect(tree->right);
	if (left_height == right_height)
		return (1);
	return (0);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right_height, left_height;

	if (!tree || (!tree->left && !tree->right))
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (right_height >= left_height)
		return (right_height + 1);
	return (left_height + 1);
}

