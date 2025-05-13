/*
program trazi od korisnika karakter sa tastature
dok ne bude slovo
funckija kojoj se prosljedjuje to slovo
funckija treba da izbroji suglasnike i samoglasnike
za 'D' ili 'd' ispisi
a
b
c
Broj samoglasnika je 1, a suglasnika je 2
*/

#include <stdio.h>

void ispisi(char);

void main(void) {
	char ch;

	printf("Unesite karakter: ");
	scanf("%c", &ch);
	while (!(ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')) {
		printf("Morate unijeti karakter ponovo: ");
		scanf(" %c", &ch);
	}
	ispisi(ch);

}

void ispisi(char c) {
	int vowels = 0, other = 0;
	c = (c >= 'A' && c <= 'Z') ? c - 'A' + 'a' : c;
	for (int i = 'a'; i < c; i++) {
		printf("%c\n", i);
		switch (i) {
			case 'a':
			case 'e':
			case 'i':
			case 'o':
			case 'u':
				vowels++;
				break;
			default:
				other++;
		}
	}
	printf("Broj samoglasnika je %d, a suglasnika je %d\n", vowels, other);
}