#include <stdio.h>
#include <math.h>

#define pi 3.14159265

void polar(double, double, double*, double*);

void main(void) {
	double a, b, moduo, ugao;
	printf("Unesite koordinate kompleksnog broja: ");
	scanf("%lf %lf", &a, &b);
	polar(a, b, &moduo, &ugao);
	ugao = ugao * 180 / pi;
	printf("Unijeli ste broj %.2lf + i*%.2lf, "
	       "njegov polarni oblik izgleda ovako: %.2lf*e^i*%.2lf\n",
	       a, b, moduo, ugao
	      );
}

void polar(double x, double y, double* r, double* fi) {
	*r = sqrt(x * x + y * y);
	*fi = atan2(y, x);
}

/*

Korisnik unese kompleksni broj u obliku a+bi (unosi a i b)

Program vraca kompleksni broj u boliku r*e^i*fi (vraca r i fi)

*/