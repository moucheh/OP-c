#include <stdio.h>

void main(void) {
	int a[5] = {1, 2, 3, 4, 5};
	int* pa = a;
	for (int i = 0; i < 5; i++) {
		printf("%d\t", *pa++);
	}
}