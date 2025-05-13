#include <stdio.h>

void float_to_round(float*);

void main(void) {
	float f;
	printf("Unesite neki realan broj: ");
	scanf("%f", &f);
	float_to_round(&f);
	printf("f = %.1f\n", f);
}

void float_to_round(float* x) {
	int result = *x;
	float decimal = *x - result;
	if (*x > 0 && decimal >= 0.5) result++;
	if (*x < 0 && decimal <= -0.5) result--;
	*x = result;
}