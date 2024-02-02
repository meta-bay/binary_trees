#include "binary_trees.h"

/**
 * binary_tree_levelorder - goes through a binary tree
 * using level-order traversal
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a funciton to call for each node
 */

void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	queue_t *begn = malloc(sizeof(queue_t));
	queue_t *lst = NULL, *rm = NULL;

	if (!tree || !func || !begn)
		return;

	begn->node = (binary_tree_t *)tree;
	begn->next = NULL;
	lst = rm = begn;

	while (begn)
	{
		func(begn->node->n);
		if (begn->node->left)
		{
			lst->next = malloc(sizeof(queue_t));
			if (!lst->next)
				return;
			lst = lst->next;
			lst->node = begn->node->left;
			lst->next = NULL;
		}
		if (begn->node->right)
		{
			lst->next = malloc(sizeof(queue_t));
			if (!lst->next)
				return;
			lst = lst->next;
			lst->node = begn->node->right;
			lst->next = NULL;
		}
		begn = begn->next;
		free(rm);
		rm = begn;
	}
}


