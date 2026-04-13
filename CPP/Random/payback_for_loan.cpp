#include <iostream>
using namespace std;
int main()
{
    int short months, loan, MonthlyPayment;
    cout << "<< loan period calc >>\n----------------\nHow many months do you have? "; cin >> months;
    cout << "Enter the amount of the loan: "; cin >> loan;
    MonthlyPayment = loan / months;
    cout << "You have to pay " << MonthlyPayment << " per month to cover this loan.\n\n\n";
}