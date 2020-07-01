
#include <iostream>
using namespace std;

double power(double a, int n) {
	if (n == 0) { return 1; }
	if (n == 1) { return a; } else 
	return a * power(a,n - 1);
}

int main() {
	int n;
	double a;
	cout << "Enter the number ";
	cin >> a;
	cout << "Enter the power ";
	cin >> n;
	cout <<"The result of number "<<a<<" in power "<<n<<" is "<< power(a, n)<<".";
}
