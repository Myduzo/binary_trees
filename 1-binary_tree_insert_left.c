#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_insert_left - insert new node on the left.
 *
 * @parent: parent of the new node.
 * @value: value for the new node.
 *
 * Return: new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

		node = binary_tree_node(parent, value);

		if (!node)
			return (NULL);

		if (!parent)
			return (NULL);

		if (!(parent->left))
			parent->left = node;

		else if (parent->left)
		{
			node->left = parent->left;
			node->left->parent = node;
			parent->left = node;
		}

		return (node);
}
