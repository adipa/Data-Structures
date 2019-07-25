#ifndef LINKLIST_H
#define LINKLIST_H

#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
}Node;

int   linkListIndexing   (Node *, int);
int   length             (Node *, int);
void  printList          (Node *);
Node *createNode         (int);
Node *createList         (Node *, Node *);
Node *insertNodeInMiddle (Node *, Node *);
Node *reverseList        (Node *);

#endif
