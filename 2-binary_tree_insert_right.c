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

<<<<<<< HEAD
	node = binary_tree_node(parent, value);
	if (!node)
		return (NULL);

=======
>>>>>>> afbe506cbbf28f70564a9893634f95dea16c4c5e
	if (!parent)
		return (NULL);

	node = binary_tree_node(parent, value);

	if (!node)
		return (NULL);

	if (!(parent->right))
		parent->right = node;

	else if (parent->right)
	{
		node->right = parent->right;
		node->right->parent = node;
		parent->right = node;
	}

	return (node);
}
