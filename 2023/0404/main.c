#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if _WIN32

#include <conio.h>

void clrscr(void) { system("cls"); }

#else

#include <unistd.h>

void clrscr(void) { system("clear"); }

#endif

#define PDV 0.17L
#define ARRAY_SIZE 20

FILE* fp;

struct Item {
	char name[30];
	double price;
	int quantity;
};

void mainMenu(void) {
	printf("Glavni meni\n");
	printf("1. Unesite novi artikal\n");
	printf("2. Ispisite artikle\n");
	printf("3. Ispisite racun\n");
	printf("4. Brisanje podataka\n");
	printf("5. Izlaz iz programa\n");
	printf("Izaberite opciju: ");
}

void addItem(struct Item* item, double* sum) {
	clrscr();
	printf("Unesite ime artikla: ");
	scanf(" %[^\n]s", (*item).name);
	printf("Unesite cijenu artikla: ");
	scanf("%lf", &(*item).price);
	printf("Unesite kolicinu artikla: ");
	scanf("%d", &(*item).quantity);
	*sum += (*item).price * (*item).quantity;
}

void printItems(struct Item* item, int n) {
	for (int i = 0; i < n; i++) {
		fprintf(fp, "Naziv artikla: %s\nCijena: %.2lf BAM\nKolicina: %d\n}\n",
		        (*(item + i)).name,
		        (*(item + i)).price,
		        (*(item + i)).quantity);
		fflush(fp);
	}
}

void clearArray(struct Item* item) {
	for (int i = 0; i < ARRAY_SIZE; i++) {
		strcpy((*(item + i)).name, "");
		(*(item + i)).price = 0.0L;
		(*(item + i)).quantity = 0;
	}
}

void main(void) {
	clrscr();
	fp = fopen("output.txt", "w+");
	struct Item items[ARRAY_SIZE];
	clearArray(&items[0]);
	double sum = 0, tax = 0;
	mainMenu();
	int con, n = 0;
	scanf("%d", &con);
	while (con == 1 || con == 2 || con == 3 || con == 4 || con == 5) {
		switch (con) {
		case 1:
			clrscr();
			printf("Unesite broj artikala: ");
			scanf("%d", &n);
			for (int i = 0; i < n; i++)
				addItem(&items[i], &sum);
			tax = sum * PDV;
			clrscr();
			mainMenu();
			break;
		case 2:
			clrscr();
			if (n == 0) printf("Morate izvrsiti unos artikala da bi ih mogli ispisati!\n\n");
			else for (int i = 0; i < n; i++)
					printf("Naziv artikla: %s\nCijena: %.2lf BAM\nKolicina: %d\n\n",
					       items[i].name,
					       items[i].price,
					       items[i].quantity);
			mainMenu();
			break;
		case 3:
			clrscr();
			printItems(&items[0], n);
			if (n != 0) {
				fprintf(fp, "Ukupno: %.2lf BAM\nPDV: %.2lf BAM\n", sum, tax);
				fflush(fp);
				printf("Racun je ispisan, pogledajte output.txt datoteku.\n\n");
			} else {
				printf("Morate izvrsiti unos artikala da bi ispisali racun!\n\n");
			}
			mainMenu();
			break;
		case 4:
			clrscr();
			if (n != 0) {
				clearArray(&items[0]);
				sum = 0;
				tax = 0;
				n = 0;
				printf("Unos artikala je obrisan.\n\n");
			} else printf("Niste izvrsili unos podataka.\n\n");
			mainMenu();
			break;
		case 5:
			return;
		}
		scanf("%d", &con);
	}
	fclose(fp);
}