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

	if (!tree)
		return (0);
	if (tree->parent)
		i = binary_tree_depth(tree->parent) + 1;
	return (i);
}
