#include <stdio.h>

int up_or_down(int* other) {
	int x;
	if (!other) {
		return up_or_down(&x);
	} else {
		return &x > other;
	}
}

void main(void) {
	printf("%s\n", up_or_down(NULL) ? "Up" : "Down");
}