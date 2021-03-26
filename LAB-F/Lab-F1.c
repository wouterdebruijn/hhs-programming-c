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

int main(void) {
	struct Queue queue = { };
	
	printf("Testing a empty struct: \n");
	printf("\tAre we empty? %d\n", isLeeg(queue));
	
	struct Node node = { 5, NULL };
	
	printf("Testing a filled struct: \n");
	struct Queue queue2 = { &node, &node };
	printf("\tAre we empty? %d\n", isLeeg(queue2));
	
	return(0);
}

int isLeeg (struct Queue q) {
	if ((q.head) == NULL) return(1);
	return(0);
}
