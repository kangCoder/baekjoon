#include <iostream>
using namespace std;

int main() {
	int X;
	cin >> X;
	int sum = 0, num = 1;
	while (1) {
		sum += num;
		if (X > sum) num++;
		else 
			break;
	}
	int a = (num + 1) - (sum - X + 1);
	if (num % 2 == 0) {
		cout << a << "/" << (num + 1) - a << endl;
	}
	else {
		cout << (num + 1) - a << "/" << a << endl;
	}
	return 0;
}