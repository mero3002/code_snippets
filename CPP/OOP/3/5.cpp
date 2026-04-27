#include <iostream>
#include "5.h"
using namespace std;

int main(){
    Distance* ptr = new Distance(3, 4);
    cout << ptr->get_feet();
    cout << '\n';
    cout << ptr->get_inches();
    cout << '\n';
    // cout << Distance::counter;
    return 0;
}