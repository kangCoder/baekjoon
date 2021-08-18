#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	int T, a = 0;
	cin >> T;
	stack<char> s;

	while (T--) {
		string n;
		cin >> n;
		for (int i = 0; i < n.size(); i++) {
			if (n.at(i) == '(')
				s.push(n.at(i));
			else if (n.at(i) == ')') {
				if (!s.empty())
					s.pop();
				else if (s.empty())
					a++;
			}
		}
		if (s.empty() && a == 0)
			cout << "YES" << '\n';
		else 
			cout << "NO" << '\n';
		
		while (!s.empty())
			s.pop();
		a = 0;
	}

	return 0;
}