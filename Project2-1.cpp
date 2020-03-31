#include <iostream>
using namespace std;

int main() {
	int a, b;

	cout << "Enter the first number ";
	cin >> a;
	cout << "Enter the second number ";
	cin >> b;
	cout << "The biggest number is ";
	
	if (a > b) { cout << a; }
	else { cout << b; }
	
	return 0;
}
