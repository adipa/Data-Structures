#include<stdlib.h>

#include"myStack.h"

typedef struct tree
{
  int data;
  struct tree *left, *right;
}tNode;

tNode *createNode(int data);
tNode *createTree(tNode *root, tNode *newNode);
void preOrder(tNode *root);
