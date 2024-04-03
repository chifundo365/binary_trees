#include "binary_trees.h"
#include <stdio.h>

/**
 * _binary_tree_depth - measures the depth of a node of a binary tree
 * @tree: node to measure the depth
 * Return: depth of the node
 */
size_t _binary_tree_depth(const binary_tree_t *tree)
{
        if (!tree)
                return (0);
        return (tree->parent ? 1 + _binary_tree_depth(tree->parent) : 0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if the tree is binary else 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0;
	int r = 0;
	size_t l_depth = 0;
	size_t r_depth = 0;

	if (!tree)
		return (0);
	if (tree)
	{
		l = tree ? 1 + binary_tree_is_perfect(tree->left) : 0;
		r = tree ? 1 + binary_tree_is_perfect(tree->right) : 0;
		l_depth = !tree->left ? _binary_tree_depth(tree->left): 0;
		r_depth = !tree->right ? _binary_tree_depth(tree->right) : 0;
	}

	return (l == r && l_depth == r_depth);
}
