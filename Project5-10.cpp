
#include <iostream>
using namespace std;

int result(int n, int k) {
	if (n < 0 || k < 0) { cout << "Cannot be count"; }
	if (k == 0 || k == n) { return 1; }

	return result(n - 1, k - 1) + result(n - 1, k);
}

int main() {
	int n, k;
	cout << "Enter n and k ";
	cin >> n >> k;
	cout <<"The number of combination from "<<n<<" by "<<k<<" is "<< result(n,k)<<".";
}
