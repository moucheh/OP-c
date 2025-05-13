#include <stdio.h>
#include <math.h>

#define pi 3.14159

typedef struct {
	double r;
	double phi;
} Polar;

typedef struct {
	double x;
	double y;
} Point;

Polar convertToPolar(Point);

void main(void) {
	Point t1;
	printf("Unesite tacku: ");
	scanf("%lf %lf", &t1.x, &t1.y);
	Polar t2 = convertToPolar(t1);
	printf("Polarne koordinate: r=%.3lf phi=%.3lf\n", t2.r, t2.phi);
}

Polar convertToPolar(Point t1) {
	Polar t2;
	t2.r = sqrt(t1.x * t1.x + t1.y * t1.y);
	t2.phi = atan2(t1.y, t1.x) * 180 / pi;
	return t2;
}