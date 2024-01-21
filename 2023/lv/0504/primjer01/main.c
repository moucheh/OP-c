//Program koji ispisuje broj djeljenika broja i kakav je broj po slozenosti

#include <stdio.h>

int num_of_divisors(int);
char isPrime(int);

void main(void) {
	int n;
	printf("Unesite neki broj: ");
	scanf("%d", &n);
	if (n == 1) {
		printf("Broj 1 nije ni prost ni slozen.\n");
		return;
	} else {
		if (isPrime(n)) {
			printf("Broj %d je prost.\n", n);
		} else {
			printf("Broj %d je slozen.\n", n);
		}
	}
	printf("Broj %d ima %d djeljenika.\n", n, num_of_divisors(n));
}

int num_of_divisors(int n) {
	int counter = 0;
	for (int i = 2; i <= n / 2; i++) {
		if (n % i == 0) {
			counter++;
		}
	}
	return counter;
}

char isPrime(int n) {
	return num_of_divisors(n) == 0;
}