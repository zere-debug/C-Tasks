
#include <iostream>
using namespace std;

int main() {

	int a, b;
		for (int i = 10; i <= 99; i++) {
		a = i / 10;
		b = i % 10;
		if ((a * b * 2) == i){ cout << i << endl; }
	}
}
