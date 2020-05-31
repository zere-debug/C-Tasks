
#include <iostream>
using namespace std;

int main() {
	int s = 0, x;
	cout << "Enter three numbers ";
	for (int i = 1; i <= 3; i++) {
		cin >> x;
		s = s + x;
	}

	cout <<"The sum of three numbers is "<< s;
}