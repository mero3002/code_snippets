#include <iostream>
using namespace std;

class Student {
    int id;
    string name;
    int level;
    string* courses;
    int SIZE;
    public:
        Student(int id, string name, int SIZE, string* courses, int level=1) : id{id}, name{name}, level{level} {

            this->SIZE = SIZE;

            this->courses = new string[SIZE];

            for (int i = 0; i < SIZE; i++) {
                this->courses[i] = courses[i];
            }
        }

        void display() {
            cout << "ID: " << id << '\n';
            cout << "Name: " << name << '\n';
            cout << "Level: " << level << '\n';
            cout << "Courses: {";
            for (int i = 0; i < SIZE; i++) {
                cout << this->courses[i];
                if (i < SIZE - 1) {
                    cout <<", ";
                }
            }
            cout << "}";
        }

};