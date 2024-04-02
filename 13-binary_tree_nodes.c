#include "binary_trees.h"

/**
 * binary_tree_node - counts number of nodes with atleast 1 child in a B-tree
 * @tree: the root of the binary  tree
 * Return: total number of node with atleast a child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t l = 0;
	size_t r = 0;

	if (!tree)
		return (0);
	l = tree->left ? 1 + binary_tree_nodes(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_nodes(tree->right) : 0;
	return (l && r ? (l + r) - 1 : l + r);
}
