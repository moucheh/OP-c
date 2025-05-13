#include <stdio.h>

#define pi 3.14159

void circle(float* r, float* o, float* p) {
	*o = 2. * *r * pi;
	*p = *r * *r * pi;
}

void main(void) {
	float r;
	printf("Unesite r: ");
	scanf("%f", &r);
	float p, o;
	circle(&r, &o, &p);
	printf("Za poluprecnik %.2f, "
		   "obim iznosi %.2f, "
		   "a povrisna je %.2f\n",
		   r, o, p);
}