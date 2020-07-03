

#include <iostream>
using namespace std;

int power(int x, int n) {
	if (n == 0) { return 1; }
	if (n%2 == 0) { return  power(x, n/2)*power(x, n/2); }

	if (n%2 != 0) { return x*power(x,n - 1); }

	return power(x*x, n/2);
}

int main() {
	int x, n;
	cout << "Enter the number ";
	cin >> x;
	cout << "Enter the power ";
	cin >> n;
	cout <<"The result is "<< power(x, n)<<".";
}
