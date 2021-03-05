#include <stdio.h>

int doe_iets(double x);

int main(void) {
	printf("%d\n", doe_iets(8));
 	system("PAUSE");
	return 0;
}

int doe_iets(double x ) {
	return ( x + 1) - 1;
}

