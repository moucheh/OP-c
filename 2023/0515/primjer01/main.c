#include <stdio.h>

void main(void) {
	int n;
	printf("Unesite broj redova: ");
	scanf("%d", &n);
	int option;
	printf("Opcije\n"
	       "1. Lijevi gornji cosak\n"
	       "2. Desni gornji cosak\n"
	       "3. Lijevi donji cosak\n"
	       "4. Desni donji cosak\n"
	       "Izaberite gdje ce biti spic: "
	      );
	scanf("%d", &option);
	printf("Ispis:\n");
	switch (option) {
		case 1:
			for (int i = n - 1; i >= 0; i--) {
				for (int k = 0; k < i + 1; k++) printf("* ");
				printf("\n");
			}
			break;
		case 2:
			for (int i = n - 1; i >= 0; i--) {
				for (int j = 0; j < n - i - 1; j++) printf("  ");
				for (int k = 0; k < i + 1; k++) printf("* ");
				printf("\n");
			}
			break;
		case 3:
			for (int i = 0; i < n; i++) {
				for (int k = 0; k < i + 1; k++) printf("* ");
				printf("\n");
			}
			break;
		case 4:
			for (int i = 0; i < n; i++) {
				for (int j = 0; j < n - i - 1; j++) printf("  ");
				for (int k = 0; k < i + 1; k++) printf("* ");
				printf("\n");
			}
			break;
	}
}