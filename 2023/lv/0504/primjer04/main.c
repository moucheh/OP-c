//Program koji ispisuje Fibbonacijev niz do n-tog clana koristeci rekurziju

#include <stdio.h>

int fibb(int);

void main(void) {
	int n;
	printf("Unesite neki broj n: ");
	scanf("%d", &n);
	printf("Fibbonacijev niz do n-tog clana:\n");
	for (int i = 0; i < n; i++) {
		printf("%d\t", fibb(i));
	}
	printf("\n");
}

int fibb(int n) {
	if (n == 0) return 0;
	if (n == 1) return 1;
	return fibb(n - 1) + fibb(n - 2);
}

//0 1 1 2 3 5 8 13 21 34 55 ...