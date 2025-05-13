#include <stdio.h>

void main(void) {
	int d, m, g;
	int count = 0;
	printf("Unesite datum: ");
	scanf("%d %d %d", &d, &m, &g);
	int leap = (g % 4 == 0 && g % 100 != 0) || (g % 400 == 0);
	switch (m) {
		case 12:
			count += 31;
		case 11:
			count += 30;
		case 10:
			count += 31;
		case 9:
			count += 30;
		case 8:
			count += 31;
		case 7:
			count += 31;
		case 6:
			count += 30;
		case 5:
			count += 31;
		case 4:
			count += 30;
		case 3:
			count += 31;
		case 2:
			count += 28 + leap;
	}
	count += d;
	printf("Broj dana je: %d\n", count);
}