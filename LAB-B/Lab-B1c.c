#include <stdio.h>

/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: Lars van Megchelen
* Nummer-Student2: 20091052
* Opdracht: B1
*/

/**
* De 1 wordt niet opgeteld bij 1.0e20 omdat een floating point maar een beperkte precisie heeft.
**/

int main(void) {
 int s = 1;
 double a = 1.0e20 ;
 double b = 1.0e20 + 1.0e4;
 
 printf("a = %f, b = %f \n", a, b);
 
 for (a = 1.0e20; a < b; a = a + 1) {
 printf("stap %d : a = %f\n", s++, a);
 }
 system("PAUSE");
 return 0;
}

