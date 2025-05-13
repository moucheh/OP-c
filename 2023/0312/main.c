#include <stdio.h>

long double factorial(int);

void main(void) {
	printf("Faktorijel\n");
	long double array[10];
	for(int i = 0; i<10; i++) {
		array[i] = factorial(i+1);
	}
	for(int i=0;i<10;i++) {
		printf("%d = %.0Lf\n",i,array[i]);
	}
	printf("\n");
}

long double factorial(int a) {
	long double result = 1;
	for(int i=2;i<a;i++) {
		result*=i;
	}
	return result;
}