#include <iostream>
#include "8.h"
using namespace std;

int main(){
    Shape* rec = new Rectangle(2, 3);
    Shape* cir = new Circle(2);
    Shape* sqr = new Square(8);

    cout << '\n';
    cout << "Rectangle Area = " << rec->area() << "cm^2";
    cout << '\n';
    cout << "Circle Area = " << cir->area() << "cm^2";
    cout << '\n';
    cout << "Square Area = " << sqr->area() << "cm^2";
    cout << '\n';
    cout << '\n';

    delete rec;
    delete cir;
    delete sqr;

    return 0;
}