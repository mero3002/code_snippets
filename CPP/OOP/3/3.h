#include <iostream>

using namespace std;



class Test {
    int data;
    char c;
    static int counter;
    int* heap;

    public:
        Test(int data=1, char c='a', int* heap=1) :data{data}, c{c} {
            counter ++;
            cout << "Constructor for " << data;
            cout << '\n';
            this->heap = new int(*heap);
        };

        int get_counter(){
            return counter;
        }

        void fun(int);

        ~Test(){
            cout << "Destuctor for " << data << '\n';
        }
};

void Test::fun(int x){
    while (x > 0) {
        cout << '\n'<< x << '\n';
        x -= 1;
    }
}

int Test::counter = 0;
