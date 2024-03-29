#include "binary_trees.h"

/**
 * insert_tree_insert_right - Inserts a node at the right of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: the value to store in the new node
 * Return: pointer to the new inserted node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (!parent)
		return (NULL);
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (!new_node)
		return (NULL);
	if (parent->right)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
