#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf.
 * @node: is a pointer to the node to check.
 *
 * Return: must return 1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	size_t leaf = 0;

	if (!node)
		return (0);

	/* if the parent has children on BOTH left and right sides */
	if (node->left && node->right)
	{
		/* There is no leaf */
		leaf = 0;
		return (leaf);
	}

	/* if the parent has children on EITHER left or right sides */
	else if (node->left || node->right)
	{
		/* There is no leaf */
		leaf = 0;
		return (leaf);
	}

	/* if the parent has NO children on EITHER left or right sides */
	else
		leaf = 1;

	return (leaf);
}
