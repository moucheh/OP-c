#include <stdio.h>
#include <math.h>

void main(void) {
	char a;
	printf("Unesite broj: ");
	scanf("%d", &a);
	int res = a ^ 128;
	res = res >> 7;
	switch (res) {
		case 0:
			printf("Broj je negativan\n");
			break;
		case 1:
			printf("Broj je pozitivan ili nula\n");
			break;
	}
}
