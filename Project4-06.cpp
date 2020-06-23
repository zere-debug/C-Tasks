
#include <iostream>
using namespace std;

int SumOfDigits(int n) {
	int x = 0;

	while (n >= 1) {
		x = x + n;
		n--;
	}
	return x;
}

int main() {
	int n;
	cout << "Enter the number ";
	cin >> n;
	cout <<"The sum of digits of number "<<n<<" is "<<SumOfDigits(n);
}
