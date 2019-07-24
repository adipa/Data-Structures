#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
  int data;
  struct node *next;
}Node;

Node* createNode(int);
Node* createList(Node *,Node *);
Node* reverseList(Node *);
void printList(Node *);
int linkListIndexing(Node* head, int i);
int length(Node* head, int len);
Node* insertNodeInMiddle(Node *head, Node *newNode);
