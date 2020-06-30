

#include <iostream>
using namespace std;

bool IsPrime(int n) {
	for (int i = 2; i <= (n - 1); i++) {
		if (n % i == 0) { return false; }
	}
	return true;
}

int main() {
	int n;
	cout << "Enter the number ";
	cin >> n;
	if (IsPrime(n)==false) { cout << "This number is composite"; }
	else { cout << "This number is prime"; }
}
