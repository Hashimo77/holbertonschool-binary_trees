#include "binary_trees.h"

/**
 * binary_tree_size - Binary ağacın node sayını ölçür
 * @tree: Ölçüləcək ağacın kökü
 *
 * Return: Ağacın node sayı
 *         (Əgər tree == NULL, 0 qaytarır)
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
