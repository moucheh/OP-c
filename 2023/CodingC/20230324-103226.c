#include <stdio.h>

void saberi(int* a, int* b, int* c) {
	*c = *a + *b;
}

void main(void) {
	int a = 5, b = 10, c;
	saberi(&a, &b, &c);
	printf("%d + %d = %d", a, b, c);
}