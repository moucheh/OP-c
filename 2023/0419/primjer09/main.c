#include <stdio.h>

void main(void) {
	char a;
	printf("Unesite neki broj: ");
	scanf("%d", &a);
	char k;
	printf("Unesite k: ");
	scanf("%d", &k);
	if ( k <= 1 ) {
		((a ^ 1) == 0) ? printf("Bit je 1\n") : printf("Bit je 0\n");
	} else {
		a = a >> (k - 1);
		((a ^ 1) == 0) ? printf("Bit je 1\n") : printf("Bit je 0\n");
	}
}