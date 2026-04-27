#include <iostream>
using namespace std;

class Employee {
public:
    string name;
    string company;
    int age;
    int xp;

    void cv() {
        cout << "Name: " << name << '\n';
        cout << "Company: " << company << '\n';
        cout << "Age: " << age << '\n';
        cout << "Experience: " << xp << '\n';
        cout << "-----------------------------\n";
    }
};

int main() {
    Employee employee1;
    employee1.name = "Amr";
    employee1.company = "Aramco";
    employee1.age = 23;
    employee1.xp = 4;
    employee1.cv();

    Employee employee2;
    employee2.name = "Samir";
    employee2.company = "Dell";
    employee2.age = 25;
    employee2.xp = 6;
    employee2.cv();

    Employee employee3;
    employee3.name = "Omar";
    employee3.company = "Microsoft";
    employee3.age = 36;
    employee3.xp = 14;
    employee3.cv();

    return 0;
}