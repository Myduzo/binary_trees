#include "binary_trees.h"
/**
 * count_height - count height
 * @tree : pointer to the root node of the tree to traverse
 * Return: height
 */
size_t count_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (!tree)
		return (0);

	left_height = count_height(tree->left);
	right_height = count_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree : pointer to the root node of the tree to traverse
 * Return: height
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (count_height(tree) - 1);
}
