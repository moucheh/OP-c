#include <stdio.h>

void main(void) {
	int a;
	char* string = "Truma je legenda";
	printf("Unesite neki broj: ");
	scanf("%d", &a);
	printf("Pod brojem %d nalazi se ascii karakter %c\n", a, a);
	printf("%s\n", string);
}