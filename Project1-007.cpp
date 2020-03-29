
#include <iostream>
using namespace std;

int main() {
	float x,x1,x2;
	cout << "Enter the x ";
	cin >> x;
	x1 = x * x * x * x;
	x2 = x1 * x1 * x1 * x1 * x1 * x;
	cout << "The result of x^21 is " << x2;
}
