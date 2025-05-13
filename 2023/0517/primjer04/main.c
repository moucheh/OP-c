#include <stdio.h>

unsigned long bit_count(unsigned long value);

void main(void) {
	unsigned long res = bit_count(15);
	printf("%d\n", res);
}

unsigned long bit_count(unsigned long value) {
	int count = 0;
	for (int i = 0; i < 64; i++) {
		if (value & 1) count++;
		value >>= 1;
	}
	return count;
}