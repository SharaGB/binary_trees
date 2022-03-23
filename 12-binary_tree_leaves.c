#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: Number of leaves (0, 1 or 2)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaves = 0;

	if (tree == NULL)
		return (0);

	return (1 + binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
