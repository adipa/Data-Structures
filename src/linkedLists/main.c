#include "linkList.h"

int main()
{
  int i;
  Node *head = NULL;
  for (i = 0; i < 15; i++)
    head = createList(head, createNode(i));
  printf("Linklist:\n");
  printList(head);
  printf("\nAccessing Linklist using indexing\n");
  printf("\nNode at index %d: %d\n", 10, linkListIndexing(head, 10));
  printf("\nLength of Linklist: %d\n",length(head,0));
  printf("\nInsert Node in middle of LL\n");
  head = insertNodeInMiddle(head, createNode(100));
  printList(head);
  printf("\nReversed Linklist:\n");
  printList(reverseList(head));
  return 0;
}
