#include <iostream>
using namespace std;

class Employee {

    int id;
    string name;
    int age;
    int salary;
    int SIZE;
    string* working_days;

    public:

        Employee(int id, string name, int age, int salary, int SIZE, string* working_days):
        id{id}, name{name}, age{age}, salary{salary}, SIZE{SIZE} {

            this->working_days = new string[SIZE];
            for (int i = 0; i < SIZE; i++) {
                this->working_days[i] = working_days[i]; 
            }    
        }

        void display(){
            cout << "Employee ID: " << id << '\n';
            cout << "Employee Name: " << name << '\n';
            cout << "Employee Age: " << age << '\n';
            cout << "Employee Salary: " << salary << '\n';
            cout << "Employee Working Days: {";
            for (int i = 0; i < SIZE; i++) {
                cout << working_days[i];
                if (!(i == SIZE - 1)) {
                    cout << ", ";
                }
            }
            cout << '}';
        }

        ~Employee() {
            if (true){
            delete[] working_days;
            cout << "\nIT DID FUCKING WORK\n";
        }
        }
};