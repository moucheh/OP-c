// Program koji ispisuje faktorijel nekog broja

#include <stdio.h>

long double factorial(int);

void main(void) {
	int n;
	printf("Unesite neki broj: ");
	scanf("%d", &n);
	while (n <= 0) {
		printf("Unesite ponovo broj: ");
		scanf("%d", &n);
	}
	printf("Faktorijel broja %d iznosi %.0Lf\n", n, factorial(n));
}

long double factorial(int n) {
	long double f = 1.L;
	for (int i = 2; i <= n; i++) {
		f *= i;
	}
	return f;
}