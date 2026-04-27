#include <iostream>
using namespace std;

class Student{
    int id;
    string name;
    int* heap;

    public:
    Student(int id, string name, int* heap){ // Constructor
        cout << "\nConstructor\n";
        this-> id = id;
        this->name = name;
        this->heap = heap;
    } 

    Student(Student& s){ // Copy Constructor
        cout << "\nCopy Constructor\n";
        id = s.id;
        name = s.name;
        heap = new int(*s.heap);
    }

    ~Student(){ // Destructor
        cout << "\n~Destructor\n";
        delete heap;
    }
};