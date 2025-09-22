#include "binary_trees.h"

/**
 * binary_tree_leaves - Binary ağacın yarpaqlarını sayır
 * @tree: Sayılacaq ağacın kökü
 *
 * Return: Ağacdakı yarpaq node-ların sayı
 *         (Əgər tree == NULL, 0 qaytarır)
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	return (binary_tree_leaves(tree->left) +
		binary_tree_leaves(tree->right));
}
