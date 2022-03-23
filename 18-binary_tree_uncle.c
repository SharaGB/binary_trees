#include "binary_trees.h"
/**
 * binary_tree_uncle - Finds the uncle of a node
 * @node: Is a pointer to the node to find uncle
 *
 * Return: A pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
		return (NULL);

	if (node->parent->parent->left == NULL || node->parent->parent->right == NULL)
	{
		return (NULL);
	}
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);
	return (node->parent->parent->left);
}
