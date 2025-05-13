#include <stdio.h>
#include <string.h>

void countAndLastIndex(char*, char*);
int scomp(char*, char*);

void main(void) {
	char str1[20], str2[20];
	printf("Unesite prvi string: ");
	scanf("%19[^\n]s", str1);
	printf("Unesite drugi string: ");
	scanf(" %19[^\n]s", str2);
	countAndLastIndex(str1, str2);
}

int scomp(char* a, char* b) {
	while (*a == *b && *b) {
		a++;
		b++;
	}
	if (*b == 0) {
		b--;
		a--;
	}
	return *a == *b;
}

void countAndLastIndex(char* a, char* b) {
	int counter = 0, lastIndex;
	int len = strlen(a);
	char* pa = a;
	for (int i = 0; i < len; i++) {
		if (scomp(pa++, b)) {
			counter++;
			lastIndex = i;
		}
	}
	printf("String \"%s\" se u stringu \"%s\" pojavljuje %d puta.\n"
	       "Zadnji put se pojavljuje od %d. karaktera.\n",
	       b, a, counter, lastIndex + 1);
}