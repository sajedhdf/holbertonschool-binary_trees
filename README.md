Binary Trees
Description

This project focuses on understanding and implementing binary trees in C.
You will learn how to create, traverse, and analyze binary trees, as well as become familiar with related structures such as BST, AVL, and Heap.
Tasks 0 to 23 deal exclusively with simple binary trees (not BSTs), which means they do not follow any ordering rules.

Resources

Read or watch:

Binary tree (note: not the same as B-tree)

Data Structure and Algorithms – Tree

Tree Traversal

Binary Search Tree

Data structures: Binary Tree

Learning Objectives

By the end of this project, you should be able to explain the following concepts without using Google:

General

What a binary tree is

The difference between a binary tree and a Binary Search Tree (BST)

The potential time complexity improvements over linked lists

What the depth, height, and size of a binary tree are

The different traversal methods of a binary tree

What a complete, full, perfect, and balanced binary tree is

Requirements
General

Allowed editors: vi, vim, emacs

Compilation will be done on Ubuntu 20.04 LTS, using:

gcc -Wall -Werror -Wextra -pedantic -std=gnu89


All files must end with a new line

A README.md file at the root of the project is mandatory

Your code must follow the Betty style

No global variables allowed

No more than 5 functions per file

Use of the standard library is permitted

Provided main.c files are only for testing; do not push them to your repository

All function prototypes must be included in a header file named binary_trees.h

Header files must be include-guarded

Data Structures
Basic Binary Tree Node
/**
 * struct binary_tree_s - Binary tree node
 *
 * @n: Integer stored in the node
 * @parent: Pointer to the parent node
 * @left: Pointer to the left child node
 * @right: Pointer to the right child node
 */
struct binary_tree_s
{
    int n;
    struct binary_tree_s *parent;
    struct binary_tree_s *left;
    struct binary_tree_s *right;
};

typedef struct binary_tree_s binary_tree_t;

Additional Types
typedef struct binary_tree_s bst_t;   /* Binary Search Tree */
typedef struct binary_tree_s avl_t;   /* AVL Tree */
typedef struct binary_tree_s heap_t;  /* Max Binary Heap */


Note: Tasks 0 to 23 use simple binary trees, not BSTs.

Print Function

A binary_tree_print() function is provided in the project resources to help visualize binary trees.
This function is for debugging only and must not be pushed to your repository.

Tasks Overview
0. New node

File: 0-binary_tree_node.c

Write a function that creates a binary tree node.

Prototype:

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value);


parent: pointer to the node’s parent

value: integer to store in the new node

New nodes must start with no children

Return NULL on failure

Example (from the project):

root = binary_tree_node(NULL, 98);
root->left = binary_tree_node(root, 12);
root->left->left = binary_tree_node(root->left, 6);

GitHub Repository

Repository name: holbertonschool-binary_trees
