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
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree : pointer to the root node of the tree to traverse
 * Return: 1 if the tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (count_height(tree->left) == count_height(tree->right))
		return (1);

	if (binary_tree_is_perfect(tree->left) && binary_tree_is_perfect(tree->right))
		return (0);

	return (0);
}
