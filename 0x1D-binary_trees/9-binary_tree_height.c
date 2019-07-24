#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the height.
 *
 * Return: the height of the binary tree.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height_left = 0, height_right = 0, height = 1;

	if (!tree)
		return (0);

	/* compute the height of each subtree */
	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	/* Sets the Height to 0 because there are no children from the leaf */
	/* Height is always 1 because we're assuming the root has children. */
	/* This if statement is to handle the height of everything that */
	/* ISN'T the ROOT. */
	if (!tree->left && !tree->right)
		height = 0;

	/* use the larger one */
	/* either the left side or right can have more children, */
	/* thus the different heights. */
	if (height_left > height_right)
		return (height_left + height);
	else
		return (height_right + height);
}
