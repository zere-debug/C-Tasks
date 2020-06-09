
#include <iostream>
using namespace std;

int main() {
	int n, x=0;
	cout << "Enter the number ";
	cin >> n;
	cout << "The dividers of this numbers are ";
	for (int i = 1; i <= n; i++) {
		if (n % i == 0) { x++; cout << i << " "; }
	}
	cout <<endl<< "The number of dividers of this number is "<<x;
}
