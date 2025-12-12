#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the
 * right child of a parent node
 * @parent: Pointer to the parent node
 * @value: Value to store in the new node
 *
 * Description:
 * - Allocates memory for a new node and inserts it
 * as the right child of `parent`.
 * - If `parent` already has a right child, the old child
 * becomes the right child
 *   of the new node.
 *
 * Return: Pointer to the new node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node_right;

	if (parent == NULL)
		return (NULL);

	new_node_right = malloc(sizeof(binary_tree_t));
	if (new_node_right == NULL)
		return (NULL);

	new_node_right->n = value;
	new_node_right->parent = parent;
	new_node_right->left = NULL;


	if (parent->right != NULL)
	{
		new_node_right->right = parent->right;
		parent->right->parent = new_node_right;
	}
	else
	{
		new_node_right->right = NULL;
	}

	parent->right = new_node_right;

	return (new_node_right);
}
