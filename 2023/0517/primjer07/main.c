/*
Ovaj 921 tekst 532 cifre 87
Ovaj IBA tekst ECB cifre HG
*/

#include <stdio.h>

void oplodi(char*);

void main(void) {
	char ch;
	printf("Unesite neku recenicu: ");
	while ((ch = getchar()) != '\n') {
		oplodi(&ch);
		putchar(ch);
	}
	printf("\n");
}

void oplodi(char* c) {
	*c = (*c >= '1' && *c <= '9') ? *c - '1' + 'A' : *c;
}