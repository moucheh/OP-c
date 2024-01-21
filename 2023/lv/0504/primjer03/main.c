// Program koji ispisuje vrijednost stepena
#include <stdio.h>

double power(double, int);

void main(void) {
	int exponent;
	double base;
	printf("Unesite neki broj i njegov eksponent: ");
	scanf("%lf %d", &base, &exponent);
	(base == 0 && exponent == 0) ?
	printf("Nedefinisan izraz.\n") :
	printf("%.2lf na %d iznosi: %lf\n", base, exponent, power(base, exponent));
}

double power(double b, int e) {
	double result = 1;
	if (e == 0) {
		return result;
	} else if (e > 1) {
		for (int i = 0; i < e; i++) {
			result *= b;
		}
		return result;
	} else {
		for (int i = 0; i < -e; i++) {
			result /= b;
		}
		return result;
	}
}