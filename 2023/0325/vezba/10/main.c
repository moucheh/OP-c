#include <stdio.h>

void main(void) {
	int sum = 0;
	for (int i = 1; i < 100; i += 2)
	{
		sum += i;
	}
	printf("Suma svih neparnih brojeva od 1 do 100 iznosi: %d\n", sum);
}