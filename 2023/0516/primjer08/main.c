#include <stdio.h>

void zamijeni(double*, double*);

void main(void) {
	double a, b;
	printf("Unesite dva broja: ");
	scanf("%lf %lf", &a, &b);
	printf("a = %lf b = %lf\n", a, b);
	zamijeni(&a, &b);
	printf("a = %lf b = %lf\n", a, b);
}

void zamijeni(double* pa, double* pb) {
	*pa = *pa + *pb;
	*pb = *pa - *pb;
	*pa = *pa - *pb;
}