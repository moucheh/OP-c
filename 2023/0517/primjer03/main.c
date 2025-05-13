#include <stdio.h>

void main(void) {
	int n;
	printf("Unesite broj redova trougla: ");
	scanf("%d", &n);
	for (int i = 0; i < n - 1; i++) {
		for (int j = 0; j < n - i - 1; j++) printf(" ");
		if (i == 0) {
			printf("*\n");
			continue;
		} else if (i == 1) {
			printf("* *\n");
		} else {
			printf("* ");
			for (int j = 0; j < 2 * i - 3; j++) printf("*");
			printf(" *\n");
		}
	}
	for (int i = 0; i < n * 2 - 1; i++) printf("*");
	printf("\n");
}

/*
unos: 7

      *
     * *
    * * *
   * *** *
  * ***** *
 * ******* *
*************

*/