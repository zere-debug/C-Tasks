
#include <iostream>
using namespace std;

int main() {
	int n, x=0;
	cout << "Enter the number ";
	cin >> n;
	while (n) {
		x = x + (n % 2);
		n= n / 2;
	}
	if (x==1) { cout <<endl<< "This number is a power of 2"; }
	else { cout << "This number is not a power of 2"; }
}