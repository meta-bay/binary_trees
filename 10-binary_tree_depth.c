#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	binary_tree_t *temp;

	if (!tree)
		return (0);
	temp = tree->parent;
	while (temp)
	{
		depth++;
		temp = temp->parent;
	}
	return (depth);
}

