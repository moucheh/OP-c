#include <stdio.h>

void main(void) {
	int a, b, c;
	printf("Unesite tri broja: ");
	scanf("%d %d %d", &a, &b, &c);
	int min, mid, max;
	min = a;
	if (min > b) min = b;
	if (min > c) min = c;
	max = a;
	if (max < b) max = b;
	if (max < c) max = c;
	mid = a + b + c - min - max;
	printf("%d, %d, %d", min, mid, max);
}