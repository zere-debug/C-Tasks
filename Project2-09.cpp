#include <iostream>
using namespace std;

int main() {
	
	int x;
	cout << "Enter the number of day ";
	cin >> x;

	if (x >= 1 && x <= 31) { cout << x << "th of " << "January"; }

	if (x >= 32 && x <= 59) { cout << x - 31 << " of " << "February"; }

	if (x >= 60 && x <= 90) { cout << x - 59 << " of " <<"March"; }

	if (x >= 91 && x <= 120) { cout << x - 90 << " of " << "April"; }

	if (x >= 121 && x <= 150) { cout << x - 120 << " of " << "May"; }

	if (x >= 151 && x <= 180) { cout << x - 150 << " of " << "June"; }

	if (x >= 181 && x <= 211) { cout << x - 180 << " of " << "July"; }

	if (x >= 212 && x <= 242) { cout << x - 211 << " of " << "August"; }

	if (x >= 243 && x <= 272) { cout << x - 242 << " of " << "September"; }

	if (x >= 273 && x <= 303) { cout << x - 272 << " of " << "October"; }

	if (x >= 304 && x <= 33) { cout << x - 303 << " of " << "November"; }

	if (x >= 334 && x <= 364) { cout << x - 333 << " of " << "December"; }

	return 0;
}
