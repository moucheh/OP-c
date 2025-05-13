#include <stdio.h>
#include <math.h>

#define PI 3.14159

void main(void) {
	int i = 1, angle;
	double sine;
	while (i == 1) {
		scanf("%d", &angle);
		sine = sin(angle * PI / 180);
		printf("sin(%d)=%.4lf\n", angle, sine);
		scanf("%d", &i);
	}
}