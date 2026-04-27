#include <iostream>
#include "6.h"
using namespace std;

int main(){
    // Person person = {2000, "Ahmed", 20};
    // cout << "ID: " << person.get_id();
    // cout << "\nName: " << person.get_name();
    // cout << "\nAge: " << person.get_age();

    Student st_1 = {1, "Sam", 19};
    cout << "ID: " << st_1.get_id();
    cout << "\nName: " << st_1.get_name();
    cout << "\nAge: " << st_1.get_age();

    // Prof prf_1;
    // prf_1.set_id(6);
    // prf_1.set_name("7afez");
    // prf_1.set_age(62);
    // cout << "ID: " << prf_1.get_id();
    // cout << "\nName: " << prf_1.get_name();
    // cout << "\nAge: " << prf_1.get_age();

    return 0;
}