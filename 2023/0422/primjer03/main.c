/* F, G : N -> N funckije definisane induktivno
   F(n+1) = F(n)G(n) + 2n + 1;
   G(n+1) = n^2F(n)+3G(n)
   Napisati program koji ucitava prirodan broj n te ispisuje F(n)
*/

#include <stdio.h>

void main(void) {
	long f = 3, g = 7;
	long F, G, n;
	printf("Unesite neki broj: ");
	scanf("%d", &n);
	for (int i = 1; i < n; i++) {
		F = f * g + 2 * i + 1;
		G = i * i * f + 3 * g;
		f = F;
		g = G;
	}
	if (n >= 1) printf("F(%d)=%d\n", n, f);
}