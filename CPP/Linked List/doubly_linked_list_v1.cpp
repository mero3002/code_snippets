#include <iostream>

using namespace std;

class Node {
public:
	int value;
	Node* next;
	Node* prev;
};

Node* head = NULL;

void add_front(int data) {
	Node* new_node = new Node;
	new_node->value = data;
	new_node->prev = NULL;

	if (head == NULL) {
		head = new_node;
		new_node->next = NULL;
	}
	else {
		head->prev = new_node;
		new_node->next = head;
		head = new_node;
	}
}

void add_end(int data) {
	Node* new_node = new Node;
	new_node->value = data;
	new_node->next = NULL;

	if (head == NULL) {
		head = new_node;
		new_node->prev = NULL;
	}
	else {
		Node* current = head;
		while (current->next != NULL) {
			current = current->next;
		}
		current->next = new_node;
		new_node->prev = current;
	}
}

void remove_front() {
	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		Node* front = head;
		head = head->next;
		if (head == NULL) {
			delete front;
			return;
		}
		head->prev = NULL;
		delete front;
	}
}

void remove_end() {
	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		Node* current = head;
		if (head->next == NULL) {
			head = NULL;
			delete current;
		}
		else {
			Node* follower = head;
			while (current->next != NULL) {
				follower = current;
				current = current->next;
			}
			follower->next = NULL;
			delete current;
		}
	}
}

void remove_value(int data) {
	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		Node* current = head;
		if (current->next == NULL) {
			if (current->value == data) {
				head = NULL;
				delete current;
			}
			else {
				cout << "Item does not exist\n";
			}
		}
		else {
			if (current->value == data) {
				head = current->next;
				current->next->prev = NULL;
				delete current;
			}
			else {
				while (current != NULL && current->value != data) {
					current = current->next;
				}
				if (current == NULL) {
					cout << "Item does not exist\n";
				}
				else {
					if (current->next == NULL) {
						current->prev->next = NULL;
						delete current;
					}
					else {
						current->next->prev = current->prev;
						current->prev->next = current->next;
						delete current;
					}
				}
			}
		}
	}
}

void display() {
	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		Node* current = head;
		while (current != NULL) {
			cout << current->value << '\n';
			current = current->next;
		}
	}
}

void reversed_display() {
	if (head == NULL) {
		cout << "Empty\n";
	}
	else {
		Node* current = head;
		while (current->next != NULL) {
			current = current->next;
		}
		while (current != NULL) {
			cout << current->value << '\n';
			current = current->prev;
		}
	}
}

int main() {
	cout << "----------------- Doubly Linked List Editor -----------------\n";
	cout << "Create your list: \n\'a\'ppend or \'i\'nsert? ";
	char decision;
	cin >> decision;
	switch (decision) {
	case 'a': {
		cout << "Items Amount: ";
		int items;
		cin >> items;
		for (int i = 0; i < items; i++) {
			cout << "Item " << i + 1 << ": ";
			int item;
			cin >> item;
			add_end(item);
		}
		cout << "\n--------------\nList:\n";
		display();
		cout << '\n';
		break;
	}

	case 'i': {
		cout << "Items Amount: ";
		int items;
		cin >> items;
		for (int i = 0; i < items; i++) {
			cout << "Item " << i + 1 << ": ";
			int item;
			cin >> item;
			add_front(item);
		}
		cout << "\n--------------\nList:\n";
		display();
		cout << '\n';
		break;
	}
	default: {
		cout << "Invalid\n";
		return 0;
	}
	}
	do {
	cout << "Adjustments? (y/n) ";
	char decision_2;
	cin >> decision_2;
	switch (decision_2) {
	case 'n': {
		return 0;
	}
	case 'y': {
		cout << "\nChoose an adjustment:\n1 - append\n2 - insert\n3 - remove front\n4 - remove end\n5 - remove value\n";
		int decision;
		cin >> decision;
		switch (decision) {
		case 1: {
			cout << "Item (appending): ";
			int item;
			cin >> item;
			add_end(item);
			cout << "\n--------------\nList after adjustments:\n";
			display();
			cout << '\n';

			break;
		}

		case 2: {
			cout << "Item (inserting): ";
			int item;
			cin >> item;
			add_front(item);
			cout << "\n--------------\nList after adjustments:\n";
			display();
			cout << '\n';

			break;
		}

		case 3: {
			remove_front();
			cout << "\n--------------\nList after adjustments:\n";
			display();
			cout << '\n';

			break;
		}

		case 4: {
			remove_end();
			cout << "\n--------------\nList after adjustments:\n";
			display();
			cout << '\n';

			break;
		}

		case 5: {
			cout << "Item value (removing): ";
			int item;
			cin >> item;
			remove_value(item);
			cout << "\n--------------\nList after adjustments:\n";
			display();
			cout << '\n';

			break;
		}

		}
		break;
	}
	default: {
		cout << "Invalid\n";
	}
	}
	} while (1);
	return 0;
}