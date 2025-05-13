#include <stdio.h>

void printhello() {
	printf("hello\n");
}

int *suma(int* a, int *b) {
	int* p = (int *)malloc(sizeof(int));
	// int* p;
	*p = (*a) + (*b);
	return p;
}

void main(void) {
	int a = 5, b = 8;
	int* p = suma(&a, &b);
	printhello();
	printf("Suma: %d\n", *p);
}