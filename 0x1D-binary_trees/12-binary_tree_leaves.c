#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree.
 * @tree: is a pointer to the root node of the tree to count the
 * number of leaves.
 *
 * Return: the total number of leaves in a binary tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t c = 0;

	if (!tree)
		return (0);

	/* 1) If node is NULL then return 0. */

	/* 2) Else If left and right child nodes are NULL return 1. */

	/* 3) Else recursively calculate leaf count of the tree using the */
	/*    formula below. */

	/* Leaf count of a tree = Leaf count of left subtree + */
	/*                                   Leaf count of right subtree */

	c = binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
		return (1);
	else
		return (c);
}
