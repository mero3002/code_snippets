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
    Employee(string name, string company, int age, int xp) {
        this->name = name;
        this->company = company;
        this->age = age;
        this->xp = xp;
    };
};

int main() {
    Employee employee1("Amr", "Aramco", 23, 4);
    employee1.cv();

    Employee employee2("Samir", "Dell", 25, 6);
    employee2.cv();

    Employee employee3("Omar", "Microsoft", 36, 14);
    employee3.cv();

    return 0;
}