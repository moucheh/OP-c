#include <stdio.h>
#include <math.h>

void main(void) {
	int a;
	printf("Unesite broj a: ");
	scanf("%d", &a);
	if (a > 0) {
		printf("Korijen broja je: %lf\n", sqrt(a));
	} else {
		printf("Funckija korijen, nije dobro definisana za negativne vrijednosti!.\n");
	}
}