#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (is_it_perfect(tree));
}

/**
 * is_it_perfect - gets the depth
 * @tree: pointer to the binary tree
 * Return: 1 if perfect, otherwise 0
 */

int is_it_perfect(const binary_tree_t *tree)
{
	int the_depth = tree_depth(tree);

	return (is_it_really_perfect(tree, the_depth, 0));
}

/**
 * tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 * Return: depth
 */

int tree_depth(const binary_tree_t *tree)
{
	int depth = 0;

	while (tree)
	{
		depth++;
		tree = tree->left;
	}
	return (depth);
}

/**
 * is_it_really_perfect - checks if the binary tree is perfect
 * @tree: pointer to the binary tree
 * @d: the depth
 * @l: the level
 * Return: 1 if perfect, otherwise 0
 */

int is_it_really_perfect(const binary_tree_t *tree, int d, int l)
{
	if (!tree)
		return (1);
	if (!(tree->left) && !(tree->right))
		return (d == (l + 1));
	if (!(tree->left) || !(tree->right))
		return (0);
	return (is_it_really_perfect(tree->left, d, l + 1) && 
			is_it_really_perfect(tree->right, d, l +1));
}

