#include <stdio.h>
#include <math.h>

#define pi 3.14159

double trig(double value, double (*func)(double)) {
	return func(value * pi / 180);
}

void main(void) {
	int option;
	printf("Izaberite opciju\n"
	       "1. sinus\n"
	       "2. kosinus\n"
	       "3. tanges\n"
	       "4. kotanges\n"
	       "Biram: "
	      );
	scanf("%d", &option);
	double angle;
	printf("Unesite vrijednost ugla u stepenima: ");
	scanf("%lf", &angle);
	char funcName[10];
	double result;
	switch (option) {
		case 1:
			strcpy(funcName, "Sinus");
			result = trig(angle, sin);
			break;
		case 2:
			strcpy(funcName, "Kosinus");
			result = trig(angle, cos);
			break;
		case 3:
			strcpy(funcName, "Tanges");
			result = trig(angle, tan);
			break;
		case 4:
			strcpy(funcName, "Kotanges");
			result = trig(angle, tan);
			result = 1 / result;
			break;
		default:
			printf("Pogresan unos.\n");
	}
	printf("%s ugla %.2lf iznosi: %.3lf\n", funcName, angle, result);
}