#include <stdio.h>

void main(void) {
	int i = 9;
	printf("Priodni brojevi do 9 do 5 su:\n");
	while (i >= 5) {
		printf("%d\t", i);
		i--;
	}
	printf("\n");
}