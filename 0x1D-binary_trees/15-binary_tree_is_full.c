#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full.
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 0 if not full and 1 if full
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	/* If empty tree */
	if (!tree)
		return (0);

	/* If a leaf node */
	if (!tree->left && !tree->right)
		return (1);

	/* If both left and right are not NULL, and left & right */
	/*subtrees are full*/
	if (tree->left && tree->right)
		return (binary_tree_is_full(tree->left) && binary_tree_is_full(tree->right));
	return (0);
}
