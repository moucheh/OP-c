#include <stdio.h>

int main()
{
	//Deklaracija matrice 3x3 koja predstavlja niz jednodimenzionalnih nizova
	int A[3][3] = {
		{1, 2, 3},
		{4, 5, 6},
		{7, 8, 9}
	};
	/*
	Deklaracija podrazumijeva
	int** A = &A[0][0]; <- pokazivacka konstanta na prvi element u matrici
	int* A = &A[0][0]; <- pokazivacka konstanta na prvi niz (njegov prvi element)
	int* (A+1) = $A[1][0]; <- pokazivacka konstanta na drugi niz (njegov prvi element)
	int* (A+2) = $A[2][0]; <- pokazivacka konstanta na treci niz (njegov prvi element)
	*/
	printf("Adresa prvog elementa: %lu\n", A);
	printf("Adresa prvog niza: %lu\n", *A);
	printf("Adresa drugog niza: %lu\n", *(A + 1));
	printf("Adresa treceg niza: %lu\n", *(A + 2));
	//Da bi dohvatili vrijednost nekog elementa moramo dereferencirati dva puta
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("A[%d][%d] = %d  ", i, j, *(*(A + i) + j));
			//sa i se pomjeramo po redovima, a sa j po kolonama
			//pomjeranje za i znaci A+i*sizeof(int)*3 <- jer matrica ima 3 reda
			//pomjeranje za j znaci A+j*sizeof(int)
		}
		printf("\n");
	}
}