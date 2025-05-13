#include <stdio.h>

void main() {
    double farenhajt = 30, celzijus;
    printf("Tabela konverzije temperatura\n");
    printf("Stepeni Farenhajta \t Stepeni celzijusa \n");
    while (farenhajt <= 60) {
        celzijus = 5. / 9. * (farenhajt - 32);
        printf("%.0lf\t\t\t%05.2lf\n", farenhajt, celzijus);
        farenhajt += 2;
    }
}