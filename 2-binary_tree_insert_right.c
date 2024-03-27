#include "binary_trees.h"

/**
 * binary_tree_insert_right - function that inserts a node to the right
 * @parent: parent node of a node
 * @value: the value to be put in a node
 * Return: returns the address of newnode that has been created
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
	{
		return (NULL);
	}

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
