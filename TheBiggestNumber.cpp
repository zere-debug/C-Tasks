#include <iostream>
using namespace std;

double max(double a, double b) {
	if (a > b) { return a; }
	else { return b; }
}

double max(double a, double b, double c) {
	return max(max(a, b), c);
}

int main() {
	double a, b, c;
	cout << "Enter the first number ";
	cin >> a;
	cout << endl;
	cout << "Enter the next number ";
	cin >> b;
	cout << endl;
	cout << "Enter the third number ";
	cin>> c;
	cout << endl;
	cout << "The biggest number is ";
	cout << max(a, b, c);
	return 0;
}