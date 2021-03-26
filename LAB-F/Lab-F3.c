/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: Lars van Megchelen
* Nummer-Student2: 20091052
*/

#include <stdio.h>
#include <stdlib.h>

struct Node {
  int getal;
  struct Node* next;
};

struct Queue {
  struct Node* head;
  struct Node* tail;
};

void delHead ( struct Queue *Q );

int main(void) {
	struct Queue queue = { };
	
	
	
	struct Node *node = malloc(sizeof(struct Node));
	if (node == NULL) exit(EXIT_FAILURE);
	node -> getal = 25;
	queue.tail = node;
	node -> next = NULL;
	queue.head = node;
	
	printf("Expecting filled pointer and the number 25\n");
	printf("\tPointer addr: %p, value: %d\n", queue.head, (*queue.head).getal);
	
	delHead(&queue);
	
	printf("Expecting a NULL pointer\n");
	printf("\tPointer addr: %p\n", queue.head);
	
	struct Node *node2 = malloc(sizeof(struct Node));
	if (node2 == NULL) exit(EXIT_FAILURE);
	node2 -> getal = 80;
	queue.tail = node2;
	node2 -> next = NULL;
	queue.head = node2;
	
	printf("HEAD: Expecting filled pointer and the number 80\n");
	printf("\tPointer addr: %p, value: %d\n", queue.head, (*queue.head).getal);
	
	struct Node *node3 = malloc(sizeof(struct Node));
	if (node3 == NULL) exit(EXIT_FAILURE);
	node3 -> getal = 85;
	node3 -> next = queue.head;
	queue.head = node3;
	
	printf("HEAD: Expecting filled pointer and the number 85\n");
	printf("\tPointer addr: %p, value: %d\n", queue.head, (*queue.head).getal);
	
	printf("TAIL: Expecting filled pointer and the number 80\n");
	printf("\tPointer addr: %p, value: %d\n", queue.tail, (*queue.tail).getal);
	
	delHead(&queue);
	printf("deleting head");
	
	printf("HEAD: Expecting filled pointer and the number 85\n");
	printf("\tPointer addr: %p, value: %d\n", queue.head, (*queue.head).getal);
	
	
	printf("TAIL: Expecting filled pointer and the number 80\n");
	printf("\tPointer addr: %p, value: %d\n", queue.tail, (*queue.tail).getal);
	
	delHead(&queue);
	printf("HEAD: Expecting a NULL pointer\n");
	printf("\tPointer addr: %p\n", queue.head);
	
	printf("TAIL: Expecting a NULL pointer\n");
	printf("\tPointer addr: %p\n", queue.head);
	
	
	return(0);
}

void delHead ( struct Queue *q ) {
	struct Node *oldHead = q -> head;
	q -> head = oldHead -> next;
	
	if (q -> head == NULL) // Clean the queue if this was the last item.
		q -> tail = NULL;
		
	free(oldHead);
}
