#include <stdio.h>

/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: …
* Nummer-Student2: …
* Opdracht: A
* Bronnen: 
* 	C - F Formula: https://www.almanac.com/content/temperature-conversion#:~:text=C%C2%B0%20to%20F%C2%B0,%2F5)%20and%20add%2032.
*/

double askTemp(void);
double cToF(double celsius);
double cToK(double celsius);


int main () {
   double tempC;
   double tempF;
   double tempK;
   
   printf("What is the temperature in Celsius?\n");
   
   tempC = askTemp();
   tempF = cToF(tempC);
   tempK = cToK(tempC);
   
   printf("C	K	F\n");
   printf("%.2lf	%.2lf	%.2lf", tempC, tempK, tempF);  
   
   return(0);
}

 double askTemp(void) {
	double input;
	
	scanf("%lf", &input);
	
	return(input);
}

double cToF(double celsius ) {
	double result;
	result = celsius * 1.8 + 32;
	return(result);
}

double cToK(double celsius ) {
	double result;
	result = celsius + 273.15;
	return(result);
}
