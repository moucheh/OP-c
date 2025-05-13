#include <stdio.h>

// Cilj ovog zadatka je da pokažemo različite formate koji su pordržai
// u printf naredbi.
// Obratite pažnju na ukupnu širinu ispisa i odgovorite na pitanje da li
// tačna i predznak ulaze u ukupnu širinu?

void main() {
  float x1 = 12.32, x2 = -1095.7;
  printf("0123456789\n----------\n");
  printf("%10.3f\n%10.3f\n\n", x1, x2);
  printf("%10.4f\n%10.4f\n\n", x1, x2);
  printf("%010.3f\n%010.3f\n\n", x1, x2);
  printf("%.5f\n%.5f\n\n", x1, x2);
  printf("%f\n%f\n\n", x1, x2);
  printf("%10.f\n%10.f\n\n", x1, x2);
  printf("%10.3e\n%10.3e\n\n", x1, x2);
  printf("%-10.3f\n%-10.3f\n\n", x1, x2);
  printf("%+10.3f\n%+10.3f\n\n", x1, x2);
}
