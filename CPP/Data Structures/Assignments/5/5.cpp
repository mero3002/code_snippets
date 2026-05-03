// assignment instructions are bottlenecks to this program.
// Mahmoud Ahmed - 202500283
#include <iostream>
using namespace std;
#define SIZE 100

struct Student{
    int id;
    string name;
    float grade;
    Student* next;
};

Student* stack_1_top = nullptr;
Student* stack_2_top = nullptr;
int stack_1_nodes_counter = 0;
int stack_2_nodes_counter = 0;

void push(Student s, Student*& stack, int& counter){
    if (counter == SIZE){
        cout << "Stack OVERFLOW!\n";
        return;
    }
    Student* new_student = new Student(s);
    new_student->next = stack;
    stack = new_student;
    counter++;
};

void pop(Student*& stack, int& counter){
    if (stack == nullptr){
        cout << "Stack UNDERFLOW!\n";
        return;
    }
    Student* temp = stack;
    stack = stack->next;
    delete temp;
    counter--;
};

void peek(Student* stack){
    if (stack == nullptr){
        cout << "Empty Stack\n";
        return;
    }
    cout << "Top of stack student: \n";
    cout << "ID: " << stack->id << '\n';
    cout << "Name: " << stack->name << '\n';
    cout << "Grade: " << stack->grade << '\n';
    cout << "------------------------\n";
};

void display(Student* stack, int i){
    if (stack == nullptr){
        cout << "Empty Stack\n";
        return;
    }
    Student* temp = stack;
    for (i; temp != nullptr; i--){
        cout << "Student " << i << ":\n";
        cout << "ID: " << temp->id << '\n';
        cout << "Name: " << temp->name << '\n';
        cout << "Grade: " << temp->grade << '\n';
        cout << "------------------------\n";
        temp = temp->next;
    }
};

float grades_avg(Student* stack, int& counter){
    if (counter == 0){
        cout << "Empty Stack\n";
        return 0;
    }
    float total = 0;
    Student* temp = stack;
    while (temp != nullptr){
        total += temp->grade;
        temp = temp->next;
    }
    return total / counter;
};

bool isPassed(Student* ptr){
    return ptr->grade > 50;
};

void remove_failed_from_stack_1(){
    if (stack_1_top == nullptr){
        cout << "Empty Stack\n";
        return;
    }
    while (stack_1_top != nullptr){
        if (isPassed(stack_1_top)){
            push(*stack_1_top, stack_2_top, stack_2_nodes_counter);
        }
        pop(stack_1_top, stack_1_nodes_counter);
    }
    while (stack_2_top != nullptr){
        push(*stack_2_top, stack_1_top, stack_1_nodes_counter);
        pop(stack_2_top, stack_2_nodes_counter);
    }
};

void destroy_all(){
    while (stack_1_top != nullptr){
        pop(stack_1_top, stack_1_nodes_counter);
    }
    while (stack_2_top != nullptr){
        pop(stack_2_top, stack_2_nodes_counter);
    }
};

int main(){
    cout << "========= Students Stats =========\n";

    for (int i = 0; i < SIZE; i++) {
        int id;
        string name;
        float grade;
        cout << "Student "<< i + 1 << ":\n";
        cout << "ID: ";
        cin >> id;
        cout << "Name: ";
        cin >> name;
        cout << "Grade: ";
        cin >> grade;
        Student s = {id, name, grade}; // the 4th member 'the pointer' will be initialized with 'nullptr' here
        push(s, stack_1_top, stack_1_nodes_counter);
        cout << "-----------------------\n";
    }
    cout << "Grades average BEFORE removing failed students = " << grades_avg(stack_1_top, stack_1_nodes_counter) << '\n';
    remove_failed_from_stack_1();
    cout << "Grades average AFTER removing failed students = " << grades_avg(stack_1_top, stack_1_nodes_counter) << '\n';
    cout << "====== Names of the passed students ======\n"; // NOT in order
    Student* temp = stack_1_top;
    for (int i = 0; i < stack_1_nodes_counter; i++){
        cout << "Student " << i + 1 << ": " << temp->name << '\n';
        temp = temp->next;
    }
    cout << "Number of students who passed: " << stack_1_nodes_counter << " (from " << SIZE << ")\n";
    // display(stack_1_top);
    return 0;
}