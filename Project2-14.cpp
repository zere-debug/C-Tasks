﻿
#include <iostream>
using namespace std;


int main() {
	int x, k1, k5, k10, k20, k60;

	cin >> x;

	k60 = x / 60;
	x = x % 60;

	k20 = x / 20;
	x = x % 20;

	k10 = x / 10;
	x = x % 10;

	k5 = x / 5;

	k1 = x % 5;

	if (k1 * 15 >= 70) { k5++; k1 = 0; }

	if ((k1 * 15 + k5 * 70) > 125) { k10++; k5 = 0; k1 = 0; }

	if ((k1 * 15 + k5 * 70 + k10 + 125) > 230) { k20++; k10 = 0; k5 = 0; k1 = 0; }

	if ((k1 * 15 + k5 * 70 + k10 * 125 + k20 * 230) > 440) { k60++; k20 = 0; k10 = 0; k5 = 0; k1 = 0; }

	cout << k1 << " " << k5 << " " << k10 << " " << k20 << " " << k60;
}
