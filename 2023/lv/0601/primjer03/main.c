/*
	napraviti funckiju koja ce dva stringa sastaviti (stringAppend)
*/

#include <stdio.h>

#define MAX 100

int scalar_product(int*, int, int*, int);

void main(void) {
	int array1[MAX];
	int array2[MAX];
	int n1;
	int n2;
	printf("Unesite dimenziju niza1, ne vece od %d: ", MAX);
	scanf("%d", &n1);
	while (n1 > MAX || n1 <= 0) {
		printf("Unesite dimenziju niza ponovo: ");
		scanf("%d", &n1);
		fflush(stdin);
	}
	printf("Unesite elemente niza: ");
	for (int i = 0; i < n1; i++) {
		scanf("%d", array1 + i);
	}
	printf("Elementi niza su: ");
	for (int i = 0; i < n1; i++) {
		printf("%d\t", *(array1 + i));
	}
	printf("\n");

	printf("Unesite dimenziju niza2, ne vece od %d: ", MAX);
	scanf("%d", &n2);
	while (n2 > MAX || n2 <= 0) {
		printf("Unesite dimenziju niza ponovo: ");
		scanf("%d", &n2);
		fflush(stdin);
	}
	printf("Unesite elemente niza: ");
	for (int i = 0; i < n2; i++) {
		scanf("%d", array2 + i);
	}
	printf("Elementi niza su: ");
	for (int i = 0; i < n2; i++) {
		printf("%d\t", *(array2 + i));
	}
	printf("\nSkalarni prozivod ova dva niza iznosi: %d\n", scalar_product(array1, n1, array2, n2));
}

int scalar_product(int* array1, int n1, int* array2, int n2) {
	int result = 0;
	if (n1 != n2) {
		printf("Nije moguce izracunati skalarni proizvod.\n");
		return 0;
	}
	for (int i = 0; i < n1; i++) {
		result += array1[i] * array2[i];
	}
	return result;
}