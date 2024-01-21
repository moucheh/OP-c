#include <stdio.h>

void draw(int n);

void main(void) {
	int n;
	printf("Unesite dimenzije piramide: ");
	scanf("%d", &n);
	if (n <= 0) {
		printf("Nedozvoljena vrijendost\n");
		return;
	}
	draw(n);
}

void draw(int n) {
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < n - 1 - i; j++) {
			putchar(' ');
		}
		for (int k = 0; k < 2 * i + 1; k++) {
			putchar('*');
		}
		putchar('\n');
	}
}