
#include <iostream>
using namespace std;

int main() {
	double a, b, c;
	cout << "Enter the numbers ";
	cin >> a >> b >> c;

	if (a == b && b == c) { cout << 3<<" numbers is similar"; }

	else if (a == b || b == c || a == c) { cout << 2<<" number is similar"; }

	else {
		cout << 0<<" numbers is similar";
	}

	return 0;
}
