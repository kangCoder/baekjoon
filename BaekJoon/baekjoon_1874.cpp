#include <iostream>
#include <stack>
#include <vector>
using namespace std;

int main() {
	int n;
	cin >> n;
	stack<int> s;
	vector<char> v;
	vector<int> k;

	for (int i = 0; i < n; i++) {
		int a;
		cin >> a;
		k.push_back(a);
	}

	int max = 0;
	int i = 0;
	while (i < n) {
		if (k.at(i) > max) {
			for (int j = max + 1; j <= k.at(i); j++) {
				s.push(j);
				v.push_back('+');
			}
			max = s.top();
			s.pop();
			v.push_back('-');
			i++;
		}
		else if (k.at(i) == max) {
			if (!s.empty()) {
				s.pop();
				v.push_back('-');
				i++;
			}
		}
		else if (k.at(i) < max) {
			if (k.at(i) != s.top()) {
				cout << "NO" << '\n';
				return 0;
			}
			else {
				s.pop();
				v.push_back('-');
				i++;
			}
		}
	}

	for (int i = 0; i < v.size(); i++)
		cout << v.at(i) << '\n';

	return 0;
}