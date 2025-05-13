#include <stdio.h>

void main(void) {
	int a, b, temp;
	printf("Unesite granice: ");
	scanf("%d i %d", &a, &b);
	if (a > b) {
		temp = a;
		a = b;
		b = temp;
	}
	printf("Brojevi koji su parni i djeljivi sa sedam na intervalu od %d do %d su:\n", a, b);
	for (int i = a; i <= b; i++) {
		if (i % 2 == 0 && i % 7 == 0) {
			printf("%d\t", i);
		}
	}
	printf("\n");
}