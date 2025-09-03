#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_delete - deletes an entire binary tree
 * @tree: pointer to the root node of the tree to delete
 *
 * Description: Recursively frees nodes in post-order traversal
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

    /* Delete left and right subtrees first */
	free(tree->left);
	free(tree->right);
	free(tree->parent);

    /* Free current node */
	free(tree);
}

