#include <stdio.h>

int main() {
	char a = 7, b = 3, c = 13;
	char x, y;
	x = a++;
	// x = 7;
	// a = 8;
	y = --b;
	// y = 2;
	// b = 2;
	b += c++;
	//b = 15
	//c = 14
	x += ~a | c;
	// x = 6
	y -= a & c;
	// y = -6
	c *= ++a - b--;
	// a = 9
	// b = 14
	// c = -84
	printf("a = %d b = %d c = %d x = %d y = %d\n", a, b, c, x, y);
	return 0;
}

/*
	%d - cijeli broj
	%c - karakter
	%oc.df - float c - broj cifara prije zareza, d broj cifara poslije zareza
	%lf - double
	%s - cstring
	%x - cijeli broj u hexadecimalnom ispisu
	%o - cijeli broj u oktalnom ispisu
	%p - adresa - pointer

	65 - 2^6 + 1 'A'
	97 - 2^6 + 2^5 + 1 'a'

	48 - '0'
	49 - '1'
	...
	'2'-'0' = 2

	(izraz-uslov) ? izraz_tacno : izraz_netacno;

	a << n <==> a * 2^n
	a >> n <==> a / 2^n


	'\0' - 0

	ako nije navedeno unsigned, podrazumijeva se da je signed
	cjelobrojni tipovi
	long - 64 bita - 8 bajta - opseg od -2^63 do 2^63 - 1
	unsigned long - 64 bita - 8 bajta - opseg od 0 do 2^64 - 1
	int - 32 bita - 4 bajta - opseg od -2^31 do 2^31 - 1
	unsigned int - 32 bita - 4 bajta - opseg od 0 do 2^32 - 1
	short - 16 bita - 2 bajta - opseg od -2^15 do 2^15 - 1
	unsigned short - 16 bita - 2 bajta - opseg od 0 do 2^16 - 1
	char - 8 bita - 1 bajt - opseg -128 do 127 -2^7 do 2^7 -1
	unsigned char  - 8 bita - 1 bajt - opseg od 0 do 255 - 0 do 2^8 - 1

	float - 32 bita - 1 sign 8 karakteristika (127 + eksponent) 23 - mantisa
	double - 64 bita - 1 sign 11 karakteristika (1023 + eksponent) 52 - mantisa


*/
