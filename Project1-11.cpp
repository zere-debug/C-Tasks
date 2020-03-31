#include <iostream>
using namespace std;

int main() {
	int a;
	cout << "Enter the number ";
	cin >> a;
	cout << "The result is " << a / 100 + a / 10 % 10 + a % 10;

}
