#include "List.h"

int main(void) {
	List a = make_list();
	push_back(&a, 1);
	printf("size(a) = %d\n", size(&a));
	push_back(&a, 2);
	printf("size(a) = %d\n", size(&a));
	push_back(&a, 3);
	printf("size(a) = %d\n", size(&a));
	pop_back(&a);
	printf("size(a) = %d\n", size(&a));
	pop_front(&a);
	push_back(&a, 4);
	printf("size(a) = %d\n", size(&a));
	push_back(&a, 5);
	printf("size(a) = %d\n", size(&a));
	print_list(&a);
	clear_list(&a);
	return 0;
}