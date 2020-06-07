
#include <iostream>
using namespace std;

int main() {
	int a1 = 1, a, n;
	cout << "Enter a and n ";
	cin >> a >> n;

	for (int i = 1; i <= n; i++) {
		a1 = a1 * a;
	}
	cout <<"The result of a^n is "<< a1;
}
