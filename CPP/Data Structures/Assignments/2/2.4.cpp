#include <iostream>
using namespace std;
int main() {
#define GRADES 4
	// Array to store 100 student grades
	double grades[GRADES];
	int passCount = 0;
	int fullMarksCount = 0;
	double sum = 0;
	cout << "--- Student Grades Management System ---" << endl;
	cout << "Please enter the grades for 100 students (0 to 100):" << endl;
	for (int i = 0; i < GRADES; i++) {
		cout << "Grade for student " << i + 1 << ": ";
		cin >> grades[i];
		// Validation check for marks between 0 and 100
		while (grades[i] < 0 || grades[i] > 100) {
			cout << "Invalid input! Please enter a grade between 0 and 100: ";
			cin >> grades[i];
		}
		// Adding to sum for average calculation
		sum += grades[i];
		// Counting students who passed (50 or more)
		if (grades[i] >= 50) {
			passCount++;
		}
		// Counting students with perfect scores (100)
		if (grades[i] == 100) {
			fullMarksCount++;
		}
	}
	// Calculating the average
	double average = sum / GRADES;
	// Displaying the required results
	cout << "\n----------------------------------------" << endl;
	cout << "Results Summary:" << endl;
	cout << "1. Number of students who passed: " << passCount << endl;
	cout << "2. Number of students with full marks (100): " << fullMarksCount << endl;

		cout << "3. The average of all marks: " << average << endl;
	cout << "----------------------------------------" << endl;
	return 0;
}