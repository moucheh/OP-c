#include <stdio.h>

void main(void) {
	int n;
	printf("Unesite sirinu trogula: ");
	scanf("%d", &n);
	for (int i = 0; i < n + 2; i++) printf("*");
	printf("\n");
	for (int i = 0; i < n / 2 + 1; i++) {
		for (int j = 0; j < n / 2 + 1 - i; j++) printf("*");
		for (int j = 0; j < 2 * i + 1; j++) printf(" ");
		for (int j = 0; j < n / 2 + 1 - i; j++) printf("*");
		printf("\n");
	}
	for (int i = 0; i < n + 2; i++) printf("*");
	printf("\n");
}

/*
unos 7:
********* 9 0
**** **** 8 1
***   *** 6 3
**     ** 4 5
*       * 2 7
********* 9 0
*/