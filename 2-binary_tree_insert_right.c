#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right-child of another node
 * @parent: pointer to the parent node
 * @value: value to store in right new node
 *
 * Return: Pointer to new node or null
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_right;

	if (parent == NULL)
		return (NULL);

	/* Use same code task 0 not the function to create a new node right */
	new_node_right = malloc(sizeof(binary_tree_t));

	if (new_node_right == NULL)
		return (NULL);

	new_node_right->n = value;
	new_node_right->parent = parent;
	new_node_right->left = NULL;
	new_node_right->right = NULL;

	if (parent->right != NULL)
	{
		new_node_right->right = parent->right;
		parent->right->parent = new_node_right;
	}

	parent->right = new_node_right;

	return (new_node_right);

}
