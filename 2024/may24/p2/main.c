#include <stdio.h>

void print_niz(int* begin, int* end) {
	while (begin != end) {
		printf("%d ", *begin);
		++begin;
	}
}

int palindrom(char* begin, char* end) {
	--end;
	while (begin < end) {
		printf("%c %c\n", *begin, *end);
		if (*begin != *end) {
			return 0;
		}
		++begin;
		--end;
	}
	return 1;
}

int main() {
	char rijec[] = "anavolimiplovana";
	(palindrom(rijec, rijec + 16)) ? printf("jest\n") : printf("nije\n");

	return 0;
}