#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is dead, 0 otherwise
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
    return (tree && tree->parent ? 1 + binary_tree_depth(tree->parent) : 0);
}