#include <stdio.h>

void main(void) {
	char sent[50];
	printf("Unesite recenicu: ");
	scanf("%49[^\n]s", sent);
	for (int i = 0; i < 50; i++) {
		if (sent[i] >= 'a' && sent[i] <= 'z') {
			sent[i] = sent[i] - 'a' + 'A';
		}
	}
	printf("\nRecenica poslije promjene: %s\n", sent);
}