#include <stdio.h>

void main(void) {
	int n;
	printf("Unesite broj redova: ");
	scanf("%d", &n);
	for (int i = 0; i <= n / 2; i++) printf("#");
	for (int i = 0; i < n / 2 - 1; i++) printf(" ");
	printf("#\n");
	for (int i = 0; i < n / 2 - 1; i++) {
		for (int j = 0; j < n / 2; j++) printf(" ");
		printf("#");
		for (int j = 0; j < n / 2 - 1; j++) printf(" ");
		printf("#\n");
	}
	if (n % 2) for (int i = 0; i < n; i++) printf("#");
	else for (int i = 0; i <= n; i++) printf("#");
	printf("\n");
	for (int i = 0; i < n / 2 - 1; i++) {
		printf("#");
		for (int j = 0; j < n / 2 - 1; j++) printf(" ");
		printf("#\n");
	}
	printf("#");
	for (int i = 0; i < n / 2 - 1; i++) printf(" ");
	for (int i = 0; i <= n / 2; i++) printf("#");
	printf("\n");
}



/*
######    #
     #    #
     #    #
     #    #
     #    #
###########
#    #
#    #
#    #
#    #
#    ######
*/