
#include <iostream>
using namespace std;

int main() {
	int a, b, a1, b1;
	cout << "Enter the first position and then the second position ";
	cin >> a;
	cout << " ";
	cin >> b;
	cout << " ";
	cin >> a1;
	cout << " ";
	cin >> b1;

	if ((a == a1) || (b == b1)) { cout << "YES"; }
	else { cout << "NO"; }

	return 0;
}
