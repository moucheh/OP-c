#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#if _WIN32
#include <conio.h>

void clrscr(void) {
	system("cls");
}

#else

#include <unistd.h>

void clrscr(void) {
	system("clear");
}

#endif

#define PDV 0.17L

FILE* fp;

struct Item {
	char name[30];
	double price;
	int quantity;
};

void mainMenu(void) {
	clrscr();
	printf("Glavni meni\n");
	printf("1. Unesite novi artikal\n");
	printf("2. Ispisite artikle\n");
	printf("3. Ispisite racun\n");
}

void addItem(struct Item* item, double* sum) {
	printf("Unesite ime artikla: ");
	fgets((*item).name, sizeof((*item).name), stdin);
	//scanf("%[^\n]s", (*item).name);
	printf("Unesite cijenu artikla: ");
	scanf("%lf", &(*item).price);
	printf("Unesite kolicinu artikla: ");
	scanf("%d", &(*item).quantity);
	*sum += (*item).price * (*item).quantity;
	fflush(stdin);
}

void printItems(struct Item* item, int n) {
	for (int i = 0; i < n; ++i) {
		fprintf(fp, "Ime artikla: %sCijena: %.2lf\n"
				"Kolicina: %d\n}\n", (*(item + i)).name,
				(*(item + i)).price,
				(*(item + i)).quantity);
	}
}

void main(void) {
	clrscr();
	fp = fopen("output.txt", "w+");
	// mainMenu();
	struct Item items[5];
	double sum = 0;
	double tax = sum * PDV;
	for (int i = 0; i < 5; ++i) {
		addItem(&items[i], &sum);
		printf("\n");
	}
	printItems(&items[0], 5);
	fprintf(fp, "%.2lf\n%.2lf", sum, tax);
	fclose(fp);
}