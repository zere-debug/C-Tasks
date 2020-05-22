
#include <iostream>
using namespace std;

int main() {
	int n,a, a1=1, s=1;
	cin >> a >> n;
	for (int i = 0; i <= n; i++) {
		a1= a1 * a;
		s = s + a1;

	}
	cout << s;
}
