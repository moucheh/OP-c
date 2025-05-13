#include <stdio.h>

void main(void) {
	int a = 1050;
	int b = 2023;
	//int temp = a;
	//a = b;
	//b = temp;
	printf("%d %d \n", a, b);
	a = a + b;
	b = a - b;
	a = a - b;
	printf("%d %d \n", a, b);
	a = 2023;
	int c = a - (a / 2) * 2;
	printf("%d\n", c);
	a = 1050;
	a = a & 1;
	printf("%d\n", a);
}