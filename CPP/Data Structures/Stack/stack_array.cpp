#include <iostream>
using namespace std;

int SIZE;
int* stack = new int[SIZE];
int top = -1;

void push(int value){
    if (top == SIZE - 1){
        cout << "Stack OVERFLOW\n";
        return;
    }
    cout << "Value " << value << " Added\n";
    top++;
    stack[top] = value;
}

void pop(){
    if (top == -1){
        cout << "Stack UNDERFLOW\n";
        return;
    }
    cout << "Value " << stack[top] << " Popped\n";
    top--;
}

// void display(){ // wednk mnen ya go7a?
//     if (top == -1) {
//         cout << "Stack is Empty\n";
//         return;
//     }
//     cout << "\nStack:\n";
//     for (int* i = stack + top; i > stack - 1; i--){
//         cout << *i << '\n';
//     }
// }

void display(){
    if (top == -1) {
        cout << "Stack is Empty\n";
        return;
    }
    cout << "\nStack:\n";
    for (int i = top; i >= 0; i--){
        cout << stack[i] << '\n';
    }
}

void tos(){
    if (top == -1){
        cout << "Stack is Empty\n";
        return;
    }
    cout << "TOS: " << stack[top] << '\n';
}

int main(){
    cout << "Enter Stack Size: ";
    cin >> SIZE;
    cout << '\n';

    while (true){
        cout << "Enter an option:\n";
        cout << "1- Push\n";
        cout << "2- Pop\n";
        cout << "3- TOS\n";
        cout << "4- Display Stack\n";

        int option;
        cin >> option;

        switch(option){
            case 1:
                cout << "Enter a value (pushing): ";
                int num;
                cin >> num;
                push(num);
                break;
            case 2:
                pop();
                break;
            case 3:
                tos();
                break;
            case 4:
                display();
                break;
            default:
                cout << "Invalid option";
        }
        cout << '\n';
    }
    return 0;
}