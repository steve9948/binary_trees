#include "binary_trees.h"
/**
 * binary_tree_insert_right - Creates a binary tree node.
 *
 * @parent: Pointer to the parent node of the created node.
 * @value: Value to be placed in the new node.
 *
 * Return: pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
    binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (parent->right != NULL)
	{
		parent->right->parent = node;
		node->right = parent->right;
	}
	parent->right = node;

	return (node);
}
