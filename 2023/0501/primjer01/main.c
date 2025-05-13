#include <stdio.h>

void main(void) {
	int n;
	printf("Unesite velicinu niza:");
	scanf("%d", &n);
	int array[n];
	printf("Unesite elemente niza: ");
	int temp;
	for (int i = 0; i < n; i++) scanf("%d", array + i);
	for (int i = 0; i < n - 1; i++) {
		for (int j = i + 1; j < n; j++) {
			if (array[i] > array[j]) {
				temp = array[i];
				array[i] = array[j];
				array[j] = temp;
			}
		}
	}
	printf("Elementi niza su:\n");
	for (int i = 0; i < n; i++) printf("%d\t", *(array + i));
	printf("\n");
}