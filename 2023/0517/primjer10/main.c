/*
unos lajne, ispisuje na ekran lajnu
Ovaj 921 tekst 532 ima cifre 87
Ovaj IBA tekst ECB ima cifre HG
*/
#include <stdio.h>

void main(void) {
	char ch;
	printf("Unesite neku recenicu:\n");

	while ((ch = getchar()) != '\n') {
		if (ch >= '1' && ch <= '9') {
			putchar(ch - '1' + 'A');
			continue;
		}
		putchar(ch);
	}
	putchar('\n');
}