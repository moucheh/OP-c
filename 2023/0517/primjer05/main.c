#include <stdio.h>

void main(void) {
	char a, b;
	printf("Unesite granice: ");
	scanf("%c %c", &a, &b);
	if (a > b) {
		a = a ^ b;
		b = a ^ b;
		a = a ^ b;
	}
	for (int i = b - a; i >= 0; i--) {
		for (int j = 0; j < i; j++) printf("  ");
		for (int j = a; j <= b - i; j++) printf("%c ", j);
		printf("\n");
	}
}
