#include <stdio.h>
#include <math.h>

void main(void) {
	int sum = 0;
	for (int i = 5; i <= 15; i += 2)
	{
		sum += pow(i, 3);
	}
	printf("Suma svih kubova neparnih brojeva od 5 do 15 iznosi: %d\n", sum);
}