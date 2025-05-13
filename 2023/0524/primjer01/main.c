/* Program koji unosi elemente niza dok korisnik ne unese nulu */

#include <stdio.h>
#define MAX 1000

void multiplyArray(int* array, int size, int n);

void main(void) {
	int array[MAX];
	int input;
	int size = 0;
	printf("Unesite elemente niza: ");
	scanf("%d", &input);
	while (input) {
		printf("Spremam broj %d na lokaciju %d\n", input, size);
		array[size] = input;
		size++;
		if (size == MAX) break;
		scanf("%d", &input);
	}
	int m;
	printf("Unesite broj s kojim mnozite niz: ");
	scanf("%d", &m);
	multiplyArray(array, size, m);
	printf("Elementi niza su:\n");
	for (int i = 0; i < size; i++) printf("%d\t", *(array + i));
	printf("\n");
}

void multiplyArray(int* array, int size, int n) {
	for (int i = 0; i < size; i++) {
		*(array + i) *= n;
	}
}