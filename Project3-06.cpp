﻿
#include <iostream>
using namespace std;

int main() {
	long long n, k;
	cin >> n >> k;
	long long res = 1;

	for (int i = 1; i <= k; i++) {
		res *= (n - k + i);
		res /= i; 
	}
	cout <<"C=n!/(k!(n-k)!) = "<< res;
}
