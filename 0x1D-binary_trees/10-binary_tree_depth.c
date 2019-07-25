#include "binary_trees.h"

/**
 * binary_tree_depth - function that measures the depth of a node
 * in a binary tree.
 * @tree: is a pointer to the node to measure the depth.
 *
 * Return: the depth of the binary tree.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int i = 0;

	/* If pointer is NULL return 0 */
	if (!tree)
		return (0);

	/* We remember that tree->left and tree->right sends us down-tree */
	/* While tree->parent send us up-tree */
	if (tree->parent)
		i = binary_tree_depth(tree->parent) + 1;

	/* Each recursive pass adds 1 til we are at root, which has no parent */
	/* The number of recursive passes is also our depth number */
	return (i);
}
