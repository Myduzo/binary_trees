#include "binary_trees.h"
/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree : pointer to the root node of the tree to traverse
 * Return: Depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t count = 0;

	if (!tree)
		return (0);

	while (tree)
	{
		tree = tree->parent;
		count++;
	}

	return (count - 1);
}
