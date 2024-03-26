#include "binary_trees.h"

/**
 * @brief
 *
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	int result;

	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);
	return (0);
}
