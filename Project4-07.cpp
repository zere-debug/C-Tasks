
#include <iostream>
using namespace std;

int NumberOfZeroes(int n) {
	int x=0;
	while (n >= 9) {
		if (n % 10 == 0) { x++; }
		n = n / 10;
	 }
	return x;
}

int main() {
	int n;
	cout << "Enter the number ";
	cin >> n;
	cout <<"Number of zeroes in this number is "<< NumberOfZeroes(n);
}
