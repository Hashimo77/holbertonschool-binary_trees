#include "binary_trees.h"

/**
 * binary_tree_height - Binary ağacın hündürlüyünü ölçür
 * @tree: Ağacın kökü
 *
 * Return: Ağacın hündürlüyü
 */
static size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	if (left_height > right_height)
		return (left_height + 1);
	return (right_height + 1);
}

/**
 * binary_tree_balance - Binary ağacın balans faktorunu ölçür
 * @tree: Ağacın kökü
 *
 * Return: Balans faktoru (sol alt ağac hündürlüyü - sağ alt ağac hündürlüyü)
 *         (Əgər tree == NULL, 0 qaytarır)
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);

	return ((int)left_height - (int)right_height);
}
