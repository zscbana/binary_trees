#include <stdio.h>
#include "binary_trees.h"


/**
 * main - Entry point for the program.
 *
 * Return: Exit status
 */
int main(void)
{
	binary_tree_t *root;

	/* Create the root node */
	root = binary_tree_node(NULL, 10);

	binary_tree_insert_left(root, 20);
	binary_tree_insert_left(root, 20);
	binary_tree_insert_left(root, 20);
	binary_tree_insert_left(root, 20);
	binary_tree_insert_right(root, 30);
	binary_tree_insert_right(root, 30);
	binary_tree_insert_right(root, 30);
	binary_tree_insert_right(root, 30);
	binary_tree_insert_right(root, 60);

	/* Print the tree to visualize */
	printf("Binary Tree:\n");
	binary_tree_print(root);

	return (0);
}
