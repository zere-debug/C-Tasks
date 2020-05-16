
#include <iostream>
using  namespace std;

int main() {
	int a, n, s=1;
	cout << "Enter a and n ";
	cin >> a >> n;
	for (int i = 1; i <= n; i++) {
		s = s*a;
	}
	cout<<a<<"^"<<n<<" = "<< s;
}
