#include <stdio.h>

void main(void) {
	unsigned char a, b, c, x;
	a = 14;
	b = 28;
	c = 7;
	x = (b >> 1) == a & a ^ c | c >> 1;
	printf("%d\n", x);
	// x = 7
	//00001110
	//00000001
	//00000000
	//00000111
	//00000111
	//00000011
	//00000111
}