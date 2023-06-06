#include "binary_trees.h"
/**
 * binary_tree_nodes - function that counts the nodes with at least 1 child
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: number of nodes with at least 1 child
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
    size_t count = 0;

    if (tree == NULL)
        return (0);
    else
    {
        count += binary_tree_nodes(tree->left);
        count += binary_tree_nodes(tree->right);
        if (tree->left != NULL || tree->right != NULL)
            count += 1;
        return (count);
    }
}
