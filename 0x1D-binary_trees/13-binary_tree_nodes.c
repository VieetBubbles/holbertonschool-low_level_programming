#include "binary_trees.h"

/**
 * binary_tree_nodes - function that counts the nodes with at least 1
 * child in a binary tree.
 * @tree: is a pointer to the root node of the tree to count the
 * number of nodes.
 *
 * Return: the total number of non-leaf nodes in the tree.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t c = 0;

	if (!tree)
		return (0);

	/* If root is Not NULL and its one of its */
	/* child is also not NULL */
	c = binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1;

	/* Base Case to stop the recursion */
	if (!tree->left && !tree->right)
		return (0);
	else
		return (c);
}
