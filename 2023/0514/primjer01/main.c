#include <stdio.h>

void main(void) {
	int n;
	printf("Unesite broj redova pravouglog trougla: ");
	scanf("%d", &n);
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < n - i - 1; j++) printf("  ");
		for (int k = 0; k < i + 1; k++) printf("* ");
		printf("\n");
	}
}


/*
* * * * *  5 0
  * * * *  4 1
    * * *  3 2
      * *  2 3
        *  1 4
*/