
#include <iostream>
using namespace std;

int min(int a, int b) {
	if (a < b) { return a; }
	else { return b; }
}

int min(int a, int b, int c) {
	return min(min(a, b), c);
}

int min(int a, int b, int c, int d) {
	return min(min(min(a, b), c), d); 
}

int main() {
	int a, b, c, d;
	cout << "Enter four numbers ";
	cin >> a >> b >> c >> d;
	cout <<"The smallest number is "<< min(a, b, c, d);
}
