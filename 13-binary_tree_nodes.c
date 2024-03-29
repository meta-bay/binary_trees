#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree to count the no of nodes
 * Return: the number of nodes
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes;

	if (!tree)
		return (0);
	if (tree->left || tree->right)
	{
		nodes = (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
		return (nodes);
	}
	return (0);
}

