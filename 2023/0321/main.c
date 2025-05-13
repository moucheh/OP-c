#include <stdio.h>
#include <math.h>

#define PI 3.14159


void main(void) {
	float a;
	printf("Unesite duzinu poluprecnika kruga: ");
	scanf("%f", &a);
	if (a > 0) {
		float P = pow(a, 2) * PI;
		float O = 2 * a * PI;
		printf("Povrsina kruga iznosi: %.2f, a obim: %.2f\n", P, O);
	} else {
		printf("Duzina poluprecnika ne smije biti negativna.\n");
	}
}