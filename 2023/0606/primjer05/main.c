#include <stdio.h>

#define MAX 10

void main(void) {
	int array1[MAX], array2[MAX];
	int size;
	printf("Unesite broj elemenata: ");
	scanf("%d", &size);
	printf("Unesite elemente prvog niza: ");
	for (int i = 0; i < size; i++) scanf("%d", array1 + i);
	printf("Unesite elemente drugog niza: ");
	for (int i = 0; i < size; i++) scanf("%d", array2 + i);
	int counter = 0;
	for (int i = 0; i < size; i++) {
		if (array1[i] == array2[i]) counter++;
	}
	printf("Broj parova je %d\n", counter);
}