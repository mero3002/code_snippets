#include <iostream>

using namespace std;

class Node {
public:
	int value;
	Node* next;
};

Node* head = NULL;

void append(int data) {
	Node* new_node = new Node;
	new_node->value = data;
	new_node->next = NULL;
	Node* last = head;

	if (head == NULL) {
		head = new_node;
	}

	else {
		while (last->next != NULL) {
			last = last->next;
		}
	}
}

void display() {
	Node* current = head;
	if (head == NULL) {
		cout << "Empty";
	}
	else {
		while (current != NULL) {
			cout << current << '\n';
			current = current->next;
		}
	}
}

int main() {
	append(1);
	append(2);
	append(3);
	append(4);
	append(5);
	append(6);

	display();
	return 0;
}