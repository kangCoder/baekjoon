#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main() {
	string S;
	vector<string> C = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	cin >> S;
	for (int i = 0; i < C.size(); i++) {
		while (1) {
			int a = S.find(C[i]);
			if (a == string::npos) break;
			S.replace(a, C[i].length(), "@");
		}
	}

	cout << S.size() << endl;
	return 0;
}

// c=, c-, dz=, d-, lj, nj, s=, z=