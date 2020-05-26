
#include <iostream>
using namespace std;

int main() {
	int x, result=0;
	cout << "Enter ten different numbers ";
	for (int i = 1; i <= 10; i++) {
		cin >> x;
		result += x;
	}
	cout <<"The sum of ten numbers are "<<result;
}
