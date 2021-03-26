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

int main(void) {
	struct Queue queue = { };
	
	printf("Adding 0\n");
	voegToe(&queue, 0);
	
	printf("Current Head value: %d\n", head(queue));
	
	printf("Adding 5\n");
	voegToe(&queue, 5);
	printf("Adding 10\n");
	voegToe(&queue, 10);
	printf("Adding 23\n");
	voegToe(&queue, 23);
	
	printf("Deleting head\n");
	delHead(&queue);
	
	printf("Current Head value: %d\n", head(queue));
	
	printf("Deleting head\n");
	delHead(&queue);
	
	printf("Deleting head\n");
	delHead(&queue);
	
	printf("Adding 80\n");
	voegToe(&queue, 80);
	
	printf("Current Head value: %d\n", head(queue));
	printf("Current Tail value: %d\n", (*queue.tail).getal);
	
	
	printf("Deleting head\n");
	delHead(&queue);
	printf("Deleting head\n");
	delHead(&queue);
	
	printf("Are we empty? %d\n", isLeeg(queue));
	
	return(54);
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
	
	if (q -> tail == NULL) { // If we start from scratch, also fill the tail of the Queue.
		q -> tail = node;
	}
	
	if (q -> head == NULL) { // Depending on if we have a head, we copy the old head or fill it with NULL;
		node -> next = NULL;
		q -> head = node;
	} else {
		node -> next = q -> head;
		q -> head = node;
	}
}
