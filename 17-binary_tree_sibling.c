#include "binary_trees.h"
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
