#include <stdio.h>
#include <math.h>
// Unijeti stranicu i krak jednakokragog trougla
// Izracunati visinu i povrsinu

int main()
{
    float a, b;
    printf("Unesite stranicu i krak: ");
    scanf("%f %f", &a, &b);
    printf("Stranica je %f, krak je %f\n", a, b);
    // validan 2 * b > a
    // nije validan 2 * b <= a
    if (2 * b > a) {
        float ha = sqrt(b * b - a * a / 4);
        float p = a * ha / 2;
        printf("Visina je %f\nPovrsina je %f\n", ha, p);
    }
    return 0;
}
