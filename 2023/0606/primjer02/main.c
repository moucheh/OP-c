#include <stdio.h>

void main(void) {
	int array[8];
	printf("Unesite elemente niza: ");
	for (int i = 0; i < 8; i++) scanf("%d", array + i);
	printf("Niz unazad izgleda ovako: \n");
	for (int i = 7; i >= 0; i--) printf("%d\t", *(array + i));
	printf("\n");
}