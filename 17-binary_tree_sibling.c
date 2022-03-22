#include "binary_trees.h"
/**
 * binary_tree_sibling - Finds the sibling of a node
 * @node: Is a pointer to the node to find the sibling
 *
 * Return: A pointer to the sibling node
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	while (node->parent->left == node)
	{
		if (node->parent->left == NULL || node->parent->right == NULL)
		{
			return (NULL);
		}
		return (node->parent->right);
	}
	return (node->parent->left);
}
