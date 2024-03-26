#include "binary_trees.h"

/**
 * @brief
 *
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (!parent)
		return NULL;
	node = binary_tree_node(parent, value);
	if (!node)
		return NULL;
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;

	return (node);
}
