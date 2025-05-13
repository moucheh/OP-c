#include <stdio.h>

void main(void) {
	unsigned char a = 5, b = 10, c = 32, x = 3;
	x *= a | ~b&++c / a;
	printf("%d", x);
}