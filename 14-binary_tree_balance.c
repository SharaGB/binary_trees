#include "binary_trees.h"

/**
 * binary_tree_height_altered - Function that measures the
 * height of a binary tree
 * @tree: Is a pointer to the root node of the tree to measure the height
 *
 * Return: Height of tree
 */
int binary_tree_height_altered(const binary_tree_t *tree)
{
	int left_height = 0;
	int right_height = 0;

	if (tree == NULL)
		return (-1); /*Node null have height -1*/
	if (tree->left != NULL || tree->right != NULL)
	{
		left_height = binary_tree_height_altered(tree->left) + 1;
		right_height = binary_tree_height_altered(tree->right) + 1;
	}
	if (left_height >= right_height)
		return (left_height);
	return (right_height);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * balanceFactor = height(leftSubTree) − height(rightSubTree)
 *
 * @tree:  pointer to the root node of the tree to count the number of leaves
 * Return: Number of leaves (0, 1 or 2)
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int BalanceFactor = 0;
	int heightLeft = 0, heightRight = 0;

	if (tree == NULL)
		return (0);

	heightLeft = (int)binary_tree_height_altered(tree->left);
	heightRight = (int)binary_tree_height_altered(tree->right);
	BalanceFactor = heightLeft - heightRight;

	return (BalanceFactor);
}
