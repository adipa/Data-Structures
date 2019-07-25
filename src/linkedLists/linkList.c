#include"linkList.h"
Node *createNode(int data)
{
    Node *newNode = (Node *) malloc(sizeof(Node));
    newNode -> data = data;
    newNode -> next = NULL;
    return newNode;
}

Node *createList(Node *head, Node *newNode)
{
    Node *temp = head;
    if (!head)
      return newNode;
    while(temp -> next != NULL)
      temp = temp -> next;
    temp -> next = newNode;
    return head;
}

void printList(Node *head)
{
    Node *temp = head;
    while(temp) {
      printf("%d -> ", temp -> data);
      temp = temp -> next;
    }
    printf("\n");
}

Node *reverseList(Node *head)
{
    Node *cur = head, *prev = NULL, *next;
    while(cur) {
      next = cur -> next;
      cur -> next = prev;
      prev = cur;
      cur = next;
    }
    return prev;
}

int linkListIndexing(Node* head, int i)
{
  int index = 0;
  Node *current = head;
  while(index++ != i) {
    current = current -> next;
  }
  return current -> data;
}

int length(Node *head, int len)
{
  if(!head)
    return len;
  length(head -> next, len + 1);
}

Node *insertNodeInMiddle(Node *head, Node *newNode)
{
  Node *slowPtr = NULL, *fastPtr = NULL;
  if(!head)
    return newNode;
  if(!head -> next) {
    newNode -> next = head;
    return newNode;
  }
  slowPtr = head;
  fastPtr = head -> next;
  while(fastPtr -> next && fastPtr -> next -> next) {
    slowPtr = slowPtr -> next;
    fastPtr = fastPtr -> next -> next;
  }
  newNode -> next = slowPtr ->next;
  slowPtr -> next = newNode;
  return head;
}
