#include "linkList.h"

int main()
{
  int i, index, middle;
    Node *head = NULL;
    for (i = 0; i < 15; i++)
        head = createList(head, createNode(i));
    printf("Linklist:\n");
    printList(head);
    printf("\nAccessing Linklist using indexing\n");
    scanf("%d", &index);
    printf("\nNode at index %d: %d\n", index, linkListIndexing(head, index)); 
    printf("\nLength of Linklist: %d\n",length(head,0));
    printf("\nInsert Node in middle of LL\n");
    scanf("%d", &middle);
    head = insertNodeInMiddle(head, createNode(middle));
    printList(head);
    printf("\nReversed Linklist:\n");
    printList(reverseList(head));
    return 0;
}
