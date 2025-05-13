#include <stdio.h>
#include <stdlib.h>

int main()
{
    int c = getchar();
    printf("Karakter C je '%c'\n", c);
    printf("ASCII vrijednost C je %d\n", c);

    if (c >= 'a' && c <= 'z') {
        printf("Redni broj c u abecedi je %d\n", c - 'a' + 1);
        c = c - 'a' + 'A';
        printf("Veliko slovo C je '%c'\n", c);
        printf("Veliko slovo C je '%c'\n", c);

    }
    c = getchar();
    printf("Karakter C je '%c'\n", c);
    c = getchar();
    printf("Karakter C je '%c'\n", c);
    c = getchar();
    printf("Karakter C je '%c'\n", c);

    return 0;
}
