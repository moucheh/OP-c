#include <stdio.h>

void main(void) {
	int counter = 0;
	for (int i = 10; i <= 30; i+=2) {
		counter++;
	}
	printf("Na intervalu od 10 do 30 ima %d parnih brojeva.\n", counter);
}