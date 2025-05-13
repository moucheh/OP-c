#include <stdio.h>

#define MAX 20

double calc(int[][MAX], int, int);

void main(void) {
	int A[MAX][MAX];
	int m, n;
	printf("Unesite dimenzije matrice: ");
	scanf("%d %d", &m, &n);
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", *(A + i) + j);
		}
	}
	printf("Matrica izgleda ovako:\n");
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d\t", A[i][j]);
		}
		printf("\n");
	}
	printf("Srednja vrijednost iznosi: %.3lf\n", calc(A, m, n));
}

double calc(int A[][MAX], int m, int n) {
	double sum = 0.;
	int counter = 0;
	for (int i = 0; i < m; i++) {
		for (int j = 0; j < n; j++) {
			if ((i + j) % 3 == 0) {
				sum += A[i][j];
				counter++;
			}
		}
	}
	return sum / counter;
}