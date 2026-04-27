#include <iostream>
using namespace std;

class Parent{
    public:
        int data;

        Parent(int data=1):data{data} {}

        virtual void display(){
            cout << "From Parent, Data = " << data;
        }

        void x(){
            display();
        }
};

class Child : public Parent{
    public:
        Child(){}

        void display() override{
            cout << "From Child, Data = " << data;
        }
};