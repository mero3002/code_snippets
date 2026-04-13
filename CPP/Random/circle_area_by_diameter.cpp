#include <iostream>
using namespace std;
int main()
{
    cout << "<< Welcome to the circle area calculator! >>\n";
    double p = 3.14159265359;
    float d, a;
    cout << "Enter the circle diameter (in cm): "; cin >> d;
    a = 0.5 * d * p;
    cout << "The area of the circle is = " << a << " \vcm^2";

}
