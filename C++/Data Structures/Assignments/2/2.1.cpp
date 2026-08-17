#include <iostream>

using namespace std;

struct date {
	int day;
	int month;
	int year;
};

int main() {
	date today;
	date birth;
	bool valid;

	cout << "---------- Age Calculator ----------\n";
	do {
		cout << "Enter today's:\nDay (1 -> 31): ";
		cin >> today.day;
		valid = true;
		if (today.day > 31 || today.day < 1) {
			valid = false;
			cout << "\nInvalid input, try again.\n";
		}
	} while (!valid);

	do {
		cout << "Month (1 -> 12): ";
		cin >> today.month;
		valid = true;
		if (today.month > 12 || today.month < 1) {
			valid = false;
			cout << "\nInvalid input, try again.\n";
		}
	} while (!valid);

	do {
		cout << "Year (positive number): ";
		cin >> today.year;
		valid = true;
		if (today.year < 1) {
			valid = false;
			cout << "\nInvalid input, try again.\n";
		}
	} while (!valid);
	cout << "-----------------------------------------------\n";

	do {
		cout << "Enter Birth's:\nDay (1 -> 31): ";
		cin >> birth.day;
		valid = true;
		if (birth.day > 31 || birth.day < 1) {
			valid = false;
			cout << "\nInvalid input, try again.\n";
		}
	} while (!valid);

	do {
		cout << "Month (1 -> 12): ";
		cin >> birth.month;
		valid = true;
		if (birth.month > 12 || birth.month < 1) {
			valid = false;
			cout << "\nInvalid input, try again.\n";
		}
	} while (!valid);

	do {
		cout << "Year (positive number): ";
		cin >> birth.year;
		valid = true;
		if (birth.year < 1) {
			valid = false;
			cout << "\nInvalid input, try again.\n";
		}
	} while (!valid);

	cout << "-----------------------------------------------\n";
	cout << "Results:\n";
	cout << "Age: " << today.year - birth.year << endl;
	if (today.day == birth.day && today.month == birth.month) {
		cout << "Today is your birthday, Happe Birth Day!\n";
	}
	else {
		date birthday;
		if (today.month > birth.month) {
			birthday.month = (birth.month - today.month) + 12;
		}
		else {
			birthday.month = birth.month - today.month;
		}
		if (today.day > birth.day) {
			birthday.day = (birth.day - today.day) + 31;
		}
		else {
			birthday.day = birth.day - today.day;
		}
		cout << "Your birthday will be in " << birthday.month << " month/s\nand " << birthday.day << " day/s.\n";
	}
	return 0;
}