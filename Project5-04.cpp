

#include <iostream>
using namespace std;

bool Election(bool x, bool y, bool z) {
	if ((x && y) || (x && z) || (y && z) || (x && z && y)) { return true; }
	else { return false; }
}

int main() {
	bool x, y, z;
	cout << "Enter true(1) or false(0) ";
	cin >> x >> y >> z;
	cout << Election(x, y, z);
	return 0;
}
