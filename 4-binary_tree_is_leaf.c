#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Yoxlayır ki, node leaf-dir, yoxsa deyil
 * @node: Yoxlanacaq node
 *
 * Return: 1 əgər leaf-disə, əks halda 0
 *         Əgər node == NULL, 0 qaytarır
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->left == NULL && node->right == NULL)
		return (1);

	return (0);
}
