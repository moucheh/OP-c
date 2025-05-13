#include <stdio.h>

void main(void) {
	int sum = 0;
	for (int i = 1; i <= 30; ++i)
	{
		if (i % 6 == 0) sum += i;
	}
	printf("Zbir svih priodnih brojeva od 1 do 30 koji su djeljivi sa 6 iznosi: %d\n", sum);
}