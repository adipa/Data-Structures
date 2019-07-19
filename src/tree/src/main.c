#include <stdio.h>

#include "myStack.h"
#include "myTree.h"

int main()
{
  tNode *root = NULL;
  int treeElements[] = {12,34,4,7,19,56,37,67,9,28};
  int i;
  for(i = 0; i < sizeof(treeElements); i++) {
    root = createTree(root, createNode(treeElements[i]));
  }
  printf("Preorder Traversal:\n");
  preOrder(root);
}

