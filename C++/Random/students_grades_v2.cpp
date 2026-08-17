#include <iostream>

using namespace std;

const int GRADES = 3;

struct student {
	int id;
	string name;
	float grade[GRADES];
	float gpa;
	int level;
};

int main() {
	bool valid;
	int num_of_students;
	float total_marks = 0;
	int under_probation = 0;
	int lvl1 = 0, lvl2 = 0, lvl3 = 0, lvl4 = 0;
	do {
		valid = true;
		cout << "Enter Students Number: ";
		cin >> num_of_students;
		cout << '\n';
		//legit number of students entry checker:
		if (num_of_students <= 0) {
			cout << "Student numbers must be above 0\n";
			valid = false;
		}
	} while (!valid);
	student* students = new student[num_of_students];

	//data entry for loop:
	for (int i = 0; i < num_of_students; i++) {
		do {
			cout << "Student's " << i + 1 << " ID: ";
			cin >> students[i].id;
			valid = true;
			if (students[i - 1].id != NULL) {
				for (int b = 0; b < i; b++) {
					if (students[i].id == students[b].id) {
						cout << "Invalid ID. (enter a unique one)\n";
						valid = false;
					}
				}
			}
		} while (!valid);
		cout << "Student's " << i + 1 << " Name: ";
		cin >> students[i].name;

		//grades for loop:
		for (int c = 0; c < GRADES; c++) {
			do {
				cout << "Student's " << i + 1 << " Grade " << c + 1 << ": ";
				cin >> students[i].grade[c];
				valid = true;

				//legit grade entry checker:
				if (students[i].grade[c] < 0 || students[i].grade[c] > 100) {
					cout << "Invalid grade. (0 - 100)\n";
					valid = false;
				}
				else {
					total_marks += students[i].grade[c];
				}
			} while (!valid);
		}
		do {
			cout << "Student's " << i + 1 << " Level: ";
			cin >> students[i].level;
			valid = true;

			//legit level entry checker:
			if (students[i].level < 1 || students[i].level > 4) {
				cout << "Invalid level. (1 - 4)\n";
				valid = false;
			}
			else {
				switch (students[i].level) {
				case 1: {
					lvl1++;
					break;
				}
				case 2: {
					lvl2++;
					break;
				}
				case 3: {
					lvl3++;
					break;
				}
				default: { //i'm sure this equals "case 4"
					lvl4++;
					break;
				}
				}
			}
		} while (!valid);
		students[i].gpa = total_marks / GRADES;
		if (students[i].gpa < 50) {
			under_probation++;
		}
		total_marks = 0;
		cout << "\n--------------------------------\n";
	}
	cout << "\n<< GPA Menu >>\n";

	for (int i = 0; i < num_of_students; i++) {
		cout << "Student " << i + 1 << " Name: " << students[i].name << '\n';
		cout << "Student " << i + 1 << " ID: " << students[i].id << '\n';
		cout << "Student " << i + 1 << " Level: " << students[i].level << '\n';
		cout << "Student " << i + 1 << " GPA: " << students[i].gpa << "%\n";
		cout << "-------------------\n";
	}
	cout << "\n<< Statistics Menu >>\n";
	cout << "Students in level 1: " << lvl1 << '\n';
	cout << "Students in level 2: " << lvl2 << '\n';
	cout << "Students in level 3: " << lvl3 << '\n';
	cout << "Students in level 4: " << lvl4 << '\n';
	cout << "Students under probation (god forbid): " << under_probation << '\n';
	delete[] students;
	return 0;
}