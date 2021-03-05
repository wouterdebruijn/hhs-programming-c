#include <stdio.h>
#include <math.h>

/*
* Naam-Student1: Wouter de Bruijn
* Nummer-Student1: 20180225
* Naam-Student2: Lars van Megchelen
* Nummer-Student2: 20091052
*/

void abc(double a, double b, double c);
double discriminant(double a, double b, double c);

int main(void) {
	
	int times = 0;
	
	// Vraag gebruiker om aantal keer uitvoer
	scanf("%d", &times);
	
	int i;
	for (i=0; i < times; i++) {
		double a;
		double b;
		double c;
		
		
		scanf("%lf %lf %lf", &a, &b, &c);
		
		abc(a, b, c);
	}
}

double discriminant(double a, double b, double c) {
	double returned = pow(b, 2) - 4 * a * c;
	return(returned);
}

void abc(double a, double b, double c) {
	double discr = discriminant(a, b, c);
	
	if (discr < 0) {
		printf("De vergelijking %.4lfx^2 + %.4lfx + %.4lf heeft geen reele oplossingen.\n", a, b, c);
		return;
	}
	
	if (discr == 0) {
		double x = (b * -1 - sqrt(discr)) / (2 * a);
		printf("De oplossing van %.4lfx^2 + %.4lfx + %.4lf is:\n", a, b, c);
		printf("x = %0.4lf\n", x);
		return;
	}
	
	if (discr > 0) {
		double x1 = (b * -1 - sqrt(discr)) / (2 * a);
		double x2 = (b * -1 + sqrt(discr)) / (2 * a);
		printf("De oplossingen van %.4lfx^2 + %.4lfx + %.4lf zijn:\n", a, b, c);
		printf("x1 = %0.4lf, ", x1);
		printf("x2 = %0.4lf\n", x2);
		return;
	}
}


