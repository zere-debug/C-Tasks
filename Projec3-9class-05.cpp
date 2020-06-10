
#include <iostream>
using namespace std;

int main() {
	int n, x=0, y=0;
	cin >> n;

	for (int i = 2; i <n; i++) {
		if (n % i == 0) { y++; }
		else { x++; }
	}
	if (y++) { cout << "This number is not a prime number"; }
	else { cout << "This number is a prime number"; }
}
