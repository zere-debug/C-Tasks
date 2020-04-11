#include <iostream>
using namespace std;

int main() {
	int x, y, x1, y1;

	cout << "Enter the first position's coordinates";
	cin >> x >> y;
	cout << "Enter the second position's coordinates";
	cin >> x1 >> y1;

	int dx = x - x1;
	int dy = y - y1;

	if (dx < 0) { dx = -dx; }
	if (dy < 0) { dy = -dy; }

	if (dx==dy) { cout << "YES"; }
	else { cout << "NO"; }

	return 0; 
}