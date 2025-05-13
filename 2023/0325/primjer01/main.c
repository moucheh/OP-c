#include <stdio.h>

int factorial(int num) {
	int result = 1;
	for (int i = 2; i <= num; i++) {
		result *= i;
	}
	return result;
}

void main(void) {
	FILE *stream;
	stream = fopen("output.txt", "w+");
	int fact[10];
	for (int i = 0; i < 10; i++) {
		fact[i] = factorial(i);
	}
	fprintf(stream, "Faktorijeli prvih deset cijelih brojeva iznose:\n");
	for (int i = 0; i < 10; i++) {
		fprintf(stream, "%d!=%d\n", i, fact[i]);
	}
	printf("Program je izvrsen.\n");
	fclose(stream);
}