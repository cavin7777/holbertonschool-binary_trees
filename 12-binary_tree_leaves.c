# include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves in a binary tree
 * @tree: pointer to the root of a binary tree
 *
 * Return: 0 if tree is NULL else count leaves
 *
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	leaves = binary_tree_leaves(tree->right) + binary_tree_leaves(tree->left);

	return (leaves);

}
