#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long years, months, days;
    cin >> days;

    years = days / 365;
    days -= years * 365;

    months = days / 30;
    days -= months * 30;

    cout << years << " years" << endl;
    cout << months << " months" << endl;
    cout << days << " days" << endl;

    return 0;
}