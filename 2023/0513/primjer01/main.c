#include <stdio.h>

void main(void) {
	int n;
	printf("Unesite sirinu srca: ");
	scanf("%d", &n);
	for (int i = 0; i < n / 2 ; i++) {
		for (int j = 0; j < n / 2 - i; j++) printf(" ");
		for (int k = 0; k < i + 1; k++) printf("* ");
		for (int u = 0; u < n - 2 - 2 * i - n % 2; u++) printf(" ");
		for (int t = 0; t < i + 1; t++) printf("* ");
		printf("\n");
	}
	for (int i = 0; i < n; i++) printf("* ");
	printf("\n");
	for (int i = 0; i < n - 1; i++) {
		for (int k = 0; k < i + 1; k++) printf(" ");
		for (int j = 0; j < n - 1 - i; j++) printf("* ");
		printf("\n");
	}
}

/*
     *         *       5 1 8 1
    * *       * *      4 2 6 2
   * * *     * * *     3 3 4 3
  * * * *   * * * *    2 4 2 4
 * * * * * * * * * *   1 5 0 5
* * * * * * * * * * *  0  11
 * * * * * * * * * *   1  10
  * * * * * * * * *    2  9
   * * * * * * * *     3  8
    * * * * * * *      4  7
     * * * * * *       5  6
      * * * * *        6  5
       * * * *         7  4
        * * *          8  3
         * *           9  2
          *           10  1
*/