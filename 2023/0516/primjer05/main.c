//Napisati program koji racuna i ispisuje elemerne fibonaccijevog niza, koristiti rekurziju
//Koristiti globalne varijable
#include <stdio.h>

int Nmax;

int fibb(int n);

void main(void) {
	printf("Unesite broj elemenata Fibonnacijevog: ");
	scanf("%d", &Nmax);
	for (int i = 0; i <= Nmax; i++) printf("%d\t", fibb(i));
	printf("\n7!=%d\n", factorial(7));
}

int fibb(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibb(n - 1) + fibb(n - 2);
}

int factorial(int n) {
	if (n == 1) return 1;
	return n * factorial(n - 1);
}