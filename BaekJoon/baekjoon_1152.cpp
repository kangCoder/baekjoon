#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	getline(cin, S);
	int n = 0;
	for (int i = 1; i < S.size() - 1; i++) {
		if (S[i] == ' ') n++;
	}
	if (S == " ") {
		cout << 0 << endl;
	}
	else {
		cout << n + 1 << endl;
	}
	return 0;
}