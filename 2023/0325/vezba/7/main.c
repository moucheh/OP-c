#include <stdio.h>

void main(void) {
	int sum = 0;
	for (int i = 1; i <= 5; ++i)
	{
		sum += i;
	}
	printf("Zbir prvih pet prirodnih brojeva iznosi: %d\n", sum);
}
