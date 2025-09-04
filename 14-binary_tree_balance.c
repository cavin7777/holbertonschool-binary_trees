# include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the binary tree
 *
 * Return: 0 if tree is NULL else balance
 *
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	/* balance factor = height left tree - height right tree */

	int balance = 0;
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		int left = binary_tree_balance(tree->left);
		int right = binary_tree_balance(tree->left->right);

		if (left > right)
			left_height = left + 1;
		else
			left_height = right + 1;
	}

	if (tree->right != NULL)
	{
		int left = binary_tree_balance(tree->right->left);
		int right = binary_tree_balance(tree->right);

		if (left > right)
			right_height = left + 1;
		else
			right_height = right + 1;

		balance = (left_height - right_height);
	}

	return (balance);
}

