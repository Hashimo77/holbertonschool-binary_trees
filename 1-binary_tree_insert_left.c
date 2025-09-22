#include "binary_trees.h"

/**
 * binary_tree_insert_left - Yeni node-u parent-in sol uşağı kimi daxil edir
 * @parent: Sol uşağı daxil ediləcək node
 * @value: Yeni node-un dəyəri
 *
 * Return: Yeni yaradılmış node-un pointeri və ya NULL (uğursuz olduqda və ya parent == NULL)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
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

    /* Əgər parent-in artıq sol uşağı varsa */
    if (parent->left != NULL)
    {
        new_node->left = parent->left;
        parent->left->parent = new_node;
    }

    parent->left = new_node;

    return (new_node);
}
