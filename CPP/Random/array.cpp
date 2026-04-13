// [x] enter array values
// [x] display the array
// [x] display number of primes
// [x] replace negatives with zeros
// [x] check if sorted
// [x] exit

#include <iostream>

using namespace std;

void insert(int arr[], int size) {
	for (int i = 0; i < size; i++) {
		cout << "Item " << i + 1 << ": ";
		cin >> arr[i];
	}
}

void display(int arr[], int size) {
	if (size == 0) {
		cout << "Empty\n";
	}
	else {
		for (int i = 0; i < size; i++) {
			cout << "Item " << i + 1 << ": " << arr[i] << '\n';
		}
	}
}

bool isPrime(int n) {
	if (n <= 1)
		return false;

	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0)
			return false;
	}

	return true;
}

int primes(int arr[], int size) {
	if (size == 0) {
		cout << "Empty\n";
		return 0;
	}

	int prime_counter = 0;

	for (int i = 0; i < size; i++) {
		if (isPrime(arr[i])) {
			prime_counter++;
		}
	}
	return prime_counter;
}

void replace(int arr[], int size) {
	if (size == 0) {
		cout << "Empty\n";
		return;
	}

	for (int i = 0; i < size; i++) {
		if (arr[i] < 0)
			arr[i] = 0;
	}
}

bool isSorted(int arr[], int size) {
	if (size <= 1) {
		return true;
	}

	for (int i = 0; i < size - 1; i++) {
		if (arr[i] > arr[i + 1])
			return false;
	}

	return true;
}

int main() {
	int option;
	int size = 0;
	int* arr = nullptr;
	bool valid;
	cout << "-------  ARRAY  -------\n";
	do {
		cout << "\nChoose an Option:\n";
		cout << "1 - Enter array values\n";
		cout << "2 - Display the array\n";
		cout << "3 - Display number of primes\n";
		cout << "4 - Replace negatives with zero\n";
		cout << "5 - Check if sorted\n";
		cout << "6 - Exit\n";
		cin >> option;
		switch (option) {
		case 1:
			do {
				cout << "Array size: ";
				cin >> size;

				valid = true;
				if (size <= 0) {
					cout << "Array size must be above 0\n";
					valid = false;
				}

			} while (!valid);

			if (arr != nullptr) {
				delete[] arr;
			}

			arr = new int[size];

			insert(arr, size);
			break;

		case 2: {
			if (arr == nullptr) {
				cout << "No array created\n";
			}
			else {
				display(arr, size);
			}
			break;
		}

		case 3: {
			if (arr == nullptr)
				cout << "Array not created yet!\n";
			else
				cout << "Number of primes: " << primes(arr, size) << '\n';
			break;
		}
		case 4: {
			replace(arr, size);
			break;
		}

		case 5: {
			if (arr == nullptr) {
				cout << "Array not created yet!\n";
			}
			else if (isSorted(arr, size)) {
				cout << "Array is sorted.\n";
			}
			else {
				cout << "Array is NOT sorted.\n";
			}
			break;
		}
		case 6: {
			delete[] arr;
			return 0;
			break;
		}
		}
	} while (true);
	return 0;
}