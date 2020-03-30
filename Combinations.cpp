#include <iostream>
using namespace std;

int factorial(int n) {
	int f = 1, i;

	for (i = 2; i <= n; ++i) {
		f = f * i;
	}

	return f;
}

int main() {
	int n, k;
	cin >> n >> k;
	cout << factorial(n) / (factorial(k) * factorial(n - k)) << endl;
	return 0;
}


