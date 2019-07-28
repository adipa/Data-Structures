#ifndef TREE_H
#define TREE_H

#include<stdlib.h>

typedef struct tree
{
  int data;
  struct tree *left, *right;
}tNode;

void   inOrder    (tNode *root);
void   preOrder   (tNode *root);
tNode *createNode (int data);
tNode *createTree (tNode *root, tNode *newNode);

#endif
