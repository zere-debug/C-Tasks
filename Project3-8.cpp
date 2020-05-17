
#include <iostream>
using namespace std;

int main() {
	int n, s=0, s1=0;
	cout << "Enter the number ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		s = s + i;
		s1 = s + s1;
	}
	cout << "The result is "<<s1;
}
