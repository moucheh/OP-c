//Program koji pretvara kompleksni broj zadan u algebarskom obliku u eksponencijalni oblik
#include <stdio.h>
#include <math.h>
#define pi 3.14159

void convert(double, double, double*, double*);

void main(void) {
	double x, y;
	printf("Unesite x, y: ");
	scanf("%lf %lf", &x, &y);
	double r, phi;
	convert(x, y, &r, &phi);
	printf("r = %.2lf\nphi = %.2lf\n", r, phi);
	printf("Z = %.2lf + j%.2lf = %.2lf*e^j%.2lf\n", x, y, r, phi);
}

void convert(double x, double y, double* r, double* phi) {
	*r = sqrt(x * x + y * y);
	*phi = atan2(y, x) * 180 / pi;
}