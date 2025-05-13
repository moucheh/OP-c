#include <stdio.h>
#include <math.h>

#define pi 3.14159

double sinus(int);

void main(void) {
	printf("Sinusi uglova od 0 do 90 sa korakom od 5 iznose:\n"
	       "________________________________________________\n");
	for (int i = 0; i <= 90; i += 5) printf("sin(%2d) = %.3f\n", i, sinus(i));
}

double sinus(int angle) {
	return sin(angle * pi / 180.);
}

