//program za racnunanje povrsine trougla preko Heronovog obrazca

#include <stdio.h>
#include <math.h>

void main(void) {
	double a, b, c;
	printf("Unesite vrijednosti stranica trougla: ");
	scanf("%lf %lf %lf", &a, &b, &c);
	double s = (a + b + c) / 2;
	if (a < 0 || b < 0 || c < 0) {
		printf("Strainca je negativna, ponovite program!\n");
		return;
	}
	if (s > a && s > b && s > c) {
		double P = sqrt(s * (s - a) * (s - b) * (s - c));
		printf("Unijeli ste stranice: %.2lf %.2lf %.2lf\n", a, b, c);
		printf("Povrsina iznosi: %.2lf\n", P);
	} else {
		printf("Trougao se ne zaklapa, ponovite program!\n");
	}

}