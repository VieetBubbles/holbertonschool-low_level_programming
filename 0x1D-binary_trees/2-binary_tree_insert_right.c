#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node as the
 * right-child of another node.
 * @parent: is a pointer to the node to insert the right-child in.
 * @value: is the value to store in the new node.
 *
 * Return: a pointer to the created node, or NULL on failure
 * or if parent is NULL.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode;

	if (!parent)
		return (NULL);

	newNode = malloc(sizeof(binary_tree_t));
	if (!newNode)
		return (NULL);

	/* If the parent node has a right child */
	/* places the new new node into the middle of a existing branch */
	if (parent->right)
	{
		/* The newNode's right pointer is pointing to what the */
		/* parent's right pointer was originally pointing to. */
		newNode->right = parent->right;

		/* make the child below the newNode's right pointer point up */
		/* at the the NewNode. */
		newNode->right->parent = newNode;
	}

	else
	{
		newNode->right = NULL;
	}
	/* the parent's right point points to the newNode */
	parent->right = newNode;

	/* the newNode's parent pointer points back to the parent */
	newNode->parent = parent;

	/* the newNode's right child is empty */
	newNode->left = NULL;
	newNode->n = value;

	return (newNode);
}
