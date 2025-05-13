#include <stdio.h>

void main(void) {
	double Ci, Ce;
	int n;
	while (n <= 0) {
		printf("Unesite broj kapaciteta (mora biti veci od nule): ");
		scanf("%d", &n);
	}
	for (int i = 0; i < n; i++) {
		printf("Unesite vrijednost %d. kapaciteta: ", i + 1);
		scanf("%lf", &Ci);
		Ce += 1 / Ci;
	}
	Ce = 1 / Ce;
	printf("Ekvivalentna vrijednost kapaciteta iznosi: %.2lf [F]\n", Ce);
}
