#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int count[10] = { 0 };

	while (N != 0) {
		count[N % 10]++;
		N /= 10;
	}

	for (int i = 9; i >= 0; i--) {
		if (count[i] > 0) {
			for (int j = 0; j < count[i]; j++)
				cout << i;
		}
	}
	cout << endl;
	return 0;
}