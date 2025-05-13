#include <stdio.h>

unsigned long fact(int);
unsigned long choose(int, int);

void main(void) {
	int n;
	printf("Unesite broj redova: ");
	scanf("%d", &n);
	for (int i = 0; i < n; i++) {
		for (int k = 0; k < n - i - 1; k++) printf(" ");
		for (int j = 0; j < n; j++) {
			if (i == 0 && j == 0) continue;
			if (choose(i, j) == 0) continue;
			printf("%lu ", choose(i, j));
		}
		printf("\n");
	}
}

unsigned long fact(int n) {
	long result = 1;
	for (int i = 2; i <= n; i++) {
		result *= i;
	}
	return result;
}

unsigned long choose(int n, int k) {
	return fact(n) / (fact(k) * fact(n - k));
}

/*
      1
     1 1
    1 2 1
   1 3 3 1
  1 4 6 4 1
 1 5 10 10 5 1
1 6 15 20 15 6 1
*/