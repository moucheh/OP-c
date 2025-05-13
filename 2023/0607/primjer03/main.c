#include <stdio.h>

#define MAX 10

void main(void) {
	int A[MAX][MAX];
	int n;
	printf("Unesite dimenziju matrice: ");
	scanf("%d", &n);
	printf("Unesite elemente matrice: ");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			scanf("%d", *(A + i) + j);
		}
	}
	int a;
	printf("Unesite indeks kolone po kojoj sortirate: ");
	scanf("%d", &a);
	int temp;
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (A[i][a] < A[j][a]) {
				temp = A[i][a];
				A[i][a] = A[j][a];
				A[j][a] = temp;
			}
		}
	}
	printf("Matrica izgleda ovako:\n");
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n; j++) {
			printf("%d\t", *(*(A + i) + j));
		}
		printf("\n");
	}
}