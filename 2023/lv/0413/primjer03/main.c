//Kalkulator
#include <stdio.h>

void main(void) {
	double a, b;
	char op;
	printf("Unesite prvi broj: ");
	scanf("%lf", &a);
	printf("Unesite operaciju: ");
	scanf(" %c", &op);
	printf("Unesite drugi broj: ");
	scanf("%lf", &b);
	double res;
	switch (op) {
		case '+':
			res = a + b;
			break;
		case '-':
			res = a - b;
			break;
		case '*':
			res = a * b;
			break;
		case '/': {
				if (b == 0) {
					printf("Dijeljenje s nulom nije definisano.\n");
				} else {
					res = a / b;
				}
			}
			break;
		default:
			printf("Pogresan unos.\n");
	}
	printf("Rezultat je: %.2lf\n", res);
}