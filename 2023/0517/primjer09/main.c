/*
    c  2 1
  c D  1 2
C D E  0 3

swap ako je prvi veci od drugog

*/

#include <stdio.h>

void swap(char*, char*);

void main(void) {
	char a, b;
	printf("Unesite granice: ");
	scanf("%c %c", &a, &b);
	if (a > b) swap(&a, &b);
	for (int i = b - a; i >= 0; i--) {
		for (int j = 0; j < i; j++) printf("  ");
		for (int j = a; j <= b - i; j++) printf("%c ", j);
		printf("\n");
	}
}

void swap(char* a, char* b) {
	char temp;
	temp = *a;
	*a = *b;
	*b = temp;
}