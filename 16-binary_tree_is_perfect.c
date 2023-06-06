#include "binary_trees.h"

/**
 * tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if perfect, 0 if not
 */

int tree_is_perfect(const binary_tree_t *tree)
{
    int l = 0, r = 0;
    if (tree->left && tree->right)
    {
        l = 1 + tree_is_perfect(tree->left);
        r = 1 + tree_is_perfect(tree->right);
        if (r == l && r != 0 && l != 0)
            return (r);
        return (0);
    }
    else if (!tree->left && !tree->right)
        return (1);
    else
        return (0);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: tree to be checked
 * Return: 1 if perfect, 0 if not
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
    int result = 9;

    if (tree == NULL)
        return (0);
    else
    {
        result = tree_is_perfect(tree);
        if (result == tree->n)
            return (1);
        return (0);
    }
}
