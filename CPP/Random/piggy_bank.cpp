#include <iostream>
using namespace std;
int main()
{
    float penny, nickel, dime, quarter, dollar, sum;
    cout << "<< Piggy bank >>\n--------------------------\nEnter the number of: \nPennies: "; cin >> penny;
    cout << "Nickels: "; cin >> nickel;
    cout << "Dimes: "; cin >> dime;
    cout << "Quarters: "; cin >> quarter;
    cout << "Dollars: "; cin >> dollar;
    sum = (penny * 0.01) + (nickel * 0.05) + (dime * 0.01) + (quarter * 0.25) + dollar ;
    cout << "Your piggy bank carries: " << sum << " dollars.\n\n\n\n";
}