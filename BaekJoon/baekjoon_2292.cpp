#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	if (N == 1) {
		cout << N << endl;
	}
	else {
		int layer = 0;
		for (int i = 2; i <= N; layer++) {
			i += 6 * layer;
		}
		cout << layer << endl;
	}
	return 0;
}