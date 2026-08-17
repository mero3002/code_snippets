// this program is based on the fact that a year has 12 month, every month has 30 days
// because i'm lazy to do the math

#include <iostream>

using namespace std;

struct date {
	int day;
	int month;
	int year;
};

int main() {

	int users;
	do {
		cout << "Number of Users: ";
		cin >> users;
		if (users < 0) {
			cout << "number of users must be postitive! (0 < users < 1000)\n";
		}
	} while (users < 0);

	int* day_arr = new int[users - 1];
	int* month_arr = new int[users - 1];
	int* year_arr = new int[users - 1];

	date today;
	bool valid;
	int birthdays_counter = 0;

	cout << "----------------------------------\n";

	cout << "Today's:\n";
	do {
		cout << "Day (1 -> 31): ";
		cin >> today.day;
		valid = true;
		if (today.day < 1 || today.day > 31) {
			cout << "Invalid, try again\n";
			valid = false;
		}
	} while (!valid);

	do {
		cout << "Month (1 -> 12): ";
		cin >> today.month;
		valid = true;
		if (today.month < 1 || today.month > 12) {
			cout << "Invalid, try again\n";
			valid = false;
		}
	} while (!valid);

	do {
		cout << "Year (positive value): ";
		cin >> today.year;
		valid = true;
		if (today.year < 0) {
			cout << "Invalid, try again\n";
			valid = false;
		}
	} while (!valid);

	cout << "\n----------------------------------\n";

	for (int i = 0; i < users; i++) {
		do {
			cout << "User " << i + 1 << " Birth Day: ";
			cin >> day_arr[i];
			valid = true;
			if (day_arr[i] > 31 || day_arr[i] < 1) {
				cout << "Invalid, try again (1 -> 31)\n";
				valid = false;
			}
		} while (!valid);
		do {
			cout << "User " << i + 1 << " Birth Month: ";
			cin >> month_arr[i];
			valid = true;
			if (month_arr[i] > 12 || month_arr[i] < 1) {
				cout << "Invalid, try again (1 -> 12)\n";
				valid = false;
			}
		} while (!valid);

		do {
			cout << "User " << i + 1 << " Birth Year: ";
			cin >> year_arr[i];
			valid = true;
			if (year_arr[i] < 1) {
				cout << "Invalid, try again (positive value)\n";
				valid = false;
			}
		} while (!valid);

		cout << "\n";
		cout << "User " << i + 1 << " Birth Date: " << day_arr[i] << '-' << month_arr[i] << '-' << year_arr[i];
		cout << '\n';
		cout << "User " << i + 1 << " Age: " << today.year - year_arr[i];
		cout << '\n';
		if (today.day == day_arr[i] && today.month == month_arr[i]) {
			cout << "Happy Birth Day!\n";
			birthdays_counter++;
		}
		else {
			date birthday;
			if (today.month > month_arr[i]) {
				birthday.month = (month_arr[i] - today.month) + 12;
			}
			else {
				birthday.month = month_arr[i] - today.month;
			}
			if (today.day > day_arr[i]) {
				birthday.day = (day_arr[i] - today.day) + 31;
			}
			else {
				birthday.day = day_arr[i] - today.day;
			}
			cout << "Birthday will be in " << birthday.month << " month/s\nand " << birthday.day << " day/s.";
		}
		cout << "\n----------------------------------\n";
	}
	cout << "Users have their birthday today: " << birthdays_counter << endl;
	return 0;
}