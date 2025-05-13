#include <stdio.h>

int convert_ascii_to_int(char c);

int main() {
	//0xRRGGBB
	printf("Unesite boju u hex kodu: ");
	char r0, r1, g0, g1, b0, b1;
	int a;
	scanf("0x%c%c%c%c%c%c", &r1, &r0, &g1, &g0, &b1, &b0);
	int red = convert_ascii_to_int(r1) * 16 + convert_ascii_to_int(r0);
	int green = convert_ascii_to_int(g1) * 16 + convert_ascii_to_int(g0);
	int blue = convert_ascii_to_int(b1) * 16 + convert_ascii_to_int(b0);
	printf("Unijeli ste boju 0x%c%c%c%c%c%c, "
		   "udio crvene iznosi: %d\n"
		   "udio zelene iznosi: %d\n"
		   "udio plave iznosi: %d\n",
		   r1, r0, g1, g0, b1, b0, red, green, blue
		  );
	return 0;
}

int convert_ascii_to_int(char c) {
	if (c >= 'A' && c <= 'F') {
		return c - 'A' + 10;
	}
	if (c >= 'a' && c <= 'f') {
		return c - 'a' + 10;
	}
	if (c >= '0' && c <= '9') {
		return c - '0';
	}
	return c;
}
