
#include <iostream>
using namespace std;

double power(double a, int n) {
	int s = 1;

	for (int i = 1; i <= n; i++) {
		s = s * a;
	}

	return s;
}
int main() {
	int n;
	double a;
	cout << "Enter the number ";
	cin >> a;
	cout << "Enter the power ";
	cin >> n;
	cout << "The result is " << power(a, n);
}
