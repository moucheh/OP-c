#include <stdio.h>

void main(void) {
	int a, b;
	a = 10;
	b = 20;
	// aritmeticki
	printf("a + b = %d\n", a + b);
	printf("a - b = %d\n", a - b);
	printf("a * b = %d\n", a * b);
	printf("a / b = %d\n", a / b);
	printf("a %% b = %d\n", a % b);

	// relacioni
	printf("a < b %d\n", a < b);
	printf("a <= b %d\n", a <= b);
	printf("a >= b %d\n", a >= b);
	printf("a > b %d\n", a > b);
	printf("a == b %d\n", a == b);
	printf("a != b %d\n", a != b);

	int c;
	c = a < b;
	printf("c = a < b je %d\n", c);
	printf("operator= vraca %d\n", c = -15);
	a = b = c = -20;
	a = (b = c = -20) + 10;

	// unarni
	~a; //  obrne bite
	-a; // negiranje math
	!a; // logicka negacija - 50 -> 0,   0 -> 1

	// operatori nad bitima
	a = 20;
	b = 5;
	printf("a | b = %d\n", a | b);
	printf("a & b = %d\n", a & b);
	printf("a ^ b = %d\n", a ^ b);
	printf("b << 2  = %d\n", b << 2);
	printf("a >> 1 = %d\n", a >> 1);

	// Siftanje bita za n mjesta je zapravo mnozenje sa 2 na stepen n.
	// a * 8; --> a << 3;
	// a * 10; --> a * 8 + a * 2; --> a << 3 + a << 1;

	// &&  log i
	// ||  log ili
	a = 10;
	b = -15;
	printf("a && b && 0 = %d\n", a && b && 0);
	printf("a && b || 0 = %d\n", a && b || 0);
	printf("a || b || 0 = %d\n", a || b || 0);

	// dodjeljivanje - razliciti oblici
	a += 5;  // a = a + 5;
	a *= b;  // a = a * b;
	a %= b;  // a = a % b;
	a >>= 1; // a = a >> 1;

	// Koji je redoslijed izvrsenja operacija
	int d = a << a < b || b < a;
	printf("d = %d\n", d);
}
