#include "binary_trees.h"

/**
 * binary_tree_preorder - traverses the binary tree using pre-order traversal
 * @tree: pointer to the root of the binary tree
 * @func: pointer to a function to call to print node value
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);
	}
}
