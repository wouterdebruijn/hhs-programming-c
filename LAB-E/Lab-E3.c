/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: Lars van Megchelen
* Nummer-Student2: 20091052
*/

#include <stdio.h>
#include <string.h>

#define DEF_MAX_INPUT_SIZE 100

int scanSentence(char array[], char checkChars[]);
void print2String(char array[]);

int main(void) {
	char sentence[100];
	char checkChars[2];
	
	printf("Enter your sentence\n");
	
	char temp;
	
	scanf("%[^\n]", sentence);
	scanf("%c",&temp); // temp statement to clear buffer
	scanf("%[^\n]", checkChars);
	scanf("%c",&temp); // temp statement to clear buffer
		
	printf("\n");
	
	int result = scanSentence(sentence, checkChars);
	printf("In de gegeven zin komt de combinatie '");
	print2String(checkChars);
	printf("' %d keer voor.", result);
	return(0);
}

int scanSentence(char array[], char checkChars[]) {
	int i;
	int length = strlen(array);
	
	int counter = 0;
	char lastMatch;
	
	for (i=0; i < length; i++) {
		if (lastMatch == *checkChars && *(array + i) == *(checkChars + 1))
			counter ++;
		lastMatch = *(array + i);
	}
	return counter;
}

void print2String(char array[2]) {
	int i;
	
	for (i=0; i < 2; i++) {
		printf("%c", *(array + i));
	}
}
