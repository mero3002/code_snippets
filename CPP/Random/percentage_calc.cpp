#include <iostream>
using namespace std;
int main() {

    float all, part;
    char d;
    bool condition;
    cout << "------------ Percentage Calc ------------\n";
    do {
        cout << "All: "; cin >> all;
        cout << "Part: "; cin >> part;
        float percentage = (part / all) * 100;
        cout << "Percentage: " << percentage << "%";
        do {
            cout << "\n\nAnother go ? (y / n) : ";
            cin >> d;
        } while (d != 'y' & d != 'Y' & d != 'n' & d != 'N');
    } while (d == 'y' || d == 'Y');
    return 0;
}