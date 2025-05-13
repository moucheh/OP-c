#include <stdio.h>

void main(void) {
	int n;
	printf("Unesite broj redova: ");
	scanf("%d", &n);
	char a;
	printf("Unesite neki karakter: ");
	scanf(" %c", &a);
	for (int i = 0; i < n / 2; i++) {
		for (int j = 0; j < n / 2 - i; j++) putchar(' ');
		for (int k = 0; k < 2 * i + 1; k++) putchar(a);
		putchar('\n');
	}
	if (n % 2) {
		for (int i = 0; i < n; i++) putchar(a);
		putchar('\n');
	}
	for (int i = n / 2 - 1; i >= 0; i--) {
		for (int j = 0; j < n / 2 - i; j++) putchar(' ');
		for (int k = 0; k < 2 * i + 1; k++) putchar(a);
		putchar('\n');
	}
	putchar('\n');
}

/*
    *     1  4
   ***    3  3
  *****   5  2
 *******  7  1
********* 9  0
 *******  7  1
  *****   5  2
   ***    3  3
    *     1  4
*/