#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a binary tree node.
 * @parent: is a pointer to the parent node of the node to create.
 * @value: is the value to put in the new node.
 *
 * Return: a pointer to the new node, or NULL on failure.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Allocate memory for new node  */
	new_node = malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	/* Assign which Parent to the node->parent */
	new_node->parent = parent;

	/* Assign the left child value */
	new_node->left = NULL;

	/* Assign the right child value */
	new_node->right = NULL;

	/* Assign the n to be value inside the node */
	new_node->n = value;

	return (new_node);
}
