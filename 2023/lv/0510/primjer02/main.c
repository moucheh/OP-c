#include <stdio.h>

void main(void) {
	int na[10] = {};

	// for (int i = 0; i < 10; i++) {
	// 	*(na + i) = (i + 1) * 10;
	// }
	for (int i = 0; i < 10; i++) printf("%d\t", *(na + i));
	putchar('\n');
}