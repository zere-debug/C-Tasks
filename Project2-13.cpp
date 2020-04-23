#include <iostream>
using namespace std;

int main() {
	int x, k1, k10, k60;

	cin >> x;

	k60 = x / 60;
	x = x % 60;

	k10 = x / 10;
	k1 = x % 10;

	if (k1 * 15 > 125) {
		k1 = 0; k10++;
	}

	if (k1 * 15 + k10 * 125 > 440) {
		k1 = 0; k10 = 0; k60++;
	}

	cout << k1 << " " << k10 << " " << k60;

	return 0;
}
