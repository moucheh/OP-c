#include <stdio.h>

void main(void) {
	int i, j;
	float x;
	i = (int)(3.5 * 5.5) % 2 + 2.1; //3
	j = i * (float)11 / 4; //8
	x = (float)(j * 11 / 4); // 22.000000
	printf("i = %d j = %d x = %f\n", i, j, x);
}