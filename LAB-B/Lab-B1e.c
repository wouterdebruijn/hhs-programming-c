#include<stdio.h>

/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: Lars van Megchelen
* Nummer-Student2: 20091052
* Opdracht: B1
*/

/*
	Eigenlijk hoeft er maar één van de twee naar een double gecast te worden, maar zelf vind ik het overzichtelijker om ze allebij naar een double te casten.
*/


int main(void) {
 int a = 3;
 int b = 4;
 double c = (double)a / (double)b;
 
 printf("double c = %f\n", c);
 system("PAUSE");
 return 0;
}
