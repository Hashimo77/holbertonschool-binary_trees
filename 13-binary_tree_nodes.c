#include "binary_trees.h"

/**
 * binary_tree_nodes - Binary ağacın ən azı 1 uşağı olan node-larını sayır
 * @tree: Sayılacaq ağacın kökü
 *
 * Return: Ağacdakı ən azı bir uşağı olan node-ların sayı
 *         (Əgər tree == NULL, 0 qaytarır)
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		count = 1;

	count += binary_tree_nodes(tree->left);
	count += binary_tree_nodes(tree->right);

	return (count);
}
