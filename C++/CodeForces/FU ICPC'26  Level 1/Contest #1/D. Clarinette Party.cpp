#include <bits/stdc++.h>
using namespace std;
#define ll long long

int rows, cols;

bool valid(int i, int j) {
	if (i >= rows || i < 0) return false;
	if (j >= cols || j < 0) return false;
	return true;
}

int main() {
	
	ll max = 0;
	int counter = 0;
	int max_i;
	int max_j;
	cin >> rows >> cols;

	vector<vector<ll>> v(rows, vector<ll>(cols));

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) cin >> v[i][j];
	}

	for (int i = 0; i < rows; i++) {
		for (int j = 0; j < cols; j++) {

			ll right = 0;
			ll left = 0;
			ll top = 0;
			ll bot = 0;
			ll top_left_di = 0;
			ll top_right_di = 0;
			ll bot_left_di = 0;
			ll bot_right_di = 0;


			if (valid(i, j + 1)) right = v[i][j + 1];
			if (valid(i, j - 1)) left = v[i][j - 1];
			if (valid(i - 1, j)) top = v[i - 1][j];
			if (valid(i + 1, j)) bot = v[i + 1][j];
			if (valid(i + 1, j - 1)) top_left_di = v[i + 1][j - 1];
			if (valid(i + 1, j + 1)) top_right_di = v[i + 1][j + 1];
			if (valid(i - 1, j - 1)) bot_left_di = v[i - 1][j - 1];
			if (valid(i - 1, j + 1)) bot_right_di = v[i - 1][j + 1];

			if (
				v[i][j] > right
				&& v[i][j] > left
				&& v[i][j] > top
				&& v[i][j] > bot
				&& v[i][j] > top_left_di
				&& v[i][j] > top_right_di
				&& v[i][j] > bot_left_di
				&& v[i][j] > bot_right_di
				) {
				counter++;
				if (v[i][j] > max) {
					max = v[i][j];
					max_i = i;
					max_j = j;
				}
			}
		}
	}

	cout << counter << endl << max_i + 1 << ' ' << max_j + 1 << ' ' << endl;
	return 0;
}