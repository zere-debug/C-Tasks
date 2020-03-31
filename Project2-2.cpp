#include <iostream>
using namespace std;

int main() {
	int a, b;

	cout << "Enter the first number ";
	cin >> a;
	cout << "Enter the second number ";
	cin >> b;
	cout << "The result is ";

	if (a > b) { cout << 1; }
	if (b > a) { cout << 2; }
	if (a == b) { cout << 0; }

	return 0;
}
