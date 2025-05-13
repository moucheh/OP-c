#include <stdio.h>
#include <math.h>

struct point {
	int x;
	int y;
};

typedef struct point Point;

double distance(Point, Point);

void main(void) {
	Point t1, t2;
	printf("Unesite prvu tacku: ");
	scanf("%d %d", &t1.x, &t1.y);
	printf("Unesite drugu tacku: ");
	scanf("%d %d", &t2.x, &t2.y);
	printf("Unijeli ste tacku: %d %d\n", t1.x, t1.y);
	printf("Duzina izmedju tacaka iznosi: %.3lf\n", distance(t1, t2));
}

double distance(Point a, Point b) {
	return sqrt((b.x - a.x) * (b.x - a.x) + (b.y - a.y) * (b.y - a.y));
}