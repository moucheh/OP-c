#include <stdio.h>
#include <string.h>

typedef struct {
	char fname[20];
	char lname[30];
	int age;
	char prof[40];
	void* next;
} Node;

void main(void) {
	Node* n = (Node*)malloc(sizeof(Node));
	n->next = NULL;
	printf("Unesite ime: ");
	scanf("%19[^\n]s", n->fname);
	printf("Unesite preime: ");
	scanf(" %29[^\n]s", n->lname);
	printf("Unesite godine: ");
	scanf("%d", &n->age);
	printf("Unesite profesiju: ");
	scanf(" %39[^\n]s", n->prof);
	printf("\nJa sam %s %s, "
	       "imam %d godina, "
	       "moje zanimanje je %s.\n",
	       n->fname, n->lname, n->age, n->prof
	      );
	free(n);
}