#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main() {
	cin.tie(0);
	int N;
	cin >> N;
	stack<int> s;

	while (N > 0) {
		string n;
		cin >> n;
		if (n == "push") {
			int a;
			cin >> a;
			s.push(a);
			N--;
			continue;
		}
		else if (n == "pop") {
			if (!s.empty()) {
				cout << s.top() << '\n';
				s.pop();
				N--;
				continue;
			}
			else {
				cout << -1 << '\n';
				N--;
				continue;
			}
		}
		else if (n == "size") {
			cout << s.size() << '\n';
			N--;
			continue;
		}
		else if (n == "empty") {
			if (s.empty())
				cout << 1 << '\n';
			else
				cout << 0 << '\n';
			N--;
			continue;
		}
		else if (n == "top") {
			if (!s.empty()) {
				if (s.empty())
					cout << -1 << '\n';
				else
					cout << s.top() << '\n';
				N--;
				continue;
			}
			else {
				cout << -1 << '\n';
				N--;
				continue;
			}
		}
	}

	return 0;
}