#include <stdio.h>

char lower(char);

void main(void) {
	char ch;
	printf("Unesite jednu recenicu: ");
	while ((ch = getchar()) != '\n') putchar(lower(ch));
	putchar('\n');
}

char lower(char a) {
	return (a >= 'A' && a <= 'Z') ? a - 'A' + 'a' : a;
}

