#include<stdio.h>
int main(void)

/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: Lars van Megchelen
* Nummer-Student2: 20091052
* Opdracht: B1
*/

/**
* Het volgende programma laat zien dat een char eigenlijk ook opgeslagen wordt als een int. een 'a' is eigenlijk het zelfde als 97. Deze zijn te zien in een ASCI table.
* Hierna is een for loop weergegeven die vanaf de char a / int 97 door gaat tot char z / int 122
**/



{
 char c;
 c = 'a';
 printf("%c=%d\n", c, c);
 c = 'z' ;
 printf("%c=%d\n", c, c);
 c = 'a';
 printf("%c %c %c\n", c, c + 1, c + 2);
 for(c = 'a'; c <= 'z'; c ++) {
 printf("%c", c);
 }

 printf("\n");
 system("PAUSE");
 return 0;
}

