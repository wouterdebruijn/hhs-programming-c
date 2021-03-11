/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: Lars van Megchelen
* Nummer-Student2: 20091052
*/

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void fill2DArray(char array[10][10], char c);
void print2DArray(char array[10][10]);

int randomDirection();
char countingChar();

int handleStep(int x, int y, char array[10][10]);
int isFree(int x, int y, char array[10][10]);

char currentChar = 'A';


int main(void) {
	srand(time(0)); // Init random
	
	char table[10][10] = {};
	
	fill2DArray(table, '.');
	
	int tries = 0;
	table[0][0] = countingChar();
	
	int x = 0;
	int y = 0;
	
	while(tries < 100 && currentChar < 'Z') { // inefficient but working, fast enough :)
		int direction = randomDirection();
		
		if (direction == 0) { // LEFT
			x = x - 1;
			if (handleStep(x, y, table)) {
				tries = 0;
			} else {
				x = x + 1;
				tries = tries + 1;
			}
		}
		
		if (direction == 1) { // UP
			y = y - 1;
			if (handleStep(x, y, table)) {
				tries = 0;
			} else {
				y = y + 1;
				tries = tries + 1;
			}
		}
		
		if (direction == 2) { // RIGHT
			x = x + 1;
			if (handleStep(x, y, table)) {
				tries = tries = 0;
			} else {
				x = x - 1;
				tries = tries + 1;
			}
		}
		
		if (direction == 3) { // DOWN
			y = y + 1;
			if (handleStep(x, y, table)) {
				tries = 0;
			} else {
				y = y - 1;
				tries = tries + 1;
			}
		}
	}
	
	print2DArray(table);
	
}

int handleStep(int x, int y, char array[10][10]) {
	if (isFree(x, y, array)) {
		array[y][x] = countingChar();
		return(1);
	} 
	return(0);
}

int isFree(int x, int y, char array[10][10]) {
	if (x < 0 || x > 9) return 0;
	if (y < 0 || y > 9) return 0;
	return array[y][x] == '.';
}

void fill2DArray(char array[10][10], char c) {
	int i, j;
	
	for (i = 0; i < 10; i++) {
		for (j=0; j < 10; j++) {
			array[i][j] = c;
		}
	}
}

void print2DArray(char array[10][10]) {
	int i, j;
	
	for (i = 0; i < 10; i++) {
		for (j=0; j < 10; j++) {
			printf("%c ", array[i][j]);
		}
		printf("\n");
	}
}

int randomDirection() {
	int num = rand() % 4;
	return num;
}

char countingChar() {
	static char current = 'A' - 1;
	current = current + 1;
	currentChar = current;
	return current;
}
