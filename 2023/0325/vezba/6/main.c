#include <stdio.h>

void main(void) {
	printf("Kvadrati priodnih brojeva od 2 do 10 su:\n");
	for (int i = 2; i < 10; ++i)
	{
		printf("%d na kvadrat iznosi %d\n", i, i * i);
	}
}