//funckija koja vraca apsolutnu vrijednost broja
#include <stdio.h>
#include <math.h>
double aps(double);

void main(void) {
	double a;
	printf("Unesite neki broj: ");
	scanf("%lf", &a);
	printf("|%.2lf| = %.2lf\n", a, aps(a));
}

double aps(double a) {
	return (a >= 0) ? a : -a;
}