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

int head ( struct Queue q );

int main(void) {
	struct Node* node = { 128 };
	struct Queue queue = { &node, &node };
	
	printf("Should return 128\n");
	printf("\thead() retuned: %d", head(queue));
	
	return(0);
}

int head ( struct Queue q ) {
	return q.head -> getal;
}
