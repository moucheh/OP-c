//program koji racuna korijene kvadratne jednacine

#include <stdio.h>
#include <math.h>

void main(void) {
	float a, b, c;
	printf("Unesite koeficijente kvadratne jednacine ax^2 + bx + c = 0: ");
	scanf("%f %f %f", &a, &b, &c);
	if (a == 0) {
		printf("Jednacina nije kvadratna, ponovite program!\n");
		return;
	}
	float D = sqrt(pow(b, 2) - 4 * a * c);
	float x1, x2;
	if (D == 0) {
		x1 = -b / 2 * a;
		printf("Za koeficijente a=%.2f, b=%.2f, c=%.2f imamo dvojna rijesenja, x1=x2=%.2f\n", a, b, c, x1);
	} else if (D > 0) {
		x1 = (-b + D) / (2 * a);
		x2 = (-b - D) / (2 * a);
		printf("Za koeficijente a=%.2f, b=%.2f, c=%.2f rijesenja jednacine su: x1=%.2f i x2=%.2f \n", a, b, c, x1, x2);
	} else {
		printf("Rjesenja su konjugovano kompleksna.\n");
	}
}
