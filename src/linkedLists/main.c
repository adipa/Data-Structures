#include "linkList.h"

int main()
{
    int i;
    Node *head = NULL;
    for (i = 0; i < 15; i++)
        head = createList(head, createNode(i));
    printList(head);
    printList(reverseList(head));
    return 0;
}
