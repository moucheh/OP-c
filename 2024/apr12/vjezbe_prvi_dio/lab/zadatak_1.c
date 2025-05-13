#include <stdio.h>
#include <stdlib.h>
// Unijeti sa standarnog ulaza dimenzije prevougaonika
// odrediti povrsinu i obim pravougaonika
int main()
{
    int a, b;
    printf("Unesite dimenzije pravougaonika: ");
    scanf("%d %d", &a, &b);
    printf("a = %d\nb = %d\n", a, b);
    if (a <= 0 || b <= 0)
      return 0;
    int povrsina = a * b;
    int obim = 2 * (a + b);
    printf("Povrsina je %d\n", povrsina);
    printf("Obim je %d\n", obim);
    return 0;
}
