#include <iostream>
using namespace std;

int main() {
	int x1, y1, x2, y2;

	cout << "Enter the first position's coordinates ";
	cin >> x1 >> y1;

	cout << "Enter the tha last position's coordinates ";
	cin >> x2 >> y2;

	int dx = x1 - x2;
	int dy = y1 - y2;

	if (dx < 0) { dx = -dx; }
	if (dy < 0) { dy = -dy; }

	if ((dx + dy) == 1) { cout << "YES"; }
	else { 
		if ((dx + dy) == 2 && dx == 1 && dy == 1) { cout << "YES"; } 
		else { cout << "NO"; } }

	return 0;
}


