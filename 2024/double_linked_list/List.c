#include "List.h"

void clear_list(List* list) {
	Node* current = list->head;
	while (current != NULL) {
		Node* next = current->next;
		free(current);
		current = next;
	}
}

void push_back(List* list, int el) {
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = el;
	new_node->next = NULL;
	if (list->tail == NULL) {
		list->head = new_node;
		list->tail = new_node;
	} else {
		list->tail->next = new_node;
		new_node->prev = list->tail;
		list->tail = new_node;
	}
	++list->size;
}

void push_front(List* list, int el) {
	Node* new_node = (Node*)malloc(sizeof(Node));
	new_node->data = el;
	new_node->next = NULL;
	if (list->head == NULL) {
		list->head = new_node;
		list->tail = new_node;
	} else {
		list->head->prev = new_node;
		new_node->next = list->head;
		list->head = new_node;
	}
	++list->size;
}

void pop_back(List* list) {
	Node* temp = list->tail;
	list->tail = list->tail->prev;
	free(temp);
	--list->size;
}

void pop_front(List* list) {
	Node* temp = list->head;
	list->head = list->head->next;
	free(temp);
	--list->size;
}


void print_list(List* list) {
	Node* current = list->head;
	while (current != NULL) {
		printf("%d ", current->data);
		current = current->next;
	}
	putchar('\n');
}

void print_list_reverse(List* list) {
	Node* current = list->tail;
	while (current != NULL) {
		printf("%d ", current->data);
		current = current->prev;
	}
	putchar('\n');
}

List make_list() {
	List l;
	l.head = NULL;
	l.tail = NULL;
	l.size = 0;
	return l;
}

int size(List* list) {
	return list->size;
}