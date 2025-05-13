#include <iostream>

using namespace std;

int main() {
	int n;
	cout << "Unesite velicinu niza: ";
	cin >> n;
	int array[n];
	cout << "Unesite elemente niza: ";
	for (int i = 0; i < n; i++) cin >> array[i];
	cout << "Elementi niza su:" << endl;
	for (int i = 0; i < n; i++) cout << array[i] << " ";
	cout << endl;
}