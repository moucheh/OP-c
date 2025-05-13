#include <stdio.h>
#include <math.h>

#if _WIN32

#include <conio.h>

void clrscr() {system("cls");}

#else

#include <unistd.h>

void clrscr() {system("clear");}

#endif

void mainMenu();

void main(void) {
	int con;
	FILE* fp = fopen("output.txt", "w+");
	fprintf(fp, "Historija\n\n");
	mainMenu();
	scanf("%d", &con);
	long double a, b, result;
	while (con == 1 || con == 2 || con == 3 || con == 4 || con == 5 || con == 6 || con == 7 || con == 8 || con == 9) {
		switch (con) {
			case 1:
				printf("Unesite a i b: ");
				scanf("%Lf %Lf", &a, &b);
				result = a + b;
				clrscr();
				printf("%.2Lf + %.2Lf = %.2Lf\n\n", a, b, result);
				fprintf(fp, "%.2Lf + %.2Lf = %.2Lf\n", a, b, result);
				mainMenu();
				break;
			case 2:
				printf("Unesite a i b: ");
				scanf("%Lf %Lf", &a, &b);
				result = a - b;
				clrscr();
				printf("%.2Lf - %.2Lf = %.2Lf\n\n", a, b, result);
				fprintf(fp, "%.2Lf - %.2Lf = %.2Lf\n", a, b, result);
				mainMenu();
				break;
			case 3:
				printf("Unesite a i b: ");
				scanf("%Lf %Lf", &a, &b);
				result = a * b;
				clrscr();
				printf("%.2Lf * %.2Lf = %.2Lf\n\n", a, b, result);
				fprintf(fp, "%.2Lf * %.2Lf = %.2Lf\n", a, b, result);
				mainMenu();
				break;
			case 4:
				printf("Unesite a i b: ");
				scanf("%Lf %Lf", &a, &b);
				if (b == 0) {
					clrscr();
					printf("Dijeljenje s nulom nije definisano.\n\n");
					fprintf(fp, "Dijeljenje s nulom nije definisano.\n");
					mainMenu();
					break;
				}
				result = a / b;
				clrscr();
				printf("%.2Lf / %.2Lf = %.2Lf\n\n", a, b, result);
				fprintf(fp, "%.2Lf / %.2Lf = %.2Lf\n", a, b, result);
				mainMenu();
				break;
			case 5:
				printf("Unesite a: ");
				scanf("%Lf", &a);
				if (a < 0 ) {
					clrscr();
					printf("Funkcija korijenovanja nije definisana za negativne brojeve.\n\n");
					fprintf(fp, "Funkcija korijenovanja nije definisana za negativne brojeve.\n");
					mainMenu();
					break;
				}
				result = sqrt(a);
				clrscr();
				printf("sqrt(%.2Lf) = %.2Lf\n\n", a, result);
				fprintf(fp, "sqrt(%.2Lf) = %.2Lf\n", a, result);
				mainMenu();
				break;
			case 6:
				printf("Unesite a i b: ");
				scanf("%Lf %Lf", &a, &b);
				if (a == 0 && b == 0) {
					clrscr();
					printf("Vrijednost izraza 0 ^ 0 nije definisana.\n\n");
					fprintf(fp, "Vrijednost izraza 0 ^ 0 nije definisana.\n");
					mainMenu();
					break;
				}
				result = pow(a, b);
				clrscr();
				printf("%.2Lf ^ %.2Lf = %.2Lf\n\n", a, b, result);
				fprintf(fp, "%.2Lf ^ %.2Lf = %.2Lf\n", a, b, result);
				mainMenu();
				break;
			case 7:
				clrscr();
				fclose(fp); fp = fopen("output.txt", "r");
				char ch;
				while ((ch = fgetc(fp)) != EOF) printf("%c", ch);
				printf("\n");
				fclose(fp); fp = fopen("output.txt", "a+");
				mainMenu();
				break;
			case 8:
				fclose(fp);
				fp = fopen("output.txt", "w+");
				fprintf(fp,
				        "Historija\n\n"
				        "Historija je nedavno izbrisana.\n"
				       );
				clrscr();
				mainMenu();
				break;
			case 9:
				return;
		}
		scanf("%d", &con);
	}
	fclose(fp);
}

void mainMenu() {
	printf(
	    "Kalkulator\n"
	    "1. Saberi a i b\n"
	    "2. Oduzmi a od b\n"
	    "3. Pomnozi a sa b\n"
	    "4. Podijeli a sa b\n"
	    "5. Korijen od a\n"
	    "6. Stepen a na b\n"
	    "7. Ispisi historiju\n"
	    "8. Brisanje historije\n"
	    "9. Izlaz iz programa\n"
	    "Izaberite opciju: "
	);
}