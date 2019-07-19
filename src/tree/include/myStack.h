#include<stdio.h>
#include<stdlib.h>

#include "myTree.h"

#define TRUE 1
#define FALSE 0

//Error codes

#define EMPTY -1
#define FULL -2

typedef struct stack {
    tNode **array;
    unsigned capacity;
    int top;
}stk;

stk *createStack(int capacity);
int push(stk *s, tNode *newNode);
int pop(stk *s, tNode *newNode);
void deleteStack(stk *s);
int isEmptyStack(stk *s);
int isFullStack(stk *s);
