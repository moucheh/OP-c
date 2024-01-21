// Moj skan EF

#include <stdio.h>

void myscanf(int*);

void main(void) {
	int a = 10;
	printf("Unesite neki broj: ");
	myscanf(&a);
	printf("Unijeli ste: %d\n", a);
}

void myscanf(int* pa) {
	char c = getchar();
	*pa = 0;
	int sign = 1;
	while (c == ' ' || c == '\n' || c == '\t') c = getchar();
	if (c == '+') c = getchar();
	else if (c == '-') {
		c = getchar();
		sign = -1;
	}
	while (c >= '0' && c <= '9') {
		c -= '0';
		*pa = *pa * 10 + c;
		c = getchar();
	}
	*pa *= sign;
}