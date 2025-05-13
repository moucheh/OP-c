#include <stdio.h>

int factorial(int n) {
	if (n >= 1) return n * factorial(n - 1);
	else return 1;
}

void main(void) {
	int a;
	printf("Unesite neki broj: ");
	scanf("%d", &a);
	int fact = factorial(a);
	printf("Faktorijel broja %d je %d\n", a, fact);
}