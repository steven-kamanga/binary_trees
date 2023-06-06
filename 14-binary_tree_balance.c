#include "binary_trees.h"

/**
 * binary_tree_height_b - measures the height of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: height of tree
 */

size_t binary_tree_height_b(const binary_tree_t *tree)
{
    size_t height_l = 0;
    size_t height_r = 0;

    if (tree == NULL)
        return (0);
    else
    {
        if (tree)
        {
            height_l = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
            height_r = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
        }
        return (height_l > height_r ? height_l : height_r);
    }
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree to measure the balance factor
 * Return: balance factor of tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
    int right = 0, left = 0, total = 0;
    if (tree)
    {
        left = ((int)binary_tree_height_b(tree->left));
        right = ((int)binary_tree_height_b(tree->right));
        total = left - right;
    }
    return (total);
}