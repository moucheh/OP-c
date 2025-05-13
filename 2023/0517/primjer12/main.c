/*
2 kolokvij iz matematike 2
Broj slova: 20
Broj ostalih znakova: 6
*/

#include <stdio.h>

void main(void) {
	char ch;
	int letters = 0, other = 0;
	printf("Unesite recenicu: ");
	while ((ch = getchar()) != '\n') {
		if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z') {
			letters++;
			continue;
		}
		other++;
	}
	printf("Broj slova: %d\n"
	       "Broj ostalih znakova je: %d\n",
	       letters,
	       other);
}