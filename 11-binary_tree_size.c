#include "binary_trees.h"
/**
 * binary_tree_size - measures the size of a binary tree
 * @tree: pointer to the root node of the tree to measure the size
 * Return: size of the tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
    size_t size = 0;
    size_t left = 0;
    size_t right = 0;

    if (tree == NULL)
        return (0);
    else
    {
        left = binary_tree_size(tree->left);
        right = binary_tree_size(tree->right);
        size = left + right + 1;
    }
    return (size);
}