//Napisati program koji racuna broj djeljitlja nekog broja
//Implementirati funkciju koja prima jedan broj i vraca broj djeljenika

#include <stdio.h>

int numOfDivisors(int);

void main(void) {
	int n;
	printf("Unesite neki broj: ");
	scanf("%d", &n);
	printf("Broj %d ima %d djeljenika.\n", n, numOfDivisors(n));
}

int numOfDivisors(int n) {
	int result = 0;
	for (int i = 2; i < n; i++) {
		if (n % i == 0) result++;
	}
	return result;
}