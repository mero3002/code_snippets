#include <iostream>
using namespace std;
int main()
{
    cout << "<< Welcome To The Measurments Converter! >>" << endl;
    cout << "\n\t k for kilo --> lbs\n\t l for lbs --> kilo \n";
    char a;
    cout << "Enter the measurment's shortcut: ";
    cin >> a;
    float x;
    cout << "Enter the number: ";
    cin >> x;

    if (a == 'k') {
        cout << x * 2.20462;
        cout << " lbs";

    }
    else if (a == 'l') {
        cout << x / 2.20462;
        cout << " kilo";

    }
    else {
        cout << "Invalid Unit.";
    }

    return 0;
}