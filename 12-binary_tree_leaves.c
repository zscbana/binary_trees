#include "binary_trees.h"

/**
 * binary_tree_leaves - the leaves of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: If the tree is NULL, must return 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree)
	{
		if (!tree->left && !tree->right)
			leaves++;
		binary_tree_leaves(tree->left);
		binary_tree_leaves(tree->right);
	}
	return (leaves);
}
