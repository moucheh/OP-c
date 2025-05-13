#include <stdio.h>

// Napisati program koji uzima znak c i broj n a na ekran stampa znak koji
// je od znaka c u ASCII tabeli udaljen n mjesta

void main() {
  char c;
  int n;
  printf("Unesite jedan znak: ");
  c = getchar();
  printf("Unesite udaljenost do novog znaka: ");
  scanf("%d", &n);
  printf("Novi znak je: ");
  putchar(c + n);
}
