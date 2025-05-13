#include <math.h>
#include <stdio.h>

// Napisati program koji ce za unesene strane a i b jednakokrakog trougla
// izracunati i ispisati: visinu ha, povrsinu i obim trougla.

void main() {
  float a, b, ha, P, O;
  printf("Unesite osnovicu a: ");
  scanf("%f", &a);
  printf("Unesite krak b: ");
  scanf("%f", &b);
  ha = (float) sqrt(b * b - (a * a / 4));
  P = a * ha / 2;
  O = 2 * b + a;
  // Specifican nacin ispisa rezultata.
  printf("Ispis rezultata:\n"
         "%-11s=%10.2f\n"
         "%-11s=%10.2f\n"
         "%-11s=%10.2f\n"
         "%-11s=%10.2f\n"
         "%-11s=%10.2f\n",
         "Strana a", a, "Strana b", b, "Visina ha", ha, "Povrsina P", P,
         "Obim O", O);
  // Zasto se u prethodnoj printf komandi ne nalaze zarezi između navodnika?
  // Čemu odgovara format %s?
}
