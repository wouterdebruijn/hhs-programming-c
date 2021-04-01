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

int isLeeg (struct Queue q);
int head ( struct Queue q );
void delHead ( struct Queue *Q );
void voegToe (struct Queue *Q, int x);

void printQueue(struct Queue q);

void koppelA (struct Queue *q, struct Queue *r);
void koppelB (struct Queue *q, struct Queue *r);

struct Queue* copy (struct Queue q);

int main(void) {
	struct Queue queue = { };
	struct Queue queueb = { };
	
	voegToe(&queue, 8);
	
	struct Queue *newQueue = copy(queue);	
	
	printf("Old queue: Should contain values\r\n");
	printQueue(queue);
	printf("New Queue, should contain values\r\n");
	printQueue(*newQueue);
	
	return(0);
}

struct Queue* copy (struct Queue q) {
	struct Queue *newQueue = malloc(sizeof(struct Queue));
	if (newQueue == NULL) exit(EXIT_FAILURE);
	newQueue -> head = NULL;
	newQueue -> tail = NULL;
	
	struct Node *latest = q.head;
	
	while (latest != NULL) {
		struct Node *newNode = malloc(sizeof(struct Node));
		if (newNode == NULL) exit(EXIT_FAILURE);
		
		newNode -> getal = latest -> getal;
		newNode -> next = NULL;
		
		if (newQueue -> head == NULL) { // If we start from scratch, also fill the head of the Queue.
			newQueue -> head = newNode;
		}
	
		if (newQueue -> tail != NULL) { // Depending on if we have a tail, we change the latest next
			newQueue -> tail -> next = newNode;
		}
	
		newQueue -> tail = newNode;
		latest = latest -> next;
	}
	return(newQueue);
}

void koppelA (struct Queue *q, struct Queue *r) {
	while(!isLeeg(*r)) {
		voegToe(q, head(*r));
		delHead(r);
	}
}

void koppelB (struct Queue *q, struct Queue *r) {
	struct Node *latest = r -> head;
	
	while (latest != NULL) {
		
		if (q -> head == NULL) { // If we start from scratch, also fill the head of the Queue.
			q -> head = latest;
		}
			
		if (q -> tail != NULL) { // Depending on if we have a tail, we change the latest next
			q -> tail -> next = latest;
		}
		
		q -> tail = latest;
		
		latest = latest -> next;
		r -> head = latest;
	}
}

int isLeeg (struct Queue q) {
	if ((q.head) == NULL) return(1);
	return(0);
}

int head ( struct Queue q ) {
	return q.head -> getal;
}

void delHead ( struct Queue *q ) {
	struct Node *oldHead = q -> head;
	q -> head = oldHead -> next;
	
	if (q -> head == NULL) // Clean the queue if this was the last item.
		q -> tail = NULL;
		
	free(oldHead);
}

void voegToe (struct Queue *q, int x) {
	
	struct Node *node = malloc(sizeof(struct Node));
	if (node == NULL) exit(EXIT_FAILURE);
	node -> getal = x;
	node -> next = NULL;
	
	if (q -> head == NULL) { // If we start from scratch, also fill the head of the Queue.
		q -> head = node;
	}
		
	
	if (q -> tail != NULL) { // Depending on if we have a tail, we change the latest next
		q -> tail -> next = node;
	}
	
	q -> tail = node;
}

void printQueue(struct Queue q) {
	struct Node *latest = q.head;
	int i = 0;
	
	if (latest == NULL)
		printf("This queue is empty!\n\r");
	
	while (latest != NULL) {
		printf("Value %d: %d\r\n", i++, latest -> getal);
		latest = latest -> next;
	}
}
