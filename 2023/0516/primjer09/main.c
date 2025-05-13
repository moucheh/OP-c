//sinx cosx tanx
//za x uneseno u radijanima
//koristiti pokazivac na funckiju
#include <stdio.h>
#include <math.h>

#define pi 3.14159

void main(void) {
	double x;
	printf("Unesite vrijednost ugla: ");
	scanf("%lf", &x);
	double (*calc)(double);
	int opcija;
	printf("1. sin(x)\n"
	       "2. cos(x)\n"
	       "3. tan(x)\n"
	       "Izaberite opciju: "
	      );
	scanf("%d", &opcija);
	switch (opcija) {
		case 1:
			calc = sin;
			break;
		case 2:
			calc = cos;
			break;
		case 3:
			calc = tan;
	}
	printf("Rezultat je: %lf\n", calc(x * pi / 180));
}