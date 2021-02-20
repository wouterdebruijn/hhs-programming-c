/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: Lars van Megchelen
* Nummer-Student2: 20091052
* Opdracht: B2
*/


#include<stdio.h>
#include <math.h>

int isPriemGetal(int getal);

int main(void) {
	int getal;
	
	printf("Een positief geheel getal:\n");
	scanf("%d", &getal);
	
	int priem = isPriemGetal(getal);
	
	if (priem) {
		printf("\%d is een priemgetal", getal);
	} else {
		printf("\n%d is geen priemgetal", getal);
	}
	
	return(0);
}

int isPriemGetal(int getal) {
	if (getal < 2) return(0);
	
	int wortel = (int)sqrt((double)getal);
	int telling = 0;
	
	int i;
	
	for (i=2; i <= wortel; i++) {
		if ((getal % i) == 0) telling++;
	}
	
	if (telling == 0) return(1);
	else return(0);
}
