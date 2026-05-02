#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* next;
};

Node* top = nullptr;

void push(int value){
    Node* new_node = new Node;
    new_node->data = value;
    new_node->next = top;
    top = new_node;
    cout << "Value " << value << " Added\n";
}

void pop(){
    if (top == nullptr){
        cout << "Stack UNDERFLOW!\n";
        return;
    }
    Node* temp = top;
    top = top->next;
    cout << "Value " << temp->data << " Popped\n";
    delete temp;
}

void tos(){
    if (top == nullptr){
        cout << "Stack is Empty";
        return;
    }
    cout << "Top of Stack: " << top->data << '\n';
}

void display(){
    if (top == nullptr){
        cout << "Stack is Empty\n";
        return;
    }
    Node* temp = top;
    cout << "\nStack:\n";
    while (temp != nullptr){
        cout << temp->data << '\n';
        temp = temp->next;
    }
}

int main(){
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