#include <bits/stdc++.h>
using namespace std;

int main() {
    long long A, B;
    cin >> A >> B;

    if (A > B)
        swap(A, B);

    long long all = (A + B) * (B - A + 1) / 2;

    long long firstEven = (A % 2 == 0) ? A : A + 1;
    long long lastEven = (B % 2 == 0) ? B : B - 1;

    long long even = 0;
    if (firstEven <= lastEven) {
        long long n = (lastEven - firstEven) / 2 + 1;
        even = n * (firstEven + lastEven) / 2;
    }

    long long firstOdd = (A % 2 != 0) ? A : A + 1;
    long long lastOdd = (B % 2 != 0) ? B : B - 1;

    long long odd = 0;
    if (firstOdd <= lastOdd) {
        long long n = (lastOdd - firstOdd) / 2 + 1;
        odd = n * (firstOdd + lastOdd) / 2;
    }

    cout << all << '\n';
    cout << even << '\n';
    cout << odd << '\n';
}