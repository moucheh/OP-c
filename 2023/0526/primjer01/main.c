#include <stdio.h>
#include <math.h>

void cube(int);
void square(int);
void printBackwards(int);

void main(void) {
	int n;
	// deklaracija i inicijalizacija niza pokazivaca na funckije
	void (*func[3])(int) = {square, cube, printBackwards};
	printf("Unesite neki broj: ");
	scanf("%d", &n);
	//poziv svih funckija pomocu for petlje
	for (int i = 0; i < 3; i++) func[i](n);
}

void cube(int n) {
	printf("Kub vaseg broja iznosi: %d\n", n * n * n);
}

void square(int n) {
	printf("Kvadrat vaseg broja iznosi: %d\n", n * n);
}

void printBackwards(int n) {
	printf("Vas broj unazad je: ");
	while (n != 0) {
		printf("%d", n % 10);
		n /= 10;
	}
	printf("\n");
}