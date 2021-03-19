/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: Lars van Megchelen
* Nummer-Student2: 20091052
*/

#include <stdio.h>
int main(void)
{
 int a[5] = {10, 20, 30, 40, 50};
 int *ptr = a;
 printf("a[0] is %d en staat op adres %x\n", a[0], (long
long)&a[0]);
 printf("a[1] is %d en staat op adres %x\n", a[1], (long
long)&a[1]);
 printf("a[2] is %d en staat op adres %x\n", a[2], (long
long)&a[2]);
 printf("*a is %d en staat op adres %x\n", *a , (long
long)a);
 printf("*(a + 2) is %d en staat op adres %x\n", *(a +
2), (long long)(a + 2));
 printf("*ptr is %d en staat op adres %x\n", *ptr, (long
long)ptr);
 printf("*(ptr + 4) is %d en staat op adres %x\n", *(ptr
+ 4), (long long)(ptr + 4));
 system("PAUSE");
 return 0;
}

