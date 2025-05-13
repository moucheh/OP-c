#include <stdio.h>

void main(void) {
	char c;
	printf("Unesite neko veliko slovo: ");
	scanf("%c", &c);

	for (int i = 0; i < c - 'A' + 1; i++) {
		for (int j = c; j > 'A' + i; j--) printf("%c", j);
		for (int k = 'A'; k < 'A' + i; k++) printf("%c", k);
		for (int l = 'A' + i; l >= 'A'; l--) printf("%c", l);
		for (int u = 'A' + i + 1; u <= c; u++) printf("%c", u);
		printf("\n");
	}
}

/*
EDCB  A BCDE
EDC A BA CDE
ED AB CBA DE
E ABC DCBA E
 ABCD EDCBA
*/