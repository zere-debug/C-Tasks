

#include <iostream>
using namespace std;

bool IsUpper(unsigned char ch) {
	if (ch>= 'A' && ch<='Z') {
		return true;
	}
	else return false;
}

int main() {
	unsigned char ch;
	cout << "Enter the letter ";
	cin >> ch;
	if (IsUpper(ch)) { cout << "Yes, it is a capital letter."; }
	else { cout << "No, it is not a capital letter."; }
}
