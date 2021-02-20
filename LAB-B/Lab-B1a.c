#include <stdio.h>

/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: Lars van Megchelen
* Nummer-Student2: 20091052
* Opdracht: B1
*/

int main(void)
{
 int i;
 short j = 20000;
 int k = 20000;
 int l = 2000000000;
 long m = 2000000000;
 printf("i=%d\n", i);
 printf("j=%d, k=%d, l=%d, m=%d\n", j, k, l, m);
 j = 2 * j, k = 2 * k, l = 2 * l, m = 2 * m;
 printf("2*j=%d, 2*k=%d, 2*l=%d, 2*m=%d\n", j, k, l, m);
 system("PAUSE");
 return 0 ;
}
