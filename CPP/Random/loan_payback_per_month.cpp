#include <iostream>
using namespace std;
int main()
{
    int loan, MonthlyPayment, months;
    cout << "<< Months calc >>\nEnter the loan amount: "; cin >> loan; cout << "Enter the monthly payment: "; cin >> MonthlyPayment;
    months = loan / MonthlyPayment;
    cout << "You need to pay for " << months << " month/s to cover the loan.\n\n\n";
    return 0;
}