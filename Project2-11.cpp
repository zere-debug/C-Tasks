
#include <iostream>
using namespace std;

int main() {
	int a, b, c;

	cout << "Enter the sites of triangle ";
	cout << endl;

	cin >> a >> b >> c;

	cout << "The result is ";

	if ((a + b) > c) {

		if ((a * a + b * b) == c * c) {
			cout << "rectangular";
		}

		if ((a * a + b * b) > c * c) {
			cout << "acute";
		}

		if ((a * a + b * b) < c * c) {
			cout << "obbuse";
		}

	}
	else { cout << "Impossible triangle"; }
}
