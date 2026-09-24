// all the boolean functions that i have encountered
// doing their magic and returning wheather the input is palindrom or not

// number:

// input: vector of single integers
bool isVectorPalindrom(vector<int>& v1){
    int v1_size = v1.size();

    vector<int> v2;

    for (int i = v1_size - 1; i >= 0 ; i--){
        if (v1.at(i) > 0) v2.push_back(v1.at(i));
    }

    return (v1 == v2);
}


// input: long long int
bool isLLPalindrom(ll x){
    string reversed, x_str = to_string(x);

    ll size = x_str.length();

    for (ll i = size - 1; i >= 0; i--){
        reversed = reversed + x_str[i];
    }

    long long reversed_int = stoll(reversed);
    cout << reversed_int << endl;

    if (reversed_int == x) return true;
    return false;
}