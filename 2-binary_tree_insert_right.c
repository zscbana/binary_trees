#include "binary_trees.h"

/**
 * binary_tree_insert_right - Inserts a node as the right child
 * of another node in a binary tree
 * @parent: A pointer to the parent node
 * @value: The value to be stored in the new node
 *
 * Return: A pointer to the newly inserted node, or NULL on failure
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return (NULL);
	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}
