#include <stdio.h>

int ispis(int, int, int);

void suma(int*, int);

int main() {
	printf("Unesite prvi clan geometrijskog niza: ");
	int a_0;
	scanf("%d", &a_0);
	printf("Unesite broje elemenata geometrijskog niza: ");
	int n;
	scanf("%d", &n);
	printf("Unesite kolicnik geometrijskog niza: ");
	int q;
	scanf("%d", &q);

	int result = ispis(a_0, n, q);

	printf("Suma je %d\n", result);

	return 0;
}

int ispis(int prvi, int n, int q) {
	int sum = 0;

	for (int i = 0; i < n; ++i) {
		printf("%d ", prvi);
		suma(&sum, prvi);
		prvi *= q;
	}

	putchar('\n');

	return sum;
}

void suma(int* ptr, int add) {
	*ptr += add;
}
