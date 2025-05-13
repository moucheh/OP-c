#include <stdio.h>

#define MAX 100

void main(void) {
	int array[MAX];
	int size, sum_odd = 0, sum_even = 0;
	printf("Unesite broj elemenata: ");
	scanf("%d", &size);
	printf("Unesite elemente niza: ");
	for (int i = 0; i < size; i++) {
		scanf("%d", array + i);
		if (i % 2) sum_odd += *(array + i);
		else sum_even += *(array + i);
	}
	printf("Suma elemenata parnih indeksa iznosi: %d\n"
	       "Suma elemenata neparnih indeksa iznosi: %d\n",
	       sum_even, sum_odd);
}