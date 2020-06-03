
#include <iostream>
using namespace std;

int main() {
	int n;
	double s = 0;
	cout << "Enter the number ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		s = s + (1.0 / (i * i));
	}
	cout <<"The result of 1+1/2*2+1/3*3+...+1/n*n is "<< s;
}
