#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root of the binary tree
 * Return: balance factor of a b-tree
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;

	if (!tree)
		return (0);
	l = tree->left ? 1 + binary_tree_balance(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_balance(tree->right) : 0;

	return (l - r);
}
