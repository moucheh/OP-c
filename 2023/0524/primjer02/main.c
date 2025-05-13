#include <stdio.h>

#define MAX	10

void printMatrix(int[][MAX], int size);

void main(void) {
	int size, sum_main = 0, sum_sec = 0;
	int matrix[MAX][MAX];
	printf("Unesite dimenziju matrice (mora biti manja od 10): ");
	scanf("%d", &size);

	while (size <= 0 || size > 10) {
		printf("Unesite dimenziju matrice (mora biti manja od 10): ");
		scanf("%d", &size);
		fflush(stdin);
	}

	printf("Unesite elemente matrice:\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			scanf("%d", *(matrix + i) + j);
		}
	}
	printf("\nMatrica izgleda ovako:\n");
	printMatrix(matrix, size);

	printf("\nElementi glavne dijagonale su: \n");
	for (int i = 0; i < size; i++) {
		printf("%2d\t", *(*(matrix + i) + i));
		sum_main += *(*(matrix + i) + i);
	}

	printf("\n\nElementi glavne matrice ispisani matricno:\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == j) {
				printf("%2d\t", *(*(matrix + i) + j));
				continue;
			}
			printf("  \t");
		}
		printf("\n");
	}

	printf("\nElementi ispod glavne dijagonale (ukljucujuci glavnu dijagonalu):\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i >= j) {
				printf("%2d\t", *(*(matrix + i) + j));
				continue;
			}
			printf("  \t");
		}
		printf("\n");
	}

	printf("\nElementi ispod glavne dijagonale:\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i > j) {
				printf("%2d\t", *(*(matrix + i) + j));
				continue;
			}
			printf("  \t");
		}
		printf("\n");
	}

	printf("\nElementi iznad glavne dijagonale (ukljucujuci glavnu dijagonalu):\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i <= j) {
				printf("%2d\t", *(*(matrix + i) + j));
				continue;
			}
			printf("  \t");
		}
		printf("\n");
	}

	printf("\nElementi iznad glavne dijagonale:\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i < j) {
				printf("%2d\t", *(*(matrix + i) + j));
				continue;
			}
			printf("  \t");
		}
		printf("\n");
	}

	printf("\nElementi sporedne dijagonale su: \n");
	for (int i = 0; i < size; i++) {
		printf("%2d\t", *(*(matrix + i) + size - 1 - i));
		sum_sec += *(*(matrix + i) + size - 1 - i);
	}

	printf("\n\nElementi sporedne dijagonale ipisani matricno\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i == size - 1 - j) {
				printf("%2d\t", *(*(matrix + i) + j));
				continue;
			}
			printf("  \t");
		}
		printf("\n");
	}

	printf("\nElementi ispod sporedne dijagonale (ukljucujuci sporednu dijagonalu):\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i >= size - 1 - j) {
				printf("%2d\t", *(*(matrix + i) + j));
				continue;
			}
			printf("  \t");
		}
		printf("\n");
	}

	printf("\nElementi ispod sporedne dijagonale:\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i > size - 1 - j) {
				printf("%2d\t", *(*(matrix + i) + j));
				continue;
			}
			printf("  \t");
		}
		printf("\n");
	}

	printf("\nElementi iznad sporedne dijagonale (ukljucujuci sporednu dijagonalu):\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i <= size - 1 - j) {
				printf("%2d\t", *(*(matrix + i) + j));
				continue;
			}
			printf("  \t");
		}
		printf("\n");
	}

	printf("\nElementi iznad sporedne dijagonale:\n");
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			if (i < size - 1 - j) {
				printf("%2d\t", *(*(matrix + i) + j));
				continue;
			}
			printf("  \t");
		}
		printf("\n");
	}

	printf("\nSuma elemenata na glavnoj dijagonali iznosi: %d\n"
	       "Suma elemenata na sporednoj dijagonali iznosi: %d\n",
	       sum_main, sum_sec);
}

void printMatrix(int matrix[][MAX], int size) {
	for (int i = 0; i < size; i++) {
		for (int j = 0; j < size; j++) {
			printf("%2d\t", *(*(matrix + i) + j));
		}
		printf("\n");
	}
}