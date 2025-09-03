# include "binary_trees.h"

/**
 * binary_tree_nodes - count the nodes with a least 1 child
 * @tree: pointer to the root node of the tree
 *
 * Return: 0 if tree is NULL else leaves
 *
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree == NULL)
		return (0);

	if (tree->right != NULL || tree->left != NULL)
		nodes = 1;

	nodes = nodes + binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right);

	return (nodes);

}
