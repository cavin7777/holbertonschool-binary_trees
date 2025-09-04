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
		int lh = binary_tree_balance(tree->left);
		int lhr = binary_tree_balance(tree->left->left);
		int lhl = binary_tree_balance(tree->left->right);

		if (lhl > lhr)
			lh	= 1 + lhl;

		else
			lh = 1 + lhr;

		left_height = lh + 1;

	}

	if (tree->right != NULL)
	{
		int rh = binary_tree_balance(tree->right);
		int rhl = binary_tree_balance(tree->right->left);
		int rhr = binary_tree_balance(tree->right->right);

		if (rhl > rhr)
			rh = 1 + rhl;

		else
			rh = 1 + rhr;

		right_height = 1 + rh;
	}

	balance = (left_height - right_height);

	return (balance);
}

