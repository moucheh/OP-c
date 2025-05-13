#include <stdio.h>

void main(void) {
	char c;
	printf("Unesite recenicu: ");
	while ((c = getchar()) != '\n') {
		switch (c) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				c = c - 'a' + 'A';
				break;
			case 'A':
			case 'E':
			case 'I':
			case 'O':
			case 'U':
				break;
			default:
				if (c >= 'A' && c <= 'Z') c = c - 'A' + 'a';
		}
		putchar(c);
	}
	putchar('\n');
}