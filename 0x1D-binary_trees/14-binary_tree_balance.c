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

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	/* height starts at 1 because root is counted as 1 */
	if (height_left > height_right)
		return (height_left + height);
	else
		return (height_right + height);
}

/**
 * binary_tree_balance - function that measures the balance factor of a
 * binary tree.
 * @tree: is a pointer to the root node of the tree to measure the
 * balance factor.
 *
 * Return: diffence between heights of the same row
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
