#include <stdio.h>

#include "myStack.h"

int main()
{
  tNode *root = NULL;
  int treeElements[] = {12,34,4,7,19,56,37,67,9,28};
  int i;
  for(i = 0; i < sizeof(treeElements)/sizeof(treeElements[0]); i++) {
    root = createTree(root, createNode(treeElements[i]));
  }
  printf("Preorder Traversal:\n");
  preOrder(root);
  printf("\nInorder Traversal:\n");
  inOrder(root);
  return 0;
}

