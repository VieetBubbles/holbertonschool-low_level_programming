#include "binary_trees.h"

/**
 * binary_tree_size - function that measures the size of a binary tree.
 * @tree: is a pointer to the root node of the tree to measure the size.
 *
 * Return: the size/ number of nodes in a binary tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s = 0;

	if (!tree)
		return (0);

	/* 1. Get the size of left subtree recursively  i.e., call */
	/*    size( tree->left-subtree). */

	/* 2. Get the size of right subtree recursively  i.e., call */
	/*    size( tree->right-subtree). */

	/* 3. Calculate size of the tree as following: */
	/*    tree_size  =  size(left-subtree) + size(right-subtree) + 1 */

	/* 4. Return tree_size */
	s = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;
	return (s);
}
