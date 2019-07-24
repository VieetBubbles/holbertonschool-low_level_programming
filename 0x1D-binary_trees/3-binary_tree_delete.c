#include "binary_trees.h"

/**
 * binary_tree_delete - function that deletes an entire binary tree.
 * @tree: is a pointer to the root node of the tree to delete.
 *
 * Return: nothing
 */

void binary_tree_delete(binary_tree_t *tree)
{
	/* Our Base Case that stops the recursion */
	/* the recusion stops if the binary tree is empty */
	if (tree == NULL)
		return;

	/* first delete both subtrees */
	/* delete the lowest leafs/children on the left side */
	binary_tree_delete(tree->left);

	/* delete the lowest leafs/children on the right side */
	binary_tree_delete(tree->right);

	/* then delete the node/root of the tree */
	/* this free is what we're doing everytime we call the function */
	free(tree);
}
