#include <stdio.h>

void main(void) {
	int sum = 0;
	for (int i = 2; i <= 20; i += 2)
	{
		sum += i;
	}
	printf("Suma prvih deset prirodnih brojeva iznosi: %d\n", sum);
}