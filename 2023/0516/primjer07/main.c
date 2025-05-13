#include <stdio.h>

int sumanep(int);

void main(void) {
	int n;
	printf("Unesite granicu: ");
	scanf("%d", &n);
	(n % 2 == 0) ?
	printf("Unijeli ste %d, suma neparnih brojeva do %d iznosi: %d\n", n, n, sumanep(n - 1)) :
	printf("Unijeli ste %d, suma neparnih brojeva do %d iznosi: %d\n", n, n, sumanep(n));

}

int sumanep(int n) {
	if (n == 1) return 1;
	return n + sumanep(n - 2);
	// upis  je 9 + 7 + 5 + 3 + 1
}