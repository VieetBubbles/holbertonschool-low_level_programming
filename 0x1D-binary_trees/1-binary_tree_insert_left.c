#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the
 * left-child of another node.
 * @parent: is a pointer to the node to insert the left-child in.
 * @value: is the value to store in the new node.
 *
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	/* If the parent node has a left child */
	/* places the new new node into the middle of a existing branch */
	if (parent->left)
	{
		/* The newNode's left pointer is pointing to what the */
		/* parent's left pointer was originally pointing to. */
		newNode->left = parent->left;

		/* make the child below the newNode's left pointer point up */
		/* at the the NewNode. */
		newNode->left->parent = newNode;
	}

	else
	{
		newNode->left = NULL;
	}
	/* the parent's left point points to the newNode */
	parent->left = newNode;

	/* the newNode's parent pointer points back to the parent */
	newNode->parent = parent;

	/* the newNode's right child is empty */
	newNode->right = NULL;
	newNode->n = value;

	return (newNode);
}
