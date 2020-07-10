
#include <iostream>
using namespace std;

char CaesarCrypt(char ch) {
	if (ch >= 'A' && ch <= 'Z') {
		return ch += 3;
	}
}

int main() {
	char ch;
	cin >> ch;
	cout << CaesarCrypt(ch); 
}