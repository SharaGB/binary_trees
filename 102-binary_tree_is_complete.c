#include "binary_trees.h"
/**
 * countNodes - Count the total number of nodes in a Binary tree.
 * @root: Pointer to tree's root
 * Return: Count nodes
 */
int countNodes(binary_tree_t *root)
{
	if (root == NULL)
		return (0);
	return (1 + countNodes(root->right) + countNodes(root->left));
}

/**
 * is_complete - Check if a given binary tree is complete or not
 * @root: Pointer to tree's root
 * @index: Index of the node been evaluated
 * @n: Number of trees nodes
 *
 * Return: 1 if the tree is a heap, 0 otherwise
 */
int isComplete(binary_tree_t *root, int index, int n)
{
	if (root == NULL || index >= n)
		return (0);
	if (root->left == NULL && root->right == NULL)
		return (1);
	if (root->right != NULL && root->left == NULL)
		return (0);
	if (root->left != NULL && root->right == NULL)
	{
		return (isComplete(root->left, index * 2 + 1, n));
	}
	return (isComplete(root->left, index * 2 + 1, n) &&
			isComplete(root->right, index * 2 + 2, n));
}

/**
 * binary_tree_is_complete - Function that checks if a binary tree is complete
 * @tree: Is a pointer to the root node of the tree to check
 *
 * Return: Tree complete
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	int nodes;
	binary_tree_t *root;

	if (!tree)
		return (0);

	root = (binary_tree_t *)tree;
	nodes = countNodes(root);

	return (isComplete(root, 0, nodes));
}
