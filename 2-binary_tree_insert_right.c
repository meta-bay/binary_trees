#include "binary_trees.h"

/**
 * binary_tree_insert_right - insert nodes into a binary tree
 * as the right child of a another node
 * @parent: parent node
 * @value: value of newly created node
 * 
 * Return: Pointer to the created node
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *new_node;

    if (!parent)
        return NULL;
        
    new_node = binary_tree_node(parent, value);

    parent->right = new_node;

    return new_node;
}