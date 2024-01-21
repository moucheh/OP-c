#include <stdio.h>

void draw(char, char);

void main(void) {
	char a, b;
	printf("Unesite mala slova engleskog alfabeta: ");
	scanf("%c %c", &a, &b);
	draw(a, b);
}

void draw(char a, char b) {
	for (int i = b - a; i >= 1 ; i--) {
		for (int j = 0; j < i; j++) {
			printf("  ");
		}
		for (int k = a + i; k != b + 1; k++) {
			printf("%c ", k);
		}
		putchar('\n');
	}
	for (int i = a; i <= b; i++) {
		printf("%c ", i);
	}
	putchar('\n');
	for (int i = 1; i <= b - a; i++) {
		for (int j = 0; j < i; j++) {
			printf("  ");
		}
		for (int k = a + i; k != b + 1; k++) {
			printf("%c ", k);
		}
		putchar('\n');
	}
}