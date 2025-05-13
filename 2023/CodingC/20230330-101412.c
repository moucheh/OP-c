#include <stdio.h>

void main(void) {
	float x, y, z;
	for (x = 0; x <= 1; x += 0.2) {
		for (y = 0; y <= 1; y += 0.2) {
			z = x * x + y * y;
			printf("%.2f^2 + %.2f^2 = %.2f\n", x, y, z);
		}
		printf("\n");
	}
}