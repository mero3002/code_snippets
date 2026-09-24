#include <iostream>
#include <vector>
using namespace std;

int main() {
    long long a, b, c;
    vector<long long> v(3);

    for (int i = 0; i < 3; i++){
        cin >> v[i];
    }

    long long min = v[0];
    long long max = v[0];

    for (int i = 0; i < 3; i++){
        if (min > v[i]){
            min = v[i];
        }
    }

    for (int i = 0; i < 3; i++){
        if (max < v[i]){
            max = v[i];
        }
    }

    cout << min << " " << max;

    return 0;
}