#include <iostream>

using namespace std;

#define SIZE 5
int stack[SIZE];
int top = -1;

void push(int data) {
	if (top == SIZE - 1) {
		cout << "Stack overflow!\n";

	}
	else {
		top++;
		stack[top] = data;
	}
}

int pop() {
	if (top == -1) {
		cout << "Stack underflow!\n";
	}
	else {
		return stack[top--];
	}
}

int peek() {
	if (top == -1) {
		cout << "Stack underflow!\n";
	}
	else {
		return stack[top];
	}
}

void display() {
	if (top == -1) {
		cout << "Empty\n";
	}
	else {
		for (int i = top; i >= 0; i--) {
			cout << stack[i] << '\n';
		}
	}

}

int main() {
	cout << "--------- 5 items stack ---------\n";
	for (int i = 0; i < 5; i++) {
		cout << "Item " << i + 1 << ": ";
		cin >> stack[i];
		push(stack[i]);
	}
	cout << "---------------------\nStack:\n";
	display();
	do {
		cout << "\nAdjustments? (y/n) ";
		char decision;
		cin >> decision;
		switch (decision) {
		case 'y': {
			cout << "Choose a function:\n1 - push\n2 - pop\n3 - peek\n";
			int decision2;
			cin >> decision2;
			switch (decision2) {
			case 1: {
				cout << "Item (pushing): ";
				int item;
				cin >> item;
				push(item);
				cout << "\n---------------------\nStack:\n";
				display();
				break;
			}
			case 2: {
				pop();
				cout << "---------------------\nStack:\n";
				display();
				break;
			}
			case 3: {
				cout << peek();
				break;
			}

			}
			break;
		}
		case 'n': {
			return 0;
		}
		default: {
			cout << "Invalid\n";
			return 0;
		}
		}
	} while (true);
	return 0;
}