#include <stdint.h>
#include <string.h>
#include "queue.h"


typedef struct node{
	void *data;
	struct node *next;
	struct node *previous;
} Node;

typedef struct queue{
	int size;
	Node* head;
	Node* tail;
}queue_t;

queue_t* qopen(void){
	queue_t *newq = (queue_t*)malloc(sizeof(queue_t));
	newq->size = 0;
	newq->head = NULL;
	newq->tail = NULL;

	return newq;
}

int32_t qput(queue_t *qp, void *elementp){
	Node *newNode;
	newNode = (Node*)malloc(sizeof(Node));
	newNode->data = elementp;
}
