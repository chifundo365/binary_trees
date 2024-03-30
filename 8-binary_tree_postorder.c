#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse a binary t ree using post-order traversal
 * @tree: pointer to the root of the binary tree
 * @func: pointer to a function to print the node value
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);
	}
}
