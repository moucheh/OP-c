#include <stdio.h>

// U primjeru aritmetike ispod, namjerno je izazvan overflow - spremanje
// vrijednosti koja ne može stati u 8 bita.
// Koristeći znanje iz OR-a odgovoriti zašto je ispis takav kakav jeste.
// Pokrenuti program sa tipom podatka `unsigned char a`.

void main() {
  char a = 120, b;
  b = a + 5;
  printf("b=%05d\n", b);
  b = a + 9;
  printf("b=%05d\n", b);
  b = a + 135;
  printf("b=%05d\n", b);
  b = a + 140;
  printf("b=%05d\n", b);
}
