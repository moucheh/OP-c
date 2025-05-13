#include <stdio.h>

void main(void) {
	int n;
	printf("Unesite broj redova: ");
	scanf("%d", &n);
	for (int i = n - 1; i >= 0; i--) {
		for (int j = 0; j < i + 1; j++) printf(" ");
		for (int j = 1; j < n - i; j++) printf("%d", j);
		printf("1");
		for (int j = n - i - 1; j >= 1; j--) printf("%d", j);
		printf("\n");
	}
}


/*
unos: 5

    1      4
   111     3
  12121    2
 1231321   1
123414321  0
*/