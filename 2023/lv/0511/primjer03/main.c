/*
Program koji unosi karaktere sve dok korisnik ne unese nulu
izbrojati koliko je korisnik unio samoglasnika, suglasnika i praznih mjesta
*/

#include <stdio.h>
#include <ctype.h>

char isVowel(char);
char isBlank(char);
char isAlpha(char);

void main(void) {
	char c;
	int vowels = 0, consonants = 0, spaces = 0;
	printf("Unesite neku recenicu: ");
	while ((c = getchar()) != '0') {
		if (isBlank(c)) {
			spaces++;
			continue;
		}
		if (isAlpha(c)) {
			if (isVowel(c)) {
				vowels++;
			} else {
				consonants++;
			}
		}
	}
	printf("Samoglasnici: %d\nSuglasnici: %d\nPrazna mjesta: %d\n", vowels, consonants, spaces);
}

char isVowel(char c) {
	c = tolower(c);
	switch (c) {
		case 'a':
		case 'e':
		case 'i':
		case 'o':
		case 'u':
			return 1;
		default:
			return 0;
	}
}

char isBlank(char c) {
	switch (c) {
		case ' ':
		case '\n':
		case '\t':
			return 1;
		default:
			return 0;
	}
}

char isAlpha(char c) {
	c = tolower(c);
	if (c >= 'a' && c <= 'z') return 1;
	return 0;
}