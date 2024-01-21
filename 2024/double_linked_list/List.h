#pragma once
#include <stdio.h>
#include <stdlib.h>

typedef struct node Node;

struct node {
	int data;
	Node* next;
	Node* prev;
};

typedef struct {
	int size;
	Node* head;
	Node* tail;
} List;

List make_list();
void clear_list(List* list);

void push_back(List* list, int el);
void push_front(List* list, int el);

void pop_back(List* list);
void pop_front(List* list);


void print_list(List* list);
void print_list_reverse(List* list);

int size(List* list);