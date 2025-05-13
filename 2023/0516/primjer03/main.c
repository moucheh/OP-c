#include <stdio.h>

int ekskluziv(int, int);

void main(void) {
	int x = -1, y = -1;
	while (x != 0 && x != 1 || y != 0 && y != 1) {
		printf("Unesite vrijednosti x i y (smiju biti samo 0 ili 1): ");
		scanf("%d %d", &x, &y);
	}
	printf("%d XOR %d = %d\n", x, y, ekskluziv(x, y));
}

int ekskluziv(int a, int b) {
	return (a == b) ? 0 : 1;
}

/*
A | B | Y
_________
0 | 0 | 0
0 | 1 | 1
1 | 0 | 1
! | 1 | 0
_________
Y = A ekskluzivno ili B
*/