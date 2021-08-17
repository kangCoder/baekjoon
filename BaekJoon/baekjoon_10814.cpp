#include <iostream>
#include <algorithm>
#include <utility>
#include <vector>
using namespace std;

bool compare(const pair<int, string>& a, const pair<int, string>& b) {
	return a.first < b.first;
}

int main() {
	int N;
	cin >> N;
	int age; string name;
	vector<pair<int, string>> v;

	for (int i = 0; i < N; i++) {
		cin >> age >> name;
		v.push_back(pair<int, string>(age, name));
	}

	stable_sort(v.begin(), v.end(), compare);
	
	for (int i = 0; i < N; i++) {
		cout << v[i].first << " " << v[i].second << '\n';
	}
	return 0;
}