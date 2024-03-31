#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node of a binary tree
 * @tree: node to measure the depth
 * Return: depth of the node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	return (tree->parent ? 1 + binary_tree_depth(tree->parent): 0);
}
