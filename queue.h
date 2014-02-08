#include<stdio.h>
#include<stdlib.h>


#include<stdio.h>
#include<stdlib.h>

#define MAX_QUEUE_SIZE 5

typedef int queueElementsI;


typedef struct queueS *queueP;//this is a pointer to the struct queueS

queueP queueCreate(void);// creates a new queue
void queueDestroy(queueP queue);// destroyes the specified queue
void queueEnter(queueP queue,queueElementsI element);//enters a new element in the specified queue
queueElementsI queueDelete(queueP queue);//removes an element in the specified queue
int queueIsEmpty(queueP queue);
int queueIsFull(queueP queue);