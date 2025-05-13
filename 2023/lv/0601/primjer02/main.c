#include <stdio.h>

void reverse(char*);

void format(char*, int, int);

void main(void) {
	char str1[10];
	int n;
	printf("Unesite broj: ");
	scanf("%d", &n);
	format(str1, n, 8);
	printf("Unijeli ste: %s\n", str1);
}

void reverse(char* a) {
	char* b = a;
	while (*b) b++;
	b--;
	while (b > a) {
		char temp = *a;
		*a = *b;
		*b = temp;
		a++;
		b--;
	}
}

void format(char* array, int n, int base) {
	static char digits[] = "0123456789abcdef";
	int i = 0;
	while (n != 0) {
		array[i] =  digits[n % base];
		n /= base;
		i++;
	}
	array[i] = 0;
	reverse(array);
}