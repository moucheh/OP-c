#include <stdio.h>
#include <string.h>

int pgets(char*, int);
int countDigits(char*);
int slen(char*);

void main(void) {
	char array[20];
	scanf("%19[^\n]s", array);
	fflush(stdin);
	printf("%s\n", array);
	int len = countDigits(array);
	printf("%d\n%d\n", len, slen(array));
}

int pgets(char* string, int size) {
	char c;
	int i = 0;
	while ((c = getchar()) != '\n') {
		string[i++] = c;
		if (i == size - 1) break;
	}
	string[i] = 0;
	return i;
}

int countDigits(char* str) {
	int counter = 0;
	while (*str++) {
		if (isdigit(*str)) counter++;
	}
	return counter;
}

int slen(char* str) {
	int counter = 0;
	while (*str++) counter++;
	return counter;
}