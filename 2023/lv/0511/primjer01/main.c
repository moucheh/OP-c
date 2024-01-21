#include <stdio.h>

void main(void) {
	int a, b;
	printf("Unesite granice baklave: ");
	scanf("%d %d", &a, &b);
	for (int i = b - a; i >= 0; i--) {
		for (int s = 0; s < i + 1; s++) printf("\t");
		for (int j = a; j < b - i - 1; j++) printf("%2d\t", j * j);
		for (int k = b - i - 1; k >= a; k--) printf("%2d\t", k * k);
		printf("\n");
	}
	for (int i = a; i <= b; i++) printf("%2d\t", i * i);
	for (int i = b - 1; i >= a; i--) printf("%2d\t", i * i);
	printf("\n");
	for (int i = 0; i <= b - a; i++) {
		for (int s = 0; s < i + 1; s++) printf("\t");
		for (int j = a; j < b - i - 1; j++) printf("%2d\t", j * j);
		for (int k = b - i - 1; k >= a; k--) printf("%2d\t", k * k);
		printf("\n");
	}
}

/*
	        9                 3 1
	    9  16   9             2 3
    9  16  25  16   9         1 5
9  16  25  36  25  16  9      0 7
    9  16  25  16   9         1 5
        9  16   9             2 3
            9                 3 1
*/