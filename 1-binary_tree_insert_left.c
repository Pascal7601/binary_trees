#include "binary_trees.h"

/**
 * binary_tree_node - function that creates a new node
 * @parent: parent node of a node
 * @value: the value to be put in a node
 * Return: returns the address of newnode that has been created
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}

	parent->left = new_node;

	return (new_node);
}
