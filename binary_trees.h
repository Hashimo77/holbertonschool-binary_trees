#ifndef BINARY_TREES_H
#define BINARY_TREES_H

#include <stddef.h>
#include <stdlib.h>

/**
 * struct binary_tree_s - İkili ağacın düyünü
 * @n: Tam ədəd dəyəri
 * @parent: Valideynə pointer
 * @left: Sol uşağa pointer
 * @right: Sağ uşağa pointer
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

/* Prototip */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);

#endif /* BINARY_TREES_H */
