#include <iostream>
using namespace std;
int main()
{
    cout << "Pay calc\n------------------\n";
    float price, paid, remainder;
    cout << "Enter the price: "; cin >> price;
    cout << "Enter the paid: "; cin >> paid;
    if (paid > price) {
        remainder = paid - price;
        cout << "The customer wants " << remainder << " dollar.";
    }
    else if (paid == price) {
        cout << "Fair deal!";
    }
    else {
        unsigned(remainder) = price - paid;
        cout << "The Cashier Wants " << remainder << " dollar.";
    }

}