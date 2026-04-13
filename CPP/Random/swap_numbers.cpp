#include <iostream>
using namespace std;
int main()
{
    int a, b, c;
    cout << "<< Swap numbers >>\n---------------------\n\"Not sure why whould anyone needs this but here u go\"\nEnter the first number: "; cin >> a;
    cout << "Enter the second number: "; cin >> b;
    cout << a << "\n" << b<<"\n\n-------\n\n";
    c = a;
    a = b;
    b = c;
    cout << a << "\n" << b << "\n\n";

}