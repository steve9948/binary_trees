#include "binary_trees.h"

/**
 * binary_tree_height -  creates node of a a binary tree.
 *
 * @tree: pointer to the parent node created.
 *
 * Return: pointer to the new node, or NULL on failure
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);

	if (right > left)
		return (right);
	else
		return (left);
}
/**
 * binary_tree_balance -  creates a binary tree node.
 *
 * @tree: pointer to the parent node created.
 *
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t right = 0, left = 0;

	if (!tree)
		return (0);

	if (tree->right)
		right = 1 + binary_tree_height(tree->right);

	if (tree->left)
		left = 1 + binary_tree_height(tree->left);

	return (left - right);
}
/**
 * binary_tree_is_perfect -  creates a binary tree node.
 *
 * @tree: pointer to the parent node to be created.
 * Dscription:A perfect binary has all interior
 * nodes possesing two children and leaves are at the same level.
 * Return: pointer to the new node, or NULL on failure
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (binary_tree_balance(tree) == 0)
	{

		if (!tree->left && !tree->right)
			return (1);
		return (binary_tree_is_perfect(tree->left) &&
				binary_tree_is_perfect(tree->right));
	}
	return (0);
}
