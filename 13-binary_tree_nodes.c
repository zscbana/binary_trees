#include "binary_trees.h"

/**
 * binary_tree_nodes - the nodes of a binary tree
 * @tree: Pointer to the root node of the tree
 *
 * Return: If the tree is NULL, must return 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left->parent || tree->right->parent)
			nodes++;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
