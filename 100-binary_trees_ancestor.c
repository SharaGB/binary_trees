#include "binary_trees.h"
/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Is a pointer to the first node
 * @second: Is a pointer to the second node
 *
 * Return: A pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	const binary_tree_t *path1 = NULL;
	const binary_tree_t *path2 = NULL;

	if (first == NULL || second == NULL)
		return (NULL);
	for (path1 = first; path1 != NULL; path1 = path1->parent)
	{
		for (path2 = second; path2 != NULL; path2 = path2->parent)
		{
			if (path1 == path2)
				return ((binary_tree_t *) path1);
		}
	}
	return (NULL);
}
