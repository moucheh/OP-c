#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[20];
	int age;
	void* next;
} Node;

void printList(Node*);

void addItem(Node*, char*, int);

void main(void) {
	Node* head = (Node*)malloc(sizeof(Node));
	addItem(head, "Muhamed", 20);
	addItem(head, "Edin", 21);
	addItem(head, "Mahir", 19);
	printList(head);
	free(head);
}

void addItem(Node* head, char* newName, int newAge) {
	Node* newNode = (Node*)malloc(sizeof(Node));
	Node* current = head;
	strcpy(newNode->name, newName);
	newNode->age = newAge;
	newNode->next = NULL;
	if (head == NULL) {
		head = newNode;
	} else {
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = newNode;
	}
}

void printList(Node* head) {
	Node* current = (Node*)malloc(sizeof(Node));
	current = head;
	while (current != NULL) {
		if (current->age == 0) {
			current = current->next;
			continue;
		}
		printf("%s\n", current->name);
		printf("%d\n", current->age);
		current = current->next;
	}
}