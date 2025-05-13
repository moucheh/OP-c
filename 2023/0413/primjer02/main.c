#include <stdio.h>
#include <math.h>

void main(void) {
	long double a;
	printf("Unesite neki decimalni broj: ");
	scanf("%Lf", &a);
	long long integer = a;
	long long decimal = (a - integer) * pow(10, 6);
	while (decimal % 10 == 0) {
		decimal /= 10;
	}
	printf("Vas broj iznosi: %lld.%lld\n", integer, decimal);
}