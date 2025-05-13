#include <stdio.h>

#define MAX 10

void transponuj(int[][MAX], int[][MAX], int*, int*);

void main(void) {
	int matrix[MAX][MAX], transpose[MAX][MAX];
	int r, c;
	printf("Unesite dimenzije matrice: ");
	scanf("%d %d", &r, &c);
	printf("Unesite elemente matrice: ");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			scanf("%d", *(matrix + i) + j);
		}
	}
	printf("Matrica izgleda ovako:\n");
	for (int j = 0; j < c * 5 + 1; j++) printf("-");
	printf("\n|");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%4d|", *(*(matrix + i) + j));
		}
		printf("\n");
		for (int j = 0; j < c * 5 + 1; j++) printf("-");
		printf("\n|");
	}
	transponuj(matrix, transpose, &r, &c);
	printf("Matrica izgleda ovako:\n");
	for (int j = 0; j < c * 5 + 1; j++) printf("-");
	printf("\n|");
	for (int i = 0; i < r; i++) {
		for (int j = 0; j < c; j++) {
			printf("%4d|", *(*(transpose + i) + j));
		}
		printf("\n");
		for (int j = 0; j < c * 5 + 1; j++) printf("-");
		printf("\n|");
	}
}


void transponuj(int matrix[][MAX], int transpose[][MAX], int* r, int* c) {
	int temp;
	for (int i = 0; i < *r; i++) {
		for (int j = 0; j < *c; j++) {
			transpose[j][i] = matrix[i][j];
		}
	}
	temp = *r;
	*r = *c;
	*c = temp;
}