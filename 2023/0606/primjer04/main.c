/*
najveci element u nizu i njegov indeks
aritmeticka sredina niza
max 20 elemenata
*/
#include <stdio.h>

#define MAX 20;

void main(void) {
	int array[20];
	int size;
	printf("Unesite dimenziju niza: ");
	scanf("%d", &size);
	printf("Unesite elemente niza: ");
	int sum = 0;
	for (int i = 0; i < size; i++) {
		scanf("%d", array + i);
		sum += *(array + i);
	}
	int max = array[0];
	int index;
	for (int i = 1; i < size; i++) {
		if (max < * (array + i)) {
			max = *(array + i);
			index = i;
		}
	}
	double avg = (double)sum / size;
	printf("Aritmeticka sredina niza iznosi: %.2lf\n"
	       "Najveci element u nizu je: %d, koji se nalazi na indexu: %d\n",
	       avg, max, index);
}