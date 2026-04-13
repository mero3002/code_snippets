#include <iostream>
using namespace std;
int main() {
	int id, qty;
	float price = 0, total, discount = 0;
	cout << "-------- Pharmacy Menu --------\n";
	cout << "1. Tamol        - 70 LE\n";
	cout << "2. Panadol      - 40 LE\n";
	cout << "3. Aerius       - 80 LE\n";
	cout << "4. Revo         - 2 LE\n";
	cout << "5. Limitless    - 100 LE\n";
	cout << "\n----------------\n";
	cout << "Enter item's ID: "; cin >> id;
	cout << "Enter the quantity: "; cin >> qty;
	switch (id) {
	case 1: price = 50; break;
	case 2: price = 40; break;
	case 3: price = 80; break;
	case 4: price = 2; break;
	case 5: price = 100; break;
	default: cout << "Invalid ID!";
	}
	total = price * qty;
	if (total >= 100 && total < 200)
	{
		discount = 0.1 * total;
	}
	else if (total >= 200)
	{
		discount = 0.2 * total;
	}
	cout << "\n-------- Invoice --------\n";
	cout << "Item ID: " << id << "\n";
	cout << "Unit Price: " << price << "\n";
	cout << "Quantity: " << qty << "\n";
	cout << "Total before discount: " << total << "\n";
	cout << "Discount: " << discount << "\n";
	cout << "Total after discount: " << total - discount;
	cout << "\n-------- Thank you! --------\n";
} 