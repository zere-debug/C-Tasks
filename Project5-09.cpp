
#include <iostream>
using namespace std;

int phi(int n) {
	if (n == 0) { return 0; }

	if (n == 1 || n == 2) { return 1; }

	if (n > 1) { return (phi(n - 1) + phi(n - 2)); }
}

int main() {
	int n;
	cout << "Enter the n-number of Fibonachi sequence ";
	cin >> n;
	cout << "The n-th number of Fibonachi sequence is "<<phi(n);
}
