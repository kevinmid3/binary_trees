#include "binary_trees.h"

/**
 * binary_tree_is_leaf - This checks if a node is a leaf
 *
 * @node: pointer to the node to check
 * Return: This will return 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	int leaf = 0;

	if (node && !(node->left) && !(node->right))
		leaf = 1;

	return (leaf);
}
