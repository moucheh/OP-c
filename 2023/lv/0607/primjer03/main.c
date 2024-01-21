#include <stdio.h>

typedef struct {
	char fname[20];
	char lname[50];
	unsigned short index;
	char grades[10];
} Student;

double avg(Student*);
void printStudent(Student*);

void main(void) {
	Student s = {
		"Mersad",
		"Mobitel",
		"22696",
		{10, 9, 8, 7, 6, 7, 9, 8, 10, 10}
	};
	// printf("%d\n", sizeof(s));

	printf("8=====================D\n");

	printf("Ime: %s\n"
	       "Prezime: %s\n"
	       "Indeks: %05d\n"
	       "Ocjene: ", s.fname, s.lname, s.index);
	for (int i = 0; i < 10; i++) {
		if (i == 9) {
			printf("%d", s.grades[i]);
			continue;
		}
		printf("%d, ", s.grades[i]);
	}
	printf("\nProsjek: %.2lf\n", avg(&s));
	printStudent(&s);
}

double avg(Student* s) {
	double sum = 0.;
	for (int i = 0; i < 10; i++) {
		sum += s->grades[i];
	}
	return sum / 10.;
}

void printStudent(Student* s) {
	printf("%s %s %d [", s->fname, s->lname, s->index);
	for (int i = 0; i < 10; i++) {
		if (i == 9) {
			printf("%d]", s->grades[i]);
			continue;
		}
		printf("%d, ", s->grades[i]);
	}
	printf("\n");
}
