#include <iostream>
#include <string>
using namespace std;

int main() {
	int T;
	cin >> T;
	for (int i = 1; i <= T; i++) {
		int R;
		string S;
		cin >> R >> S;

		for (int j = 0; j < S.size(); j++) {
			for (int k = 1; k <= R; k++) {
				cout << S.at(j);
			}
		}
		cout << endl;
	}
	return 0;
}