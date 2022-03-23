#include "binary_trees.h"

/**
 * binary_tree_is_leaf_2 - checks if a node is a leaf(If have childs)
 *
 * @node: Node to check if have childs
 * Return:  1 if node is a leaf, otherwise 0
 */

int binary_tree_is_leaf_2(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);
	else
		return (1);
}

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 *
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: Number of leaves (0, 1 or 2)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (binary_tree_is_leaf_2(tree) == 1)
		return (1);
	return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}
