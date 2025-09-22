#include "binary_trees.h"

/**
 * binary_tree_is_root - Yoxlayır ki, node root-dur, yoxsa deyil
 * @node: Yoxlanacaq node
 *
 * Return: 1 əgər root-dursa, 0 əks halda
 *         Əgər node == NULL, 0 qaytarır
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->parent == NULL)
		return (1);

	return (0);
}
