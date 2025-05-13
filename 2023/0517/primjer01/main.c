#include <stdio.h>

void main(void) {
	int n;
	printf("Unesite neparan broj: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) printf("*");
	printf("\n");
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < n / 2 - i; j++) printf("*");
		for (int k = 0; k < 2 * i + 1; k++) printf(" ");
		for (int j = 0; j < n / 2 - i; j++) printf("*");
		printf("\n");
	}
	for (int i = n / 2 - 2; i >= 0; i--) {
		for (int j = 0; j < n / 2 - i; j++) printf("*");
		for (int k = 0; k < 2 * i + 1; k++) printf(" ");
		for (int j = 0; j < n / 2 - i; j++) printf("*");
		printf("\n");
	}
	for (int i = 0; i < n; i++) printf("*");
	printf("\n");
}

/*
********* 9 0

**** **** 8 1
***   *** 6 3
**     ** 4 5
*       * 2 7

**     ** 4 5
***   *** 6 3
**** **** 8 1

********* 9 0
*/