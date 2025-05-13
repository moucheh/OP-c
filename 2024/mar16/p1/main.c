#include <stdio.h>

int main() {
	int num;
	printf("Unesite neki broj: ");
	scanf("%d", &num);
	char isPrime = 1;
	for (int i = 2; i < num / 2; i++) {
		if (num % i == 0)
			isPrime = 0;
	}
	(isPrime)
	? printf("Broj je prost.\n")
	: printf("Broj je slozen.\n");
	return 0;
}