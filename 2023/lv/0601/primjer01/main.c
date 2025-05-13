#include <stdio.h>

int scomp(char* a, char* b) {
	while (*a == *b && *b) {
		a++;
		b++;
	}
	return *a == *b;
}

void main(void) {
	char str1[10] = "Zdravo";
	char str2[10] = "Zd";
	if (scomp(str1, str2)) {
		printf("Nizovi su jednaki.\n");
	} else {
		printf("Nizovi su razliciti.\n");
	}
}