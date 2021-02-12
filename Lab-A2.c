#include <stdio.h>

/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: Lars van Megchelen
* Nummer-Student2: 20091052
* Opdracht: A2
* Bronnen: 
* 	
*/

double mathRow(double t1, double v, double n);

int main () {
   double t1, v, n, result;
   
   printf("t1	v	n\n");
   scanf("%lf	%lf	%lf", &t1, &v, &n);
   
   result = mathRow(t1, v, n);
   
   printf("De %.0lfe-term is %.2lf", n, result);
   return(0);
}
double mathRow(double t1, double v, double n) {
	double calc;
	
	calc = t1 + v * (n - 1);
	return(calc);
}
