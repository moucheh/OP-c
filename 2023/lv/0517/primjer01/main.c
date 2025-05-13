#include <stdio.h>

void printArray(int*, int);
void inputArray(int*, int);

void main(void) {
	int a[5];
	inputArray(a, 5);
	printf("Elementi niza su:\n");
	printArray(a, 5);
}

void printArray(int* a, int size) {
	for (int i = 0; i < size; i++) printf("%d\t", *(a + i));
	printf("\n");
}

void inputArray(int* a, int size) {
	for (int i = 0; i < size;) {
		printf("Unesite %d-ti element niza: ", i);
		scanf("%d", a + i);
		if (*(a + i) < 0) {
			printf("Nepravilan unos, unesite ponovo.\n");
			continue;
		}
		i++;
	}
}

