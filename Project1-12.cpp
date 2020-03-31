#include <iostream>
using namespace std;

int main() {
	int h, m, s, x;
	cout << "Enter hours ";
	cin >> h;
	cout << "Enter minutes ";
	cin >> m;
	cout << "Enter seconds ";
	cin >> s;
	h = h % 12 * 30;
	m = m % 60 * 30 / 60;
	s = (s % 60) * 30 / 3600;
	cout << "The angle is " << h + m + s;
}