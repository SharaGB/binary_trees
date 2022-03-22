#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 *
 * @tree:  is a pointer to the node to measure the depth
 * Return: level of the node (Root is zero level)
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t level = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	if (tree->parent != NULL)
		level = binary_tree_depth(tree->parent) + 1;

	return (level);
}
