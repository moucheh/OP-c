#include <stdio.h>

double harmony(double, double);

void main(void) {
	double x, y;
	printf("Unesite dva broja: ");
	scanf("%lf %lf", &x, &y);
	printf("Harmonijska vrijednost brojeva %.2lf i %.2lf iznosi: %.2lf\n", x, y, harmony(x, y));
}

double harmony(double a, double b) {
	return 2 / (1 / a + 1 / b);
}