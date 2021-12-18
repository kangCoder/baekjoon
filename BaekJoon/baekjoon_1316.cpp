#include <iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int n = 0;
	for (int i = 1; i <= N; i++) {
		string S;
		cin >> S;
		bool check = true;
		if (S.size() == 1) {
			n++;
		}
		else {
			for (int j = 0; j < S.size() - 1; j++) {
				if (S[j] != S[j + 1]) {
					for (int k = j + 1; k < S.size(); k++) {
						if (S[j] == S[k]) {
							check = false;
							break;
						}
					}
				}
			}
			if (check) n++;
		}
	}
	cout << n << endl;
	return 0;
}