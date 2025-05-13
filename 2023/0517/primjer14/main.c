/*
program koji pise uneseni broj unazad, ukoliko je broj negativan treba
ispisati da je Broj nije ispravan
3725
5273
*/

#include <stdio.h>

void ispisi_unazad(int);

void main(void) {
	int n;
	printf("Unesite jedan cijeli broj: ");
	scanf("%d", &n);
	(n < 0) ? printf("Broj nije ispravan\n") :
	ispisi_unazad(n);
}

void ispisi_unazad(int n) {
	while (n != 0) {
		printf("%d", n % 10);
		n /= 10;
	}
	printf("\n");
}