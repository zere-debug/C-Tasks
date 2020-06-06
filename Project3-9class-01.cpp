

#include <iostream>
using namespace std;

int main() {
	int a=5, b = 4, c = 17, d = 3;
	a -= b = c%=d;
	cout << d << endl;

	int e = 2, f = 3;
	++e+=f--;
	cout << e << endl;

	int g, h = 2;
	g = (h++) + (--h);
	cout << g << endl;

	for (int i = 0; i < 10; i += 3) {
		cout << i << " ";
	}
	cout << endl;

	for (int j = 0; j < 100; ++j) {
		j*=2;
		cout << j << " ";
	}
	cout << endl;

	for (int k = 0; k < 100; ) {
		if (k % 2 == 0) {
			++k;
		}
		else { k = 3 * k + 1; }
		cout << k << " ";
	}
}
