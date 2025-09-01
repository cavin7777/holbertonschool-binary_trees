#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as the left-child of another node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Return: Pointer to the created node, or NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_left;

	if (parent == NULL)
		return (NULL);

	/* Call the task 0 to create node with value no left or right */
	new_node_left = binary_tree_node(parent, value);
	if (new_node_left == NULL)
		return (NULL);

	/* If parent as left exist replace it */
	if (parent->left != NULL)
	{
		new_node_left->left = parent->left;
		parent->left->parent = new_node_left;
	}

	parent->left = new_node_left;

	return (new_node_left);
}
