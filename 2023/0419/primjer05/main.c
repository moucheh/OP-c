#include <stdio.h>

void main(void) {
	printf("Unesite malo slovo: ");
	char a = getchar();
	printf("ASCII vrijednost malog slova %c je %d, a ASCII vrijednost ekvivalentnog velikog slova je %d,"
	       "a ekvivalentno veliko slovo je: %c\n", a, a, a - 'a' + 'A', a - 'a' + 'A');
}