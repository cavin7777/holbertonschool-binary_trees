#include "binary_trees.h"

/**
 * binary_tree_preorder - Goes through a binary tree using pre-order traversal
 * @tree: Pointer to the root node of the tree
 * @func: Pointer to a function to call for each node
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

/* PREORDER */
/* Step 1 − Visit root node. */
/* Step 2 − Recursively traverse left subtree. */
/* Step 3 − Recursively traverse right subtree. */

	/* Process the current node */
	func(tree->n);

    /* Traverse the left subtree */
	binary_tree_preorder(tree->left, func);

    /* Traverse the right subtree */
	binary_tree_preorder(tree->right, func);
}
