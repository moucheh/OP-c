#include <stdio.h>
#include <math.h>

// void main(void) {
// 	double a, b;
// 	printf("Unesite osnovicu jednakokrakog trougla: ");
// 	scanf("%lf", &a);
// 	while (1) {
// 		if (a <= 0) {
// 			printf("Broj koji ste unijeli je negativan ili nula, morat unijeti pozitivan broj: ");
// 			scanf("%lf", &a);
// 		} else break;
// 	}
// 	printf("Unesite krak jednakokrakog trougla: ");
// 	scanf("%lf", &b);
// 	while (1) {
// 		if (b <= 0) {
// 			printf("Broj koji ste unijeli je negativan ili nula, morat unijeti pozitivan broj: ");
// 			scanf("%lf", &b);
// 		} else break;
// 	}
// 	double perimiter = a + 2 * b;
// 	double height = sqrt(pow(b, 2) - pow(a / 2, 2));
// 	double area = a * height / 2;
// 	printf("Visina je: %.2lf\nPovrsina je: %.2lf\nObima je: %.2lf\n", height, area, perimiter);
// }

void main(void) {
	double a, b;
	printf("Unesite stranice jednakokrakog trougla: ");
	scanf("%lf %lf", &a, &b);
	(a < 0) ? a = -a : a;
	(b < 0) ? b = -b : b;
	while (1) {
		if (2 * a <= b) {
			printf("Greska, trougao se ne zatvara, unesite nove vrijednosti: ");
			scanf("%lf %lf", &a, &b);
		} else break;
	}
	double perimiter = a + 2 * b;
	double height = sqrt(pow(b, 2) - pow(a / 2, 2));
	double area = a * height / 2;
	printf("Visina je: %.2lf\nPovrsina je: %.2lf\nObima je: %.2lf\n", height, area, perimiter);
}