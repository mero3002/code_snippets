#include <iostream>
using namespace std;
#define SIZE 3

int passed = 0;
int failed = 0;

void pass_or_fail(float mark) {
	if (mark >= 50) {
		passed++;
		cout << "Passed: ";
	}
	else {
		failed++;
		cout << "Failed: ";
	}
	if (mark >= 90) {
		cout << "A\n";
	}
	else if (mark >= 80) {
		cout << "B\n";
	}
	else if (mark >= 70) {
		cout << "C\n";
	}
	else if (mark >= 50) {
		cout << "D\n";
	}
	else {
		cout << "F\n";
	}
}
int main() {
	float marks[SIZE];
	bool valid;
	
		for (int i = 0; i < SIZE; i++) {
			do {
			cout << "Student " << i + 1 << " Mark: ";
			cin >> marks[i];
			valid = true;
			if (marks[i] < 0 || marks[i] > 100) {
				cout << "Invalid Mark, Re-enter (0 - 100)\n";
				valid = false;
			}
			else {
				pass_or_fail(marks[i]);
			}
		} while (!valid);
		} 
		cout << "--------------\nStatistics:\n";
		cout << "Students passed: " << passed << '\n';
		cout << "Students failed: " << failed << '\n';
	return 0;
}