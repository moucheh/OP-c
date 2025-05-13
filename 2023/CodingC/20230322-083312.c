#include <stdio.h>

void main(void) {
	short a = 10;
	short b = 20;
	short sum = a + b;
	short diff = a - b;
	short pro = a * b;
	short quo = a / b;
	short mod = a % b;
	printf("%d %d %d %d %d\n", sum, diff, pro, quo, mod);
	a += 20;
	b = 50 - 2 * a;
	printf("%d %d\n", a, b);
	a = b = 69;
	printf("%d %d\n", a, b);
	a = 10;
	b = 30;
	printf("a > b = %d", a > b);
}