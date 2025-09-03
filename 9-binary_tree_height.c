#include <stddef.h>
# include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * height is node to leaf (leaf is right && left == NULL)
 * @tree: a pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL else size_t
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height = 0, right_height = 0;

	if (tree  == NULL)
		return (0);

	/* Searching for each node the right and left and continue until leaf */
	if (tree->left != NULL)
	{
		left_height = 1 + binary_tree_height(tree->left);
	}

	if (tree->right != NULL)
	{
		right_height = 1 + binary_tree_height(tree->right);
	}

	if (right_height > left_height)
	{
		return (right_height);
	}

	else
		return (left_height);

}


