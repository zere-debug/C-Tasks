
#include <iostream>
using namespace std;

int main() {
	int x;
	
	cout << "Enter the number ";

	cin >> x;

	cout << "Na lugu pasetsya ";

	if (x % 10 == 1) { cout << x << " korova"; }

	if (x % 10 == 0 || x % 10 == 5 || x % 10 == 6 || x % 10 == 7 || x % 10 == 8 || x % 10 == 9 || (x > 10 && x < 21)) { cout << x << " korov"; }

	else if (x % 10 == 2 || x % 10 == 3 || x % 10 == 4) { cout << x << " korovy"; }

	return 0;
}
