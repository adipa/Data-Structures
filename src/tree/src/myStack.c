#include "myStack.h"

stk *createStack(int capacity)
{
    stk *newStack = (stk *) malloc(sizeof(stk));
    newStack->array = (tNode **) malloc(sizeof(tNode *) * capacity);
    newStack->top = EMPTY;
    newStack->capacity = capacity;
    return newStack;
}

int push(stk *s, tNode *newNode)
{
    if (s->top == s->capacity)
    {
        return FULL;
    } else {
        s->array[++(s->top)] = newNode;
    }
    return TRUE;
}

int pop(stk *s, tNode *newNode)
{
    if (s->top == EMPTY)
        return EMPTY;
    newNode = s->array[s->top--];
    return TRUE;
}

void deleteStack(stk *s)
{
    free(s->array);
    free(s);
}

int isEmptyStack(stk *s)
{
    return (s->top == EMPTY ? TRUE : FALSE);
}

int isFullStack(stk *s)
{
    return (s->top == (s->capacity - 1) ? TRUE : FALSE);
}
