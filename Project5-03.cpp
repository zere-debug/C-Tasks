
#include <iostream>
using namespace std;

bool Xor(bool x, bool y) {
	if ((!x && y) || (x && !y)) { return true; }
	else { return false; }
}

int main() {
	bool x, y;
	cout << "Enter 1(True) or 0(False) ";
	cin >> x >> y;
	cout << Xor(x, y);
}
