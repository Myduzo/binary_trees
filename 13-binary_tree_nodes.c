
#include "binary_trees.h"

/**
 * binary_tree_nodes - computes number of nodes in a tree
 * @tree: pointer to the root
 * Return: size of tree
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right == NULL && tree->left == NULL)
		return (0);
	return (1 + (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right)));