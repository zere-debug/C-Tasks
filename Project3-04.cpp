#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Enter two numbers ";
	cin >> a >> b;
	cout << "All even numbers in this interval are ";
	for (int i = a; i < b; i++) { 
			if (i % 2 == 0) { cout << i << ", "; }
		
	}
	if (b % 2 == 0) { cout <<b<< ". "; }
}
