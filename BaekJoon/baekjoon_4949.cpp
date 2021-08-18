#include <iostream>
#include <stack>
#include <string>
using namespace std;

int main() {
	stack<char> s;
	while (1) {
		string n;
		getline(cin, n);
		if (n.at(0) == '.' && n.size() == 1)
			break;
		
		int a = 0;
		for (int i = 0; i < n.size(); i++) {
			if (n.at(i) == '[' || n.at(i) == '(')
				s.push(n.at(i));
			else if (n.at(i) == ']') {
				if (s.empty() || s.top() != '[') {
					a++;
					break;
				}
				s.pop();
			}
			else if (n.at(i) == ')') {
				if (s.empty() || s.top() != '(') {
					a++;
					break;
				}
				s.pop();
			}
		}

		if (s.empty() && a == 0)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';

		while (!s.empty())
			s.pop();
		a = 0;
	}

	return 0;
}