
#include <iostream>
using namespace std;

void move(int num, char from, char to, char buff) {

	if (num != 0) {
		move(num - 1, from, buff, to);
		cout << from << "->" << to << endl;
		move(num - 1, buff, to, from);
	}
}

int main() {
	int num;
	cin >> num;
	move(num, '1', '2', '3');
}