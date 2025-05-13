#include <stdio.h>

void main(void) {
	double x1, y1, x2, y2, x3, y3;
	printf("Unesite koordinate dvije tacke: ");
	scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
	printf("Unesite koordinate nove tacke: ");
	scanf("%lf %lf", &x3, &y3);
	double k, m;
	if (x1 == x2) {
		printf("Tacke imaju iste x koordinate,"
		       " jednacina prave je x = %.2lf\n", x1);
		if (x1 == x3) printf("Tacka je na pravcu.\n");
		else printf("Tacka nije na pravcu\n");
	} else {
		k = (y2 - y1) / (x2 - x1);
		m = -k * x1 + y1;
		//y = k * x + m;
		printf("Jednacina prave glasi: "
		       "y=%.2lf*x + %.2lf\n", k, m);
		if (y3 == (k * x3 + m)) {
			printf("Tacka je na pravoj.\n");
		} else {
			printf("Tacka nije na pravoj.\n");
		}
	}
}