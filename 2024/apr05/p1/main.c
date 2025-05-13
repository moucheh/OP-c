#include <stdio.h>
#include <string.h>

int main() {
	char str[5];
	scanf("%[^\n]2s", str);
	printf("%s\n", str);
}