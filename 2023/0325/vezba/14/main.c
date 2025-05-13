#include <stdio.h>

void main(void) {
	printf("Na intervalu od 20 do 100, djeljivi sa 11 su brojevi:\n");
	for (int i = 20; i < 100; ++i)
	{
		if (i == 77) {
			printf("Sedamdeset sedam\n");
			continue;
		}
		if (i % 11 == 0) printf("%d\n", i);
	}
}