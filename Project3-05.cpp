
#include <iostream>
using namespace std;

int main() {
	int n, s=1, i;
	cout << "Enter the number ";
	cin >> n;
	for (int i = 1; i<=n; i++) {
		s=s*i;
	}
	cout <<"The factorial of number "<<n<<" is "<< s;
}
