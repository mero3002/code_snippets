#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define ld long double

bool isFayoumi(int x) {
    // bool condition_one;
    // bool condition_two;
    ll digits_sum = 0;
    ll odds_counter = 0;
    ll evens_counter = 0;
    int current_digit;

    int x_copy = x;
    while (x_copy) {
        current_digit = x_copy % 10;
        if (current_digit % 2 == 0) {
            evens_counter ++;

            // cout << "AN EVEN WAS FOUND: " << current_digit << endl;
            // cout << "NOW EVEN COUNTER: " << evens_counter << endl;
        }
        else {
            odds_counter ++;

            // cout << "AN EVEN WAS FOUND: " << current_digit << endl;
            // cout << "NOW EVEN COUNTER: " << odds_counter << endl;
        }

        digits_sum += current_digit;
        x_copy /= 10;
    }
    if ((x % digits_sum == 0) && (evens_counter > odds_counter)) return true;
    return false;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int r, counter = 0;
    cin >> r;
    for (int i = 1; true; i++) {
        if (isFayoumi(i)) counter++;
        if (counter == r) {
            cout << i << endl;
            break;
        } 
    }

    return 0;
}
