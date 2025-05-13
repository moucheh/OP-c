#include<stdio.h>

void main(void) {
	printf("\nFibonaccijeva sekvenca: \n");
	int fibb[20];
	fibb[0] = 0;
	fibb[1] = 1;
	for(int i = 2; i < 20; i++)
		fibb[i] = fibb[i-2] + fibb[i-1];
	for(int i = 0; i < 20; i++) {
		if(i == 19) {
			printf("%d ", fibb[i]);
			continue;
		}
		printf("%d ", fibb[i]);
	}
	printf("\n\n");
}