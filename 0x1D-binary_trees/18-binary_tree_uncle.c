#include "binary_trees.h"

/**
 * binary_tree_uncle - function that finds the uncle of a node.
 * @node: is a pointer to the node to find the uncle.
 *
 * Return: a pointer to the uncle node.
 */

binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (!node || !node->parent || !node->parent->parent)
		return (NULL);

	/* check if the node's parent is located on the left side */
	if (node->parent->parent->left == node->parent)

		/* return the node's grandparent's right child node */
		return (node->parent->parent->right);

	/* check if the node's parent is located on the right side */
	else

		/* return the node's grandparent's left child node */
		return (node->parent->parent->left);
}
