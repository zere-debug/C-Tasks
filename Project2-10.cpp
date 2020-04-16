
#include <iostream>
#include <cmath>
using namespace std;

int main() {
	int a, b,c;
	cout << "Enter a, b and c of a*x^2+b*x+c " << endl;
	cin >> a >> b>>c;

	int d;
	d = (b * b - 4 * a * c);

	int x1, x2;
	x1 = (-b + sqrt(d)) / (2 * a);
	x2 = (-b - sqrt(d)) / (2 * a);

	cout << "The answer: ";
	if (d > 0) { cout <<"x1 is "<< x1<<", "<<"x2 is " << x2<<"."; }
	if (d == 0) { cout <<" x is "<< (-b)/(2*a); }
	if (d < 0) { cout << " "; }

	return 0;
}
