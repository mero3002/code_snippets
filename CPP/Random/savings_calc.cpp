#include <iostream>
using namespace std;
int main() {
    cout << "--------------- Total & Average Savings Calc ---------------";
    cout <<'\n';
    const int arr = 5; //array size
    float savings[arr], total = 0;
    int i = 0;
    for (; i < arr; i++) {
        cout << "Month " << i + 1 << " amount: ";
        cin >> savings[i];
        total += savings[i];
    }
    cout << "\nTotal: " << total;
    float avg = total / i;
    cout << "\nAverage: " << avg;
    return 0;
}