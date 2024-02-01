#include "binary_trees.h"

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, otherwise 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t right_height = 0, left_height = 0;
        binary_tree_t *temp_left, *temp_right;

        if (!tree)
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

	if (left_height == right_height)
		return (1);
	else
		return (0);
}

