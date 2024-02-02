#include "binary_trees.h"

/**
 * binary_tree_rotate_right - right-rotation
 * @tree: pointer to the root node of the tree to rotate
 * Return: the new root
 */

binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root_node;

	if (!tree)
		return (NULL);

	new_root_node = tree->left;
	tree->left = new_root_node->right;
	if (tree->left)
		tree->left->parent = tree;
	new_root_node->right = tree;
	new_root_node->parent = tree->parent;
	tree->parent = new_root_node;
	return (new_root_node);
}

