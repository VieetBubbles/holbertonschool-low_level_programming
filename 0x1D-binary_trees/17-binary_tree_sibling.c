#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node.
 * @node: is a pointer to the node to find the sibling.
 *
 * Return: a pointer to the sibling node.
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	/* check if the node is located on the left side */
	if (node->parent->left == node)

		/* return the node's parent's right child node */
		return (node->parent->right);

	/* check if the node is located on the right side */
	else

		/* return the node's parent's left child node */
		return (node->parent->left);
}
