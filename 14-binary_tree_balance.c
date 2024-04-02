#include "binary_trees.h"

/**
 * __binary_tree_height - measure the height of a binary tree
 * @tree: pointer to the root of the tree to measure height
 * Return: height of the tree
 */
size_t __binary_tree_height(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (!tree)
		return (0);
	left = tree ? 1 + __binary_tree_height(tree->left) : 0;
	right = tree ? 1 + __binary_tree_height(tree->right) : 0;

	return ((left > right) ? left : right);

}


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
	l = __binary_tree_height(tree->left);
	r = __binary_tree_height(tree->right);

	return (l - r);
}
