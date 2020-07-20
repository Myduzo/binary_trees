#include "binary_trees.h"
/**
 * 
 * 
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
		if (!node)
			return NULL;

	if (!parent)
		return NULL;

	node->n = value;
	node->parent = parent;

	if (parent->right)
		parent->right->parent = node;

	node->left = NULL;
	node->right = parent->right;
	parent->right = node;
	
	return(node);
}
