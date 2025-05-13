/*
r1/r2

r1=a1/b1
r2=a2/b2
proslijedimo razlomke, vratimo realnu vrijednost kolicnika
izvrsit provjeru unosa
*/

#include <stdio.h>

float izracunaj(float, float, float, float);

void main(void) {
	float a1, b1 = 0, a2 = 0, b2 = 0;
	while (b1 == 0) {
		printf("Unesite prvi razlomak, djeljenik ne smije biti nula: ");
		scanf("%f %f", &a1, &b1);
	}
	while (b2 == 0 || a2 == 0) {
		printf("Unesite drugi razlomak, ne smijete unijeti nulu ni za brojnik ni za nazivnik: ");
		scanf("%f %f", &a2, &b2);
	}
	printf("Rezultat je: %f\n", izracunaj(a1, b1, a2, b2));
}

float izracunaj(float a1, float b1, float a2, float b2) {
	float r1 = a1 / b1;
	float r2 = a2 / b2;
	return r1 / r2;
}