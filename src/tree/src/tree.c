#include<stdio.h>

#include"myTree.h"

tNode *createNode(int data)
{
  tNode *newNode = (tNode*)malloc(sizeof(tNode*));
  newNode -> data = data;
  newNode -> left = NULL;
  newNode -> right = NULL;
  return newNode;
}

tNode *createTree(tNode *root, tNode *newNode)
{
  if(!root)
    return newNode;
  if(!newNode)
    return root;
  tNode *temp = root, *parent;
  while(temp) {
    parent = temp;
    if(temp -> data < newNode -> data)
      temp = temp -> left;
    else
      temp = temp -> right;
  }
  if(parent -> data < newNode ->data)
    parent -> left = newNode;
  else
    parent -> right = newNode;
  return root;
}

void preOrder(tNode *root)
{
  stk *stack = createStack(10);
  while(1) {
    while(root) {
      printf("%d ", root -> data);
      push(stack, root);
      root = root -> left;
    }
    if(isEmptyStack(stack))
      break;
    pop(stack, root);
    root = root -> right;
  }
}
