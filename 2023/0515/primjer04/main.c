//program koji stepenuje neki realan broj sa brojem 3
#include <stdio.h>

float kub(float);

void main(void) {
	float n;
	printf("Unesite broj n: ");
	scanf("%f", &n);
	printf("Kub broja %.2f iznosi: %.2f\n", n, kub(n));
}

float kub(float n) {
	return n * n * n;
}