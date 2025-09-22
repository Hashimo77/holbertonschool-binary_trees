#include "binary_trees.h"

/**
 * binary_tree_delete - Bütün binary ağacı silir
 * @tree: Silinəcək ağacın kök node pointeri
 *
 * Return: Heç nə qaytarmır
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
		return;

	/* Əvvəlcə sol və sağ uşaqları silirik */
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);

	free(tree);
}
