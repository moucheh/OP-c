#include <stdio.h>
#include <string.h>

void main(void) {
	int a = 5;
	int* a_ptr = &a;
	printf("\na: %d\n", a);
	*a_ptr = 7;
	printf("\na after adjustment: %d\n\n", a);
}