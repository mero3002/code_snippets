#include <iostream>
using namespace std;
int main()
{
    cout << "<< Hiring Applictaion >>\n";
    short a;
    char d;
    cout << "Please enter your age: "; cin >> a;
    cout << "Do you have a driving liscens? (y/n) "; 
    cin >> d;
    if (a > 18 && a < 100 && d == 'y') {
        cout << "You are qualified !";
    }
    else if (18 > a || d == 'n') {
        cout << "You are NOT qualified.";
    }
    else {
        cout << "Please enter valid fields.";
    }
}