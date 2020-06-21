
#include <iostream>
using namespace std;

int main() {
	double x, y;
	int a = 1;
	cout << "Enter the first day's length ";
	cin >> x;
	cout << "Enter the last day's lenght ";
	cin >> y;

	while (x <= y) {
		x = x * 1.1;
		a++;
	}
	cout << "The sportsman will need " << a << " days to reach the lenght " << y << ".";
}
