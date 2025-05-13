#include <stdio.h>

void main(void) {
	int n;
	printf("Unesite broj redova: ");
	scanf("%d", &n);
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < n / 2 - i; j++) printf(" ");
		for (int k = 0; k < 2 * i + 1; k++) printf("*");
		printf("\n");
	}
	if (n % 2) {
		for (int i = 0; i < n; i++) printf("*");
		printf("\n");
	}
	for (int i = n / 2 - 1; i >= 0; i--) {
		for (int j = 0; j < n / 2 - i; j++) printf(" ");
		for (int k = 0; k < 2 * i + 1; k++) printf("*");
		printf("\n");
	}
	printf("\n");
}