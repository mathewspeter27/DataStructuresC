/**
 * @file binarysearchtree.h
 * @author  Mathews Peter
 *
 * @section DESCRIPTION
 * Extern declarations of API - function call - interfaces of Binary Search Tree
 */

#ifndef BINARYSEARCHTREE_H_
#define BINARYSEARCHTREE_H_

#include "binarysearchtree_node.h"
extern void bst_inordertraversal(struct BSTNode*);
extern struct BSTNode* bst_insertn(struct BSTNode* , int);
extern struct BSTNode* bst_deleteNode(struct BSTNode* , int);

#endif /* BINARYSEARCHTREE_H_ */
