#include <iostream>
using namespace std;
int main()
{
    float length, base, simplified, area, pi;
    cout << "<< Circle Area Inscribed in an Isosceles Triangle >>\n---------------------------------------\nEnter the triangle's length - base: "; cin >> length >> base;
    simplified = (2 * length - base) / (2 * length + base); //because the formula is: [(2 * length - base) / (2 * length + base)]*pi*(base^2)/4
        pi = 3.14;
        area = pi * simplified * ((base * base) / 4);
        cout << "The area = " << area << " cm^2";

}
