#include <stdio.h>
int main() {
  char c = 2023;

  // Provjera parnosti broja - i = 1 ako je broj neparan (na 4 nacina)
  int i = c % 2;
  i = c & 1;
  i = c - c / 2 * 2;
  i = c - (c >> 1 << 1);

  // Kako na 4 nacina odrediti ostatak pri % sa 8.
  i = c % 8;
  i = c & 7;
  i = c - c / 8 * 8;
  i = c - (c >> 3 << 3);

  // U varijablu i upisati vrijednosti 1 ako je godina prestupna:
  // Godina je prestupna ako vrijedi jedno od:
  // - godina je djeljiva sa 4, a nije djeljiva sa 100
  // - godina je djeljiva sa 400
  c = 2023;
  i = c % 4 == 0 && c % 100 != 0 || c % 400 == 0;

  return 0;
}
