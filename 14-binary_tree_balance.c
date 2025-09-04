#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node
 *
 * Return: height of the tree, or 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_h = 0, right_h = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_h = 1 + binary_tree_height(tree->left);

	if (tree->right != NULL)
		right_h = 1 + binary_tree_height(tree->right);

	if (left_h > right_h)
		return (left_h);
	else
		return (right_h);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the binary tree
 *
 * Return: 0 if tree is NULL else balance
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height = 0, right_height = 0, balance = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_height = (int)binary_tree_height(tree->left);

	if (tree->right != NULL)
		right_height = (int)binary_tree_height(tree->right);

	balance = left_height - right_height;

	return (balance);
}


