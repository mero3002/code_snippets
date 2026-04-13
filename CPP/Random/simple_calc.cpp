#include <iostream>

using namespace std;

int main() {
	cout << "------------- Simple Practical Calculator -------------\n";
	unsigned long long a;
	unsigned long long b;
	unsigned long long result;
	char s;
	char decision;

	do {
	cout << "\n1st Number: ";
	cin >> a;
	cout << "Sign (+, -, *, /, %): ";
	cin >> s;
	cout << "2nd Number: ";
	cin >> b;

	switch (s) {
	case '+': {
		cout << "= " << a + b;
		break;
	}
	case '-': {
		cout << "= " << a - b;
		break;
	}

	case '*': {
		cout << "= " << a * b;
		break;
	}

	case '%': {
		cout << "= " << a % b;
		break;
	}
	case '/': {
		cout << "= " << a / b;
		break;
	}
	default: {
		cout << "Invalid";
	}
	} 
	cout << "\n\nAnother go? (y/n) ";

	cin >> decision;

	} 
	while (decision == 'y');
	
	return 0;
}