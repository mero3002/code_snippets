#include <iostream>

using namespace std;

int main() {
	int size;
	cout << "Size of Array: ";
	cin >> size;
	int* arr = new int [size];

	for (int i = 0; i < size; i++) {
		cout << "Item[" << i << "]: ";
		cin >> arr[i];
	}

	cout << "Array:\n";

	for (int i = 0; i < size; i++) {
		cout << arr[i] << "  ";
	}

	delete[]arr;
	arr = NULL;

	return 0;
}