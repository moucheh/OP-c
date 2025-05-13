#include <stdio.h>
int main() {
  // U varijablu veliko slovo spremiti vrijednost 1 ako je c veliko slovo.
  char c = getchar();
  char veliko_slovo;
  // netacno - ovo ce uvijek spremiti 1. Odgovoriti zasto.
  veliko_slovo = 'A' <= c <= 'Z';
  // tacno
  veliko_slovo = 'A' <= c && c <= 'Z';

  printf("c je veliko slovo? %d\n", veliko_slovo);
  return 0;
}
