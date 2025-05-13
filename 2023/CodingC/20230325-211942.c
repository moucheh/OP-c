#include <stdio.h>

void main(void) {
	int counter = 0;
	char sent[50];
	printf("Unesite recenicu, tacka oznacava zavrsetak:\n");
	char a = getchar();
	while (a != '.' && a != '!' && a != '?') {
		if (a >= 'a' && a <= 'z')
			a = a - 'a' + 'A';
		sent[counter] = a;
		a = getchar();
		++counter;
	}
	printf("Recenica je: \n");
	puts(sent);
}