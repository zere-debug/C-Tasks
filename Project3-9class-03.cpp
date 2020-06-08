
#include <iostream>
using namespace std;

int main() {
	int n;
	double s1 = 0, s = 0, x = 1;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		s = x / (s + i);
		s1 = s + s1;
	}
	cout << s1;
}
