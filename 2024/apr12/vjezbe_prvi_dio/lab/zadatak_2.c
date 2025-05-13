#include <stdio.h>
#include <stdlib.h>
// unijeti poluprecnik kruznice i odrediti povrinu i obim
int main()
{
    printf("Unesite poluprecnik kruznice!\n");
    double r;
    scanf("%lf", &r);
    double p = r * r * 3.1415;
    double o = 2 * r * 3.1415;
    printf("Povrsina je %+30.20lf\n", p);
    printf("Obim je %030.20lf\n", o);
    return 0;
}
