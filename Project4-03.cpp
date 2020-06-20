
#include <iostream>
using namespace std;

int main() {
	int n, a=1, x=0;
	cout << "Enter the number ";
	cin >> n;
	while (a<=n) {
		a = a * 2;
		x++;
	}
	cout <<"The lowest power of 2 is "<< x;
	return 0;
}
