
#include <iostream>
using namespace std;

int main() {
	
	for (int i = 100; i <= 999; i++) {
		int i1, i2, i3, i4;
		i1 = i * i;
		i2 = i1 % 100000;
		i3 = i2 % 10000;
		i4 = i3 % 1000;
		if (i4 == i) { cout << i << " "; }
	}
}
