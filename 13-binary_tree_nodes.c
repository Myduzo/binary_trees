<<<<<<< HEAD

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
=======
#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child
 * @tree : pointer to the root node of the tree to traverse
 * Return: number of child
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (tree->left || tree->right)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);

	return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right));
}
>>>>>>> aa7e417b7a3e9bd5eaf815f65e875fba1ec22e96
