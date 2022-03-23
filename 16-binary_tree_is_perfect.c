#include "binary_trees.h"

/**
 * _pow - calculate the pow y of x
 *
 * @x: number to calculate the power
 * @y: power
 * Return: Result of x**y
 */

int _pow(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow(x, y - 1));
	}
}

/**
 * count_nodes - count rigth and left nodes
 *
 * @tree: pointer to count
 * Return: int, number of nodes
 */

int count_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + count_nodes(tree->left) + count_nodes(tree->right));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 *
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is null or not perfect, 1 if is perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int height = 0;
	int total_nodes = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	total_nodes = count_nodes(tree);

	if (_pow(2, height + 1) - 1 == total_nodes)
		return (1);
	return (0);
}
