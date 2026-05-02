// queue
#include <iostream>
using namespace std;

struct Node{
    int data;
    Node* prev;
};

Node* head = nullptr;

void enqueue(int value){
    Node* new_node = new Node;
    new_node->prev = nullptr;
    new_node->data = value;
    if (head == nullptr){
        head = new_node;
        return;
    }
    Node* temp = head;
    while (temp->prev != nullptr){
        temp = temp->prev;
    }
    temp->prev = new_node;
}

void dequeue(){
    if (head == nullptr){
        cout << "Queue UNDERFLOW!\n";
        return;
    }
    cout << head->data << " Dequeued\n";
    Node* temp = head;
    head = head->prev;
    delete temp;
}

void display(){
    if (head == nullptr){
        cout << "Empty Queue\n";
        return;
    }
    Node* temp = head;
    while (temp != nullptr){
        cout << temp->data << "  ";
        temp = temp->prev;
    }
    cout << '\n';
}


int main(){
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);

    display();

    dequeue();
    dequeue();
    dequeue();

    display();

    dequeue();
    display();
    dequeue();
    return 0;
}