#include "binary_trees.h"

/**
 * binary_tree_rotate_left - left-rotation
 * @tree: pointer to the root node of the tree to rotate
 * Return: the new root
 */

binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root_node;

	if (!tree)
		return (NULL);

	new_root_node = tree->right;
	tree->right = new_root_node->left;
	new_root_node->left = tree;
	new_root_node->parent = tree->parent;
	tree->parent = new_root_node;
	return (new_root_node);
}

