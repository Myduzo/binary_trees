#include "binary_trees.h"
/**
 * 
 * 
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));
		if (!node)
			return NULL;

	if (!parent)
		return NULL;

	node->n = value;
	node->parent = parent;

	if (parent->left)
		parent->left->parent = node;

	node->left = parent->left;
	node->right = NULL;
	parent->left = node;
	
	return(node);
}
