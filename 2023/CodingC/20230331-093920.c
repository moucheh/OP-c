#include <stdio.h>
void main(void) {
	int a = 5, b = 4;
	printf("a = %d\nb = %d\n", a, b);
	a = a ^ b;
	b = a ^ b;
	a = a ^ b;
	printf("a = %d\nb = %d\n", a, b);
}