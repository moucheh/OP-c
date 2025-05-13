#include <stdio.h>
#include <string.h>

#define MAX 30

struct Datum {
	int day;
	char mjesec[20];
	int godina;
};

// typedef struct Datum Datum;

void printaj_niz(int[], int);
// void printaj_niz(int*, int);

void printaj_matricu(int[][MAX], int, int);

// int[][5] int[][3]

void main(void) {
	// int niz[10];
	// int niz[4] = {1, 2, 3, 4}; // kompajler sam definise sirinu niza
	// int size = 4;
	// printaj_niz(niz, size);


	// int matrica[MAX][MAX] = {
	// 	{1, 2, 3},
	// 	{4, 5, 6},
	// 	{7, 8, 9}
	// };
	// printaj_matricu(matrica, 3, 3);

	/*
		int** matrica = &matrica[0];
		*(*(matrica + 1)) = &matrica[1];
		*(*(matrica+2)+7);
	*/

	// for (int i = 0; i < 3; i++) {
	// 	for (int j = 0; j < 3; j++) {
	// 		// printf("%d\t", &matrica[i][j]);
	// 		printf("%lu\t", *(matrica + i) + j);
	// 	}
	// 	printf("\n");
	// }

	//int* niz = &niz[0]; pokazivacka konstanta istog imena kao niz -
	//podrazumijeva se kad deklarises niz

	// for (int i = 0; i < 10; i++) {
	// 	scanf("%d", niz + i);
	// }
	// for (int i = 0; i < 10; i++) {
	// 	printf("%d\t", *(niz + i));
	// }
	// printf("\n");

	// char rijec[10] = {'E', 'd', 'i', 'n', '0', 'p', 'M', 0};
	// char str1[] = "Jovana";
	// char str2[] = "Jovan4";

	// printf("%d\n", strcmp(str1, str2));
	// char rijec[30] = "Edin";
	// strcpy(rijec, "Edo"); //kopira drugi string u prvi
	// strcat(rijec, " Suljakovic"); // sastavlja dva stringa u prvi
	// (strcmp(rijec, "Edin1") == 0) ? printf("stringovi su jednaki\n") : printf("stringovi su razliciti\n");
	// provjerava da li su stringovi jednaki

	// char* rijec = "Vrijednost na koju pokazuje char pointer se ne moze mijenjati";
	// printf("%d\n", strlen(rijec));


	Datum datum1; //deklaracija varijable tipa struktura, moras navesti keyword struct
	Datum* pdatum1 = &datum1;
	datum1.day = 15;
	pdatum1->day = 4; // ovoe isto (*pdatum1).day = 4;
	strcpy(datum1.mjesec, "April");
	strcpy(pdatum1->mjesec, "Juni");
	datum1.godina = 2003;
	printf("%02d.%s.%d\n", datum1.day, datum1.mjesec, datum1.godina);
}

void printaj_matricu(int matrica[][MAX], int br_redova, int br_kolona) {
	for (int i = 0; i < br_redova; i++) {
		for (int j = 0; j < br_kolona; j++) {
			printf("%d\t", matrica[i][j]);
		}
		printf("\n");
	}
	printf("\n");
}

// void printaj_niz(int* pniz, int size) {
// 	for (int i = 0; i < size; i++) {
// 		printf("%d\t", *(pniz + i));
// 	}
//	printf("\n");
// }

void printaj_niz(int pniz[], int size) {
	for (int i = 0; i < size; i++) {
		printf("%d\t", pniz[i]);
	}
	printf("\n");
}