#include<stdio.h>
#include<stdlib.h>

typedef int stackElementsI;

typedef struct {
	stackElementsI *contents;
	int top;
	int maxSize;
}stackI;


void StackInit(stackI *stackP,int maxSize);
void StackDestroy(stackI *stackP);
int StackIsEmpty(stackI *stackP);
int StackIsFull(stackI *stackP);
void StackPush(stackI *stackP,stackElementsI element);
int StackPop(stackI *stackP);