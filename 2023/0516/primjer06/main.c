//Napisati program koji omugacava korisniku da stepenuje broj s nekim brojem
//napisati funckiju koja prima jedan realni i jedan cijeli broj i vraca jedan realni
#include <stdio.h>

double exponentiate(double, int);

void main(void) {
	double base;
	int exp;
	printf("Unesite bazu i eksponent: ");
	scanf("%lf %d", &base, &exp);
	(base == 0 && exp == 0) ?
	printf("Nije definisano.\n") :
	printf("%.2lf ^ %d = %.2lf\n", base, exp, exponentiate(base, exp));
}

double exponentiate(double b, int e) {
	double result = 1;
	if (e == 0) return 1;
	else if (e > 0) for (int i = 0; i < e; i++) result *= b;
	else for (int i = 0; i < -e; i++) result /= b;
	return result;
}