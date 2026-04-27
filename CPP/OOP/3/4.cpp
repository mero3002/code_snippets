#include <iostream>
#include "4.h"
using namespace std;

int main(){

    Student s1 = {1, "Marwan", new int(5)};
    Student s2 = s1;
    cout << "\nEnd of Main\n";
    return 0;
}