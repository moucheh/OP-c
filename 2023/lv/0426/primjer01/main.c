#include <stdio.h>

void printDigits(int);
int palindrome(int);

void main(void) {
	int n;
	printf("Unesite neki broj: ");
	scanf("%d", &n);
	int result = palindrome(n);
	printf("%d\n", result);
}

void printDigits(int n) {
	while (n > 0) {
		int digit = n % 10;
		n /= 10;
		printf("%d", digit);
	}
}

int palindrome(int n) {
	int p = 0;
	while (n > 0) {
		int digit = n % 10;
		n /= 10;
		p = p * 10 + digit;
	}
	return p;
}

/*
int palindrome(int n) {
	int p = 0;
	int x = 1;
	while (x < n) x *= 10;
	while (n > 0) {
		int digit = n % 10;
		n /= 10;
		x /= 10;
		p += digit * x;

	}
	return p;
}
*/