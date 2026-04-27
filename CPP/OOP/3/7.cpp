#include <iostream>
using namespace std;
#include "7.h"

int main(){
    // Child c1;
    // c1.x();

    Child* ptr1 = new Child;
    ptr1->display();

    cout << '\n';

    Parent* ptr2 = new Child;
    ptr2->display();
    return 0;
}