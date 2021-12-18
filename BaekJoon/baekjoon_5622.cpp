#include <iostream>
#include <string>
using namespace std;

int main() {
	string S;
	cin >> S;
	int n = 0;
	for (int i = 0; i < S.size(); i++) {
		if (S[i] == 'A' || S[i] == 'B' || S[i] == 'C') n = n + 3;
		else if (S[i] == 'D' || S[i] == 'E' || S[i] == 'F') n = n + 4;
		else if (S[i] == 'G' || S[i] == 'H' || S[i] == 'I') n = n + 5;
		else if (S[i] == 'J' || S[i] == 'K' || S[i] == 'L') n = n + 6;
		else if (S[i] == 'M' || S[i] == 'N' || S[i] == 'O') n = n + 7;
		else if (S[i] == 'P' || S[i] == 'Q' || S[i] == 'R' || S[i] == 'S') n = n + 8;
		else if (S[i] == 'T' || S[i] == 'U' || S[i] == 'V') n = n + 9;
		else if (S[i] == 'W' || S[i] == 'X' || S[i] == 'Y' || S[i] == 'Z') n = n + 10;
	}

	cout << n << endl;
	return 0;
}