
#include <iostream>
using namespace std;

int main() {
	int n, s = -1;
	double x = 0;
	cout << "Enter the n ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		x = ((s) / (2.0 * i + 1)) + x;
		s = -s;
	}
	x = x* 4;
	cout << "The result of 4*(-1/3+1/5-1/7+...+(-1)^n/(2n+1) is "<<x;
}
