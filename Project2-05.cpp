
#include <iostream>
using namespace std;

int main() {
	double a, b, c;
	int max = 0;
	cout << "Enter three numbers ";
	cin >> a;
	cout << " ";
	cin >> b;
	cout << " ";
	cin >> c;

	max=a;
	if (b > a) { max=b; }
	if (c > a) { max=c; }

	cout <<"The maximum number is "<< max;
}
