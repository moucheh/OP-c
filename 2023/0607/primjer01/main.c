#include <stdio.h>

#define MAX 10

void printMatrix(int[][MAX], int, int);

void main(void) {
	int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];
	int m, n, p, q;
	printf("Unesite dimenzije prve matrice: ");
	scanf("%d %d", &m, &n);
	printf("Unesite dimenzije druge matrice: ");
	scanf("%d %d", &p, &q);
	if (n != p) {
		printf("Greska, broj kolona prve matrice mora"
		       "biti jednak broju redova druge matrice!\n"
		       "Pokrenite program ponovo.\n");
		return;
	}
	printf("Unesite elemente prve matrice: ");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", &A[i][j]);
		}
	}
	printf("Unesite elemente druge matrice: ");
	for (int i = 0; i < p; i++) {
		for (int j = 0; j < q; j++) {
			scanf("%d", &B[i][j]);
		}
	}
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < q; j++) {
			C[i][j] = 0;
			for (int k = 0; k < n; k++) {
				C[i][j] += A[i][k] * B[k][j];
			}
		}
	}
	printf("Matrica A izgleda ovako:\n");
	printMatrix(A, m, n);
	printf("Matrica B izgleda ovako:\n");
	printMatrix(B, p, q);
	printf("Matrica C izgleda ovako:\n");
	printMatrix(C, m, q);
}

void printMatrix(int matrix[][MAX], int rows, int cols) {
	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {
			printf("%2d\t", matrix[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}