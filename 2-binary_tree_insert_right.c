#include "binary_trees.h"

/**
 * binary_tree_insert_right - Yeni node-u parent-in sağ uşağı kimi daxil edir
 * @parent: Sağ uşağı daxil ediləcək node
 * @value: Yeni node-un dəyəri
 *
 * Return: Yeni yaradılmış node-un pointeri və ya NULL
 *         (uğursuz olduqda və ya parent == NULL)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->n = value;
	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;

	/* Əgər parent-in artıq sağ uşağı varsa */
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}

	parent->right = new_node;

	return (new_node);
}
