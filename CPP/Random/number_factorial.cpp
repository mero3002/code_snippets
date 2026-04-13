#include <iostream>
using namespace std;
int main() {
	int n;
	unsigned long long result = 1;
	cout << "--------- << Factorial Calc >> ---------\nEnter the number: "; cin >> n;

	if (n > 0 && n < 66) {
		for (int i = 1; i <= n; i++) {
			result = result * i;
		}
		cout << "Result = " << result;

	}
	else if (n < 0) {
		cout << "Error: Factorial is not defined for negative numbers!";
	}
	else if (n >= 66) {
		cout << "Error: Enormously big number!";
	}
	else
	{
		result = 1;
		cout << "Result = " << result;
	}
}