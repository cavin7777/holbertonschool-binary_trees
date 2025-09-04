# include "binary_trees.h"

/**
 * binary_tree_is_full - check if a binary tree is full (0 or 2 children)
 * @tree: pointer to the root of tree
 *
 * Return: 0 if tree is NULL and not full else 1 => full
 *
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->right && tree->left)
	{
		left = binary_tree_is_full(tree->left);
		right = binary_tree_is_full(tree->right);

	if (left == 1 && right == 1)
		return (0);

	else
		return (1);
	}

	return (0);
}

