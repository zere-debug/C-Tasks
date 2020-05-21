
#include <iostream>
using namespace std;

int main() {
	int n, s=0, i1;
	cout << "Enter the n numbers ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		i1 = i * i;
		s = s + i1;
	}

	cout <<"The result is "<< s;
}
