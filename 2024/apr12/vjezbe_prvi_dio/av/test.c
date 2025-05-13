#include <stdio.h>

int main() {
  // Ovaj program će na standardni izlaz ispisati zapis u memoriji varijable
  // a. Možete pokušati različite vrijednosti i utvrditi da je zapis
  // identičan onom koji smo učini na OR.

  int a = 5;
  // float a = 5.0;
  // char a = 'A';

  // Implementacija - nije potrebno da razumijete ovaj dio
  unsigned char* b = (unsigned char*) (&a);
  for (int i = sizeof(a) - 1; i >= 0; i--) {
    for (int p = 7; p >= 0; p--)
      putchar(((b[i] >> p) & 1) + '0');
    putchar(' ');
  }
  putchar('\n');
  //

  return 0;
}
