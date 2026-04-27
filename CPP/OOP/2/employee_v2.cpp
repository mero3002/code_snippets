#include "2.h"
#include <iostream>
using namespace std;

// Employee(int id, string name, int age, int salary, int SIZE, string* working_days)

// Monday
// Tuesday
// Wednesday
// Thursday
// Friday
// Saturday
// Sunday

int main(){

    string arr1[] = {"Saturday", "Sunday", "Monday", "Wednesday", "Friday"};
    Employee e1(1, "Ahmed", 20, 10000, 5, arr1);

    string arr2[] = {"Tuesday", "Thursday", "Monday", "Saturday"};
    Employee e2(2, "Amir", 25, 20000, 4, arr2);

    string arr3[] = {"Friday", "Thursday", "Sunday"};
    Employee e3(3, "Amir", 30, 34000, 3, arr3);

    string arr4[] = {"Thursday", "Sunday", "Monday", "Tuesday", "Wednesday", "Friday", "Saturday"};
    Employee e4(4, "Amir", 52, 41000, 7, arr4);

    cout << "Employee 1:\n";
    e1.display();
    cout << "\n\n";

    cout << "Employee 2:\n";
    e2.display();
    cout << "\n\n";

    cout << "Employee 3:\n";
    e3.display();
    cout << "\n\n";

    cout << "Employee 4:\n";
    e4.display();
    cout << "\n\n";

    return 0;
}