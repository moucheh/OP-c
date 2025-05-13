#include <stdio.h>

void main(void) {
	int n, isPrime = 1;
	printf("Unesite neki broj: ");
	scanf("%d", &n);
	if (n < 0) printf("Broj je slozen\n");
	if (n % 2 == 0) {
		printf("Broj je slozen\n");
		return;
	}
	if (n == 0) printf("Broj je slozen\n");
	if (n == 1) {
		printf("Broj 1 je niti prost, niti je slozen\n");
	}
	if (n > 1) {
		for (int i = 3; i < n; i += 2) {
			if (n % i == 0) {
				isPrime = 0;
				break;
			} else {
				isPrime = 1;
			}
		}
		if (isPrime) {
			printf("Broj %d je prost\n", n);
		} else {
			printf("Broj %d je slozen\n", n);
		}
	}
}