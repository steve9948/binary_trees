#include "binary_trees.h"
/**
* binary_tree_is_root - checks if a node is a leaf
* @node : pointer to node
* Return: 1 if is root node otherwise 0
*/
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
