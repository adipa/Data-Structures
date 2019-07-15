#include "linkList.h"

int main()
{
    int i, index;
    Node *head = NULL;
    for (i = 0; i < 15; i++)
        head = createList(head, createNode(i));
    printf("Linklist:\n");
    printList(head);
    printf("Accessing Linklist using indexing\n");
    scanf("%d", &index);
    printf("Node at index %d: %d\n", index, linkListIndexing(head, index)); 
    printf("Reversed Linklist:\n");
    printList(reverseList(head));
    return 0;
}
