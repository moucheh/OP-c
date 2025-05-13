#include <stdio.h>

void izmijeniKaraktere(char*);

void main(void) {
	char str[30];
	printf("Unesite neki string: ");
	scanf("%29s", str);
	printf("Unijeli ste: %s\n", str);
	izmijeniKaraktere(str);
	printf("String poslije izmjena:\n%s\n", str);
}

void izmijeniKaraktere(char* a) {
	char ch;
	int br_izmjena = 0, br_zvjezdica = 0;
	while (*a) {
		if (*a >= 'a' && *a <= 'z') {
			ch = *a - 'a' + 1;
			ch %= 26;
			*a = ch + 'a';
			br_izmjena++;
		} else if (*a >= 'A' && *a <= 'Z') {
			ch = *a - 'A' + 1;
			ch %= 26;
			*a = ch + 'A';
			br_izmjena++;
		} else {
			*a = '*';
			br_zvjezdica++;
		}
		a++;
	}
	printf("Broj izmjenjenih karaktera: %d\n"
	       "Broj zvjezdica: %d\n", br_izmjena, br_zvjezdica);
}