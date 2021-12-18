#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool comp(pair<char, int> a, pair<char, int> b) {
	return a.second > b.second;
}
int main() {
	string S;
	vector<pair<char, int>> V;
	cin >> S;
	if (S[0] >= 'a' && S[0] <= 'z') S[0] = S[0] - 'a' + 'A';
	V.push_back(make_pair(S[0], 1));

	for (int i = 1; i < S.size(); i++) {
		bool newcheck = true;
		for (int j = 0; j < V.size(); j++) {
			if (S[i] >= 'a' && S[i] <= 'z')
				S[i] = S[i] - 'a' + 'A';

			if (V[j].first == S[i]) {
				V[j].second++;
				newcheck = false;
				break;
			}
		}
		if (newcheck) {
			V.push_back(make_pair(S[i], 1));
		}
	}

	if (V.size() >= 2) {
		sort(V.begin(), V.end(), comp);
		if (V.at(0).second == V.at(1).second) {
			cout << "?" << endl;
		}
		else {
			cout << V.at(0).first << endl;
		}
	}
	else {
		cout << V.at(0).first << endl;
	}

	return 0;
}