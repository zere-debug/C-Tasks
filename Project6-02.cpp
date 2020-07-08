
#include <iostream>
using namespace std;

bool IsDigit(unsigned char s) {

	if ((s >= '0') && (s <= '9')) {
		return true;
	}
	else return false;
}

int main() {
	unsigned char s;
	cout << "Enter the symbol";
	cin >> s;

	if (IsDigit(s)) {
		cout << "Yes, it is a digit";
	}
	else 
	{
		cout << "No, it is not a digit";
	}

	return 0;
}