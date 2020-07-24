#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent : parent node
 * @value : data
 * Return: New node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node;
		if (!node)
			return (NULL);
node = binary_tree_node(parent, value);
	if (!parent)
		return (NULL);

	if (!(parent->right))
		parent->right = node;
	else if (parent->right)
	{
		child->right = parent->right;
		child->right->parent = node;
		parent->right = node;
	}
	return (node);
}
