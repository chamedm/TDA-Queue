/*
 * Queue.h
 *
 *  Created on: 11 abr. 2017
 *      Author: Chavez
 */

#ifndef QUEUE_H_
#define QUEUE_H_

typedef struct queue * Queue;
typedef void * Type;
typedef struct node * Node;
typedef enum{false, true}Bool;

Queue queue_create();
int   queue_size(Queue);
Bool  queue_isEmpty(Queue);
Type  queue_peek (Queue);
void  queue_offer(Queue, Type);
Type  queue_poll(Queue);
void  queue_destroy(Queue);




#endif /* QUEUE_H_ */
