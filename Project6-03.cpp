
#include <iostream>
using namespace std;

char ToUpper(char ch) {
	return (char(ch - 32));
}

int main() {
	char ch;
	cout << "Enter a small letter ";
	cin >> ch;

	if (ch >= 'a' && ch <= 'z') {
		cout << "The uppercase letter is "<<ToUpper(ch)<<".";
	}
	else { cout << "Error, cannot be transform into an uppercase letter."; }

	return 0;
}