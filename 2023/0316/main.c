#include <stdio.h>
#include <math.h>

void main(void) {
	float a, b;
	printf("Unesite jedan broj: ");
	scanf("%f", &a);
	if (a) {
		b = sqrt(a);
		printf("Broj je pozitivan.\n");
		printf("Korijen broja %.2f iznosi: %.2f\n", a, b);
	} else {
		printf("Broj je negativan i nema vrijednost za funckiju korijena!\n");
	}
	b = a * a;
	printf("Kvadrat broja %.2f iznosi: %.4f\n", a, b);
}