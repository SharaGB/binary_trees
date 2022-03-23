#include "binary_trees.h"
/**
 * height_aux - Mesure the tree's height
 * @tree: pointer to tree to mesure
 *
 * Return: int, height
 */
size_t height_aux(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (height_aux(tree->left) > height_aux(tree->right))
	{
		return (1 + height_aux(tree->left));
	}
	return (1 + height_aux(tree->right));
}

/**
 * print_level - Print all nodes of a given level from left to right
 * @tree: Is a pointer to the root node of the tree to traverse
 * @level: Level order
 * @func: Is a pointer to a function to call for each node
 */
void print_level(const binary_tree_t *tree, int level, void (*func)(int))
{
	if (tree == NULL)
		return;
	if (level == 1)
		func(tree->n);
	print_level(tree->left, level - 1, func);
	print_level(tree->right, level - 1, func);
}

/**
 * binary_tree_levelorder - Goes through a BT using level-order traversal
 * @tree: Is a pointer to the root node of the tree to traverse
 * @func: Is a pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	int level = 1;
	int height = 0;

	if (tree == NULL || func == NULL)
		return;
	height = height_aux(tree) + 1;
	while (level <= height)
	{
		print_level(tree, level, func);
		level += 1;
	}
}
