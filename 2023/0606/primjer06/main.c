#include <stdio.h>

#define MAX 10

void main(void) {
	int A[MAX][MAX];
	int size;
	printf("Unesite dimenziju matrice: ");
	scanf("%d", &size);
	printf("Unesite elemente matrice: ");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	printf("Matrica izgleda ovako:\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i >= size - 1 - j) {
				printf("%04d\t", A[i][j]);
			} else {
				printf("0000\t");
			}
		}
		printf("\n");
	}
}