#include <iostream>
using namespace std;
int main() {
	float x;
	char o;
	cout << "Enter A Number: ";
	cin >> x;
	cout << "Choose What to do:\na - add 3\nb - subtitue 8\nc - divide by 13,94509\nd - multiply by 0.34832\ne - do nothing.\n";
	cin >> o;
	switch (o){
		case 'a': cout << x + 3; break;
		case 'b': cout << x - 8; break;
		case 'c': cout << x / 13.94509; break;
		case 'd': cout << x * 0.34832; break;
		case 'e': cout << "alr"; break;
		default: cout << "Not a valid option letter. bye.";
	}
	return 0;
}