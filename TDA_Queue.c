/*
 ============================================================================
 Name        : TDA_Queue.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include "Queue.h"

int main(){

	char s1[] = "Vamos a comer";
	char s2[] = "No vamos a asesorias";
	char s3[] = "Salu2 j3j3p";

	Queue q = queue_create();
	queue_offer(q, s1);
	queue_offer(q, s2);
	queue_offer(q, s3);

	while (!queue_isEmpty(q)){
		puts(queue_peek(q));
		puts(queue_poll(q));
	}

	queue_destroy(q);


	return 0;
}
