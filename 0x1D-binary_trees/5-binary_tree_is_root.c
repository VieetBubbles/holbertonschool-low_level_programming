#include "binary_trees.h"

/**
 * binary_tree_is_root - function that checks if a given node is a root.
 * @node: is a pointer to the node to check.
 *
 * Return: must return 1 if node is a root, otherwise 0.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	size_t root = 0;

	if (!node)
		return (0);

	/* if the node's parent pointer has nothing tp point to */
	/* then it is a root. */
	if (!node->parent)
	{
		root = 1;
		return (root);
	}
	return (root);
}
