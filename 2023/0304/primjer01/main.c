#include <stdio.h>

typedef struct {
	float r;
	float i;
} Complex;

void main(void) {
	Complex A;
	Complex B;
	printf("\n\nUnesite realnu komponentu prvog kompleksnog broja: ");
	scanf("%f", &A.r);
	printf("\nUnesite imaginarnu komponentu prvog kompleksnog broja: ");
	scanf("%f", &A.i);
	printf("\nUnesite realnu komponentu drugog kompleksnog broja: ");
	scanf("%f", &B.r);
	printf("\nUnesite imaginarnu komponentu drugog kompleksnog broja: ");
	scanf("%f", &B.i);
	Complex C;
	C.r = A.r + B.r;
	C.i = A.i + B.i;
	printf("Zbir brojeva %.2f + j%.2f i %.2f + j%.2f iznosi: %.2f + j%.2f", A.r, A.i, B.r, B.i, C.r, C.i);
	printf("\n");
}

