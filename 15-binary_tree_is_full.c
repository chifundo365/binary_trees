#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is full else 0
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l = 0;
	int r = 1;

	if (!tree)
		return (0);
	l = tree->left ? 1 + binary_tree_is_full(tree->left) : 0;
	r = tree->right ? 1 + binary_tree_is_full(tree->right) : 0;

	return (l == r ? 1 : 0);
}
