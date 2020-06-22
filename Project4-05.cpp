
#include <iostream>
using namespace std;


int main() {
	double x, y, dist=0;
	int days = 0;
	cout << "Enter the first day's distance and the last day's distance ";
	cin >> x >> y;
	while (dist<= y) {
		dist+=x;
		x = x * 1.1;
		days++;
	}
	cout <<"The sportsman will need "<<days<<" days to reach the distance "<<y<<" km in summary.";
}
