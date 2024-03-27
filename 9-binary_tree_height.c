#include "binary_trees.h"

/**
 * size_t binary_tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to traverse
 * Return: nothing
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;
	size_t max_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	max_height = left_height;
	if (right_height > max_height)
		max_height = right_height;

	return (1 + max_height);
}
