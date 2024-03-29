#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_delete - deletes the entire binary tree
 * @tree: pointer to the root of the binary tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		free(tree);
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
	}
}
