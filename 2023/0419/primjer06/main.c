#include <stdio.h>

void main(void) {
	unsigned char a = 10, b = 5, c = 1, d = 5;
	if (b == a || (c = d)) printf("%x\n", c);
	else printf("%x", a);
}