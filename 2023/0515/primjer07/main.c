// karakter
// koliko puta treba odstampat
// broj redova koji treba odstampati

// #include <stdio.h>

// void draw(char, int, int);

// void main(void) {
// 	char ch;
// 	printf("Unesite karakter: ");
// 	scanf("%c", &ch);
// 	int numOfChars;
// 	printf("Unesite broj karaktera: ");
// 	scanf("%d", &numOfChars);
// 	int numOfLines;
// 	printf("Unesite broj linija: ");
// 	scanf("%d", &numOfLines);
// 	draw(ch, numOfChars, numOfLines);
// }

// void draw(char ch, int numOfChars, int numOfLines) {
// 	for (int i = 0; i < numOfLines; i++) {
// 		for (int j = 0; j < numOfChars; j++) {
// 			printf("%c", ch);
// 		}
// 		printf("\n");
// 	}
// }

#include <stdio.h>

void foo(int);

void (*pfoo)(int) = foo;

void suma(double*, double, double);

void main(void) {
	float a = 5.;
	float b = 10.;
	float c = 15.;
	float* pa = &a;
	printf("Na adresi %lu je upisana vrijednost %f\n", pa, *pa);
	pa++; // pa = pa + sizeof(float);
	printf("Na adresi %lu je upisana vrijednost %f\n", pa, *pa);
	pa++; // pa = pa + sizeof(float);
	printf("Na adresi %lu je upisana vrijednost %f\n", pa, *pa);
	foo(69);
	pfoo(420);
	double sume;
	suma(&sume, 44, 25);
	printf("SUme je %lf\n", sume);
}

void foo(int a) {
	printf("Edo je mnogo jak! %d\n", a);
}

void suma(double* suma, double a, double b) {
	*suma = a + b;
}