#include "binary_trees.h"

/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: pointer to the first node
 * @second: pointer to the second node
 * Return: the ancestor
 */

binary_treet *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *tmp1 = NULL, tmp2;

	if (!first || !second)
		return (NULL);

	while (first)
	{
		tmp2 = (binary_tree_t *)second;
		while (tmp2)
		{
			if (tmp2 == first)
			{
				tmp1 = (binary_tree_t *)first;
				return (tmp1);
			}
			tmp2 = tmp2->parent;
		}
		first = first->parent;
	}
	return (NULL);
}

