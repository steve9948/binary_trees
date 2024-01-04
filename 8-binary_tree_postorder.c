#include "binary_trees.h"
/**
* binary_tree_postorder - Traverses binary tree through post-order method
* @tree: pointer to root node
* @func: pointer to a print function
* Return:  measure the depth
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;
	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
