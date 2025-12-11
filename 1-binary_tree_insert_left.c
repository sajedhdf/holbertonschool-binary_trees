#include <stdio.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * 
 * 
 * 
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)

{
    binary_tree_t *new_node_left;
     
    if (parent == NULL)
        return NULL;

    new_node_left = malloc(sizeof (binary_tree_t));

    if (new_node_left == NULL)
        return NULL;

    new_node_left -> n = value;
    new_node_left -> parent = parent; 
    new_node_left -> right = NULL;

    if (parent -> left != NULL)
    {
        new_node_left -> left = parent -> left;
        parent -> left -> parent = new_node_left;
    }
    else
    {
        new_node_left -> left = NULL;

    } 
        parent -> left = new_node_left;
    return (new_node_left);

}