#include <iostream>
using namespace std;

class Person{
    // private:

    protected:
        string name;
        int age;
        int id;

    public:
        Person(int id=1, string name="DC", int age=1):name{name}, age{age}, id{id} {}
        void set_name(string name){
            this->name = name;
        }
        void set_age(int age){
            this->age = age;
        }
        void set_id(int id){
            this->id = id;
        }

        string get_name(){
            return name;
        }
        int get_age(){
            return age;
        }
        int get_id(){
            return id;
        }

};

class Student : public Person{
    private:
        int grade;

    public:
        Student(int id, string name, int age, int grade=0):
        Person(id, name, age), grade{grade} {}

        void set_grade(int grade){
            this->grade = grade;
        }
        int get_grade(){
            return grade;
        }
};

class Prof : private Person{
    private:
        string dildo_color = "RED"; // couldn't think of a private member

    public:
        Prof(){};
};