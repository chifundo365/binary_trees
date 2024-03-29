#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to the parent node of the created node
 * @value: value put in the node
 * Return: pointer to the newly created node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp = malloc(sizeof(binary_tree_t));

	if (!temp)
		return (NULL);
	temp->parent = parent;
	temp->n = value;
	temp->left = NULL;
	temp->right = NULL;

	return (temp);
}
