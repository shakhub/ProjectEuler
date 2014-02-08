#include<stdio.h>
#include<stdlib.h>
#include"queue.h"


typedef struct queueS{
	queueElementsI contents[MAX_QUEUE_SIZE];
	int front;
	int count;
}queueS;

/*
This function creates a queue by initializing it and
then returning the queue
*/
queueP queueCreate(void)
{
	queueP queue;

	queue = (queueP) malloc(sizeof(queueS));

	if(queue==NULL)
	{
		fprintf(stderr,"Insufficient memory for queue.\n");
		exit(1);
	}
	
	queue->front = 0;
	queue->count = 0;

	return queue;
}

void queueDestroy(queueP queue)
{
	free(queue);
}

void queueEnter(queueP queue,queueElementsI element)
{
	int newElementIndex;

	if(queue->count>= MAX_QUEUE_SIZE)
	{
		fprintf(stderr,"Queue is full.\n");
		exit(1);
	}
	newElementIndex = (queue->front + queue->count) % MAX_QUEUE_SIZE;
	queue->contents[newElementIndex] = element;
	queue->count++;
}

queueElementsI queueDelete(queueP queue)
{
	queueElementsI oldElement;

	if(queue->count<=0)
	{
		fprintf(stderr,"Queue is empty.\n");
		exit(1);
	}

	oldElement = queue->contents[queue->front];//store element so as to return the value
	queue->front++;
	queue->front %=MAX_QUEUE_SIZE;
	queue->count--;

	return oldElement;
}

int queueIsEmpty(queueP queue)
{
	return queue->count<=0;
}

int queueIsFull(queueP queue)
{
	return queue->count>=MAX_QUEUE_SIZE;
}