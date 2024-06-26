#include "binary_trees.h"

/**
 * binary_tree_inorder -  traverse the binary tree using inorder traversing
 * @tree: pointer to the root of the binary tree
 * @func: pointer to a function to print the node value
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
