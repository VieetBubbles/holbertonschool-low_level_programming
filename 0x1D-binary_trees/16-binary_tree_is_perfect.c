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
 * binary_tree_is_perfect - function that checks if a binary tree is perfect.
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 to signfy that the binary tree is perfect, and 0 if not.
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (!tree)
		return (0);

	/* if the height of the left side is the same as the right side */
	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
	{
		left = tree->left;
		right = tree->right;

		/* if the nodes are not a leaf and are null*/
		if (!left && !right)
		{
			/* then it is a perfect tree */
			return (1);
		}

		/* check if both left & right subtrees are full */
		return (binary_tree_is_perfect(left) && binary_tree_is_perfect(right));
	}
	return (0);
}
