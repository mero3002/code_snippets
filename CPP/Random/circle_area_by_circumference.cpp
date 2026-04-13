#include <iostream>
using namespace std;
int main()
{
    float length, area, pi = 3.14;
    cout << "<< Circle Area Along the Circumference >> \n---------------------------------------\nEnter the circle's Circumference (cm): "; cin >> length;
    area = (length * length) / (4 * pi);
    cout << "Area = " << area << " cm^2";
}