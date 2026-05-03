#include <iostream>
using namespace std;

// // Program 2:
//int main() {
//	int size;
//	cout << "Number of Elements: ";
//	cin >> size;
//	float* arr = new float[size];
//
//	for (int i = 0; i < size; i++) {
//		cout << "Element " << i + 1 << ": ";
//		cin >> arr[i];
//	}
//
//	cout << "------------------------------";
//
//	cout << '\n';
//	cout << "Elements of The Array:";
//	for (int i = 0; i < size; i++) {
//		cout << "\nElement " << i + 1 << ": ";
//		cout << arr[i];
//	}
//
//	float total = 0;
//	cout << "\n\n";
//	cout << "Sum of The Items = ";
//	for (int i = 0; i < size; i++) {
//		total += arr[i];
//	}
//	cout << total << '\n';
//	float avg = total / size;
//	cout << '\n';
//	cout << "Average = " << avg;
//	cout << '\n';
//
//	return 0;
//}















// // Program 1:
//int main() {
//    int v1 = 1;
//    int v2 = 2;
//
//    int* ptr1 = &v1;
//    int* ptr2 = &v2;
//
//    cout << "V1 Value: " << *ptr1 << '\n';
//    cout << "V1 Address: " << ptr1 << '\n';
//     
//    cout << "V2 Value: " << *ptr2 << '\n';
//    cout << "V2 Address: " << ptr2 << '\n' << '\n';
//
//    *ptr1 = *ptr1 + *ptr2;
//    *ptr2 = *ptr1 - *ptr2;
//    *ptr1 = *ptr1 - *ptr2;
//
//    cout << "After Swapping:\n";
//    cout << "V1 Value: " << *ptr1 << '\n';
//    cout << "V1 Address: " << ptr1 << '\n';
//
//    cout << "V2 Value: " << *ptr2 << '\n';
//    cout << "V2 Address: " << ptr2 << '\n';
//
//    cout << "----------------------------------------------------------\n";

//    cout << "Before Arithmetic Operation:\n" << "V1 = " << *ptr1 << '\n' << "V2 = " << *ptr2 << '\n';
//    *ptr1 += 10;
//    *ptr2 -= 10;
//    cout << "After Arithmetic Operation:\n" << "V1 = " << *ptr1 << '\n' << "V2 = " << *ptr2 << '\n';
//
//    return 0;
//}








// // Program 3:
//// insert
//// display
//// delete
#include <iostream>
using namespace std;

struct Node {
   int data;
   Node* next;
};

Node* head = nullptr;

bool is_empty_() {
   return head == nullptr;
}

void append(int value) { // aka: add_back
   Node* new_node = new Node;
   (*new_node).data = value;
   (*new_node).next = nullptr;

   if (is_empty_()) {
       head = new_node;
       return;
   }

   Node* current = head;
   while (current->next != nullptr) {
       current = current->next;
   }

   current->next = new_node;
}

void insert(int value) { // aka: add_front
   Node* new_node = new Node;
   new_node->data = value;

   if (is_empty_()) {
       head = new_node;
       new_node->next = nullptr;
       return;
   }

   new_node->next = head;
   head = new_node;
}

void display() {
   if (is_empty_()) {
       cout << "List is Empty!";
       return;
   }

   Node* current = head;

   for (int i = 0; current != nullptr; i++) {
       cout << "Item [" << i + 1 << "]: ";
       cout << current->data << '\n';
       current = current->next;
   }
}

bool delete_by_value(int value) {
   if (is_empty_()) {
       cout << "List is Empty!";
       return false;
   }

   Node* current = head;

   if (head->data == value) {
       head = head->next;
       delete current;
       current = nullptr;
       return true;
   }

   Node* prev = head;
   current = head->next;
   while (current != nullptr && current->data != value) {
       current = current->next;
       prev = prev->next;
   }

   if (current == nullptr) {
       cout << "Item Does not Exist!\n";
       return false;
   }

   prev->next = current->next;
   delete current;
   current = nullptr;
   return true;
}

int main() {
   int number_of_nodes;
   while (true) {
       cout << "Enter Number of Nodes: ";
       cin >> number_of_nodes;

       if (number_of_nodes <= 0) {
           cout << "Number of Nodes has to Be Positive\n";
           continue;
       }
       break;
   }

   for (int i = 0; i < number_of_nodes; i++) {
       cout << "Item [" << i + 1 << "]: ";
       int item;
       cin >> item;
       append(item);
   }

   cout << '\n';
   cout << "List:\n";
   display();
   cout << "\n-----------------------------\n";

   int inserted_value;
   cout << "Insert: ";
   cin >> inserted_value;
   insert(inserted_value);

   cout << '\n' << "List After Inserting:\n";
   display();
   cout << "\n-----------------------------\n";

   int deleted_value;

   do { // this only works because the list does have items
       cout << "Delete Value: ";
       cin >> deleted_value;
   } while (!delete_by_value(deleted_value));

   cout << '\n' << "List After Deleting:\n";
   display();
   cout << "\n-----------------------------\n";

   return 0;
}