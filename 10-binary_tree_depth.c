#include "binary_trees.h"

/**
 * binary_tree_depth - Node-un binary ağacdakı dərinliyini ölçür
 * @tree: Ölçüləcək node
 *
 * Return: Node-un dərinliyi
 *         (Əgər tree == NULL, 0 qaytarır)
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent != NULL)
	{
		depth++;
		tree = tree->parent;
	}

	return (depth);
}
