#include <stdio.h>

void main(void) {
	float a = 0.1;
	printf("Varijabla a je: %.10f\n", a);
	float b = 0.3;
	printf("Varijabla b je: %.10f\n", b);
	printf("0.3 == 3 * 0.1 = %d\n", b == 3 * a);
}