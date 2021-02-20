#include<stdio.h>

/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: Lars van Megchelen
* Nummer-Student2: 20091052
* Opdracht: B1
*/

/**
* t zou nooit percies 30 worden, maar bijvoorbeeld wel 30.00000001, om dit probleem zou de while test vervangen kunnen worden door bijvoorbeeld (t < 30.1);
**/


int main(void) {
 double een_derde = 1.0 / 3;
 double t = 0;
 while (t != 30) {
 printf("%f\n", t);
 t += een_derde;
 }
 printf("Klaar!\n");
 system("PAUSE");
 return 0;
}
