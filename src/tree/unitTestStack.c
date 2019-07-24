#include<stdio.h>
#include "myStack.h"

int main()
{
    stk *s = createStack(3);
    printf("\nisStackFull: %d", isFullStack(s));
    printf("\nisStackEmpty: %d", isEmptyStack(s));
    int i, j;
    for (i=0; i<5; i++ ) {
        push(s, i);
    }
    printf("\nOverflow Case: %d ", push(s, i));
    for (i=0; i<5; i++) {
        printf("\n%d ", s->array[i]);
    }
    printf("\nisStackFull: %d", isFullStack(s));
    printf("\nisStackEmpty: %d", isEmptyStack(s));
    for (i=0; i<=12; i++) {
        printf("\nPoped Element: %d", pop(s,&j));
    }
    printf("\nisStackFull: %d", isFullStack(s));
    printf("\nisStackEmpty: %d", isEmptyStack(s));
    //deleteStack(s);
}
