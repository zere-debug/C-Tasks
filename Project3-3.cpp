
#include <iostream>
using namespace std;

int main() {
	int n, s=0;
	cout << "Enter n numbers ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		s = s + (i - 1) * i;
	}
	cout <<"The result is "<< s;
}
