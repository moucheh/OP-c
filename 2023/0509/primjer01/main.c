#include <stdio.h>

void main(void) {
	int n;
	printf("Unesite broj redova: ");
	scanf("%d", &n);
	for (int i = 0; i <= n / 2; i++) {
		for (int j = 0; j < n / 2 - i; j++) printf(" ");
		for (int k = 0; k < i + 1; k++) printf("8===D ");
		printf("\n");
	}
	for ( int i = 0; i < n / 2; i++) {
		for (int j = 0; j < i + 1; j++) printf(" ");
		for (int k = 0; k < n / 2 - i; k++) printf("8===D ");
		printf("\n");
	}
}

/*
    *      1 4
   * *     2 3
  * * *    3 2
 * * * *   4 1
* * * * *  5 0
 * * * *   4 1
  * * *    3 2
   * *     2 3
    *      1 4
*/