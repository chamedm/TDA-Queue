/*
 * Queue.c
 *
 *  Created on: 11 abr. 2017
 *      Author: Chavez
 */
#include <stdlib.h>
#include "Queue.h"

struct node{
	struct node * next;
	Type data;
};

struct queue{
	Node first, last;
	int size;
};

Queue queue_create(){
	Queue q = calloc(1,sizeof(struct queue));
	return q;
}
int   queue_size(Queue q){
	return q ->size;
}

Bool  queue_isEmpty(Queue q){
	return q-> size == 0;
}

Type  queue_peek (Queue q){
	if(q-> first == NULL)
		return NULL;
	return q -> first -> data;
}

void  queue_offer(Queue q, Type t){
	Node nodito = calloc(1,sizeof(struct node));
	nodito->data=t;

	if(q->size == 0)
		q->last = q->first = nodito;
	else{
		q->last->next = nodito;
		q->last = nodito;
	}

	q->size++;
}

Type queue_poll(Queue q){
	Type t;
	Node noditoT;
	if(q->size==0)
		return NULL;
	else{
		t = q->first->data;
		noditoT = q->first;
		q->first = q->first->next;
		free(noditoT);
		q->size--;
		return t;
	}
}

void  queue_destroy(Queue q)
{
	Node current = q->first;
	Node next;
	while(current != NULL){
		next = current->next;
		free(current);
		current = next;
	}
	free(q);
}


