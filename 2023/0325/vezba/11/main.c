#include <stdio.h>

void main(void) {
	int n;
	printf("Unesite neki prirodni broj n: ");
	scanf("%d", &n);
	printf("Prirodni brojevi od 1 do %d su:\n", n);
	for (int i = 1; i <= n; ++i)
	{
		printf("%d\n", i);
	}
}